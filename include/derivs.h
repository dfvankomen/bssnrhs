#pragma once

#define OCT_DIR_LEFT  0
#define OCT_DIR_RIGHT 1
#define OCT_DIR_DOWN  2
#define OCT_DIR_UP    3
#define OCT_DIR_BACK  4
#define OCT_DIR_FRONT 5

#define OCT_DIR_LEFT_DOWN  6
#define OCT_DIR_LEFT_UP    7
#define OCT_DIR_LEFT_BACK  8
#define OCT_DIR_LEFT_FRONT 9

#define OCT_DIR_RIGHT_DOWN  10
#define OCT_DIR_RIGHT_UP    11
#define OCT_DIR_RIGHT_BACK  12
#define OCT_DIR_RIGHT_FRONT 13

#define OCT_DIR_DOWN_BACK  14
#define OCT_DIR_DOWN_FRONT 15

#define OCT_DIR_UP_BACK  16
#define OCT_DIR_UP_FRONT 17

#define OCT_DIR_LEFT_DOWN_BACK   18
#define OCT_DIR_RIGHT_DOWN_BACK  19
#define OCT_DIR_LEFT_UP_BACK     20
#define OCT_DIR_RIGHT_UP_BACK    21
#define OCT_DIR_LEFT_DOWN_FRONT  22
#define OCT_DIR_RIGHT_DOWN_FRONT 23
#define OCT_DIR_LEFT_UP_FRONT    24
#define OCT_DIR_RIGHT_UP_FRONT   25
#define OCT_DIR_INTERNAL         26

#define OCT_DIR_TOTAL 27

#define IDX(i, j, k) ((i) + nx * ((j) + ny * (k)))

void deriv644_x(double *const Dxu, const double *const u, const double dx,
                const unsigned int *sz, unsigned bflag);
void deriv644_y(double *const Dyu, const double *const u, const double dy,
                const unsigned int *sz, unsigned bflag);
void deriv644_z(double *const Dzu, const double *const u, const double dz,
                const unsigned int *sz, unsigned bflag);

void deriv644_xx(double *const DxDxu, const double *const u, const double dx,
                 const unsigned int *sz, unsigned bflag);
void deriv644_yy(double *const Du, const double *const u, const double dy,
                 const unsigned int *sz, unsigned bflag);
void deriv644_zz(double *const Du, const double *const u, const double dz,
                 const unsigned int *sz, unsigned bflag);

void ko_deriv42_x(double *const Du, const double *const u, const double dx,
                  const unsigned int *sz, unsigned bflag);
void ko_deriv42_y(double *const Du, const double *const u, const double dy,
                  const unsigned int *sz, unsigned bflag);
void ko_deriv42_z(double *const Du, const double *const u, const double dz,
                  const unsigned int *sz, unsigned bflag);

#define deriv_x deriv644_x
#define deriv_y deriv644_y
#define deriv_z deriv644_z

#define deriv_xx deriv644_xx
#define deriv_yy deriv644_yy
#define deriv_zz deriv644_zz

#define adv_deriv_x deriv644adv_x
#define adv_deriv_y deriv644adv_y
#define adv_deriv_z deriv644adv_z

#define ko_deriv_x ko_deriv42_x
#define ko_deriv_y ko_deriv42_y
#define ko_deriv_z ko_deriv42_z
