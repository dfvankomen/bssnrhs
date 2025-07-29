#include "derivs.h"

#include <cmath>
#include <iostream>

// #define DEBUG_DERIVS_COMP

void ko_deriv42_x(double *const Du, const double *const u, const double dx,
                  const unsigned int *sz, unsigned bflag) {
    double pre_factor_6_dx = -1.0 / 64.0 / dx;

    double smr3            = 59.0 / 48.0 * 64 * dx;
    double smr2            = 43.0 / 48.0 * 64 * dx;
    double smr1            = 49.0 / 48.0 * 64 * dx;
    double spr3            = smr3;
    double spr2            = smr2;
    double spr1            = smr1;

    const int nx           = sz[0];
    const int ny           = sz[1];
    const int nz           = sz[2];

    const int ib           = 3;
    const int jb           = 3;
    const int kb           = 3;
    const int ie           = sz[0] - 3;
    const int je           = sz[1] - 3;
    const int ke           = sz[2] - 3;

    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                Du[pp]       = pre_factor_6_dx *
                         (-u[pp - 3] + 6.0 * u[pp - 2] - 15.0 * u[pp - 1] +
                          20.0 * u[pp] - 15.0 * u[pp + 1] + 6.0 * u[pp + 2] -
                          u[pp + 3]);
            }
        }
    }

    if (bflag & (1u << OCT_DIR_LEFT)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int j = jb; j < je; j++) {
                Du[IDX(3, j, k)] = (u[IDX(6, j, k)] - 3.0 * u[IDX(5, j, k)] +
                                    3.0 * u[IDX(4, j, k)] - u[IDX(3, j, k)]) /
                                   smr3;
                Du[IDX(4, j, k)] =
                    (u[IDX(7, j, k)] - 6.0 * u[IDX(6, j, k)] +
                     12.0 * u[IDX(5, j, k)] - 10.0 * u[IDX(4, j, k)] +
                     3.0 * u[IDX(3, j, k)]) /
                    smr2;
                Du[IDX(5, j, k)] =
                    (u[IDX(8, j, k)] - 6.0 * u[IDX(7, j, k)] +
                     15.0 * u[IDX(6, j, k)] - 19.0 * u[IDX(5, j, k)] +
                     12.0 * u[IDX(4, j, k)] - 3.0 * u[IDX(3, j, k)]) /
                    smr1;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_RIGHT)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int j = jb; j < je; j++) {
                Du[IDX(ie - 3, j, k)] =
                    (u[IDX(ie - 6, j, k)] - 6.0 * u[IDX(ie - 5, j, k)] +
                     15.0 * u[IDX(ie - 4, j, k)] - 19.0 * u[IDX(ie - 3, j, k)] +
                     12.0 * u[IDX(ie - 2, j, k)] - 3.0 * u[IDX(ie - 1, j, k)]) /
                    spr1;

                Du[IDX(ie - 2, j, k)] =
                    (u[IDX(ie - 5, j, k)] - 6.0 * u[IDX(ie - 4, j, k)] +
                     12.0 * u[IDX(ie - 3, j, k)] - 10.0 * u[IDX(ie - 2, j, k)] +
                     3.0 * u[IDX(ie - 1, j, k)]) /
                    spr2;

                Du[IDX(ie - 1, j, k)] =
                    (u[IDX(ie - 4, j, k)] - 3.0 * u[IDX(ie - 3, j, k)] +
                     3.0 * u[IDX(ie - 2, j, k)] - u[IDX(ie - 1, j, k)]) /
                    spr3;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(Du[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(Du[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------
 *
 *
 *
 *----------------------------------------------------------------------*/
void ko_deriv42_y(double *const Du, const double *const u, const double dy,
                  const unsigned int *sz, unsigned bflag) {
    double pre_factor_6_dy = -1.0 / 64.0 / dy;

    double smr3            = 59.0 / 48.0 * 64 * dy;
    double smr2            = 43.0 / 48.0 * 64 * dy;
    double smr1            = 49.0 / 48.0 * 64 * dy;
    double spr3            = smr3;
    double spr2            = smr2;
    double spr1            = smr1;

    const int nx           = sz[0];
    const int ny           = sz[1];
    const int nz           = sz[2];

    const int ib           = 3;
    const int jb           = 3;
    const int kb           = 3;
    const int ie           = sz[0] - 3;
    const int je           = sz[1] - 3;
    const int ke           = sz[2] - 3;

    for (int k = kb; k < ke; k++) {
        for (int i = ib; i < ie; i++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int j = jb; j < je; j++) {
                const int pp = IDX(i, j, k);
                Du[pp]       = pre_factor_6_dy *
                         (-u[pp - 3 * nx] + 6.0 * u[pp - 2 * nx] -
                          15.0 * u[pp - nx] + 20.0 * u[pp] - 15.0 * u[pp + nx] +
                          6.0 * u[pp + 2 * nx] - u[pp + 3 * nx]);
            }
        }
    }

    if (bflag & (1u << OCT_DIR_DOWN)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Du[IDX(i, 3, k)] = (u[IDX(i, 6, k)] - 3.0 * u[IDX(i, 5, k)] +
                                    3.0 * u[IDX(i, 4, k)] - u[IDX(i, 3, k)]) /
                                   smr3;
                Du[IDX(i, 4, k)] =
                    (u[IDX(i, 7, k)] - 6.0 * u[IDX(i, 6, k)] +
                     12.0 * u[IDX(i, 5, k)] - 10.0 * u[IDX(i, 4, k)] +
                     3.0 * u[IDX(i, 3, k)]) /
                    smr2;
                Du[IDX(i, 5, k)] =
                    (u[IDX(i, 8, k)] - 6.0 * u[IDX(i, 7, k)] +
                     15.0 * u[IDX(i, 6, k)] - 19.0 * u[IDX(i, 5, k)] +
                     12.0 * u[IDX(i, 4, k)] - 3.0 * u[IDX(i, 3, k)]) /
                    smr1;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_UP)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Du[IDX(i, je - 3, k)] =
                    (u[IDX(i, je - 6, k)] - 6.0 * u[IDX(i, je - 5, k)] +
                     15.0 * u[IDX(i, je - 4, k)] - 19.0 * u[IDX(i, je - 3, k)] +
                     12.0 * u[IDX(i, je - 2, k)] - 3.0 * u[IDX(i, je - 1, k)]) /
                    spr1;

                Du[IDX(i, je - 2, k)] =
                    (u[IDX(i, je - 5, k)] - 6.0 * u[IDX(i, je - 4, k)] +
                     12.0 * u[IDX(i, je - 3, k)] - 10.0 * u[IDX(i, je - 2, k)] +
                     3.0 * u[IDX(i, je - 1, k)]) /
                    spr2;

                Du[IDX(i, je - 1, k)] =
                    (u[IDX(i, je - 4, k)] - 3.0 * u[IDX(i, je - 3, k)] +
                     3.0 * u[IDX(i, je - 2, k)] - u[IDX(i, je - 1, k)]) /
                    spr3;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(Du[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(Du[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------
 *
 *
 *
 *----------------------------------------------------------------------*/
void ko_deriv42_z(double *const Du, const double *const u, const double dz,
                  const unsigned int *sz, unsigned bflag) {
    double pre_factor_6_dz = -1.0 / 64.0 / dz;

    double smr3            = 59.0 / 48.0 * 64 * dz;
    double smr2            = 43.0 / 48.0 * 64 * dz;
    double smr1            = 49.0 / 48.0 * 64 * dz;
    double spr3            = smr3;
    double spr2            = smr2;
    double spr1            = smr1;

    const int nx           = sz[0];
    const int ny           = sz[1];
    const int nz           = sz[2];

    const int ib           = 3;
    const int jb           = 3;
    const int kb           = 3;
    const int ie           = sz[0] - 3;
    const int je           = sz[1] - 3;
    const int ke           = sz[2] - 3;

    const int n            = nx * ny;

    for (int j = jb; j < je; j++) {
        for (int i = ib; i < ie; i++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int k = kb; k < ke; k++) {
                const int pp = IDX(i, j, k);
                Du[pp]       = pre_factor_6_dz *
                         (-u[pp - 3 * n] + 6.0 * u[pp - 2 * n] -
                          15.0 * u[pp - n] + 20.0 * u[pp] - 15.0 * u[pp + n] +
                          6.0 * u[pp + 2 * n] - u[pp + 3 * n]);
            }
        }
    }

    if (bflag & (1u << OCT_DIR_BACK)) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Du[IDX(i, j, 3)] = (u[IDX(i, j, 6)] - 3.0 * u[IDX(i, j, 5)] +
                                    3.0 * u[IDX(i, j, 4)] - u[IDX(i, j, 3)]) /
                                   smr3;
                Du[IDX(i, j, 4)] =
                    (u[IDX(i, j, 7)] - 6.0 * u[IDX(i, j, 6)] +
                     12.0 * u[IDX(i, j, 5)] - 10.0 * u[IDX(i, j, 4)] +
                     3.0 * u[IDX(i, j, 3)]) /
                    smr2;
                Du[IDX(i, j, 5)] =
                    (u[IDX(i, j, 8)] - 6.0 * u[IDX(i, j, 7)] +
                     15.0 * u[IDX(i, j, 6)] - 19.0 * u[IDX(i, j, 5)] +
                     12.0 * u[IDX(i, j, 4)] - 3.0 * u[IDX(i, j, 3)]) /
                    smr1;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_FRONT)) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Du[IDX(i, j, ke - 3)] =
                    (u[IDX(i, j, ke - 6)] - 6.0 * u[IDX(i, j, ke - 5)] +
                     15.0 * u[IDX(i, j, ke - 4)] - 19.0 * u[IDX(i, j, ke - 3)] +
                     12.0 * u[IDX(i, j, ke - 2)] - 3.0 * u[IDX(i, j, ke - 1)]) /
                    spr1;

                Du[IDX(i, j, ke - 2)] =
                    (u[IDX(i, j, ke - 5)] - 6.0 * u[IDX(i, j, ke - 4)] +
                     12.0 * u[IDX(i, j, ke - 3)] - 10.0 * u[IDX(i, j, ke - 2)] +
                     3.0 * u[IDX(i, j, ke - 1)]) /
                    spr2;

                Du[IDX(i, j, ke - 1)] =
                    (u[IDX(i, j, ke - 4)] - 3.0 * u[IDX(i, j, ke - 3)] +
                     3.0 * u[IDX(i, j, ke - 2)] - u[IDX(i, j, ke - 1)]) /
                    spr3;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(Du[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(Du[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------;
 *
 *
 *
 *----------------------------------------------------------------------*/
void deriv644_x(double *const Dxu, const double *const u, const double dx,
                const unsigned int *sz, unsigned bflag) {
    const double idx       = 1.0 / dx;
    const double idx_by_12 = idx / 12.0;
    const double idx_by_60 = idx / 60.0;

    const int nx           = sz[0];
    const int ny           = sz[1];
    const int nz           = sz[2];
    const int ib           = 3;
    const int jb           = 0;
    const int kb           = 0;
    const int ie           = sz[0] - 3;
    const int je           = sz[1] - 0;
    const int ke           = sz[2] - 0;

    const int n            = 1;

    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                Dxu[pp] = (-u[pp - 3] + 9.0 * u[pp - 2] - 45.0 * u[pp - 1] +
                           45.0 * u[pp + 1] - 9.0 * u[pp + 2] + u[pp + 3]) *
                          idx_by_60;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_LEFT)) {
        for (int k = kb; k < ke; k++) {
            for (int j = jb; j < je; j++) {
                Dxu[IDX(3, j, k)] =
                    (-25.0 * u[IDX(3, j, k)] + 48.0 * u[IDX(4, j, k)] -
                     36.0 * u[IDX(5, j, k)] + 16.0 * u[IDX(6, j, k)] -
                     3.0 * u[IDX(7, j, k)]) *
                    idx_by_12;

                Dxu[IDX(4, j, k)] =
                    (-3.0 * u[IDX(3, j, k)] - 10.0 * u[IDX(4, j, k)] +
                     18.0 * u[IDX(5, j, k)] - 6.0 * u[IDX(6, j, k)] +
                     u[IDX(7, j, k)]) *
                    idx_by_12;

                Dxu[IDX(5, j, k)] = (+u[IDX(3, j, k)] - 8.0 * u[IDX(4, j, k)] +
                                     8.0 * u[IDX(6, j, k)] - u[IDX(7, j, k)]) *
                                    idx_by_12;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_RIGHT)) {
        for (int k = kb; k < ke; k++) {
            for (int j = jb; j < je; j++) {
                Dxu[IDX(ie - 3, j, k)] =
                    (+u[IDX(ie - 5, j, k)] - 8.0 * u[IDX(ie - 4, j, k)] +
                     8.0 * u[IDX(ie - 2, j, k)] - u[IDX(ie - 1, j, k)]) *
                    idx_by_12;

                Dxu[IDX(ie - 2, j, k)] =
                    (-u[IDX(ie - 5, j, k)] + 6.0 * u[IDX(ie - 4, j, k)] -
                     18.0 * u[IDX(ie - 3, j, k)] + 10.0 * u[IDX(ie - 2, j, k)] +
                     3.0 * u[IDX(ie - 1, j, k)]) *
                    idx_by_12;

                Dxu[IDX(ie - 1, j, k)] =
                    (3.0 * u[IDX(ie - 5, j, k)] - 16.0 * u[IDX(ie - 4, j, k)] +
                     36.0 * u[IDX(ie - 3, j, k)] - 48.0 * u[IDX(ie - 2, j, k)] +
                     25.0 * u[IDX(ie - 1, j, k)]) *
                    idx_by_12;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(Dxu[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(Dxu[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------;
 *
 *
 *
 *----------------------------------------------------------------------*/
void deriv644_y(double *const Dyu, const double *const u, const double dy,
                const unsigned int *sz, unsigned bflag) {
    const double idy       = 1.0 / dy;
    const double idy_by_12 = idy / 12.0;
    const double idy_by_60 = idy / 60.0;

    const int nx           = sz[0];
    const int ny           = sz[1];
    const int nz           = sz[2];
    const int ib           = 3;
    const int jb           = 3;
    const int kb           = 0;
    const int ie           = sz[0] - 3;
    const int je           = sz[1] - 3;
    const int ke           = sz[2] - 0;

    const int n            = nx;

    for (int k = kb; k < ke; k++) {
        for (int i = ib; i < ie; i++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int j = jb; j < je; j++) {
                const int pp = IDX(i, j, k);
                Dyu[pp]      = (-u[pp - 3 * nx] + 9.0 * u[pp - 2 * nx] -
                           45.0 * u[pp - nx] + 45.0 * u[pp + nx] -
                           9.0 * u[pp + 2 * nx] + u[pp + 3 * nx]) *
                          idy_by_60;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_DOWN)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Dyu[IDX(i, 3, k)] =
                    (-25.0 * u[IDX(i, 3, k)] + 48.0 * u[IDX(i, 4, k)] -
                     36.0 * u[IDX(i, 5, k)] + 16.0 * u[IDX(i, 6, k)] -
                     3.0 * u[IDX(i, 7, k)]) *
                    idy_by_12;

                Dyu[IDX(i, 4, k)] =
                    (-3.0 * u[IDX(i, 3, k)] - 10.0 * u[IDX(i, 4, k)] +
                     18.0 * u[IDX(i, 5, k)] - 6.0 * u[IDX(i, 6, k)] +
                     u[IDX(i, 7, k)]) *
                    idy_by_12;

                Dyu[IDX(i, 5, k)] = (u[IDX(i, 3, k)] - 8.0 * u[IDX(i, 4, k)] +
                                     8.0 * u[IDX(i, 6, k)] - u[IDX(i, 7, k)]) *
                                    idy_by_12;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_UP)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Dyu[IDX(i, je - 3, k)] =
                    (u[IDX(i, je - 5, k)] - 8.0 * u[IDX(i, je - 4, k)] +
                     8.0 * u[IDX(i, je - 2, k)] - u[IDX(i, je - 1, k)]) *
                    idy_by_12;

                Dyu[IDX(i, je - 2, k)] =
                    (-u[IDX(i, je - 5, k)] + 6.0 * u[IDX(i, je - 4, k)] -
                     18.0 * u[IDX(i, je - 3, k)] + 10.0 * u[IDX(i, je - 2, k)] +
                     3.0 * u[IDX(i, je - 1, k)]) *
                    idy_by_12;

                Dyu[IDX(i, je - 1, k)] =
                    (+3.0 * u[IDX(i, je - 5, k)] - 16.0 * u[IDX(i, je - 4, k)] +
                     36.0 * u[IDX(i, je - 3, k)] - 48.0 * u[IDX(i, je - 2, k)] +
                     25.0 * u[IDX(i, je - 1, k)]) *
                    idy_by_12;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(Dyu[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(Dyu[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------;
 *
 *
 *
 *----------------------------------------------------------------------*/
void deriv644_z(double *const Dzu, const double *const u, const double dz,
                const unsigned int *sz, unsigned bflag) {
    const double idz       = 1.0 / dz;
    const double idz_by_12 = idz / 12.0;
    const double idz_by_60 = idz / 60.0;

    const int nx           = sz[0];
    const int ny           = sz[1];
    const int nz           = sz[2];
    const int ib           = 3;
    const int jb           = 3;
    const int kb           = 3;
    const int ie           = sz[0] - 3;
    const int je           = sz[1] - 3;
    const int ke           = sz[2] - 3;

    const int n            = nx * ny;

    for (int j = jb; j < je; j++) {
        for (int i = ib; i < ie; i++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int k = kb; k < ke; k++) {
                const int pp = IDX(i, j, k);
                Dzu[pp] =
                    (-u[pp - 3 * n] + 9.0 * u[pp - 2 * n] - 45.0 * u[pp - n] +
                     45.0 * u[pp + n] - 9.0 * u[pp + 2 * n] + u[pp + 3 * n]) *
                    idz_by_60;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_BACK)) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Dzu[IDX(i, j, 3)] =
                    (-25.0 * u[IDX(i, j, 3)] + 48.0 * u[IDX(i, j, 4)] -
                     36.0 * u[IDX(i, j, 5)] + 16.0 * u[IDX(i, j, 6)] -
                     3.0 * u[IDX(i, j, 7)]) *
                    idz_by_12;

                Dzu[IDX(i, j, 4)] =
                    (-3.0 * u[IDX(i, j, 3)] - 10.0 * u[IDX(i, j, 4)] +
                     18.0 * u[IDX(i, j, 5)] - 6.0 * u[IDX(i, j, 6)] +
                     u[IDX(i, j, 7)]) *
                    idz_by_12;

                Dzu[IDX(i, j, 5)] = (u[IDX(i, j, 3)] - 8.0 * u[IDX(i, j, 4)] +
                                     8.0 * u[IDX(i, j, 6)] - u[IDX(i, j, 7)]) *
                                    idz_by_12;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_FRONT)) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                Dzu[IDX(i, j, ke - 3)] =
                    (u[IDX(i, j, ke - 5)] - 8.0 * u[IDX(i, j, ke - 4)] +
                     8.0 * u[IDX(i, j, ke - 2)] - u[IDX(i, j, ke - 1)]) *
                    idz_by_12;

                Dzu[IDX(i, j, ke - 2)] =
                    (-u[IDX(i, j, ke - 5)] + 6.0 * u[IDX(i, j, ke - 4)] -
                     18.0 * u[IDX(i, j, ke - 3)] + 10.0 * u[IDX(i, j, ke - 2)] +
                     3.0 * u[IDX(i, j, ke - 1)]) *
                    idz_by_12;

                Dzu[IDX(i, j, ke - 1)] =
                    (3.0 * u[IDX(i, j, ke - 5)] - 16.0 * u[IDX(i, j, ke - 4)] +
                     36.0 * u[IDX(i, j, ke - 3)] - 48.0 * u[IDX(i, j, ke - 2)] +
                     25.0 * u[IDX(i, j, ke - 1)]) *
                    idz_by_12;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(Dzu[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(Dzu[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------;
 *
 *
 *
 *----------------------------------------------------------------------*/
void deriv644_xx(double *const DxDxu, const double *const u, const double dx,
                 const unsigned int *sz, unsigned bflag) {
    const double idx_sqrd        = 1.0 / (dx * dx);
    const double idx_sqrd_by_180 = idx_sqrd / 180.0;
    const double idx_sqrd_by_12  = idx_sqrd / 12.0;

    const int nx                 = sz[0];
    const int ny                 = sz[1];
    const int nz                 = sz[2];
    const int ib                 = 3;
    const int jb                 = 3;
    const int kb                 = 3;
    const int ie                 = sz[0] - 3;
    const int je                 = sz[1] - 3;
    const int ke                 = sz[2] - 3;

    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);

                DxDxu[pp] =
                    (2.0 * u[pp - 3] - 27.0 * u[pp - 2] + 270.0 * u[pp - 1] -
                     490.0 * u[pp] + 270.0 * u[pp + 1] - 27.0 * u[pp + 2] +
                     2.0 * u[pp + 3]) *
                    idx_sqrd_by_180;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_LEFT)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int j = jb; j < je; j++) {
                // The above two should be replaced by 4th order approximations:
                DxDxu[IDX(3, j, k)] =
                    (45.0 * u[IDX(3, j, k)] - 154.0 * u[IDX(4, j, k)] +
                     214.0 * u[IDX(5, j, k)] - 156.0 * u[IDX(6, j, k)] +
                     61.0 * u[IDX(7, j, k)] - 10.0 * u[IDX(8, j, k)]) *
                    idx_sqrd_by_12;

                DxDxu[IDX(4, j, k)] =
                    (10.0 * u[IDX(3, j, k)] - 15.0 * u[IDX(4, j, k)] -
                     4.0 * u[IDX(5, j, k)] + 14.0 * u[IDX(6, j, k)] -
                     6.0 * u[IDX(7, j, k)] + u[IDX(8, j, k)]) *
                    idx_sqrd_by_12;

                DxDxu[IDX(5, j, k)] =
                    (-u[IDX(3, j, k)] + 16.0 * u[IDX(4, j, k)] -
                     30.0 * u[IDX(5, j, k)] + 16.0 * u[IDX(6, j, k)] -
                     u[IDX(7, j, k)]) *
                    idx_sqrd_by_12;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_RIGHT)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int j = jb; j < je; j++) {
                DxDxu[IDX(ie - 3, j, k)] =
                    (-u[IDX(ie - 5, j, k)] + 16.0 * u[IDX(ie - 4, j, k)] -
                     30.0 * u[IDX(ie - 3, j, k)] + 16.0 * u[IDX(ie - 2, j, k)] -
                     u[IDX(ie - 1, j, k)]) *
                    idx_sqrd_by_12;

                // The above two should be replaced by 4th order approximations:
                DxDxu[IDX(ie - 2, j, k)] =
                    (u[IDX(ie - 6, j, k)] - 6.0 * u[IDX(ie - 5, j, k)] +
                     14.0 * u[IDX(ie - 4, j, k)] - 4.0 * u[IDX(ie - 3, j, k)] -
                     15.0 * u[IDX(ie - 2, j, k)] +
                     10.0 * u[IDX(ie - 1, j, k)]) *
                    idx_sqrd_by_12;

                DxDxu[IDX(ie - 1, j, k)] = (-10.0 * u[IDX(ie - 6, j, k)] +
                                            61.0 * u[IDX(ie - 5, j, k)] -
                                            156.0 * u[IDX(ie - 4, j, k)] +
                                            214.0 * u[IDX(ie - 3, j, k)] -
                                            154.0 * u[IDX(ie - 2, j, k)] +
                                            45.0 * u[IDX(ie - 1, j, k)]) *
                                           idx_sqrd_by_12;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(DxDxu[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(DxDxu[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------;
 *
 *
 *
 *----------------------------------------------------------------------*/
void deriv644_yy(double *const DyDyu, const double *const u, const double dy,
                 const unsigned int *sz, unsigned bflag) {
    const double idy_sqrd        = 1.0 / (dy * dy);
    const double idy_sqrd_by_180 = idy_sqrd / 180.0;
    const double idy_sqrd_by_12  = idy_sqrd / 12.0;

    const int nx                 = sz[0];
    const int ny                 = sz[1];
    const int nz                 = sz[2];
    const int ib                 = 3;
    const int jb                 = 3;
    const int kb                 = 3;
    const int ie                 = sz[0] - 3;
    const int je                 = sz[1] - 3;
    const int ke                 = sz[2] - 3;

    for (int k = kb; k < ke; k++) {
        for (int i = ib; i < ie; i++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int j = jb; j < je; j++) {
                const int pp = IDX(i, j, k);
                DyDyu[pp] =
                    (2.0 * u[pp - 3 * nx] - 27.0 * u[pp - 2 * nx] +
                     270.0 * u[pp - nx] - 490.0 * u[pp] + 270.0 * u[pp + nx] -
                     27.0 * u[pp + 2 * nx] + 2.0 * u[pp + 3 * nx]) *
                    idy_sqrd_by_180;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_DOWN)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                // The above two should be replaced by 4th order approximations:
                DyDyu[IDX(i, 3, k)] =
                    (45.0 * u[IDX(i, 3, k)] - 154.0 * u[IDX(i, 4, k)] +
                     214.0 * u[IDX(i, 5, k)] - 156.0 * u[IDX(i, 6, k)] +
                     61.0 * u[IDX(i, 7, k)] - 10.0 * u[IDX(i, 8, k)]) *
                    idy_sqrd_by_12;

                DyDyu[IDX(i, 4, k)] =
                    (10.0 * u[IDX(i, 3, k)] - 15.0 * u[IDX(i, 4, k)] -
                     4.0 * u[IDX(i, 5, k)] + 14.0 * u[IDX(i, 6, k)] -
                     6.0 * u[IDX(i, 7, k)] + u[IDX(i, 8, k)]) *
                    idy_sqrd_by_12;

                DyDyu[IDX(i, 5, k)] =
                    (-u[IDX(i, 3, k)] + 16.0 * u[IDX(i, 4, k)] -
                     30.0 * u[IDX(i, 5, k)] + 16.0 * u[IDX(i, 6, k)] -
                     u[IDX(i, 7, k)]) *
                    idy_sqrd_by_12;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_UP)) {
        for (int k = kb; k < ke; k++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                DyDyu[IDX(i, je - 3, k)] =
                    (-u[IDX(i, je - 5, k)] + 16.0 * u[IDX(i, je - 4, k)] -
                     30.0 * u[IDX(i, je - 3, k)] + 16.0 * u[IDX(i, je - 2, k)] -
                     u[IDX(i, je - 1, k)]) *
                    idy_sqrd_by_12;

                // The above two should be replaced by 4th order approximations:
                DyDyu[IDX(i, je - 2, k)] =
                    (u[IDX(i, je - 6, k)] - 6.0 * u[IDX(i, je - 5, k)] +
                     14.0 * u[IDX(i, je - 4, k)] - 4.0 * u[IDX(i, je - 3, k)] -
                     15.0 * u[IDX(i, je - 2, k)] +
                     10.0 * u[IDX(i, je - 1, k)]) *
                    idy_sqrd_by_12;

                DyDyu[IDX(i, je - 1, k)] = (-10.0 * u[IDX(i, je - 6, k)] +
                                            61.0 * u[IDX(i, je - 5, k)] -
                                            156.0 * u[IDX(i, je - 4, k)] +
                                            214.0 * u[IDX(i, je - 3, k)] -
                                            154.0 * u[IDX(i, je - 2, k)] +
                                            45.0 * u[IDX(i, je - 1, k)]) *
                                           idy_sqrd_by_12;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(DyDyu[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(DyDyu[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}

/*----------------------------------------------------------------------;
 *
 *
 *
 *----------------------------------------------------------------------*/
void deriv644_zz(double *const DzDzu, const double *const u, const double dz,
                 const unsigned int *sz, unsigned bflag) {
    const double idz_sqrd        = 1.0 / (dz * dz);
    const double idz_sqrd_by_180 = idz_sqrd / 180.0;
    const double idz_sqrd_by_12  = idz_sqrd / 12.0;

    const int nx                 = sz[0];
    const int ny                 = sz[1];
    const int nz                 = sz[2];
    const int ib                 = 3;
    const int jb                 = 3;
    const int kb                 = 3;
    const int ie                 = sz[0] - 3;
    const int je                 = sz[1] - 3;
    const int ke                 = sz[2] - 3;

    const int n                  = nx * ny;

    for (int j = jb; j < je; j++) {
        for (int i = ib; i < ie; i++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int k = kb; k < ke; k++) {
                const int pp = IDX(i, j, k);
                DzDzu[pp] =
                    (2.0 * u[pp - 3 * n] - 27.0 * u[pp - 2 * n] +
                     270.0 * u[pp - n] - 490.0 * u[pp] + 270.0 * u[pp + n] -
                     27.0 * u[pp + 2 * n] + 2.0 * u[pp + 3 * n]) *
                    idz_sqrd_by_180;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_BACK)) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                // The above two should be replaced by 4th order approximations:
                DzDzu[IDX(i, j, 3)] =
                    (45.0 * u[IDX(i, j, 3)] - 154.0 * u[IDX(i, j, 4)] +
                     214.0 * u[IDX(i, j, 5)] - 156.0 * u[IDX(i, j, 6)] +
                     61.0 * u[IDX(i, j, 7)] - 10.0 * u[IDX(i, j, 8)]) *
                    idz_sqrd_by_12;

                DzDzu[IDX(i, j, 4)] =
                    (10.0 * u[IDX(i, j, 3)] - 15.0 * u[IDX(i, j, 4)] -
                     4.0 * u[IDX(i, j, 5)] + 14.0 * u[IDX(i, j, 6)] -
                     6.0 * u[IDX(i, j, 7)] + u[IDX(i, j, 8)]) *
                    idz_sqrd_by_12;

                DzDzu[IDX(i, j, 5)] =
                    (-u[IDX(i, j, 3)] + 16.0 * u[IDX(i, j, 4)] -
                     30.0 * u[IDX(i, j, 5)] + 16.0 * u[IDX(i, j, 6)] -
                     u[IDX(i, j, 7)]) *
                    idz_sqrd_by_12;
            }
        }
    }

    if (bflag & (1u << OCT_DIR_FRONT)) {
        for (int j = jb; j < je; j++) {
#ifdef DERIV_ENABLE_AVX
#ifdef __INTEL_COMPILER
#pragma vector vectorlength(__DERIV_AVX_SIMD_LEN__) vecremainder
#pragma ivdep
#endif
#endif
            for (int i = ib; i < ie; i++) {
                DzDzu[IDX(i, j, ke - 3)] =
                    (-u[IDX(i, j, ke - 5)] + 16.0 * u[IDX(i, j, ke - 4)] -
                     30.0 * u[IDX(i, j, ke - 3)] + 16.0 * u[IDX(i, j, ke - 2)] -
                     u[IDX(i, j, ke - 1)]) *
                    idz_sqrd_by_12;
                // The above two should be replaced by 4th order approximations:
                DzDzu[IDX(i, j, ke - 2)] =
                    (u[IDX(i, j, ke - 6)] - 6.0 * u[IDX(i, j, ke - 5)] +
                     14.0 * u[IDX(i, j, ke - 4)] - 4.0 * u[IDX(i, j, ke - 3)] -
                     15.0 * u[IDX(i, j, ke - 2)] +
                     10.0 * u[IDX(i, j, ke - 1)]) *
                    idz_sqrd_by_12;

                DzDzu[IDX(i, j, ke - 1)] = (-10.0 * u[IDX(i, j, ke - 6)] +
                                            61.0 * u[IDX(i, j, ke - 5)] -
                                            156.0 * u[IDX(i, j, ke - 4)] +
                                            214.0 * u[IDX(i, j, ke - 3)] -
                                            154.0 * u[IDX(i, j, ke - 2)] +
                                            45.0 * u[IDX(i, j, ke - 1)]) *
                                           idz_sqrd_by_12;
            }
        }
    }

#ifdef DEBUG_DERIVS_COMP
#pragma message("DEBUG_DERIVS_COMP: ON")
    for (int k = kb; k < ke; k++) {
        for (int j = jb; j < je; j++) {
            for (int i = ib; i < ie; i++) {
                const int pp = IDX(i, j, k);
                if (std::isnan(DzDzu[pp]))
                    std::cout << "NAN detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
                if (std::isinf(DzDzu[pp]))
                    std::cout << "INF detected function " << __func__
                              << " file: " << __FILE__ << " line: " << __LINE__
                              << std::endl;
            }
        }
    }
#endif
}
