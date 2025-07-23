
#include "rhsfuncs/nothing_rhs.hpp"

#include "rhs_runner.hpp"

namespace bssnrhstests {
namespace rhs {

void do_nothing_rhs(const RHSFunctionInputs& v) {
    auto& [alpha, chi, K, gt0, gt1, gt2, gt3, gt4, gt5, beta0, beta1, beta2,
           At0, At1, At2, At3, At4, At5, Gt0, Gt1, Gt2, B0, B1, B2,

           a_rhs, chi_rhs, K_rhs, gt_rhs00, gt_rhs01, gt_rhs02, gt_rhs11,
           gt_rhs12, gt_rhs22, b_rhs0, b_rhs1, b_rhs2, At_rhs00, At_rhs01,
           At_rhs02, At_rhs11, At_rhs12, At_rhs22, Gt_rhs0, Gt_rhs1, Gt_rhs2,
           B_rhs0, B_rhs1, B_rhs2, grad_0_alpha, grad_1_alpha, grad_2_alpha,
           grad_0_beta0, grad_1_beta0, grad_2_beta0, grad_0_beta1, grad_1_beta1,
           grad_2_beta1, grad_0_beta2, grad_1_beta2, grad_2_beta2, grad_0_B0,
           grad_1_B0, grad_2_B0, grad_0_B1, grad_1_B1, grad_2_B1, grad_0_B2,
           grad_1_B2, grad_2_B2, grad_0_chi, grad_1_chi, grad_2_chi, grad_0_Gt0,
           grad_1_Gt0, grad_2_Gt0, grad_0_Gt1, grad_1_Gt1, grad_2_Gt1,
           grad_0_Gt2, grad_1_Gt2, grad_2_Gt2, grad_0_K, grad_1_K, grad_2_K,
           grad_0_gt0, grad_1_gt0, grad_2_gt0, grad_0_gt1, grad_1_gt1,
           grad_2_gt1, grad_0_gt2, grad_1_gt2, grad_2_gt2, grad_0_gt3,
           grad_1_gt3, grad_2_gt3, grad_0_gt4, grad_1_gt4, grad_2_gt4,
           grad_0_gt5, grad_1_gt5, grad_2_gt5, grad_0_At0, grad_1_At0,
           grad_2_At0, grad_0_At1, grad_1_At1, grad_2_At1, grad_0_At2,
           grad_1_At2, grad_2_At2, grad_0_At3, grad_1_At3, grad_2_At3,
           grad_0_At4, grad_1_At4, grad_2_At4, grad_0_At5, grad_1_At5,
           grad_2_At5, grad2_0_0_gt0, grad2_0_1_gt0, grad2_0_2_gt0,
           grad2_1_1_gt0, grad2_1_2_gt0, grad2_2_2_gt0, grad2_0_0_gt1,
           grad2_0_1_gt1, grad2_0_2_gt1, grad2_1_1_gt1, grad2_1_2_gt1,
           grad2_2_2_gt1, grad2_0_0_gt2, grad2_0_1_gt2, grad2_0_2_gt2,
           grad2_1_1_gt2, grad2_1_2_gt2, grad2_2_2_gt2, grad2_0_0_gt3,
           grad2_0_1_gt3, grad2_0_2_gt3, grad2_1_1_gt3, grad2_1_2_gt3,
           grad2_2_2_gt3, grad2_0_0_gt4, grad2_0_1_gt4, grad2_0_2_gt4,
           grad2_1_1_gt4, grad2_1_2_gt4, grad2_2_2_gt4, grad2_0_0_gt5,
           grad2_0_1_gt5, grad2_0_2_gt5, grad2_1_1_gt5, grad2_1_2_gt5,
           grad2_2_2_gt5, grad2_0_0_chi, grad2_0_1_chi, grad2_0_2_chi,
           grad2_1_1_chi, grad2_1_2_chi, grad2_2_2_chi, grad2_0_0_alpha,
           grad2_0_1_alpha, grad2_0_2_alpha, grad2_1_1_alpha, grad2_1_2_alpha,
           grad2_2_2_alpha, grad2_0_0_beta0, grad2_0_1_beta0, grad2_0_2_beta0,
           grad2_1_1_beta0, grad2_1_2_beta0, grad2_2_2_beta0, grad2_0_0_beta1,
           grad2_0_1_beta1, grad2_0_2_beta1, grad2_1_1_beta1, grad2_1_2_beta1,
           grad2_2_2_beta1, grad2_0_0_beta2, grad2_0_1_beta2, grad2_0_2_beta2,
           grad2_1_1_beta2, grad2_1_2_beta2, grad2_2_2_beta2, bflag, nx, ny, nz,
           hx, hy, hz, pmin] = v;

    // we've set everything up, but let's do nothing as a test!
}

}  // namespace rhs
}  // namespace bssnrhstests
