// CODEGEN: SSL was enabled, adding term to gauge condition!
// CODEGEN: CAHD was enabled, adding damping term to chi!
// Codgen: using eta const damping
// Codgen: using standard gauge
// Dendro: {{{
// Dendro: original ops: 708887
// Dendro: printing temp variables
const double DENDRO_0 = 2 * alpha[pp];
const double DENDRO_1 = sqrt(chi[pp]);
const double DENDRO_2 =
    (3.0 / 4.0) * alpha[pp] * lambda_f[1] + (3.0 / 4.0) * lambda_f[0];
const double DENDRO_3  = (4.0 / 3.0) * grad_0_beta0[pp];
const double DENDRO_4  = 2 * gt1[pp];
const double DENDRO_5  = 2 * gt2[pp];
const double DENDRO_6  = (2.0 / 3.0) * gt0[pp];
const double DENDRO_7  = (1.0 / 3.0) * gt1[pp];
const double DENDRO_8  = (2.0 / 3.0) * grad_2_beta2[pp];
const double DENDRO_9  = (1.0 / 3.0) * gt2[pp];
const double DENDRO_10 = (2.0 / 3.0) * grad_1_beta1[pp];
const double DENDRO_11 = (2.0 / 3.0) * grad_0_beta0[pp];
const double DENDRO_12 = (4.0 / 3.0) * grad_1_beta1[pp];
const double DENDRO_13 = 2 * gt4[pp];
const double DENDRO_14 = (1.0 / 3.0) * gt4[pp];
const double DENDRO_15 = (4.0 / 3.0) * grad_2_beta2[pp];
const double DENDRO_16 = (2.0 / 3.0) * chi[pp];
const double DENDRO_17 = grad_0_beta0[pp] + grad_1_beta1[pp] + grad_2_beta2[pp];
const double DENDRO_18 = (dx_i * dx_i);
const double DENDRO_19 = pow(K[pp], 2);
const double DENDRO_20 = pow(gt4[pp], 2);
const double DENDRO_21 = pow(gt1[pp], 2);
const double DENDRO_22 = pow(gt2[pp], 2);
const double DENDRO_23 = gt3[pp] * gt5[pp];
const double DENDRO_24 = gt2[pp] * gt4[pp];
const double DENDRO_25 = DENDRO_20 * gt0[pp] + DENDRO_21 * gt5[pp] +
                         DENDRO_22 * gt3[pp] - DENDRO_23 * gt0[pp] -
                         DENDRO_24 * DENDRO_4;
const double DENDRO_26 = pow(DENDRO_25, -2);
const double DENDRO_27 = 12 * DENDRO_26;
const double DENDRO_28 = -DENDRO_24 + gt1[pp] * gt5[pp];
const double DENDRO_29 = (DENDRO_28 * DENDRO_28);
const double DENDRO_30 = gt1[pp] * gt4[pp] - gt2[pp] * gt3[pp];
const double DENDRO_31 = (DENDRO_30 * DENDRO_30);
const double DENDRO_32 = -DENDRO_20 + DENDRO_23;
const double DENDRO_33 = At4[pp] * DENDRO_30;
const double DENDRO_34 = 2 * DENDRO_28;
const double DENDRO_35 = At1[pp] * DENDRO_28;
const double DENDRO_36 = 2 * DENDRO_32;
const double DENDRO_37 = At2[pp] * DENDRO_30;
const double DENDRO_38 = At0[pp] * (DENDRO_32 * DENDRO_32) +
                         At3[pp] * DENDRO_29 + At5[pp] * DENDRO_31 -
                         DENDRO_33 * DENDRO_34 - DENDRO_35 * DENDRO_36 +
                         DENDRO_36 * DENDRO_37;
const double DENDRO_39 = At0[pp] * DENDRO_38;
const double DENDRO_40 = gt0[pp] * gt4[pp] - gt1[pp] * gt2[pp];
const double DENDRO_41 = (DENDRO_40 * DENDRO_40);
const double DENDRO_42 = -DENDRO_22 + gt0[pp] * gt5[pp];
const double DENDRO_43 = At2[pp] * DENDRO_40;
const double DENDRO_44 = 2 * DENDRO_42;
const double DENDRO_45 = At4[pp] * DENDRO_40;
const double DENDRO_46 = At0[pp] * DENDRO_29 +
                         At3[pp] * (DENDRO_42 * DENDRO_42) +
                         At5[pp] * DENDRO_41 + DENDRO_34 * DENDRO_43 -
                         DENDRO_35 * DENDRO_44 - DENDRO_44 * DENDRO_45;
const double DENDRO_47 = At3[pp] * DENDRO_46;
const double DENDRO_48 = -DENDRO_21 + gt0[pp] * gt3[pp];
const double DENDRO_49 = At1[pp] * DENDRO_40;
const double DENDRO_50 = 2 * DENDRO_30;
const double DENDRO_51 = 2 * DENDRO_48;
const double DENDRO_52 = At0[pp] * DENDRO_31 + At3[pp] * DENDRO_41 +
                         At5[pp] * (DENDRO_48 * DENDRO_48) +
                         DENDRO_37 * DENDRO_51 - DENDRO_45 * DENDRO_51 -
                         DENDRO_49 * DENDRO_50;
const double DENDRO_53 = At5[pp] * DENDRO_52;
const double DENDRO_54 = 24 * DENDRO_26;
const double DENDRO_55 = At3[pp] * DENDRO_28;
const double DENDRO_56 = At0[pp] * DENDRO_32;
const double DENDRO_57 = At5[pp] * DENDRO_30;
const double DENDRO_58 = At2[pp] * DENDRO_48;
const double DENDRO_59 = At4[pp] * DENDRO_48;
const double DENDRO_60 =
    At2[pp] * DENDRO_31 - DENDRO_28 * DENDRO_59 - DENDRO_30 * DENDRO_35 +
    DENDRO_30 * DENDRO_56 - DENDRO_32 * DENDRO_49 + DENDRO_32 * DENDRO_58 -
    DENDRO_33 * DENDRO_40 + DENDRO_40 * DENDRO_55 + DENDRO_48 * DENDRO_57;
const double DENDRO_61 = At2[pp] * DENDRO_60;
const double DENDRO_62 =
    -At1[pp] * DENDRO_29 - At1[pp] * DENDRO_32 * DENDRO_42 -
    At4[pp] * DENDRO_28 * DENDRO_40 - At4[pp] * DENDRO_30 * DENDRO_42 +
    DENDRO_28 * DENDRO_37 + DENDRO_28 * DENDRO_56 + DENDRO_32 * DENDRO_43 +
    DENDRO_40 * DENDRO_57 + DENDRO_42 * DENDRO_55;
const double DENDRO_63 = -DENDRO_62;
const double DENDRO_64 = At1[pp] * DENDRO_63;
const double DENDRO_65 = At0[pp] * DENDRO_28;
const double DENDRO_66 = At3[pp] * DENDRO_42;
const double DENDRO_67 = At5[pp] * DENDRO_40;
const double DENDRO_68 =
    -At1[pp] * DENDRO_28 * DENDRO_40 - At1[pp] * DENDRO_30 * DENDRO_42 -
    At4[pp] * DENDRO_41 - At4[pp] * DENDRO_42 * DENDRO_48 +
    DENDRO_28 * DENDRO_58 + DENDRO_30 * DENDRO_65 + DENDRO_37 * DENDRO_40 +
    DENDRO_40 * DENDRO_66 + DENDRO_48 * DENDRO_67;
const double DENDRO_69  = -DENDRO_68;
const double DENDRO_70  = At4[pp] * DENDRO_69;
const double DENDRO_71  = 4 * gt2[pp];
const double DENDRO_72  = 4 * gt4[pp];
const double DENDRO_73  = pow(chi[pp], -2);
const double DENDRO_74  = pow(grad_2_chi[pp], 2);
const double DENDRO_75  = DENDRO_73 * DENDRO_74;
const double DENDRO_76  = 1.0 / DENDRO_25;
const double DENDRO_77  = 4.0 * DENDRO_76;
const double DENDRO_78  = DENDRO_28 * DENDRO_77;
const double DENDRO_79  = DENDRO_78 * grad2_0_1_gt5[pp];
const double DENDRO_80  = DENDRO_40 * DENDRO_77;
const double DENDRO_81  = DENDRO_80 * grad2_1_2_gt5[pp];
const double DENDRO_82  = DENDRO_30 * DENDRO_76;
const double DENDRO_83  = 4 * DENDRO_82;
const double DENDRO_84  = DENDRO_32 * DENDRO_76;
const double DENDRO_85  = 2.0 * DENDRO_84;
const double DENDRO_86  = DENDRO_42 * DENDRO_76;
const double DENDRO_87  = 2.0 * DENDRO_86;
const double DENDRO_88  = DENDRO_48 * DENDRO_76;
const double DENDRO_89  = 2.0 * DENDRO_88;
const double DENDRO_90  = DENDRO_30 * grad_2_gt0[pp];
const double DENDRO_91  = DENDRO_48 * grad_0_gt5[pp];
const double DENDRO_92  = grad_0_gt4[pp] - grad_1_gt2[pp] + grad_2_gt1[pp];
const double DENDRO_93  = -DENDRO_40 * DENDRO_92 + DENDRO_90 + DENDRO_91;
const double DENDRO_94  = -DENDRO_93;
const double DENDRO_95  = DENDRO_94 * grad_0_gt5[pp];
const double DENDRO_96  = DENDRO_26 * DENDRO_32;
const double DENDRO_97  = 3.0 * DENDRO_96;
const double DENDRO_98  = DENDRO_48 * grad_1_gt5[pp];
const double DENDRO_99  = -grad_0_gt4[pp] + grad_1_gt2[pp] + grad_2_gt1[pp];
const double DENDRO_100 = DENDRO_30 * DENDRO_99;
const double DENDRO_101 = DENDRO_100 - DENDRO_40 * grad_2_gt3[pp] + DENDRO_98;
const double DENDRO_102 = -DENDRO_101;
const double DENDRO_103 = DENDRO_102 * grad_1_gt5[pp];
const double DENDRO_104 = DENDRO_26 * DENDRO_42;
const double DENDRO_105 = 3.0 * DENDRO_104;
const double DENDRO_106 = 0.5 * grad_2_gt5[pp];
const double DENDRO_107 = DENDRO_106 * DENDRO_48;
const double DENDRO_108 = 0.5 * grad_1_gt5[pp];
const double DENDRO_109 = 1.0 * grad_2_gt4[pp];
const double DENDRO_110 = -DENDRO_109;
const double DENDRO_111 = DENDRO_108 + DENDRO_110;
const double DENDRO_112 = DENDRO_111 * DENDRO_40;
const double DENDRO_113 = 0.5 * grad_0_gt5[pp];
const double DENDRO_114 = 1.0 * grad_2_gt2[pp];
const double DENDRO_115 = -DENDRO_114;
const double DENDRO_116 = DENDRO_113 + DENDRO_115;
const double DENDRO_117 = DENDRO_107 + DENDRO_112 - DENDRO_116 * DENDRO_30;
const double DENDRO_118 = -DENDRO_117;
const double DENDRO_119 = DENDRO_118 * DENDRO_48;
const double DENDRO_120 = 6.0 * DENDRO_26;
const double DENDRO_121 = DENDRO_42 * grad_2_gt3[pp];
const double DENDRO_122 = DENDRO_40 * grad_1_gt5[pp];
const double DENDRO_123 = DENDRO_28 * DENDRO_99;
const double DENDRO_124 = DENDRO_122 + DENDRO_123;
const double DENDRO_125 = -DENDRO_121 + DENDRO_124;
const double DENDRO_126 = 1.0 * grad_1_gt4[pp];
const double DENDRO_127 = 0.25 * grad_2_gt3[pp];
const double DENDRO_128 = 4 * DENDRO_104;
const double DENDRO_129 = DENDRO_125 * DENDRO_128 * (DENDRO_126 - DENDRO_127);
const double DENDRO_130 = DENDRO_30 * grad_0_gt5[pp];
const double DENDRO_131 = DENDRO_32 * grad_2_gt0[pp];
const double DENDRO_132 = DENDRO_130 + DENDRO_131 - DENDRO_28 * DENDRO_92;
const double DENDRO_133 = -DENDRO_132;
const double DENDRO_134 = 1.0 * grad_0_gt2[pp];
const double DENDRO_135 = 0.25 * grad_2_gt0[pp];
const double DENDRO_136 = DENDRO_134 - DENDRO_135;
const double DENDRO_137 = 4 * DENDRO_96;
const double DENDRO_138 =
    DENDRO_28 * grad_2_gt0[pp] + DENDRO_40 * grad_0_gt5[pp];
const double DENDRO_139 = DENDRO_138 - DENDRO_42 * DENDRO_92;
const double DENDRO_140 = 0.75 * grad_0_gt4[pp];
const double DENDRO_141 = 0.25 * grad_1_gt2[pp];
const double DENDRO_142 = 0.25 * grad_2_gt1[pp];
const double DENDRO_143 = -DENDRO_142;
const double DENDRO_144 =
    DENDRO_137 * DENDRO_139 * (DENDRO_140 + DENDRO_141 + DENDRO_143);
const double DENDRO_145 = -DENDRO_28 * grad_2_gt3[pp] +
                          DENDRO_30 * grad_1_gt5[pp] + DENDRO_32 * DENDRO_99;
const double DENDRO_146 = -DENDRO_145;
const double DENDRO_147 = 0.25 * grad_0_gt4[pp];
const double DENDRO_148 = 0.75 * grad_1_gt2[pp];
const double DENDRO_149 = DENDRO_143 + DENDRO_147 + DENDRO_148;
const double DENDRO_150 = DENDRO_113 + DENDRO_114;
const double DENDRO_151 =
    DENDRO_106 * DENDRO_30 + DENDRO_111 * DENDRO_28 - DENDRO_116 * DENDRO_32;
const double DENDRO_152 = -DENDRO_151;
const double DENDRO_153 = DENDRO_152 * DENDRO_48;
const double DENDRO_154 = 4 * DENDRO_26;
const double DENDRO_155 = DENDRO_106 * DENDRO_40;
const double DENDRO_156 =
    DENDRO_111 * DENDRO_42 - DENDRO_116 * DENDRO_28 + DENDRO_155;
const double DENDRO_157 = DENDRO_156 * DENDRO_48;
const double DENDRO_158 = DENDRO_154 * DENDRO_157 * (DENDRO_108 + DENDRO_109);
const double DENDRO_159 = 0.25 * grad_0_gt5[pp];
const double DENDRO_160 = DENDRO_102 * DENDRO_159;
const double DENDRO_161 = DENDRO_26 * DENDRO_28;
const double DENDRO_162 = 4 * DENDRO_161;
const double DENDRO_163 = 0.25 * grad_1_gt5[pp];
const double DENDRO_164 = DENDRO_163 * DENDRO_94;
const double DENDRO_165 = DENDRO_125 * grad_1_gt5[pp];
const double DENDRO_166 = DENDRO_156 * grad_2_gt3[pp];
const double DENDRO_167 = DENDRO_165 + DENDRO_166;
const double DENDRO_168 = DENDRO_26 * DENDRO_40;
const double DENDRO_169 = 2.0 * DENDRO_168;
const double DENDRO_170 = DENDRO_133 * grad_0_gt5[pp];
const double DENDRO_171 = DENDRO_152 * grad_2_gt0[pp];
const double DENDRO_172 = DENDRO_26 * DENDRO_30;
const double DENDRO_173 = 2.0 * DENDRO_172;
const double DENDRO_174 = DENDRO_94 * grad_2_gt5[pp];
const double DENDRO_175 = DENDRO_118 * grad_0_gt5[pp];
const double DENDRO_176 = DENDRO_102 * grad_2_gt5[pp];
const double DENDRO_177 = DENDRO_118 * grad_1_gt5[pp];
const double DENDRO_178 = DENDRO_139 * grad_2_gt3[pp];
const double DENDRO_179 = 0.25 * DENDRO_178;
const double DENDRO_180 = grad_0_gt4[pp] + grad_1_gt2[pp] - grad_2_gt1[pp];
const double DENDRO_181 = 0.5 * DENDRO_180;
const double DENDRO_182 = DENDRO_125 * DENDRO_181 + DENDRO_179;
const double DENDRO_183 = 0.25 * DENDRO_174;
const double DENDRO_184 = 4 * DENDRO_172;
const double DENDRO_185 = 0.25 * DENDRO_176;
const double DENDRO_186 = 4 * DENDRO_168;
const double DENDRO_187 = DENDRO_146 * grad_2_gt0[pp];
const double DENDRO_188 = 0.25 * DENDRO_187;
const double DENDRO_189 = DENDRO_139 * grad_1_gt5[pp];
const double DENDRO_190 = DENDRO_156 * DENDRO_92;
const double DENDRO_191 = DENDRO_173 * (DENDRO_189 + DENDRO_190);
const double DENDRO_192 = 0.5 * grad_2_gt3[pp];
const double DENDRO_193 = DENDRO_126 - DENDRO_192;
const double DENDRO_194 = DENDRO_139 * DENDRO_193;
const double DENDRO_195 = DENDRO_125 * DENDRO_92;
const double DENDRO_196 = 0.25 * DENDRO_195;
const double DENDRO_197 = DENDRO_194 + DENDRO_196;
const double DENDRO_198 = DENDRO_146 * grad_0_gt5[pp];
const double DENDRO_199 = DENDRO_152 * DENDRO_99;
const double DENDRO_200 = 0.5 * grad_2_gt0[pp];
const double DENDRO_201 = DENDRO_134 - DENDRO_200;
const double DENDRO_202 = DENDRO_146 * DENDRO_201;
const double DENDRO_203 = DENDRO_133 * DENDRO_99;
const double DENDRO_204 = 0.25 * DENDRO_203;
const double DENDRO_205 = 0.5 * DENDRO_111;
const double DENDRO_206 = DENDRO_139 * DENDRO_205;
const double DENDRO_207 = 0.5 * DENDRO_116;
const double DENDRO_208 = DENDRO_146 * DENDRO_207;
const double DENDRO_209 = -DENDRO_125 * DENDRO_205;
const double DENDRO_210 = 2 * DENDRO_156 * DENDRO_193 + DENDRO_209;
const double DENDRO_211 = -DENDRO_133 * DENDRO_207;
const double DENDRO_212 = 2 * DENDRO_201;
const double DENDRO_213 = -grad2_2_2_chi[pp];
const double DENDRO_214 = -DENDRO_30;
const double DENDRO_215 = -DENDRO_116;
const double DENDRO_216 = -DENDRO_32;
const double DENDRO_217 = -DENDRO_111;
const double DENDRO_218 =
    DENDRO_106 * DENDRO_214 + DENDRO_215 * DENDRO_216 + DENDRO_217 * DENDRO_28;
const double DENDRO_219 = DENDRO_76 * grad_0_chi[pp];
const double DENDRO_220 = -DENDRO_42;
const double DENDRO_221 =
    DENDRO_155 + DENDRO_215 * DENDRO_28 + DENDRO_217 * DENDRO_220;
const double DENDRO_222 = DENDRO_76 * grad_1_chi[pp];
const double DENDRO_223 = -DENDRO_48;
const double DENDRO_224 = DENDRO_106 * DENDRO_223;
const double DENDRO_225 = DENDRO_214 * DENDRO_215;
const double DENDRO_226 = DENDRO_217 * DENDRO_40;
const double DENDRO_227 = DENDRO_76 * grad_2_chi[pp];
const double DENDRO_228 = 1.0 / chi[pp];
const double DENDRO_229 = 2 * DENDRO_228;
const double DENDRO_230 = DENDRO_42 * grad_0_gt3[pp];
const double DENDRO_231 = DENDRO_28 * grad_1_gt0[pp];
const double DENDRO_232 = DENDRO_180 * DENDRO_40;
const double DENDRO_233 = DENDRO_231 + DENDRO_232;
const double DENDRO_234 = -DENDRO_230 + DENDRO_233;
const double DENDRO_235 = DENDRO_139 * DENDRO_30;
const double DENDRO_236 = 0.5 * grad_1_gt3[pp];
const double DENDRO_237 = DENDRO_236 * DENDRO_42;
const double DENDRO_238 = 0.5 * grad_0_gt3[pp];
const double DENDRO_239 = 1.0 * grad_1_gt1[pp];
const double DENDRO_240 = -DENDRO_239;
const double DENDRO_241 = DENDRO_238 + DENDRO_240;
const double DENDRO_242 = DENDRO_241 * DENDRO_28;
const double DENDRO_243 = -DENDRO_193 * DENDRO_40 + DENDRO_237 + DENDRO_242;
const double DENDRO_244 = -DENDRO_243;
const double DENDRO_245 = DENDRO_244 * DENDRO_42;
const double DENDRO_246 = 1.0 * grad_0_gt1[pp];
const double DENDRO_247 = 0.5 * grad_1_gt0[pp];
const double DENDRO_248 = DENDRO_246 - DENDRO_247;
const double DENDRO_249 = 0.5 * grad_0_gt0[pp];
const double DENDRO_250 = DENDRO_201 * DENDRO_40 + DENDRO_249 * DENDRO_28;
const double DENDRO_251 = -DENDRO_248 * DENDRO_42 + DENDRO_250;
const double DENDRO_252 = DENDRO_251 * DENDRO_32;
const double DENDRO_253 = DENDRO_157 + DENDRO_245 + DENDRO_252;
const double DENDRO_254 = DENDRO_125 * DENDRO_40 + DENDRO_234 * DENDRO_28 -
                          1.0 * DENDRO_235 - DENDRO_253;
const double DENDRO_255 = DENDRO_254 * DENDRO_26;
const double DENDRO_256 = 2.0 * DENDRO_255;
const double DENDRO_257 = DENDRO_32 * grad_1_gt0[pp];
const double DENDRO_258 = DENDRO_180 * DENDRO_30;
const double DENDRO_259 = DENDRO_257 + DENDRO_258 - DENDRO_28 * grad_0_gt3[pp];
const double DENDRO_260 = -DENDRO_259;
const double DENDRO_261 = DENDRO_133 * DENDRO_30;
const double DENDRO_262 = DENDRO_236 * DENDRO_28;
const double DENDRO_263 =
    -DENDRO_193 * DENDRO_30 + DENDRO_241 * DENDRO_32 + DENDRO_262;
const double DENDRO_264 = DENDRO_263 * DENDRO_42;
const double DENDRO_265 = DENDRO_249 * DENDRO_32;
const double DENDRO_266 = DENDRO_201 * DENDRO_30;
const double DENDRO_267 = -DENDRO_248 * DENDRO_28 + DENDRO_265 + DENDRO_266;
const double DENDRO_268 = -DENDRO_267;
const double DENDRO_269 = DENDRO_268 * DENDRO_32;
const double DENDRO_270 = DENDRO_153 + DENDRO_264 + DENDRO_269;
const double DENDRO_271 = DENDRO_146 * DENDRO_40 + DENDRO_260 * DENDRO_28 -
                          1.0 * DENDRO_261 - DENDRO_270;
const double DENDRO_272 = DENDRO_26 * DENDRO_271;
const double DENDRO_273 = 2.0 * DENDRO_272;
const double DENDRO_274 = DENDRO_30 * grad_1_gt0[pp];
const double DENDRO_275 = DENDRO_180 * DENDRO_48;
const double DENDRO_276 = DENDRO_274 + DENDRO_275 - DENDRO_40 * grad_0_gt3[pp];
const double DENDRO_277 = -DENDRO_276;
const double DENDRO_278 = DENDRO_30 * DENDRO_94;
const double DENDRO_279 = DENDRO_236 * DENDRO_40;
const double DENDRO_280 =
    -DENDRO_193 * DENDRO_48 + DENDRO_241 * DENDRO_30 + DENDRO_279;
const double DENDRO_281 = DENDRO_280 * DENDRO_42;
const double DENDRO_282 =
    DENDRO_201 * DENDRO_48 - DENDRO_248 * DENDRO_40 + DENDRO_249 * DENDRO_30;
const double DENDRO_283 = -DENDRO_282;
const double DENDRO_284 = DENDRO_283 * DENDRO_32;
const double DENDRO_285 = DENDRO_119 + DENDRO_281 + DENDRO_284;
const double DENDRO_286 = DENDRO_102 * DENDRO_40 + DENDRO_277 * DENDRO_28 -
                          1.0 * DENDRO_278 - DENDRO_285;
const double DENDRO_287 = DENDRO_26 * DENDRO_286;
const double DENDRO_288 = 2.0 * DENDRO_287;
const double DENDRO_289 = 3 * DENDRO_228;
const double DENDRO_290 = DENDRO_289 * grad_1_chi[pp];
const double DENDRO_291 = grad_0_chi[pp] * grad_2_chi[pp];
const double DENDRO_292 = pow(grad_0_chi[pp], 2);
const double DENDRO_293 = pow(grad_1_chi[pp], 2);
const double DENDRO_294 =
    2 * DENDRO_219 * DENDRO_271 + 2 * DENDRO_222 * DENDRO_254 +
    2 * DENDRO_227 * DENDRO_286 -
    2 * DENDRO_28 * (-DENDRO_290 * grad_0_chi[pp] + 2 * grad2_0_1_chi[pp]) +
    DENDRO_32 * (-DENDRO_289 * DENDRO_292 + 2 * grad2_0_0_chi[pp]) -
    2 * DENDRO_40 * (-DENDRO_290 * grad_2_chi[pp] + 2 * grad2_1_2_chi[pp]) +
    DENDRO_42 * (-DENDRO_289 * DENDRO_293 + 2 * grad2_1_1_chi[pp]) +
    DENDRO_48 * (-DENDRO_289 * DENDRO_74 + 2 * grad2_2_2_chi[pp]) +
    DENDRO_50 * (-DENDRO_289 * DENDRO_291 + 2 * grad2_0_2_chi[pp]);
const double DENDRO_295 = -DENDRO_228 * DENDRO_294;
const double DENDRO_296 = DENDRO_295 * DENDRO_76;
const double DENDRO_297 =
    -DENDRO_103 * DENDRO_105 - DENDRO_119 * DENDRO_120 * grad_2_gt5[pp] -
    DENDRO_128 * DENDRO_146 * DENDRO_149 - DENDRO_129 -
    DENDRO_133 * DENDRO_136 * DENDRO_137 - DENDRO_144 -
    DENDRO_150 * DENDRO_153 * DENDRO_154 - DENDRO_158 +
    DENDRO_162 * DENDRO_182 + DENDRO_162 * DENDRO_197 +
    DENDRO_162 * (DENDRO_202 + DENDRO_204) +
    DENDRO_162 * (DENDRO_102 * DENDRO_113 + DENDRO_164) +
    DENDRO_162 * (DENDRO_108 * DENDRO_94 + DENDRO_160) +
    DENDRO_162 * (DENDRO_133 * DENDRO_181 + DENDRO_188) +
    DENDRO_167 * DENDRO_169 + DENDRO_169 * (DENDRO_176 + DENDRO_177) +
    DENDRO_169 * (DENDRO_198 + DENDRO_199) -
    DENDRO_173 * (DENDRO_170 + DENDRO_171) -
    DENDRO_173 * (DENDRO_174 + DENDRO_175) -
    DENDRO_184 * (1.0 * DENDRO_175 + DENDRO_183) -
    DENDRO_184 * (DENDRO_152 * DENDRO_212 + DENDRO_211) -
    DENDRO_184 * (DENDRO_156 * DENDRO_180 - DENDRO_206) +
    DENDRO_186 * DENDRO_210 + DENDRO_186 * (1.0 * DENDRO_177 + DENDRO_185) +
    DENDRO_186 * (DENDRO_152 * DENDRO_180 - DENDRO_208) - DENDRO_191 -
    DENDRO_229 *
        (DENDRO_213 + DENDRO_218 * DENDRO_219 + DENDRO_221 * DENDRO_222 +
         DENDRO_227 * (DENDRO_224 + DENDRO_225 + DENDRO_226)) +
    DENDRO_256 * grad_1_gt5[pp] + DENDRO_273 * grad_0_gt5[pp] +
    DENDRO_288 * grad_2_gt5[pp] + DENDRO_296 * gt5[pp] +
    DENDRO_71 * grad_2_Gt0[pp] + DENDRO_72 * grad_2_Gt1[pp] - DENDRO_75 -
    DENDRO_79 - DENDRO_81 + DENDRO_83 * grad2_0_2_gt5[pp] +
    DENDRO_85 * grad2_0_0_gt5[pp] + DENDRO_87 * grad2_1_1_gt5[pp] +
    DENDRO_89 * grad2_2_2_gt5[pp] - DENDRO_95 * DENDRO_97 +
    4 * grad_2_Gt2[pp] * gt5[pp];
const double DENDRO_298 = DENDRO_88 * chi[pp];
const double DENDRO_299 = -grad2_1_1_chi[pp];
const double DENDRO_300 = -DENDRO_241;
const double DENDRO_301 =
    DENDRO_193 * DENDRO_214 + DENDRO_216 * DENDRO_300 + DENDRO_262;
const double DENDRO_302 = DENDRO_220 * DENDRO_236;
const double DENDRO_303 = DENDRO_28 * DENDRO_300;
const double DENDRO_304 = DENDRO_193 * DENDRO_40;
const double DENDRO_305 =
    DENDRO_193 * DENDRO_223 + DENDRO_214 * DENDRO_300 + DENDRO_279;
const double DENDRO_306 = DENDRO_146 * DENDRO_248;
const double DENDRO_307 = DENDRO_260 * DENDRO_99;
const double DENDRO_308 = 0.25 * DENDRO_307;
const double DENDRO_309 = DENDRO_146 * grad_1_gt0[pp];
const double DENDRO_310 = 0.25 * DENDRO_309;
const double DENDRO_311 = 0.5 * DENDRO_92;
const double DENDRO_312 = DENDRO_277 * grad_1_gt5[pp];
const double DENDRO_313 = 0.25 * DENDRO_312;
const double DENDRO_314 = DENDRO_111 * DENDRO_277;
const double DENDRO_315 = DENDRO_102 * DENDRO_180;
const double DENDRO_316 = -0.25 * DENDRO_315;
const double DENDRO_317 = 0.5 * DENDRO_241;
const double DENDRO_318 = DENDRO_146 * DENDRO_317;
const double DENDRO_319 = 0.5 * DENDRO_102;
const double DENDRO_320 = DENDRO_193 * DENDRO_319;
const double DENDRO_321 = 2 * DENDRO_111 * DENDRO_280;
const double DENDRO_322 = DENDRO_125 * grad_1_gt3[pp];
const double DENDRO_323 = 0.25 * DENDRO_322;
const double DENDRO_324 = DENDRO_244 * grad_2_gt3[pp];
const double DENDRO_325 = 0.5 * DENDRO_193;
const double DENDRO_326 = DENDRO_277 * DENDRO_325;
const double DENDRO_327 = -DENDRO_260 * DENDRO_317;
const double DENDRO_328 = 2 * DENDRO_248 * DENDRO_263;
const double DENDRO_329 = DENDRO_234 * grad_1_gt3[pp];
const double DENDRO_330 = 0.25 * DENDRO_329;
const double DENDRO_331 = DENDRO_244 * grad_0_gt3[pp];
const double DENDRO_332 = DENDRO_260 * grad_0_gt3[pp];
const double DENDRO_333 = DENDRO_263 * grad_1_gt0[pp];
const double DENDRO_334 = 2.0 * DENDRO_161;
const double DENDRO_335 = DENDRO_146 * grad_0_gt3[pp];
const double DENDRO_336 = DENDRO_263 * DENDRO_99;
const double DENDRO_337 = DENDRO_280 * grad_1_gt5[pp];
const double DENDRO_338 = DENDRO_180 * DENDRO_280;
const double DENDRO_339 = DENDRO_110 + DENDRO_163;
const double DENDRO_340 = DENDRO_26 * DENDRO_48;
const double DENDRO_341 = 4 * DENDRO_340;
const double DENDRO_342 = -DENDRO_141;
const double DENDRO_343 = 0.75 * grad_2_gt1[pp];
const double DENDRO_344 = DENDRO_341 * (DENDRO_147 + DENDRO_342 + DENDRO_343);
const double DENDRO_345 = 0.25 * grad_1_gt0[pp];
const double DENDRO_346 = DENDRO_137 * (DENDRO_246 - DENDRO_345);
const double DENDRO_347 = DENDRO_137 * (DENDRO_140 + DENDRO_142 + DENDRO_342);
const double DENDRO_348 = 4 * gt1[pp];
const double DENDRO_349 = 0.25 * grad_0_gt3[pp];
const double DENDRO_350 = DENDRO_125 * DENDRO_349;
const double DENDRO_351 = DENDRO_127 * DENDRO_234;
const double DENDRO_352 = DENDRO_234 * grad_0_gt3[pp];
const double DENDRO_353 = DENDRO_125 * grad_2_gt3[pp];
const double DENDRO_354 = 3.0 * DENDRO_340;
const double DENDRO_355 =
    -DENDRO_154 * DENDRO_264 * (DENDRO_238 + DENDRO_239) -
    DENDRO_154 * DENDRO_281 * (DENDRO_126 + DENDRO_192) -
    DENDRO_184 * (DENDRO_125 * DENDRO_238 + DENDRO_351) -
    DENDRO_184 * (DENDRO_192 * DENDRO_234 + DENDRO_350) -
    DENDRO_293 * DENDRO_73 + DENDRO_348 * grad_1_Gt0[pp] -
    DENDRO_352 * DENDRO_97 - DENDRO_353 * DENDRO_354 +
    DENDRO_72 * grad_1_Gt2[pp] - DENDRO_78 * grad2_0_1_gt3[pp] -
    DENDRO_80 * grad2_1_2_gt3[pp] + DENDRO_83 * grad2_0_2_gt3[pp] +
    DENDRO_85 * grad2_0_0_gt3[pp] + DENDRO_87 * grad2_1_1_gt3[pp] +
    DENDRO_89 * grad2_2_2_gt3[pp] + 4 * grad_1_Gt1[pp] * gt3[pp];
const double DENDRO_356 =
    DENDRO_102 * DENDRO_339 * DENDRO_341 -
    DENDRO_120 * DENDRO_245 * grad_1_gt3[pp] - DENDRO_146 * DENDRO_344 +
    DENDRO_162 * (DENDRO_327 + DENDRO_328) +
    DENDRO_162 * (DENDRO_330 + 1.0 * DENDRO_331) +
    DENDRO_162 * (DENDRO_280 * DENDRO_92 + DENDRO_326) +
    DENDRO_169 * (DENDRO_322 + DENDRO_324) +
    DENDRO_169 * (DENDRO_335 + DENDRO_336) +
    DENDRO_169 * (DENDRO_102 * grad_2_gt3[pp] + DENDRO_337) -
    DENDRO_184 * (DENDRO_306 + DENDRO_308) -
    DENDRO_184 * (-1.0 * DENDRO_314 - DENDRO_316) -
    DENDRO_184 * (DENDRO_102 * DENDRO_311 + DENDRO_313) -
    DENDRO_184 * (DENDRO_260 * DENDRO_311 + DENDRO_310) +
    DENDRO_186 * (DENDRO_320 - DENDRO_321) +
    DENDRO_186 * (DENDRO_323 + 1.0 * DENDRO_324) +
    DENDRO_186 * (DENDRO_263 * DENDRO_92 - DENDRO_318) -
    DENDRO_229 * (DENDRO_219 * DENDRO_301 +
                  DENDRO_222 * (DENDRO_302 + DENDRO_303 + DENDRO_304) +
                  DENDRO_227 * DENDRO_305 + DENDRO_299) +
    DENDRO_256 * grad_1_gt3[pp] - DENDRO_260 * DENDRO_346 +
    DENDRO_273 * grad_0_gt3[pp] - DENDRO_277 * DENDRO_347 +
    DENDRO_288 * grad_2_gt3[pp] + DENDRO_296 * gt3[pp] +
    DENDRO_334 * (DENDRO_329 + DENDRO_331) +
    DENDRO_334 * (DENDRO_332 + DENDRO_333) +
    DENDRO_334 * (DENDRO_277 * grad_2_gt3[pp] + DENDRO_338) + DENDRO_355;
const double DENDRO_357 = DENDRO_86 * chi[pp];
const double DENDRO_358 = DENDRO_292 * DENDRO_73;
const double DENDRO_359 = DENDRO_78 * grad2_0_1_gt0[pp];
const double DENDRO_360 = DENDRO_80 * grad2_1_2_gt0[pp];
const double DENDRO_361 = DENDRO_260 * grad_1_gt0[pp];
const double DENDRO_362 = DENDRO_133 * grad_2_gt0[pp];
const double DENDRO_363 = DENDRO_128 * DENDRO_234 * (-DENDRO_240 - DENDRO_349);
const double DENDRO_364 = DENDRO_115 + DENDRO_159;
const double DENDRO_365 = -DENDRO_147;
const double DENDRO_366 =
    DENDRO_139 * DENDRO_341 * (DENDRO_141 + DENDRO_343 + DENDRO_365);
const double DENDRO_367 = DENDRO_142 + DENDRO_148 + DENDRO_365;
const double DENDRO_368 = DENDRO_154 * DENDRO_252 * (DENDRO_246 + DENDRO_247);
const double DENDRO_369 = DENDRO_134 + DENDRO_200;
const double DENDRO_370 = DENDRO_133 * DENDRO_345;
const double DENDRO_371 = DENDRO_135 * DENDRO_260;
const double DENDRO_372 = DENDRO_251 * grad_0_gt3[pp];
const double DENDRO_373 = DENDRO_234 * grad_1_gt0[pp] + DENDRO_372;
const double DENDRO_374 = DENDRO_260 * grad_0_gt0[pp];
const double DENDRO_375 = DENDRO_268 * grad_1_gt0[pp];
const double DENDRO_376 = DENDRO_133 * grad_0_gt0[pp];
const double DENDRO_377 = DENDRO_268 * grad_2_gt0[pp];
const double DENDRO_378 = DENDRO_139 * grad_0_gt3[pp];
const double DENDRO_379 = 0.25 * DENDRO_378;
const double DENDRO_380 = 0.5 * DENDRO_99;
const double DENDRO_381 = DENDRO_234 * DENDRO_380 + DENDRO_379;
const double DENDRO_382 = DENDRO_283 * grad_0_gt5[pp];
const double DENDRO_383 = 0.25 * DENDRO_374;
const double DENDRO_384 = 0.25 * DENDRO_376;
const double DENDRO_385 = DENDRO_277 * grad_0_gt5[pp];
const double DENDRO_386 = 0.25 * DENDRO_385;
const double DENDRO_387 = 0.5 * DENDRO_94;
const double DENDRO_388 = DENDRO_251 * DENDRO_92;
const double DENDRO_389 =
    DENDRO_173 * (DENDRO_139 * grad_1_gt0[pp] + DENDRO_388);
const double DENDRO_390 = DENDRO_180 * DENDRO_283;
const double DENDRO_391 = DENDRO_139 * DENDRO_241;
const double DENDRO_392 = DENDRO_234 * DENDRO_92;
const double DENDRO_393 = 0.25 * DENDRO_392;
const double DENDRO_394 = -DENDRO_393;
const double DENDRO_395 = DENDRO_116 * DENDRO_277;
const double DENDRO_396 = DENDRO_180 * DENDRO_94;
const double DENDRO_397 = -0.25 * DENDRO_396;
const double DENDRO_398 = 0.5 * DENDRO_248;
const double DENDRO_399 = DENDRO_139 * DENDRO_398;
const double DENDRO_400 = DENDRO_184 * (DENDRO_251 * DENDRO_99 + DENDRO_399);
const double DENDRO_401 = DENDRO_234 * DENDRO_398;
const double DENDRO_402 = -2 * DENDRO_241 * DENDRO_251 + DENDRO_401;
const double DENDRO_403 = 0.5 * DENDRO_201;
const double DENDRO_404 = DENDRO_277 * DENDRO_403;
const double DENDRO_405 = DENDRO_201 * DENDRO_387;
const double DENDRO_406 = -grad2_0_0_chi[pp];
const double DENDRO_407 = DENDRO_216 * DENDRO_249;
const double DENDRO_408 = DENDRO_248 * DENDRO_28;
const double DENDRO_409 = DENDRO_201 * DENDRO_214;
const double DENDRO_410 = DENDRO_220 * DENDRO_248 + DENDRO_250;
const double DENDRO_411 =
    DENDRO_201 * DENDRO_223 + DENDRO_214 * DENDRO_249 + DENDRO_248 * DENDRO_40;
const double DENDRO_412 =
    -DENDRO_105 * DENDRO_361 - DENDRO_120 * DENDRO_269 * grad_0_gt0[pp] -
    DENDRO_128 * DENDRO_277 * DENDRO_367 -
    DENDRO_154 * DENDRO_284 * DENDRO_369 + DENDRO_162 * DENDRO_402 +
    DENDRO_162 * (1.0 * DENDRO_375 + DENDRO_383) +
    DENDRO_162 * (DENDRO_283 * DENDRO_99 + DENDRO_404) -
    DENDRO_173 * (DENDRO_376 + DENDRO_377) -
    DENDRO_173 * (DENDRO_382 + DENDRO_94 * grad_2_gt0[pp]) -
    DENDRO_184 * (1.0 * DENDRO_377 + DENDRO_384) -
    DENDRO_184 * (-2 * DENDRO_116 * DENDRO_283 + DENDRO_405) +
    DENDRO_186 * DENDRO_381 +
    DENDRO_186 * (DENDRO_386 + DENDRO_387 * DENDRO_99) +
    DENDRO_186 * (-1.0 * DENDRO_391 - DENDRO_394) +
    DENDRO_186 * (-1.0 * DENDRO_395 - DENDRO_397) +
    DENDRO_186 * (DENDRO_133 * DENDRO_247 + DENDRO_371) +
    DENDRO_186 * (DENDRO_200 * DENDRO_260 + DENDRO_370) -
    DENDRO_229 *
        (DENDRO_219 * (DENDRO_407 + DENDRO_408 + DENDRO_409) +
         DENDRO_222 * DENDRO_410 + DENDRO_227 * DENDRO_411 + DENDRO_406) +
    DENDRO_256 * grad_1_gt0[pp] + DENDRO_273 * grad_0_gt0[pp] +
    DENDRO_288 * grad_2_gt0[pp] + DENDRO_296 * gt0[pp] +
    DENDRO_334 * DENDRO_373 + DENDRO_334 * (DENDRO_374 + DENDRO_375) +
    DENDRO_334 * (DENDRO_277 * grad_2_gt0[pp] + DENDRO_390) +
    DENDRO_341 * DENDRO_364 * DENDRO_94 + DENDRO_348 * grad_0_Gt1[pp] -
    DENDRO_354 * DENDRO_362 - DENDRO_358 - DENDRO_359 - DENDRO_360 -
    DENDRO_363 - DENDRO_366 - DENDRO_368 - DENDRO_389 - DENDRO_400 +
    DENDRO_71 * grad_0_Gt2[pp] + DENDRO_83 * grad2_0_2_gt0[pp] +
    DENDRO_85 * grad2_0_0_gt0[pp] + DENDRO_87 * grad2_1_1_gt0[pp] +
    DENDRO_89 * grad2_2_2_gt0[pp] + 4 * grad_0_Gt0[pp] * gt0[pp];
const double DENDRO_413 = DENDRO_84 * chi[pp];
const double DENDRO_414 = DENDRO_125 * grad_1_gt0[pp];
const double DENDRO_415 = DENDRO_180 * DENDRO_234;
const double DENDRO_416 = DENDRO_102 * grad_2_gt0[pp];
const double DENDRO_417 = 0.25 * DENDRO_170;
const double DENDRO_418 = -DENDRO_116 * DENDRO_118;
const double DENDRO_419 = DENDRO_156 * DENDRO_380 + 0.25 * DENDRO_189;
const double DENDRO_420 = DENDRO_180 * DENDRO_260;
const double DENDRO_421 = 0.25 * DENDRO_420;
const double DENDRO_422 = DENDRO_234 * DENDRO_325;
const double DENDRO_423 = -DENDRO_125 * DENDRO_317;
const double DENDRO_424 = DENDRO_422 + DENDRO_423;
const double DENDRO_425 = DENDRO_201 * DENDRO_268;
const double DENDRO_426 = DENDRO_139 * DENDRO_345 + DENDRO_181 * DENDRO_251;
const double DENDRO_427 = DENDRO_135 * DENDRO_94;
const double DENDRO_428 = 0.25 * DENDRO_139;
const double DENDRO_429 = DENDRO_108 * DENDRO_251 + DENDRO_428 * DENDRO_99;
const double DENDRO_430 = DENDRO_106 * DENDRO_283;
const double DENDRO_431 = -DENDRO_116 * DENDRO_387;
const double DENDRO_432 = DENDRO_133 * DENDRO_135;
const double DENDRO_433 = DENDRO_152 * DENDRO_249;
const double DENDRO_434 = DENDRO_133 * DENDRO_403 + DENDRO_433;
const double DENDRO_435 = DENDRO_428 * DENDRO_92;
const double DENDRO_436 = 0.25 * DENDRO_180;
const double DENDRO_437 = DENDRO_139 * DENDRO_436 + DENDRO_156 * DENDRO_247;
const double DENDRO_438 = DENDRO_156 * DENDRO_241;
const double DENDRO_439 = DENDRO_260 * grad_0_gt5[pp];
const double DENDRO_440 = DENDRO_152 * DENDRO_247;
const double DENDRO_441 = 0.25 * DENDRO_439 + DENDRO_440;
const double DENDRO_442 = DENDRO_118 * DENDRO_380;
const double DENDRO_443 = DENDRO_234 * grad_1_gt5[pp];
const double DENDRO_444 = 0.25 * DENDRO_443;
const double DENDRO_445 = DENDRO_125 * DENDRO_99;
const double DENDRO_446 = 0.25 * DENDRO_445;
const double DENDRO_447 = DENDRO_156 * DENDRO_238;
const double DENDRO_448 = DENDRO_133 * DENDRO_436 + DENDRO_440;
const double DENDRO_449 = 0.25 * DENDRO_277;
const double DENDRO_450 = DENDRO_449 * grad_2_gt5[pp];
const double DENDRO_451 = DENDRO_116 * DENDRO_319;
const double DENDRO_452 = -DENDRO_451;
const double DENDRO_453 = DENDRO_118 * DENDRO_181;
const double DENDRO_454 = DENDRO_125 * DENDRO_398;
const double DENDRO_455 = DENDRO_193 * DENDRO_251 - 0.5 * DENDRO_391;
const double DENDRO_456 = 0.5 * DENDRO_260;
const double DENDRO_457 = DENDRO_201 * DENDRO_456;
const double DENDRO_458 = 0.25 * DENDRO_146;
const double DENDRO_459 = DENDRO_458 * grad_0_gt0[pp];
const double DENDRO_460 = DENDRO_457 + DENDRO_459;
const double DENDRO_461 = DENDRO_181 * DENDRO_268 + DENDRO_370;
const double DENDRO_462 = DENDRO_108 * DENDRO_283;
const double DENDRO_463 = 0.25 * DENDRO_99;
const double DENDRO_464 = DENDRO_462 + DENDRO_463 * DENDRO_94;
const double DENDRO_465 = DENDRO_102 * DENDRO_99;
const double DENDRO_466 = 1.0 * DENDRO_104;
const double DENDRO_467 = -grad2_0_2_chi[pp];
const double DENDRO_468 = DENDRO_214 * grad_0_gt5[pp];
const double DENDRO_469 = DENDRO_216 * grad_2_gt0[pp];
const double DENDRO_470 = DENDRO_28 * DENDRO_92;
const double DENDRO_471 = 0.5 * DENDRO_219;
const double DENDRO_472 = DENDRO_138 + DENDRO_220 * DENDRO_92;
const double DENDRO_473 = 0.5 * DENDRO_222;
const double DENDRO_474 = DENDRO_223 * grad_0_gt5[pp];
const double DENDRO_475 = DENDRO_214 * grad_2_gt0[pp];
const double DENDRO_476 = DENDRO_40 * DENDRO_92;
const double DENDRO_477 = 0.5 * DENDRO_227;
const double DENDRO_478 = 2.0 * gt2[pp];
const double DENDRO_479 = 2.0 * gt4[pp];
const double DENDRO_480 = 2.0 * gt1[pp];
const double DENDRO_481 = DENDRO_291 * DENDRO_73;
const double DENDRO_482 = DENDRO_78 * grad2_0_1_gt2[pp];
const double DENDRO_483 = DENDRO_80 * grad2_1_2_gt2[pp];
const double DENDRO_484 = DENDRO_76 * gt2[pp];
const double DENDRO_485 =
    -DENDRO_229 *
        (DENDRO_467 + DENDRO_471 * (DENDRO_468 + DENDRO_469 + DENDRO_470) +
         DENDRO_472 * DENDRO_473 +
         DENDRO_477 * (DENDRO_474 + DENDRO_475 + DENDRO_476)) +
    DENDRO_256 * grad_1_gt2[pp] + DENDRO_273 * grad_0_gt2[pp] +
    DENDRO_288 * grad_2_gt2[pp] + DENDRO_295 * DENDRO_484 +
    DENDRO_478 * grad_0_Gt0[pp] + DENDRO_478 * grad_2_Gt2[pp] +
    DENDRO_479 * grad_0_Gt1[pp] + DENDRO_480 * grad_2_Gt1[pp] - DENDRO_481 -
    DENDRO_482 - DENDRO_483 + DENDRO_83 * grad2_0_2_gt2[pp] +
    DENDRO_85 * grad2_0_0_gt2[pp] + DENDRO_87 * grad2_1_1_gt2[pp] +
    DENDRO_89 * grad2_2_2_gt2[pp] + 2.0 * grad_0_Gt2[pp] * gt5[pp] +
    2.0 * grad_2_Gt0[pp] * gt0[pp];
const double DENDRO_486 =
    -DENDRO_128 * (0.5 * DENDRO_309 + DENDRO_421) -
    DENDRO_128 * (DENDRO_350 + DENDRO_424) -
    DENDRO_137 * (0.5 * DENDRO_376 + DENDRO_425) -
    DENDRO_137 * (DENDRO_399 + DENDRO_426) -
    DENDRO_137 * (DENDRO_113 * DENDRO_283 + DENDRO_405 + DENDRO_427) +
    DENDRO_161 * (DENDRO_378 + DENDRO_414 + DENDRO_415) +
    DENDRO_161 * (DENDRO_385 + DENDRO_396 + DENDRO_416) +
    DENDRO_162 * (DENDRO_370 + DENDRO_460) +
    DENDRO_162 * (DENDRO_454 + DENDRO_455) +
    DENDRO_162 * (DENDRO_459 + DENDRO_461) +
    DENDRO_162 * (DENDRO_201 * DENDRO_319 + DENDRO_464) -
    DENDRO_173 * (DENDRO_118 * grad_2_gt0[pp] + DENDRO_95) -
    DENDRO_184 * (DENDRO_432 + DENDRO_434) -
    DENDRO_184 * (DENDRO_435 + DENDRO_437) -
    DENDRO_184 * (DENDRO_156 * DENDRO_248 + DENDRO_429) -
    DENDRO_184 * (DENDRO_113 * DENDRO_268 + DENDRO_432 + DENDRO_433) -
    DENDRO_184 * (DENDRO_118 * DENDRO_201 + DENDRO_430 + DENDRO_431) +
    DENDRO_186 * (DENDRO_188 + DENDRO_441) +
    DENDRO_186 * (DENDRO_188 + DENDRO_448) +
    DENDRO_186 * (DENDRO_160 + DENDRO_164 + DENDRO_442) +
    DENDRO_186 * (0.5 * DENDRO_194 + DENDRO_196 - DENDRO_438) +
    DENDRO_186 * (DENDRO_444 + DENDRO_446 + DENDRO_447) +
    DENDRO_186 * (DENDRO_450 + DENDRO_452 + DENDRO_453) -
    DENDRO_341 * (1.0 * DENDRO_171 + DENDRO_417) -
    DENDRO_341 * (0.5 * DENDRO_190 + DENDRO_419) -
    DENDRO_341 * (DENDRO_113 * DENDRO_118 + DENDRO_183 + DENDRO_418) -
    DENDRO_466 * (DENDRO_312 + DENDRO_315 + DENDRO_465) + DENDRO_485;
const double DENDRO_487 = 3 * chi[pp];
const double DENDRO_488 = DENDRO_487 * DENDRO_82;
const double DENDRO_489 = DENDRO_133 * grad_0_gt3[pp];
const double DENDRO_490 = DENDRO_309 + DENDRO_489;
const double DENDRO_491 = DENDRO_94 * grad_2_gt3[pp];
const double DENDRO_492 = DENDRO_312 + DENDRO_491;
const double DENDRO_493 = 0.25 * DENDRO_165;
const double DENDRO_494 = -DENDRO_111 * DENDRO_118;
const double DENDRO_495 = DENDRO_152 * DENDRO_311 + 0.25 * DENDRO_198;
const double DENDRO_496 = DENDRO_193 * DENDRO_244;
const double DENDRO_497 = DENDRO_181 * DENDRO_263;
const double DENDRO_498 = 0.25 * DENDRO_335 + DENDRO_497;
const double DENDRO_499 = DENDRO_102 * DENDRO_127;
const double DENDRO_500 = 0.25 * DENDRO_415;
const double DENDRO_501 = DENDRO_133 * DENDRO_398;
const double DENDRO_502 = DENDRO_457 + DENDRO_501;
const double DENDRO_503 = DENDRO_152 * DENDRO_248 + 0.5 * DENDRO_202;
const double DENDRO_504 = DENDRO_133 * DENDRO_92;
const double DENDRO_505 = 0.25 * DENDRO_504;
const double DENDRO_506 = DENDRO_118 * DENDRO_311 + DENDRO_160;
const double DENDRO_507 = DENDRO_179 + DENDRO_447;
const double DENDRO_508 = DENDRO_125 * DENDRO_436;
const double DENDRO_509 = DENDRO_111 * DENDRO_387;
const double DENDRO_510 = DENDRO_450 - DENDRO_509;
const double DENDRO_511 = DENDRO_106 * DENDRO_280;
const double DENDRO_512 = -DENDRO_111 * DENDRO_319 + DENDRO_511;
const double DENDRO_513 = DENDRO_113 * DENDRO_263 + DENDRO_458 * DENDRO_92;
const double DENDRO_514 = DENDRO_156 * DENDRO_236;
const double DENDRO_515 = 0.25 * DENDRO_353 + DENDRO_514;
const double DENDRO_516 = DENDRO_125 * DENDRO_325;
const double DENDRO_517 = DENDRO_458 * DENDRO_99;
const double DENDRO_518 = DENDRO_146 * DENDRO_436 + DENDRO_152 * DENDRO_238;
const double DENDRO_519 = -DENDRO_133 * DENDRO_317;
const double DENDRO_520 = DENDRO_201 * DENDRO_263 + 0.5 * DENDRO_306;
const double DENDRO_521 = DENDRO_428 * grad_1_gt3[pp];
const double DENDRO_522 = DENDRO_350 + DENDRO_521;
const double DENDRO_523 = DENDRO_181 * DENDRO_244;
const double DENDRO_524 = 0.25 * DENDRO_92;
const double DENDRO_525 = DENDRO_113 * DENDRO_280;
const double DENDRO_526 = DENDRO_102 * DENDRO_524 + DENDRO_525;
const double DENDRO_527 = DENDRO_92 * DENDRO_94;
const double DENDRO_528 = DENDRO_385 + DENDRO_527;
const double DENDRO_529 = 1.0 * DENDRO_96;
const double DENDRO_530 = -grad2_1_2_chi[pp];
const double DENDRO_531 = DENDRO_214 * grad_1_gt5[pp] + DENDRO_216 * DENDRO_99 +
                          DENDRO_28 * grad_2_gt3[pp];
const double DENDRO_532 = DENDRO_220 * grad_2_gt3[pp];
const double DENDRO_533 = DENDRO_223 * grad_1_gt5[pp];
const double DENDRO_534 = DENDRO_40 * grad_2_gt3[pp];
const double DENDRO_535 = DENDRO_214 * DENDRO_99;
const double DENDRO_536 = DENDRO_76 * gt4[pp];
const double DENDRO_537 = 2.0 * grad_1_Gt0[pp];
const double DENDRO_538 = 2.0 * grad_1_Gt2[pp];
const double DENDRO_539 = 2.0 * gt3[pp];
const double DENDRO_540 = DENDRO_73 * grad_1_chi[pp];
const double DENDRO_541 =
    DENDRO_479 * grad_1_Gt1[pp] + DENDRO_479 * grad_2_Gt2[pp] +
    DENDRO_480 * grad_2_Gt0[pp] + DENDRO_537 * gt2[pp] + DENDRO_538 * gt5[pp] +
    DENDRO_539 * grad_2_Gt1[pp] - DENDRO_540 * grad_2_chi[pp] -
    DENDRO_78 * grad2_0_1_gt4[pp] - DENDRO_80 * grad2_1_2_gt4[pp] +
    DENDRO_83 * grad2_0_2_gt4[pp] + DENDRO_85 * grad2_0_0_gt4[pp] +
    DENDRO_87 * grad2_1_1_gt4[pp] + DENDRO_89 * grad2_2_2_gt4[pp];
const double DENDRO_542 =
    -DENDRO_229 *
        (DENDRO_471 * DENDRO_531 + DENDRO_473 * (DENDRO_124 + DENDRO_532) +
         DENDRO_477 * (DENDRO_533 + DENDRO_534 + DENDRO_535) + DENDRO_530) +
    DENDRO_256 * grad_1_gt4[pp] + DENDRO_273 * grad_0_gt4[pp] +
    DENDRO_288 * grad_2_gt4[pp] + DENDRO_295 * DENDRO_536 + DENDRO_541;
const double DENDRO_543 =
    -DENDRO_128 * (-DENDRO_318 + DENDRO_498) -
    DENDRO_128 * (0.5 * DENDRO_322 + DENDRO_496) -
    DENDRO_128 * (DENDRO_108 * DENDRO_280 + DENDRO_320 + DENDRO_499) -
    DENDRO_137 * (DENDRO_370 + DENDRO_502) -
    DENDRO_137 * (DENDRO_139 * DENDRO_238 + DENDRO_500) +
    DENDRO_161 * (DENDRO_315 + DENDRO_492) +
    DENDRO_161 * (DENDRO_420 + DENDRO_490) +
    DENDRO_162 * (DENDRO_422 + DENDRO_522) +
    DENDRO_162 * (DENDRO_519 + DENDRO_520) +
    DENDRO_162 * (DENDRO_522 + DENDRO_523) +
    DENDRO_162 * (DENDRO_193 * DENDRO_387 + DENDRO_526) +
    DENDRO_169 * (DENDRO_103 + DENDRO_118 * grad_2_gt3[pp]) -
    DENDRO_184 * (DENDRO_164 + DENDRO_506) -
    DENDRO_184 * (DENDRO_204 + DENDRO_503) -
    DENDRO_184 * (DENDRO_441 + DENDRO_505) -
    DENDRO_184 * (DENDRO_444 + DENDRO_507) -
    DENDRO_184 * (DENDRO_453 + DENDRO_510) -
    DENDRO_184 * (DENDRO_507 + DENDRO_508) +
    DENDRO_186 * (DENDRO_515 + DENDRO_516) +
    DENDRO_186 * (DENDRO_517 + DENDRO_518) +
    DENDRO_186 * (DENDRO_108 * DENDRO_244 + DENDRO_515) +
    DENDRO_186 * (DENDRO_118 * DENDRO_193 + DENDRO_512) +
    DENDRO_186 * (-DENDRO_152 * DENDRO_241 + DENDRO_513) -
    DENDRO_341 * (1.0 * DENDRO_166 + DENDRO_493) -
    DENDRO_341 * (0.5 * DENDRO_199 + DENDRO_495) -
    DENDRO_341 * (DENDRO_108 * DENDRO_118 + DENDRO_185 + DENDRO_494) -
    DENDRO_529 * (DENDRO_396 + DENDRO_528) + DENDRO_542;
const double DENDRO_544 = DENDRO_40 * DENDRO_76;
const double DENDRO_545 = DENDRO_487 * DENDRO_544;
const double DENDRO_546 = DENDRO_178 + DENDRO_443 + DENDRO_445;
const double DENDRO_547 = DENDRO_341 * (-DENDRO_206 + DENDRO_419);
const double DENDRO_548 = 0.25 * DENDRO_465;
const double DENDRO_549 = DENDRO_128 * (DENDRO_351 + DENDRO_424);
const double DENDRO_550 = DENDRO_137 * (0.5 * DENDRO_388 + DENDRO_426);
const double DENDRO_551 = DENDRO_184 * (-DENDRO_111 * DENDRO_251 + DENDRO_437);
const double DENDRO_552 = DENDRO_159 * DENDRO_94 + DENDRO_430;
const double DENDRO_553 = DENDRO_184 * (DENDRO_429 + DENDRO_435);
const double DENDRO_554 = DENDRO_205 * DENDRO_234;
const double DENDRO_555 =
    -0.5 * DENDRO_139 * DENDRO_193 + DENDRO_438 + DENDRO_554;
const double DENDRO_556 = DENDRO_164 + DENDRO_450;
const double DENDRO_557 = -DENDRO_116 * DENDRO_456;
const double DENDRO_558 = DENDRO_393 + DENDRO_455;
const double DENDRO_559 = DENDRO_268 * DENDRO_380;
const double DENDRO_560 = 0.25 * DENDRO_416 + DENDRO_462;
const double DENDRO_561 = 0.25 * DENDRO_414;
const double DENDRO_562 = DENDRO_192 * DENDRO_251;
const double DENDRO_563 = DENDRO_500 + DENDRO_561 + DENDRO_562;
const double DENDRO_564 =
    -DENDRO_128 * (0.5 * DENDRO_312 + DENDRO_548) -
    DENDRO_137 * (1.0 * DENDRO_382 + DENDRO_427) -
    DENDRO_137 * (DENDRO_200 * DENDRO_268 + DENDRO_384 + DENDRO_425) +
    DENDRO_162 * DENDRO_558 + DENDRO_162 * DENDRO_563 +
    DENDRO_162 * (DENDRO_371 + DENDRO_461) +
    DENDRO_162 * (DENDRO_386 + DENDRO_464) +
    DENDRO_162 * (DENDRO_386 + DENDRO_560) +
    DENDRO_162 * (DENDRO_460 + DENDRO_559) + DENDRO_168 * DENDRO_546 +
    DENDRO_168 * (DENDRO_187 + DENDRO_203 + DENDRO_439) -
    DENDRO_173 * (DENDRO_268 * grad_0_gt5[pp] + DENDRO_362) -
    DENDRO_184 * (DENDRO_431 + DENDRO_552) -
    DENDRO_184 * (-DENDRO_116 * DENDRO_268 + DENDRO_434) -
    DENDRO_184 * (DENDRO_118 * DENDRO_200 + DENDRO_552) -
    DENDRO_186 * DENDRO_555 + DENDRO_186 * (DENDRO_442 + DENDRO_556) +
    DENDRO_186 * (DENDRO_448 + DENDRO_557) +
    DENDRO_186 * (DENDRO_452 + DENDRO_556) -
    DENDRO_341 * (0.5 * DENDRO_174 + DENDRO_418) -
    DENDRO_341 * (DENDRO_152 * DENDRO_200 + DENDRO_211 + DENDRO_417) -
    DENDRO_466 * (DENDRO_307 + DENDRO_309 + DENDRO_420) + DENDRO_485 -
    DENDRO_547 - DENDRO_549 - DENDRO_550 - DENDRO_551 - DENDRO_553;
const double DENDRO_565 = 1.0 * DENDRO_337;
const double DENDRO_566 = 0.5 * DENDRO_336;
const double DENDRO_567 = 0.25 * DENDRO_527;
const double DENDRO_568 = DENDRO_116 * DENDRO_263;
const double DENDRO_569 = DENDRO_514 + DENDRO_516;
const double DENDRO_570 = 0.25 * DENDRO_103;
const double DENDRO_571 = DENDRO_350 + DENDRO_351;
const double DENDRO_572 = DENDRO_200 * DENDRO_263;
const double DENDRO_573 = 0.25 * DENDRO_489 + DENDRO_572;
const double DENDRO_574 = DENDRO_244 * DENDRO_311 + DENDRO_521;
const double DENDRO_575 = 0.25 * DENDRO_491 + DENDRO_525;
const double DENDRO_576 = DENDRO_187 + DENDRO_504;
const double DENDRO_577 = 1.0 * DENDRO_172;
const double DENDRO_578 = DENDRO_378 + DENDRO_392;
const double DENDRO_579 = DENDRO_178 + DENDRO_195;
const double DENDRO_580 =
    -DENDRO_184 * (DENDRO_447 + DENDRO_508 - DENDRO_554) -
    DENDRO_341 * (DENDRO_156 * DENDRO_192 + DENDRO_209 + DENDRO_493) -
    DENDRO_529 * (DENDRO_415 + DENDRO_578) -
    DENDRO_577 * (DENDRO_443 + DENDRO_579);
const double DENDRO_581 =
    -DENDRO_128 * (DENDRO_498 + DENDRO_566) -
    DENDRO_128 * (DENDRO_499 + DENDRO_565) -
    DENDRO_128 * (DENDRO_192 * DENDRO_244 + DENDRO_323 + DENDRO_496) -
    DENDRO_137 * (DENDRO_371 + DENDRO_502) -
    DENDRO_137 * (DENDRO_113 * DENDRO_277 + DENDRO_567) +
    DENDRO_162 * (DENDRO_308 + DENDRO_520) +
    DENDRO_162 * (DENDRO_313 + DENDRO_526) +
    DENDRO_162 * (DENDRO_313 + DENDRO_575) +
    DENDRO_162 * (DENDRO_421 + DENDRO_573) +
    DENDRO_162 * (DENDRO_422 + DENDRO_574) +
    DENDRO_162 * (DENDRO_523 + DENDRO_571) +
    DENDRO_169 * (DENDRO_244 * grad_1_gt5[pp] + DENDRO_353) -
    DENDRO_184 * (DENDRO_160 + DENDRO_510) -
    DENDRO_184 * (DENDRO_450 + DENDRO_506) -
    DENDRO_184 * (DENDRO_503 + DENDRO_557) +
    DENDRO_186 * (DENDRO_512 + DENDRO_570) +
    DENDRO_186 * (DENDRO_513 + DENDRO_517) +
    DENDRO_186 * (DENDRO_518 - DENDRO_568) +
    DENDRO_186 * (-DENDRO_111 * DENDRO_244 + DENDRO_569) +
    DENDRO_186 * (DENDRO_118 * DENDRO_192 + DENDRO_511 + DENDRO_570) -
    DENDRO_341 * (0.5 * DENDRO_176 + DENDRO_494) -
    DENDRO_341 * (-DENDRO_208 + DENDRO_495) + DENDRO_542 -
    DENDRO_577 * (DENDRO_439 + DENDRO_576) + DENDRO_580;
const double DENDRO_582 = DENDRO_451 + DENDRO_509;
const double DENDRO_583 = 0.25 * DENDRO_332;
const double DENDRO_584 = -DENDRO_241 * DENDRO_244;
const double DENDRO_585 = DENDRO_127 * DENDRO_277 + DENDRO_280 * DENDRO_380;
const double DENDRO_586 = DENDRO_248 * DENDRO_268;
const double DENDRO_587 = DENDRO_234 * DENDRO_345;
const double DENDRO_588 = DENDRO_135 * DENDRO_277 + DENDRO_283 * DENDRO_311;
const double DENDRO_589 = DENDRO_111 * DENDRO_283 + 0.5 * DENDRO_395;
const double DENDRO_590 = DENDRO_459 + DENDRO_501;
const double DENDRO_591 = DENDRO_268 * DENDRO_311 + DENDRO_371;
const double DENDRO_592 = DENDRO_234 * DENDRO_463;
const double DENDRO_593 = DENDRO_116 * DENDRO_280 + 0.5 * DENDRO_314;
const double DENDRO_594 = DENDRO_244 * DENDRO_380;
const double DENDRO_595 = DENDRO_260 * DENDRO_524 + DENDRO_572;
const double DENDRO_596 = -DENDRO_234 * DENDRO_317;
const double DENDRO_597 = DENDRO_236 * DENDRO_251;
const double DENDRO_598 = DENDRO_192 * DENDRO_283 + DENDRO_449 * DENDRO_99;
const double DENDRO_599 = 0.25 * DENDRO_361;
const double DENDRO_600 = DENDRO_249 * DENDRO_263;
const double DENDRO_601 = DENDRO_260 * DENDRO_398 + DENDRO_600;
const double DENDRO_602 = DENDRO_277 * DENDRO_436;
const double DENDRO_603 = DENDRO_200 * DENDRO_280 + DENDRO_449 * DENDRO_92;
const double DENDRO_604 = 1.0 * DENDRO_340;
const double DENDRO_605 = -grad2_0_1_chi[pp];
const double DENDRO_606 = DENDRO_28 * grad_0_gt3[pp];
const double DENDRO_607 = DENDRO_216 * grad_1_gt0[pp];
const double DENDRO_608 = DENDRO_180 * DENDRO_214;
const double DENDRO_609 = DENDRO_220 * grad_0_gt3[pp];
const double DENDRO_610 = DENDRO_40 * grad_0_gt3[pp];
const double DENDRO_611 =
    DENDRO_180 * DENDRO_223 + DENDRO_214 * grad_1_gt0[pp] + DENDRO_610;
const double DENDRO_612 = DENDRO_480 * grad_0_Gt0[pp];
const double DENDRO_613 = DENDRO_539 * grad_0_Gt1[pp];
const double DENDRO_614 = DENDRO_479 * grad_0_Gt2[pp];
const double DENDRO_615 = DENDRO_537 * gt0[pp];
const double DENDRO_616 = DENDRO_480 * grad_1_Gt1[pp];
const double DENDRO_617 = DENDRO_538 * gt2[pp];
const double DENDRO_618 = -DENDRO_540 * grad_0_chi[pp];
const double DENDRO_619 = DENDRO_83 * grad2_0_2_gt1[pp];
const double DENDRO_620 = DENDRO_85 * grad2_0_0_gt1[pp];
const double DENDRO_621 = DENDRO_87 * grad2_1_1_gt1[pp];
const double DENDRO_622 = DENDRO_89 * grad2_2_2_gt1[pp];
const double DENDRO_623 = -DENDRO_78 * grad2_0_1_gt1[pp];
const double DENDRO_624 = -DENDRO_80 * grad2_1_2_gt1[pp];
const double DENDRO_625 = DENDRO_76 * gt1[pp];
const double DENDRO_626 =
    -DENDRO_229 * (DENDRO_471 * (DENDRO_606 + DENDRO_607 + DENDRO_608) +
                   DENDRO_473 * (DENDRO_233 + DENDRO_609) +
                   DENDRO_477 * DENDRO_611 + DENDRO_605) +
    DENDRO_256 * grad_1_gt1[pp] + DENDRO_273 * grad_0_gt1[pp] +
    DENDRO_288 * grad_2_gt1[pp] + DENDRO_295 * DENDRO_625 + DENDRO_612 +
    DENDRO_613 + DENDRO_614 + DENDRO_615 + DENDRO_616 + DENDRO_617 +
    DENDRO_618 + DENDRO_619 + DENDRO_620 + DENDRO_621 + DENDRO_622 +
    DENDRO_623 + DENDRO_624;
const double DENDRO_627 =
    -DENDRO_128 * (1.0 * DENDRO_333 + DENDRO_583) -
    DENDRO_128 * (0.5 * DENDRO_338 + DENDRO_585) -
    DENDRO_128 * (DENDRO_238 * DENDRO_244 + DENDRO_330 + DENDRO_584) -
    DENDRO_137 * (0.5 * DENDRO_374 + DENDRO_586) -
    DENDRO_137 * (DENDRO_404 + DENDRO_588) -
    DENDRO_137 * (DENDRO_238 * DENDRO_251 + DENDRO_401 + DENDRO_587) +
    DENDRO_162 * (DENDRO_599 + DENDRO_601) +
    DENDRO_162 * (DENDRO_602 + DENDRO_603) +
    DENDRO_162 * (DENDRO_201 * DENDRO_280 + DENDRO_598) +
    DENDRO_162 * (DENDRO_238 * DENDRO_268 + DENDRO_599 + DENDRO_600) +
    DENDRO_162 * (DENDRO_244 * DENDRO_248 + DENDRO_596 + DENDRO_597) -
    DENDRO_184 * (DENDRO_371 + DENDRO_590) -
    DENDRO_184 * (DENDRO_459 + DENDRO_591) -
    DENDRO_184 * (0.5 * DENDRO_102 * DENDRO_201 - DENDRO_589) -
    DENDRO_184 * (DENDRO_454 + DENDRO_562 + DENDRO_592) +
    DENDRO_186 * (DENDRO_310 + DENDRO_573) +
    DENDRO_186 * (DENDRO_310 + DENDRO_595) +
    DENDRO_186 * (-DENDRO_316 - DENDRO_593) +
    DENDRO_186 * (DENDRO_423 + DENDRO_574) +
    DENDRO_186 * (DENDRO_548 + DENDRO_575) +
    DENDRO_186 * (DENDRO_571 + DENDRO_594) +
    DENDRO_334 * (DENDRO_244 * grad_1_gt0[pp] + DENDRO_352) -
    DENDRO_341 * (0.25 * DENDRO_102 * grad_0_gt5[pp] - DENDRO_582) -
    DENDRO_341 * (DENDRO_146 * DENDRO_200 + DENDRO_505) -
    DENDRO_577 * (DENDRO_414 + DENDRO_578) -
    DENDRO_577 * (DENDRO_416 + DENDRO_528) -
    DENDRO_604 * (DENDRO_445 + DENDRO_579) + DENDRO_626;
const double DENDRO_628 = DENDRO_28 * DENDRO_76;
const double DENDRO_629 = DENDRO_487 * DENDRO_628;
const double DENDRO_630 = DENDRO_582 - 0.25 * DENDRO_94 * grad_1_gt5[pp];
const double DENDRO_631 = 0.5 * DENDRO_329;
const double DENDRO_632 = DENDRO_247 * DENDRO_263;
const double DENDRO_633 = DENDRO_397 + DENDRO_589;
const double DENDRO_634 = -0.5 * DENDRO_193 * DENDRO_94 + DENDRO_593;
const double DENDRO_635 = DENDRO_351 + DENDRO_521;
const double DENDRO_636 = 0.25 * DENDRO_352 + DENDRO_597;
const double DENDRO_637 = DENDRO_379 + DENDRO_562;
const double DENDRO_638 = -DENDRO_137 * (1.0 * DENDRO_372 + DENDRO_587) +
                          DENDRO_162 * (DENDRO_596 + DENDRO_636) -
                          DENDRO_184 * (DENDRO_561 + DENDRO_637) -
                          DENDRO_184 * (DENDRO_592 + DENDRO_637) +
                          DENDRO_186 * (DENDRO_423 + DENDRO_635) -
                          DENDRO_341 * (DENDRO_139 * DENDRO_192 + DENDRO_446);
const double DENDRO_639 =
    -DENDRO_128 * (DENDRO_326 + DENDRO_585) -
    DENDRO_128 * (DENDRO_584 + DENDRO_631) -
    DENDRO_128 * (DENDRO_327 + DENDRO_583 + DENDRO_632) -
    DENDRO_137 * (0.5 * DENDRO_390 + DENDRO_588) -
    DENDRO_137 * (DENDRO_247 * DENDRO_268 + DENDRO_383 + DENDRO_586) +
    DENDRO_162 * (DENDRO_598 + DENDRO_602) +
    DENDRO_162 * (DENDRO_193 * DENDRO_283 + DENDRO_603) +
    DENDRO_162 * (-DENDRO_241 * DENDRO_268 + DENDRO_601) +
    DENDRO_162 * (DENDRO_244 * DENDRO_247 + DENDRO_636) +
    DENDRO_168 * (DENDRO_307 + DENDRO_490) +
    DENDRO_168 * (DENDRO_465 + DENDRO_492) + DENDRO_184 * DENDRO_633 -
    DENDRO_184 * (DENDRO_370 + DENDRO_591) -
    DENDRO_184 * (DENDRO_559 + DENDRO_590) -
    DENDRO_184 * (DENDRO_560 + DENDRO_567) - DENDRO_186 * DENDRO_634 +
    DENDRO_186 * (DENDRO_519 + DENDRO_595) +
    DENDRO_186 * (DENDRO_594 + DENDRO_635) +
    DENDRO_334 * (DENDRO_268 * grad_0_gt3[pp] + DENDRO_361) +
    DENDRO_341 * DENDRO_630 - DENDRO_604 * (DENDRO_203 + DENDRO_576) +
    DENDRO_626 + DENDRO_638;
const double DENDRO_640 = (1.0 / 12.0) * chi[pp];
const double DENDRO_641 = 2 * At1[pp];
const double DENDRO_642 = 2 * At2[pp];
const double DENDRO_643 = DENDRO_641 * DENDRO_76;
const double DENDRO_644 = 2 * DENDRO_76;
const double DENDRO_645 = At0[pp] * DENDRO_644;
const double DENDRO_646 = DENDRO_642 * DENDRO_76;
const double DENDRO_647 =
    DENDRO_28 * grad_0_chi[pp] + DENDRO_40 * grad_2_chi[pp];
const double DENDRO_648 = -DENDRO_42 * grad_1_chi[pp] + DENDRO_647;
const double DENDRO_649 = DENDRO_228 * DENDRO_648;
const double DENDRO_650 = 0.5 * gt0[pp];
const double DENDRO_651 = DENDRO_251 + DENDRO_649 * DENDRO_650;
const double DENDRO_652 = 12 * grad_1_alpha[pp];
const double DENDRO_653 = DENDRO_652 * DENDRO_76;
const double DENDRO_654 = DENDRO_30 * grad_0_chi[pp] -
                          DENDRO_40 * grad_1_chi[pp] +
                          DENDRO_48 * grad_2_chi[pp];
const double DENDRO_655 = -DENDRO_654;
const double DENDRO_656 = -0.5 * DENDRO_228 * DENDRO_655 * gt0[pp] + DENDRO_282;
const double DENDRO_657 = 12 * grad_2_alpha[pp];
const double DENDRO_658 = DENDRO_657 * DENDRO_76;
const double DENDRO_659 = DENDRO_408 * DENDRO_76;
const double DENDRO_660 = 1.0 * grad_0_chi[pp];
const double DENDRO_661 = DENDRO_76 * gt0[pp];
const double DENDRO_662 = -DENDRO_28 * grad_1_chi[pp] +
                          DENDRO_30 * grad_2_chi[pp] +
                          DENDRO_32 * grad_0_chi[pp];
const double DENDRO_663 = -DENDRO_662;
const double DENDRO_664 = 0.5 * DENDRO_663;
const double DENDRO_665 = DENDRO_228 * (DENDRO_660 - DENDRO_661 * DENDRO_664) +
                          DENDRO_265 * DENDRO_76 + DENDRO_266 * DENDRO_76 -
                          DENDRO_659;
const double DENDRO_666 = 12 * grad_0_alpha[pp];
const double DENDRO_667 = DENDRO_132 * DENDRO_345;
const double DENDRO_668 = DENDRO_135 * DENDRO_259;
const double DENDRO_669 = DENDRO_259 * grad_0_gt0[pp];
const double DENDRO_670 = DENDRO_267 * grad_1_gt0[pp];
const double DENDRO_671 = DENDRO_132 * grad_0_gt0[pp];
const double DENDRO_672 = DENDRO_267 * grad_2_gt0[pp];
const double DENDRO_673 = DENDRO_282 * grad_0_gt5[pp];
const double DENDRO_674 = DENDRO_159 * DENDRO_276;
const double DENDRO_675 = 0.25 * DENDRO_669;
const double DENDRO_676 = 0.25 * DENDRO_671;
const double DENDRO_677 = DENDRO_180 * DENDRO_282;
const double DENDRO_678 =
    DENDRO_26 * (-1.0 * DENDRO_125 * DENDRO_40 - 1.0 * DENDRO_234 * DENDRO_28 +
                 DENDRO_235 + DENDRO_253);
const double DENDRO_679 = 2.0 * DENDRO_678;
const double DENDRO_680 =
    DENDRO_26 * (-1.0 * DENDRO_146 * DENDRO_40 - 1.0 * DENDRO_260 * DENDRO_28 +
                 DENDRO_261 + DENDRO_270);
const double DENDRO_681 = 2.0 * DENDRO_680;
const double DENDRO_682 =
    DENDRO_26 * (-1.0 * DENDRO_102 * DENDRO_40 - 1.0 * DENDRO_277 * DENDRO_28 +
                 DENDRO_278 + DENDRO_285);
const double DENDRO_683 = 2.0 * DENDRO_682;
const double DENDRO_684 = DENDRO_228 * DENDRO_294;
const double DENDRO_685 = 3 * alpha[pp];
const double DENDRO_686 = 0.5 * gt5[pp];
const double DENDRO_687 = DENDRO_156 + DENDRO_649 * DENDRO_686;
const double DENDRO_688 = 4 * grad_1_alpha[pp];
const double DENDRO_689 = DENDRO_688 * DENDRO_76;
const double DENDRO_690 = DENDRO_151 - 0.5 * DENDRO_228 * DENDRO_663 * gt5[pp];
const double DENDRO_691 = 4 * grad_0_alpha[pp];
const double DENDRO_692 = DENDRO_691 * DENDRO_76;
const double DENDRO_693 = 1.0 * grad_2_chi[pp];
const double DENDRO_694 = DENDRO_686 * DENDRO_76;
const double DENDRO_695 = DENDRO_107 * DENDRO_76 + DENDRO_112 * DENDRO_76 -
                          DENDRO_116 * DENDRO_30 * DENDRO_76 +
                          DENDRO_228 * (-DENDRO_655 * DENDRO_694 + DENDRO_693);
const double DENDRO_696 = 4 * grad_2_alpha[pp];
const double DENDRO_697 = 0.5 * gt3[pp];
const double DENDRO_698 = DENDRO_696 * DENDRO_76;
const double DENDRO_699 = 1.0 * grad_1_chi[pp];
const double DENDRO_700 = DENDRO_697 * DENDRO_76;
const double DENDRO_701 = -DENDRO_193 * DENDRO_40 * DENDRO_76 +
                          DENDRO_228 * (-DENDRO_648 * DENDRO_700 + DENDRO_699) +
                          DENDRO_237 * DENDRO_76 + DENDRO_242 * DENDRO_76;
const double DENDRO_702 =
    DENDRO_130 * DENDRO_76 + DENDRO_131 * DENDRO_76 +
    DENDRO_228 * (-DENDRO_484 * DENDRO_663 + grad_2_chi[pp]) -
    DENDRO_28 * DENDRO_76 * DENDRO_92;
const double DENDRO_703 = 2.0 * grad_0_alpha[pp];
const double DENDRO_704 =
    DENDRO_228 * (-DENDRO_484 * DENDRO_655 + grad_0_chi[pp]) -
    DENDRO_40 * DENDRO_76 * DENDRO_92 + DENDRO_76 * DENDRO_90 +
    DENDRO_76 * DENDRO_91;
const double DENDRO_705 = 2.0 * grad_2_alpha[pp];
const double DENDRO_706 = 2.0 * grad_1_alpha[pp];
const double DENDRO_707 = DENDRO_228 * gt2[pp];
const double DENDRO_708 = DENDRO_76 * (DENDRO_139 + DENDRO_648 * DENDRO_707);
const double DENDRO_709 = -DENDRO_702 * DENDRO_703 - DENDRO_704 * DENDRO_705 +
                          DENDRO_706 * DENDRO_708 - 4 * grad2_0_2_alpha[pp];
const double DENDRO_710 = DENDRO_122 * DENDRO_76 + DENDRO_123 * DENDRO_76;
const double DENDRO_711 =
    -DENDRO_121 * DENDRO_76 -
    DENDRO_228 * (-DENDRO_536 * DENDRO_648 + grad_2_chi[pp]) + DENDRO_710;
const double DENDRO_712 =
    DENDRO_100 * DENDRO_76 +
    DENDRO_228 * (-DENDRO_536 * DENDRO_655 + grad_1_chi[pp]) -
    DENDRO_40 * DENDRO_76 * grad_2_gt3[pp] + DENDRO_76 * DENDRO_98;
const double DENDRO_713 = DENDRO_145 - DENDRO_228 * DENDRO_663 * gt4[pp];
const double DENDRO_714 = -DENDRO_703 * DENDRO_713 * DENDRO_76 -
                          DENDRO_705 * DENDRO_712 + DENDRO_706 * DENDRO_711 -
                          4 * grad2_1_2_alpha[pp];
const double DENDRO_715 =
    DENDRO_228 * (-DENDRO_625 * DENDRO_663 + grad_1_chi[pp]) +
    DENDRO_257 * DENDRO_76 + DENDRO_258 * DENDRO_76 -
    DENDRO_28 * DENDRO_76 * grad_0_gt3[pp];
const double DENDRO_716 =
    -DENDRO_180 * DENDRO_40 * DENDRO_76 +
    DENDRO_228 * (-DENDRO_625 * DENDRO_648 + grad_0_chi[pp]) +
    DENDRO_230 * DENDRO_76 - DENDRO_28 * DENDRO_76 * grad_1_gt0[pp];
const double DENDRO_717 = DENDRO_228 * gt1[pp];
const double DENDRO_718 =
    -DENDRO_703 * DENDRO_715 +
    DENDRO_705 * DENDRO_76 *
        (-DENDRO_274 - DENDRO_275 + DENDRO_610 + DENDRO_655 * DENDRO_717) -
    DENDRO_706 * DENDRO_716 - 4 * grad2_0_1_alpha[pp];
const double DENDRO_719 =
    -DENDRO_28 * (DENDRO_627 * alpha[pp] + DENDRO_718) -
    DENDRO_28 * (DENDRO_639 * alpha[pp] + DENDRO_718) +
    DENDRO_30 * (DENDRO_486 * alpha[pp] + DENDRO_709) +
    DENDRO_30 * (DENDRO_564 * alpha[pp] + DENDRO_709) +
    DENDRO_32 * (DENDRO_412 * alpha[pp] + DENDRO_651 * DENDRO_689 -
                 DENDRO_656 * DENDRO_698 - DENDRO_665 * DENDRO_691 -
                 4 * grad2_0_0_alpha[pp]) -
    DENDRO_40 * (DENDRO_543 * alpha[pp] + DENDRO_714) -
    DENDRO_40 * (DENDRO_581 * alpha[pp] + DENDRO_714) +
    DENDRO_42 *
        (DENDRO_356 * alpha[pp] - DENDRO_688 * DENDRO_701 +
         DENDRO_692 * (DENDRO_228 * DENDRO_664 * gt3[pp] + DENDRO_263) +
         DENDRO_698 * (DENDRO_228 * DENDRO_655 * DENDRO_697 + DENDRO_280) -
         4 * grad2_1_1_alpha[pp]) +
    DENDRO_48 * (DENDRO_297 * alpha[pp] + DENDRO_687 * DENDRO_689 -
                 DENDRO_690 * DENDRO_692 - DENDRO_695 * DENDRO_696 -
                 4 * grad2_2_2_alpha[pp]);
const double DENDRO_720 = DENDRO_719 * DENDRO_76;
const double DENDRO_721 = (1.0 / 3.0) * At1[pp];
const double DENDRO_722 = DENDRO_35 + DENDRO_45 - DENDRO_66;
const double DENDRO_723 =
    -At1[pp] * DENDRO_32 + At3[pp] * DENDRO_28 - DENDRO_33;
const double DENDRO_724 =
    -At1[pp] * DENDRO_30 + At3[pp] * DENDRO_40 - DENDRO_59;
const double DENDRO_725 = 6.0 * grad_2_alpha[pp];
const double DENDRO_726 = 6.0 * grad_0_alpha[pp];
const double DENDRO_727 = 6.0 * grad_1_alpha[pp];
const double DENDRO_728 = DENDRO_132 * DENDRO_92;
const double DENDRO_729 = DENDRO_145 * grad_2_gt0[pp];
const double DENDRO_730 = DENDRO_132 * DENDRO_99;
const double DENDRO_731 = DENDRO_729 + DENDRO_730;
const double DENDRO_732 = DENDRO_259 * DENDRO_317;
const double DENDRO_733 = DENDRO_276 * DENDRO_325;
const double DENDRO_734 = DENDRO_132 * DENDRO_398;
const double DENDRO_735 =
    0.25 * DENDRO_145 * grad_0_gt0[pp] + DENDRO_267 * DENDRO_380;
const double DENDRO_736 = DENDRO_667 + DENDRO_668;
const double DENDRO_737 = DENDRO_524 * DENDRO_93;
const double DENDRO_738 = DENDRO_108 * DENDRO_282;
const double DENDRO_739 = DENDRO_101 * DENDRO_135 + DENDRO_738;
const double DENDRO_740 = DENDRO_259 * DENDRO_99;
const double DENDRO_741 = DENDRO_145 * grad_1_gt0[pp] + DENDRO_740;
const double DENDRO_742 = 1.0 * DENDRO_168;
const double DENDRO_743 = DENDRO_101 * DENDRO_99;
const double DENDRO_744 = (1.0 / 3.0) * At2[pp];
const double DENDRO_745 = At2[pp] * DENDRO_28 - At4[pp] * DENDRO_42 + DENDRO_67;
const double DENDRO_746 =
    -At2[pp] * DENDRO_32 + At4[pp] * DENDRO_28 - DENDRO_57;
const double DENDRO_747 = At4[pp] * DENDRO_40 - At5[pp] * DENDRO_48 - DENDRO_37;
const double DENDRO_748 = DENDRO_93 * grad_2_gt5[pp];
const double DENDRO_749 = DENDRO_259 * grad_0_gt5[pp];
const double DENDRO_750 = DENDRO_163 * DENDRO_93;
const double DENDRO_751 = 0.25 * DENDRO_276 * grad_2_gt5[pp];
const double DENDRO_752 = DENDRO_750 + DENDRO_751;
const double DENDRO_753 = DENDRO_180 * DENDRO_259;
const double DENDRO_754 = DENDRO_106 * DENDRO_282 + DENDRO_159 * DENDRO_93;
const double DENDRO_755 = -0.5 * DENDRO_116 * DENDRO_132;
const double DENDRO_756 = -0.5 * DENDRO_116 * DENDRO_259;
const double DENDRO_757 = DENDRO_259 * DENDRO_403;
const double DENDRO_758 = 2 * At4[pp];
const double DENDRO_759 = At3[pp] * DENDRO_644;
const double DENDRO_760 = DENDRO_758 * DENDRO_76;
const double DENDRO_761 = DENDRO_228 * DENDRO_697;
const double DENDRO_762 = DENDRO_666 * DENDRO_76;
const double DENDRO_763 = DENDRO_243 * grad_2_gt3[pp];
const double DENDRO_764 = DENDRO_163 * DENDRO_276;
const double DENDRO_765 = 1.0 * DENDRO_145;
const double DENDRO_766 = 0.25 * DENDRO_740;
const double DENDRO_767 = DENDRO_243 * grad_0_gt3[pp];
const double DENDRO_768 = DENDRO_684 * DENDRO_76;
const double DENDRO_769 = (1.0 / 3.0) * At4[pp];
const double DENDRO_770 = DENDRO_101 * grad_2_gt5[pp];
const double DENDRO_771 = DENDRO_101 * DENDRO_159;
const double DENDRO_772 = DENDRO_751 + DENDRO_771;
const double DENDRO_773 = DENDRO_101 * DENDRO_163;
const double DENDRO_774 = -0.5 * DENDRO_280 * grad_0_gt5[pp] + DENDRO_764;
const double DENDRO_775 = DENDRO_117 * grad_0_gt5[pp];
const double DENDRO_776 = DENDRO_117 * grad_1_gt5[pp];
const double DENDRO_777 = DENDRO_214 * grad_2_chi[pp] +
                          DENDRO_216 * grad_0_chi[pp] +
                          DENDRO_28 * grad_1_chi[pp];
const double DENDRO_778 = DENDRO_228 * DENDRO_686;
const double DENDRO_779 = DENDRO_76 * grad_0_alpha[pp];
const double DENDRO_780 = DENDRO_220 * grad_1_chi[pp] + DENDRO_647;
const double DENDRO_781 = DENDRO_76 * grad_1_alpha[pp];
const double DENDRO_782 = DENDRO_214 * grad_0_chi[pp] +
                          DENDRO_223 * grad_2_chi[pp] +
                          DENDRO_40 * grad_1_chi[pp];
const double DENDRO_783 = DENDRO_76 * grad_2_alpha[pp];
const double DENDRO_784 = DENDRO_228 * DENDRO_650;
const double DENDRO_785 = 0.5 * grad_1_alpha[pp];
const double DENDRO_786 = 0.5 * grad_2_alpha[pp];
const double DENDRO_787 = 0.5 * grad_0_alpha[pp];
const double DENDRO_788 = DENDRO_50 * DENDRO_76;
const double DENDRO_789 = 3 * DENDRO_26;
const double DENDRO_790 = 6 * DENDRO_26;
const double DENDRO_791 = (1.0 / 3.0) * alpha[pp];
const double DENDRO_792 = (7.0 / 3.0) * DENDRO_82;
const double DENDRO_793 = (1.0 / 3.0) * DENDRO_82;
const double DENDRO_794 = (1.0 / 3.0) * DENDRO_84;
const double DENDRO_795 = 2 * DENDRO_26;
const double DENDRO_796 = DENDRO_795 * grad_0_alpha[pp];
const double DENDRO_797 = pow(DENDRO_25, -3);
const double DENDRO_798 = 4 * grad_0_K[pp];
const double DENDRO_799 = DENDRO_76 * DENDRO_791;
const double DENDRO_800 = DENDRO_795 * grad_2_alpha[pp];
const double DENDRO_801 = DENDRO_795 * grad_1_alpha[pp];
const double DENDRO_802 = 4 * grad_2_K[pp];
const double DENDRO_803 = 4 * grad_1_K[pp];
const double DENDRO_804 = 9 * DENDRO_228;
const double DENDRO_805 = DENDRO_222 * DENDRO_804;
const double DENDRO_806 =
    -2.0 * DENDRO_133 * DENDRO_60 * DENDRO_797 * alpha[pp] -
    2.0 * DENDRO_146 * DENDRO_69 * DENDRO_797 * alpha[pp] -
    2 * DENDRO_152 * DENDRO_52 * DENDRO_797 * alpha[pp] -
    2.0 / 3.0 * DENDRO_17 * DENDRO_26 * DENDRO_271 +
    DENDRO_255 * grad_1_beta0[pp] -
    2.0 * DENDRO_260 * DENDRO_63 * DENDRO_797 * alpha[pp] -
    2 * DENDRO_263 * DENDRO_46 * DENDRO_797 * alpha[pp] -
    2 * DENDRO_268 * DENDRO_38 * DENDRO_797 * alpha[pp] +
    DENDRO_272 * grad_0_beta0[pp] -
    7.0 / 3.0 * DENDRO_28 * DENDRO_76 * grad2_0_1_beta0[pp] -
    1.0 / 3.0 * DENDRO_28 * DENDRO_76 * grad2_1_1_beta1[pp] -
    1.0 / 3.0 * DENDRO_28 * DENDRO_76 * grad2_1_2_beta2[pp] +
    DENDRO_287 * grad_2_beta0[pp] + DENDRO_38 * DENDRO_796 -
    2 * DENDRO_40 * DENDRO_76 * grad2_1_2_beta0[pp] + DENDRO_60 * DENDRO_800 +
    DENDRO_63 * DENDRO_801 + DENDRO_792 * grad2_0_2_beta0[pp] +
    DENDRO_793 * grad2_1_2_beta1[pp] + DENDRO_793 * grad2_2_2_beta2[pp] +
    DENDRO_794 * grad2_0_1_beta1[pp] + DENDRO_794 * grad2_0_2_beta2[pp] +
    DENDRO_799 * (DENDRO_28 * DENDRO_803 + DENDRO_63 * DENDRO_805) +
    DENDRO_799 * (9 * DENDRO_228 * DENDRO_38 * DENDRO_76 * grad_0_chi[pp] -
                  DENDRO_32 * DENDRO_798) +
    DENDRO_799 * (9 * DENDRO_228 * DENDRO_60 * DENDRO_76 * grad_2_chi[pp] -
                  DENDRO_30 * DENDRO_802) +
    (4.0 / 3.0) * DENDRO_84 * grad2_0_0_beta0[pp] +
    DENDRO_86 * grad2_1_1_beta0[pp] + DENDRO_88 * grad2_2_2_beta0[pp] -
    beta0[pp] * grad_0_Gt0[pp] - beta1[pp] * grad_1_Gt0[pp] -
    beta2[pp] * grad_2_Gt0[pp];
const double DENDRO_807 = DENDRO_84 * grad2_0_0_beta1[pp];
const double DENDRO_808 = DENDRO_88 * grad2_2_2_beta1[pp];
const double DENDRO_809 = DENDRO_788 * grad2_0_2_beta1[pp];
const double DENDRO_810 = DENDRO_46 * DENDRO_801;
const double DENDRO_811 = (4.0 / 3.0) * DENDRO_86 * grad2_1_1_beta1[pp];
const double DENDRO_812 = DENDRO_28 * DENDRO_798;
const double DENDRO_813 = DENDRO_219 * DENDRO_804;
const double DENDRO_814 = DENDRO_40 * DENDRO_802;
const double DENDRO_815 = DENDRO_227 * DENDRO_804;
const double DENDRO_816 = (1.0 / 3.0) * DENDRO_86;
const double DENDRO_817 = DENDRO_816 * grad2_0_1_beta0[pp];
const double DENDRO_818 = DENDRO_816 * grad2_1_2_beta2[pp];
const double DENDRO_819 = DENDRO_42 * DENDRO_803 - DENDRO_46 * DENDRO_805;
const double DENDRO_820 = (1.0 / 3.0) * DENDRO_628;
const double DENDRO_821 = (1.0 / 3.0) * grad2_0_2_beta0[pp];
const double DENDRO_822 = DENDRO_0 * DENDRO_797;
const double DENDRO_823 = 2.0 * DENDRO_797 * alpha[pp];
const double DENDRO_824 = beta0[pp] * grad_0_Gt1[pp] +
                          beta1[pp] * grad_1_Gt1[pp] +
                          beta2[pp] * grad_2_Gt1[pp];
const double DENDRO_825 =
    -2.0 * DENDRO_102 * DENDRO_69 * DENDRO_797 * alpha[pp] -
    2 * DENDRO_118 * DENDRO_52 * DENDRO_797 * alpha[pp] -
    2.0 / 3.0 * DENDRO_17 * DENDRO_26 * DENDRO_286 +
    DENDRO_255 * grad_1_beta2[pp] + DENDRO_272 * grad_0_beta2[pp] -
    2.0 * DENDRO_277 * DENDRO_63 * DENDRO_797 * alpha[pp] -
    2 * DENDRO_28 * DENDRO_76 * grad2_0_1_beta2[pp] -
    2 * DENDRO_280 * DENDRO_46 * DENDRO_797 * alpha[pp] -
    2 * DENDRO_283 * DENDRO_38 * DENDRO_797 * alpha[pp] +
    DENDRO_287 * grad_2_beta2[pp] -
    1.0 / 3.0 * DENDRO_40 * DENDRO_76 * grad2_0_1_beta0[pp] -
    1.0 / 3.0 * DENDRO_40 * DENDRO_76 * grad2_1_1_beta1[pp] -
    7.0 / 3.0 * DENDRO_40 * DENDRO_76 * grad2_1_2_beta2[pp] +
    DENDRO_52 * DENDRO_800 + DENDRO_60 * DENDRO_796 -
    2.0 * DENDRO_60 * DENDRO_797 * DENDRO_94 * alpha[pp] +
    DENDRO_69 * DENDRO_801 + DENDRO_792 * grad2_0_2_beta2[pp] +
    DENDRO_793 * grad2_0_0_beta0[pp] + DENDRO_793 * grad2_0_1_beta1[pp] +
    DENDRO_799 * (DENDRO_40 * DENDRO_803 + DENDRO_69 * DENDRO_805) +
    DENDRO_799 * (9 * DENDRO_228 * DENDRO_52 * DENDRO_76 * grad_2_chi[pp] -
                  DENDRO_48 * DENDRO_802) +
    DENDRO_799 * (9 * DENDRO_228 * DENDRO_60 * DENDRO_76 * grad_0_chi[pp] -
                  DENDRO_30 * DENDRO_798) +
    DENDRO_821 * DENDRO_88 + DENDRO_84 * grad2_0_0_beta2[pp] +
    DENDRO_86 * grad2_1_1_beta2[pp] +
    (1.0 / 3.0) * DENDRO_88 * grad2_1_2_beta1[pp] +
    (4.0 / 3.0) * DENDRO_88 * grad2_2_2_beta2[pp] - beta0[pp] * grad_0_Gt2[pp] -
    beta1[pp] * grad_1_Gt2[pp] - beta2[pp] * grad_2_Gt2[pp];

// Dendro: printing variables
//--
a_rhs[pp] =
    -DENDRO_0 * K[pp] -
    DENDRO_1 * h_ssl * (-DENDRO_1 + alpha[pp]) *
        exp(-1.0 / 2.0 * (t * t) / (sig_ssl * sig_ssl)) +
    lambda[0] * (beta0[pp] * grad_0_alpha[pp] + beta1[pp] * grad_1_alpha[pp] +
                 beta2[pp] * grad_2_alpha[pp]);
//--
b_rhs0[pp]   = B0[pp] * DENDRO_2 + lambda[1] * (beta0[pp] * grad_0_beta0[pp] +
                                              beta1[pp] * grad_1_beta0[pp] +
                                              beta2[pp] * grad_2_beta0[pp]);
//--
b_rhs1[pp]   = B1[pp] * DENDRO_2 + lambda[1] * (beta0[pp] * grad_0_beta1[pp] +
                                              beta1[pp] * grad_1_beta1[pp] +
                                              beta2[pp] * grad_2_beta1[pp]);
//--
b_rhs2[pp]   = B2[pp] * DENDRO_2 + lambda[1] * (beta0[pp] * grad_0_beta2[pp] +
                                              beta1[pp] * grad_1_beta2[pp] +
                                              beta2[pp] * grad_2_beta2[pp]);
//--
gt_rhs00[pp] = -At0[pp] * DENDRO_0 + DENDRO_3 * gt0[pp] +
               DENDRO_4 * grad_0_beta1[pp] + DENDRO_5 * grad_0_beta2[pp] -
               DENDRO_6 * grad_1_beta1[pp] - DENDRO_6 * grad_2_beta2[pp] +
               beta0[pp] * grad_0_gt0[pp] + beta1[pp] * grad_1_gt0[pp] +
               beta2[pp] * grad_2_gt0[pp];
//--
gt_rhs01[pp] = -At1[pp] * DENDRO_0 + DENDRO_7 * grad_0_beta0[pp] +
               DENDRO_7 * grad_1_beta1[pp] - DENDRO_8 * gt1[pp] +
               beta0[pp] * grad_0_gt1[pp] + beta1[pp] * grad_1_gt1[pp] +
               beta2[pp] * grad_2_gt1[pp] + grad_0_beta1[pp] * gt3[pp] +
               grad_0_beta2[pp] * gt4[pp] + grad_1_beta0[pp] * gt0[pp] +
               grad_1_beta2[pp] * gt2[pp];
//--
gt_rhs02[pp] = -At2[pp] * DENDRO_0 - DENDRO_10 * gt2[pp] +
               DENDRO_9 * grad_0_beta0[pp] + DENDRO_9 * grad_2_beta2[pp] +
               beta0[pp] * grad_0_gt2[pp] + beta1[pp] * grad_1_gt2[pp] +
               beta2[pp] * grad_2_gt2[pp] + grad_0_beta1[pp] * gt4[pp] +
               grad_0_beta2[pp] * gt5[pp] + grad_2_beta0[pp] * gt0[pp] +
               grad_2_beta1[pp] * gt1[pp];
//--
gt_rhs11[pp] = -At3[pp] * DENDRO_0 - DENDRO_11 * gt3[pp] + DENDRO_12 * gt3[pp] +
               DENDRO_13 * grad_1_beta2[pp] + DENDRO_4 * grad_1_beta0[pp] -
               DENDRO_8 * gt3[pp] + beta0[pp] * grad_0_gt3[pp] +
               beta1[pp] * grad_1_gt3[pp] + beta2[pp] * grad_2_gt3[pp];
//--
gt_rhs12[pp] = -At4[pp] * DENDRO_0 - DENDRO_11 * gt4[pp] +
               DENDRO_14 * grad_1_beta1[pp] + DENDRO_14 * grad_2_beta2[pp] +
               beta0[pp] * grad_0_gt4[pp] + beta1[pp] * grad_1_gt4[pp] +
               beta2[pp] * grad_2_gt4[pp] + grad_1_beta0[pp] * gt2[pp] +
               grad_1_beta2[pp] * gt5[pp] + grad_2_beta0[pp] * gt1[pp] +
               grad_2_beta1[pp] * gt3[pp];
//--
gt_rhs22[pp] = -At5[pp] * DENDRO_0 - DENDRO_10 * gt5[pp] - DENDRO_11 * gt5[pp] +
               DENDRO_13 * grad_2_beta1[pp] + DENDRO_15 * gt5[pp] +
               DENDRO_5 * grad_2_beta0[pp] + beta0[pp] * grad_0_gt5[pp] +
               beta1[pp] * grad_1_gt5[pp] + beta2[pp] * grad_2_gt5[pp];
//--
chi_rhs[pp] =
    -BSSN_CAHD_C * DENDRO_18 * DENDRO_640 *
        (-8 * DENDRO_19 + DENDRO_27 * DENDRO_39 + DENDRO_27 * DENDRO_47 +
         DENDRO_27 * DENDRO_53 + 3 * DENDRO_297 * DENDRO_298 +
         3 * DENDRO_356 * DENDRO_357 + 3 * DENDRO_412 * DENDRO_413 +
         DENDRO_486 * DENDRO_488 + DENDRO_488 * DENDRO_564 +
         DENDRO_54 * DENDRO_61 + DENDRO_54 * DENDRO_64 + DENDRO_54 * DENDRO_70 -
         DENDRO_543 * DENDRO_545 - DENDRO_545 * DENDRO_581 -
         DENDRO_627 * DENDRO_629 - DENDRO_629 * DENDRO_639) /
        (dt * (10 * DENDRO_18 + 1)) -
    DENDRO_16 * DENDRO_17 + DENDRO_16 * K[pp] * alpha[pp] +
    beta0[pp] * grad_0_chi[pp] + beta1[pp] * grad_1_chi[pp] +
    beta2[pp] * grad_2_chi[pp];
//--
At_rhs00[pp] =
    -At0[pp] * DENDRO_10 + At0[pp] * DENDRO_3 - At0[pp] * DENDRO_8 +
    DENDRO_640 *
        (DENDRO_651 * DENDRO_653 - DENDRO_656 * DENDRO_658 -
         DENDRO_665 * DENDRO_666 +
         DENDRO_685 *
             (3.0 * DENDRO_132 * DENDRO_26 * DENDRO_48 * grad_2_gt0[pp] -
              DENDRO_162 * (1.0 * DENDRO_670 + DENDRO_675) -
              DENDRO_162 *
                  (DENDRO_276 * DENDRO_403 + 1.0 * DENDRO_282 * DENDRO_99) -
              DENDRO_184 *
                  (2 * DENDRO_116 * DENDRO_282 - DENDRO_403 * DENDRO_93) -
              DENDRO_186 * (DENDRO_391 + DENDRO_394) -
              DENDRO_186 * (DENDRO_395 + DENDRO_397) -
              DENDRO_186 * (DENDRO_132 * DENDRO_247 + DENDRO_668) -
              DENDRO_186 * (DENDRO_200 * DENDRO_259 + DENDRO_667) -
              DENDRO_186 * (DENDRO_380 * DENDRO_93 + DENDRO_674) -
              DENDRO_229 * (DENDRO_219 * DENDRO_268 + DENDRO_222 * DENDRO_251 +
                            DENDRO_227 * DENDRO_283 + DENDRO_406) +
              3.0 * DENDRO_259 * DENDRO_26 * DENDRO_42 * grad_1_gt0[pp] +
              6.0 * DENDRO_26 * DENDRO_267 * DENDRO_32 * grad_0_gt0[pp] +
              4 * DENDRO_26 * DENDRO_276 * DENDRO_367 * DENDRO_42 +
              2.0 * DENDRO_26 * DENDRO_28 * DENDRO_373 +
              4 * DENDRO_26 * DENDRO_28 * DENDRO_402 +
              4 * DENDRO_26 * DENDRO_282 * DENDRO_32 * DENDRO_369 +
              2.0 * DENDRO_26 * DENDRO_30 * (DENDRO_671 + DENDRO_672) +
              4 * DENDRO_26 * DENDRO_30 * (1.0 * DENDRO_672 + DENDRO_676) +
              2.0 * DENDRO_26 * DENDRO_30 *
                  (DENDRO_673 + DENDRO_93 * grad_2_gt0[pp]) +
              4 * DENDRO_26 * DENDRO_381 * DENDRO_40 +
              4 * DENDRO_30 * DENDRO_76 * grad2_0_2_gt0[pp] +
              2.0 * DENDRO_32 * DENDRO_76 * grad2_0_0_gt0[pp] -
              DENDRO_334 * (DENDRO_669 + DENDRO_670) -
              DENDRO_334 * (DENDRO_276 * grad_2_gt0[pp] + DENDRO_677) -
              DENDRO_341 * DENDRO_364 * DENDRO_93 - DENDRO_358 - DENDRO_359 -
              DENDRO_360 - DENDRO_363 - DENDRO_366 - DENDRO_368 - DENDRO_389 -
              DENDRO_400 + 2.0 * DENDRO_42 * DENDRO_76 * grad2_1_1_gt0[pp] +
              2.0 * DENDRO_48 * DENDRO_76 * grad2_2_2_gt0[pp] -
              DENDRO_661 * DENDRO_684 - DENDRO_679 * grad_1_gt0[pp] -
              DENDRO_681 * grad_0_gt0[pp] - DENDRO_683 * grad_2_gt0[pp] +
              4 * grad_0_Gt0[pp] * gt0[pp] + 4 * grad_0_Gt1[pp] * gt1[pp] +
              4 * grad_0_Gt2[pp] * gt2[pp]) +
         DENDRO_720 * gt0[pp] - 12 * grad2_0_0_alpha[pp]) +
    DENDRO_641 * grad_0_beta1[pp] + DENDRO_642 * grad_0_beta2[pp] -
    alpha[pp] * (-At0[pp] * K[pp] +
                 DENDRO_643 * (-At1[pp] * DENDRO_42 + DENDRO_43 + DENDRO_65) +
                 DENDRO_645 * (At1[pp] * DENDRO_28 - DENDRO_37 - DENDRO_56) +
                 DENDRO_646 *
                     (-At0[pp] * DENDRO_30 + At1[pp] * DENDRO_40 - DENDRO_58)) +
    beta0[pp] * grad_0_At0[pp] + beta1[pp] * grad_1_At0[pp] +
    beta2[pp] * grad_2_At0[pp];
//--
At_rhs01[pp] =
    At0[pp] * grad_1_beta0[pp] - At1[pp] * DENDRO_8 +
    At2[pp] * grad_1_beta2[pp] + At3[pp] * grad_0_beta1[pp] +
    At4[pp] * grad_0_beta2[pp] +
    DENDRO_640 *
        (DENDRO_625 * DENDRO_719 +
         DENDRO_685 *
             (-DENDRO_128 * (DENDRO_241 * DENDRO_243 + DENDRO_631) -
              DENDRO_128 * (-DENDRO_127 * DENDRO_276 +
                            0.5 * DENDRO_280 * DENDRO_99 - DENDRO_733) -
              DENDRO_128 *
                  (-DENDRO_259 * DENDRO_349 + DENDRO_632 + DENDRO_732) +
              DENDRO_137 * (DENDRO_135 * DENDRO_276 + DENDRO_282 * DENDRO_311 +
                            0.5 * DENDRO_677) +
              DENDRO_137 * (DENDRO_247 * DENDRO_267 + DENDRO_248 * DENDRO_267 +
                            DENDRO_675) +
              DENDRO_162 * (-DENDRO_243 * DENDRO_247 + DENDRO_636) -
              DENDRO_162 * (DENDRO_192 * DENDRO_282 + DENDRO_276 * DENDRO_436 +
                            DENDRO_276 * DENDRO_463) +
              DENDRO_162 * (-DENDRO_193 * DENDRO_282 - DENDRO_276 * DENDRO_524 +
                            0.5 * DENDRO_280 * grad_2_gt0[pp]) +
              DENDRO_162 * (DENDRO_241 * DENDRO_267 - DENDRO_259 * DENDRO_398 +
                            DENDRO_600) +
              DENDRO_184 * DENDRO_633 + DENDRO_184 * (DENDRO_734 + DENDRO_735) +
              DENDRO_184 * (DENDRO_737 + DENDRO_739) +
              DENDRO_184 * (DENDRO_267 * DENDRO_311 + DENDRO_736) -
              DENDRO_186 * DENDRO_634 +
              DENDRO_186 * (-DENDRO_243 * DENDRO_380 + DENDRO_635) +
              DENDRO_186 * (DENDRO_132 * DENDRO_317 - DENDRO_259 * DENDRO_524 +
                            DENDRO_572) -
              DENDRO_229 * (DENDRO_219 * DENDRO_456 + DENDRO_234 * DENDRO_473 +
                            DENDRO_277 * DENDRO_477 + DENDRO_605) -
              DENDRO_334 *
                  (DENDRO_259 * grad_1_gt0[pp] + DENDRO_267 * grad_0_gt3[pp]) +
              DENDRO_340 * (DENDRO_728 + DENDRO_731) + DENDRO_341 * DENDRO_630 +
              DENDRO_612 + DENDRO_613 + DENDRO_614 + DENDRO_615 + DENDRO_616 +
              DENDRO_617 + DENDRO_618 + DENDRO_619 + DENDRO_620 + DENDRO_621 +
              DENDRO_622 + DENDRO_623 + DENDRO_624 - DENDRO_625 * DENDRO_684 +
              DENDRO_638 - DENDRO_679 * grad_1_gt1[pp] -
              DENDRO_681 * grad_0_gt1[pp] - DENDRO_683 * grad_2_gt1[pp] -
              DENDRO_742 * (DENDRO_132 * grad_0_gt3[pp] + DENDRO_741) -
              DENDRO_742 * (DENDRO_276 * grad_1_gt5[pp] + DENDRO_743 +
                            DENDRO_93 * grad_2_gt3[pp])) -
         DENDRO_715 * DENDRO_726 - DENDRO_716 * DENDRO_727 +
         DENDRO_725 * DENDRO_76 * (-DENDRO_276 - DENDRO_654 * DENDRO_717) -
         12 * grad2_0_1_alpha[pp]) +
    DENDRO_721 * grad_0_beta0[pp] + DENDRO_721 * grad_1_beta1[pp] -
    alpha[pp] * (-At1[pp] * K[pp] + DENDRO_643 * DENDRO_722 +
                 DENDRO_645 * DENDRO_723 + DENDRO_646 * DENDRO_724) +
    beta0[pp] * grad_0_At1[pp] + beta1[pp] * grad_1_At1[pp] +
    beta2[pp] * grad_2_At1[pp];
//--
At_rhs02[pp] =
    At0[pp] * grad_2_beta0[pp] + At1[pp] * grad_2_beta1[pp] -
    At2[pp] * DENDRO_10 + At4[pp] * grad_0_beta1[pp] +
    At5[pp] * grad_0_beta2[pp] +
    DENDRO_640 *
        (DENDRO_484 * DENDRO_719 +
         DENDRO_685 *
             (-DENDRO_162 * (DENDRO_674 + DENDRO_739) -
              DENDRO_162 * (DENDRO_735 + DENDRO_757) -
              DENDRO_162 * (DENDRO_181 * DENDRO_267 + DENDRO_736) -
              DENDRO_162 * (DENDRO_463 * DENDRO_93 + DENDRO_674 + DENDRO_738) -
              DENDRO_184 * (0.5 * DENDRO_116 * DENDRO_93 - DENDRO_754) -
              DENDRO_184 * (DENDRO_116 * DENDRO_267 - DENDRO_132 * DENDRO_403 -
                            DENDRO_151 * DENDRO_249) -
              DENDRO_186 * DENDRO_555 -
              DENDRO_186 * (DENDRO_117 * DENDRO_380 + DENDRO_752) -
              DENDRO_229 * (DENDRO_133 * DENDRO_471 + DENDRO_139 * DENDRO_473 +
                            DENDRO_227 * DENDRO_387 + DENDRO_467) +
              4 * DENDRO_26 * DENDRO_28 * DENDRO_558 +
              4 * DENDRO_26 * DENDRO_28 * DENDRO_563 +
              4 * DENDRO_26 * DENDRO_30 *
                  (DENDRO_117 * DENDRO_200 + DENDRO_754) +
              2.0 * DENDRO_26 * DENDRO_30 *
                  (DENDRO_132 * grad_2_gt0[pp] + DENDRO_267 * grad_0_gt5[pp]) +
              4 * DENDRO_26 * DENDRO_32 *
                  (DENDRO_135 * DENDRO_93 + 1.0 * DENDRO_673) +
              4 * DENDRO_26 * DENDRO_32 *
                  (DENDRO_200 * DENDRO_267 + DENDRO_201 * DENDRO_267 +
                   DENDRO_676) +
              DENDRO_26 * DENDRO_40 * DENDRO_546 +
              4 * DENDRO_26 * DENDRO_40 *
                  (0.5 * DENDRO_101 * DENDRO_116 - DENDRO_752) +
              4 * DENDRO_26 * DENDRO_40 *
                  (-DENDRO_132 * DENDRO_436 - DENDRO_151 * DENDRO_247 -
                   DENDRO_756) +
              DENDRO_26 * DENDRO_42 * (DENDRO_741 + DENDRO_753) +
              4 * DENDRO_26 * DENDRO_42 *
                  (DENDRO_108 * DENDRO_276 + 0.25 * DENDRO_743) +
              4 * DENDRO_30 * DENDRO_76 * grad2_0_2_gt2[pp] +
              2.0 * DENDRO_32 * DENDRO_76 * grad2_0_0_gt2[pp] -
              DENDRO_341 * (DENDRO_116 * DENDRO_117 - 0.5 * DENDRO_748) -
              DENDRO_341 * (-DENDRO_132 * DENDRO_159 - DENDRO_151 * DENDRO_200 -
                            DENDRO_755) +
              2.0 * DENDRO_42 * DENDRO_76 * grad2_1_1_gt2[pp] +
              2.0 * DENDRO_48 * DENDRO_76 * grad2_2_2_gt2[pp] - DENDRO_481 -
              DENDRO_482 - DENDRO_483 - DENDRO_484 * DENDRO_684 - DENDRO_547 -
              DENDRO_549 - DENDRO_550 - DENDRO_551 - DENDRO_553 -
              DENDRO_679 * grad_1_gt2[pp] - DENDRO_681 * grad_0_gt2[pp] -
              DENDRO_683 * grad_2_gt2[pp] -
              DENDRO_742 * (DENDRO_731 + DENDRO_749) +
              2.0 * grad_0_Gt0[pp] * gt2[pp] + 2.0 * grad_0_Gt1[pp] * gt4[pp] +
              2.0 * grad_0_Gt2[pp] * gt5[pp] + 2.0 * grad_2_Gt0[pp] * gt0[pp] +
              2.0 * grad_2_Gt1[pp] * gt1[pp] + 2.0 * grad_2_Gt2[pp] * gt2[pp]) -
         DENDRO_702 * DENDRO_726 - DENDRO_704 * DENDRO_725 +
         DENDRO_708 * DENDRO_727 - 12 * grad2_0_2_alpha[pp]) +
    DENDRO_744 * grad_0_beta0[pp] + DENDRO_744 * grad_2_beta2[pp] -
    alpha[pp] * (-At2[pp] * K[pp] + DENDRO_643 * DENDRO_745 +
                 DENDRO_645 * DENDRO_746 + DENDRO_646 * DENDRO_747) +
    beta0[pp] * grad_0_At2[pp] + beta1[pp] * grad_1_At2[pp] +
    beta2[pp] * grad_2_At2[pp];
//--
At_rhs11[pp] =
    -At3[pp] * DENDRO_11 + At3[pp] * DENDRO_12 - At3[pp] * DENDRO_8 +
    DENDRO_640 *
        (-DENDRO_652 * DENDRO_701 +
         DENDRO_658 * (DENDRO_280 - DENDRO_654 * DENDRO_761) +
         DENDRO_685 *
             (-DENDRO_101 * DENDRO_339 * DENDRO_341 +
              6.0 * DENDRO_104 * DENDRO_243 * grad_1_gt3[pp] +
              DENDRO_145 * DENDRO_344 + DENDRO_162 * (DENDRO_328 + DENDRO_732) +
              DENDRO_162 *
                  (0.25 * DENDRO_234 * grad_1_gt3[pp] - 1.0 * DENDRO_767) +
              DENDRO_162 * (DENDRO_280 * DENDRO_92 - DENDRO_733) +
              DENDRO_169 * (DENDRO_322 - DENDRO_763) +
              DENDRO_169 * (-DENDRO_101 * grad_2_gt3[pp] + DENDRO_337) +
              DENDRO_169 *
                  (-DENDRO_145 * grad_0_gt3[pp] + DENDRO_263 * DENDRO_99) +
              DENDRO_184 * (DENDRO_314 + DENDRO_316) +
              DENDRO_184 * (DENDRO_101 * DENDRO_311 + DENDRO_764) +
              DENDRO_184 * (DENDRO_145 * DENDRO_345 + DENDRO_259 * DENDRO_311) +
              DENDRO_184 * (DENDRO_248 * DENDRO_765 + DENDRO_766) +
              DENDRO_186 * (DENDRO_323 - 1.0 * DENDRO_763) -
              DENDRO_186 * (DENDRO_101 * DENDRO_325 + DENDRO_321) -
              DENDRO_186 * (-1.0 * DENDRO_263 * DENDRO_92 + DENDRO_318) -
              DENDRO_229 * (DENDRO_219 * DENDRO_263 + DENDRO_222 * DENDRO_244 +
                            DENDRO_227 * DENDRO_280 + DENDRO_299) +
              DENDRO_259 * DENDRO_346 + DENDRO_276 * DENDRO_347 +
              DENDRO_334 *
                  (DENDRO_180 * DENDRO_280 - DENDRO_276 * grad_2_gt3[pp]) +
              DENDRO_334 * (DENDRO_234 * grad_1_gt3[pp] - DENDRO_767) +
              DENDRO_334 *
                  (-DENDRO_259 * grad_0_gt3[pp] + DENDRO_263 * grad_1_gt0[pp]) +
              DENDRO_355 - DENDRO_679 * grad_1_gt3[pp] -
              DENDRO_681 * grad_0_gt3[pp] - DENDRO_683 * grad_2_gt3[pp] -
              DENDRO_768 * gt3[pp]) +
         DENDRO_720 * gt3[pp] +
         DENDRO_762 * (DENDRO_263 - DENDRO_662 * DENDRO_761) -
         12 * grad2_1_1_alpha[pp]) +
    DENDRO_641 * grad_1_beta0[pp] + DENDRO_758 * grad_1_beta2[pp] -
    alpha[pp] * (-At3[pp] * K[pp] + DENDRO_643 * DENDRO_723 +
                 DENDRO_722 * DENDRO_759 + DENDRO_724 * DENDRO_760) +
    beta0[pp] * grad_0_At3[pp] + beta1[pp] * grad_1_At3[pp] +
    beta2[pp] * grad_2_At3[pp];
//--
At_rhs12[pp] =
    At1[pp] * grad_2_beta0[pp] + At2[pp] * grad_1_beta0[pp] +
    At3[pp] * grad_2_beta1[pp] - At4[pp] * DENDRO_11 +
    At5[pp] * grad_1_beta2[pp] +
    DENDRO_640 *
        (DENDRO_536 * DENDRO_719 +
         DENDRO_685 *
             (-DENDRO_128 * (-DENDRO_101 * DENDRO_127 + DENDRO_565) -
              DENDRO_128 * (0.25 * DENDRO_125 * grad_1_gt3[pp] -
                            DENDRO_192 * DENDRO_243 - DENDRO_193 * DENDRO_243) -
              DENDRO_128 *
                  (-DENDRO_145 * DENDRO_349 + DENDRO_497 + DENDRO_566) +
              DENDRO_137 * (DENDRO_113 * DENDRO_276 + DENDRO_737) +
              DENDRO_137 * (DENDRO_668 + DENDRO_734 + DENDRO_757) +
              DENDRO_162 * (-DENDRO_101 * DENDRO_524 - DENDRO_774) +
              DENDRO_162 * (-DENDRO_127 * DENDRO_93 - DENDRO_774) +
              DENDRO_162 * (-DENDRO_181 * DENDRO_243 + DENDRO_571) +
              DENDRO_162 *
                  (-DENDRO_132 * DENDRO_349 +
                   0.5 * DENDRO_263 * grad_2_gt0[pp] - 0.25 * DENDRO_753) +
              DENDRO_162 * (-DENDRO_145 * DENDRO_398 + DENDRO_201 * DENDRO_263 -
                            DENDRO_766) +
              DENDRO_162 *
                  (-DENDRO_243 * DENDRO_311 + DENDRO_422 + DENDRO_521) +
              DENDRO_169 *
                  (DENDRO_125 * grad_2_gt3[pp] - DENDRO_243 * grad_1_gt5[pp]) +
              DENDRO_172 * (DENDRO_728 + DENDRO_729 + DENDRO_749) -
              DENDRO_184 * (0.5 * DENDRO_111 * DENDRO_93 - DENDRO_772) +
              DENDRO_184 * (DENDRO_117 * DENDRO_311 + DENDRO_772) -
              DENDRO_184 * (-DENDRO_145 * DENDRO_403 - DENDRO_151 * DENDRO_248 -
                            DENDRO_756) +
              DENDRO_186 * (DENDRO_111 * DENDRO_243 + DENDRO_569) +
              DENDRO_186 * (DENDRO_101 * DENDRO_205 + DENDRO_511 - DENDRO_773) +
              DENDRO_186 * (-DENDRO_117 * DENDRO_192 +
                            0.5 * DENDRO_280 * grad_2_gt5[pp] - DENDRO_773) -
              DENDRO_186 * (DENDRO_145 * DENDRO_436 + DENDRO_151 * DENDRO_238 +
                            DENDRO_568) +
              DENDRO_186 * (-DENDRO_145 * DENDRO_463 - DENDRO_145 * DENDRO_524 +
                            0.5 * DENDRO_263 * grad_0_gt5[pp]) -
              DENDRO_229 * (DENDRO_125 * DENDRO_473 + DENDRO_146 * DENDRO_471 +
                            DENDRO_227 * DENDRO_319 + DENDRO_530) -
              DENDRO_341 * (DENDRO_111 * DENDRO_117 - 0.5 * DENDRO_770) -
              DENDRO_341 * (0.5 * DENDRO_116 * DENDRO_145 -
                            DENDRO_145 * DENDRO_159 - DENDRO_151 * DENDRO_311) -
              DENDRO_536 * DENDRO_684 + DENDRO_541 + DENDRO_580 -
              DENDRO_679 * grad_1_gt4[pp] - DENDRO_681 * grad_0_gt4[pp] -
              DENDRO_683 * grad_2_gt4[pp]) +
         DENDRO_711 * DENDRO_727 - DENDRO_712 * DENDRO_725 -
         DENDRO_713 * DENDRO_726 * DENDRO_76 - 12 * grad2_1_2_alpha[pp]) +
    DENDRO_769 * grad_1_beta1[pp] + DENDRO_769 * grad_2_beta2[pp] -
    alpha[pp] * (-At4[pp] * K[pp] + DENDRO_643 * DENDRO_746 +
                 DENDRO_745 * DENDRO_759 + DENDRO_747 * DENDRO_760) +
    beta0[pp] * grad_0_At4[pp] + beta1[pp] * grad_1_At4[pp] +
    beta2[pp] * grad_2_At4[pp];
//--
At_rhs22[pp] =
    -At5[pp] * DENDRO_10 - At5[pp] * DENDRO_11 + At5[pp] * DENDRO_15 +
    DENDRO_640 *
        (DENDRO_653 * DENDRO_687 - DENDRO_657 * DENDRO_695 +
         DENDRO_685 *
             (3.0 * DENDRO_101 * DENDRO_26 * DENDRO_42 * grad_1_gt5[pp] +
              6.0 * DENDRO_117 * DENDRO_26 * DENDRO_48 * grad_2_gt5[pp] -
              DENDRO_129 + 4 * DENDRO_132 * DENDRO_136 * DENDRO_26 * DENDRO_32 -
              DENDRO_144 + 4 * DENDRO_145 * DENDRO_149 * DENDRO_26 * DENDRO_42 +
              DENDRO_150 * DENDRO_151 * DENDRO_341 - DENDRO_158 -
              DENDRO_162 * (DENDRO_101 * DENDRO_113 + DENDRO_750) -
              DENDRO_162 * (DENDRO_108 * DENDRO_93 + DENDRO_771) -
              DENDRO_162 * (DENDRO_132 * DENDRO_181 + DENDRO_135 * DENDRO_145) -
              DENDRO_162 * (DENDRO_201 * DENDRO_765 + 0.25 * DENDRO_730) +
              2.0 * DENDRO_167 * DENDRO_26 * DENDRO_40 -
              DENDRO_169 * (DENDRO_770 + DENDRO_776) -
              DENDRO_169 *
                  (DENDRO_145 * grad_0_gt5[pp] + DENDRO_151 * DENDRO_99) +
              4 * DENDRO_182 * DENDRO_26 * DENDRO_28 -
              DENDRO_184 * (-DENDRO_151 * DENDRO_212 - DENDRO_755) -
              DENDRO_186 * (0.25 * DENDRO_770 + 1.0 * DENDRO_776) -
              DENDRO_186 * (-1.0 * DENDRO_152 * DENDRO_180 + DENDRO_208) -
              DENDRO_191 + 4 * DENDRO_197 * DENDRO_26 * DENDRO_28 +
              4 * DENDRO_210 * DENDRO_26 * DENDRO_40 -
              DENDRO_229 * (DENDRO_118 * DENDRO_227 + DENDRO_152 * DENDRO_219 +
                            DENDRO_156 * DENDRO_222 + DENDRO_213) +
              4 * DENDRO_26 * DENDRO_30 *
                  (0.25 * DENDRO_748 + 1.0 * DENDRO_775) +
              2.0 * DENDRO_26 * DENDRO_30 * (DENDRO_748 + DENDRO_775) +
              2.0 * DENDRO_26 * DENDRO_30 *
                  (DENDRO_132 * grad_0_gt5[pp] + DENDRO_151 * grad_2_gt0[pp]) +
              4 * DENDRO_26 * DENDRO_30 *
                  (-1.0 * DENDRO_156 * DENDRO_180 + DENDRO_206) +
              3.0 * DENDRO_26 * DENDRO_32 * DENDRO_93 * grad_0_gt5[pp] +
              4 * DENDRO_30 * DENDRO_76 * grad2_0_2_gt5[pp] +
              2.0 * DENDRO_32 * DENDRO_76 * grad2_0_0_gt5[pp] +
              2.0 * DENDRO_42 * DENDRO_76 * grad2_1_1_gt5[pp] +
              2.0 * DENDRO_48 * DENDRO_76 * grad2_2_2_gt5[pp] -
              DENDRO_679 * grad_1_gt5[pp] - DENDRO_681 * grad_0_gt5[pp] -
              DENDRO_683 * grad_2_gt5[pp] - DENDRO_75 - DENDRO_768 * gt5[pp] -
              DENDRO_79 - DENDRO_81 + 4 * grad_2_Gt0[pp] * gt2[pp] +
              4 * grad_2_Gt1[pp] * gt4[pp] + 4 * grad_2_Gt2[pp] * gt5[pp]) -
         DENDRO_690 * DENDRO_762 + DENDRO_720 * gt5[pp] -
         12 * grad2_2_2_alpha[pp]) +
    DENDRO_642 * grad_2_beta0[pp] + DENDRO_758 * grad_2_beta1[pp] -
    alpha[pp] * (At5[pp] * DENDRO_644 * DENDRO_747 - At5[pp] * K[pp] +
                 DENDRO_646 * DENDRO_746 + DENDRO_745 * DENDRO_760) +
    beta0[pp] * grad_0_At5[pp] + beta1[pp] * grad_1_At5[pp] +
    beta2[pp] * grad_2_At5[pp];
//--
K_rhs[pp] =
    -DENDRO_298 * (DENDRO_779 * (DENDRO_218 + DENDRO_777 * DENDRO_778) +
                   DENDRO_781 * (DENDRO_221 + DENDRO_778 * DENDRO_780) -
                   grad2_2_2_alpha[pp] +
                   grad_2_alpha[pp] *
                       (DENDRO_224 * DENDRO_76 + DENDRO_225 * DENDRO_76 +
                        DENDRO_226 * DENDRO_76 -
                        DENDRO_228 * (DENDRO_693 - DENDRO_694 * DENDRO_782))) +
    DENDRO_34 * DENDRO_76 * chi[pp] *
        (0.5 * DENDRO_783 * (DENDRO_611 + DENDRO_717 * DENDRO_782) +
         DENDRO_785 *
             (-DENDRO_228 * (-DENDRO_625 * DENDRO_780 + grad_0_chi[pp]) +
              DENDRO_231 * DENDRO_76 + DENDRO_232 * DENDRO_76 +
              DENDRO_609 * DENDRO_76) +
         DENDRO_787 *
             (-DENDRO_228 * (-DENDRO_625 * DENDRO_777 + grad_1_chi[pp]) +
              DENDRO_606 * DENDRO_76 + DENDRO_607 * DENDRO_76 +
              DENDRO_608 * DENDRO_76) -
         grad2_0_1_alpha[pp]) -
    DENDRO_357 * (DENDRO_779 * (DENDRO_301 + DENDRO_761 * DENDRO_777) +
                  DENDRO_783 * (DENDRO_305 + DENDRO_761 * DENDRO_782) -
                  grad2_1_1_alpha[pp] +
                  grad_1_alpha[pp] *
                      (-DENDRO_228 * (DENDRO_699 - DENDRO_700 * DENDRO_780) +
                       DENDRO_302 * DENDRO_76 + DENDRO_303 * DENDRO_76 +
                       DENDRO_304 * DENDRO_76)) +
    2 * DENDRO_40 * DENDRO_76 * chi[pp] *
        (0.5 * DENDRO_779 * (DENDRO_228 * DENDRO_777 * gt4[pp] + DENDRO_531) +
         DENDRO_785 *
             (-DENDRO_228 * (-DENDRO_536 * DENDRO_780 + grad_2_chi[pp]) +
              DENDRO_532 * DENDRO_76 + DENDRO_710) +
         DENDRO_786 *
             (-DENDRO_228 * (-DENDRO_536 * DENDRO_782 + grad_1_chi[pp]) +
              DENDRO_533 * DENDRO_76 + DENDRO_534 * DENDRO_76 +
              DENDRO_535 * DENDRO_76) -
         grad2_1_2_alpha[pp]) -
    DENDRO_413 *
        (DENDRO_781 * (DENDRO_410 + DENDRO_780 * DENDRO_784) +
         DENDRO_783 * (DENDRO_411 + DENDRO_782 * DENDRO_784) -
         grad2_0_0_alpha[pp] +
         grad_0_alpha[pp] *
             (-DENDRO_228 * (DENDRO_660 - 0.5 * DENDRO_661 * DENDRO_777) +
              DENDRO_407 * DENDRO_76 + DENDRO_409 * DENDRO_76 + DENDRO_659)) -
    DENDRO_788 * chi[pp] *
        (0.5 * DENDRO_781 * (DENDRO_472 + DENDRO_707 * DENDRO_780) +
         DENDRO_786 *
             (-DENDRO_228 * (-DENDRO_484 * DENDRO_782 + grad_0_chi[pp]) +
              DENDRO_474 * DENDRO_76 + DENDRO_475 * DENDRO_76 +
              DENDRO_476 * DENDRO_76) +
         DENDRO_787 *
             (-DENDRO_228 * (-DENDRO_484 * DENDRO_777 + grad_2_chi[pp]) +
              DENDRO_468 * DENDRO_76 + DENDRO_469 * DENDRO_76 +
              DENDRO_470 * DENDRO_76) -
         grad2_0_2_alpha[pp]) +
    DENDRO_791 * (DENDRO_19 + DENDRO_39 * DENDRO_789 + DENDRO_47 * DENDRO_789 +
                  DENDRO_53 * DENDRO_789 + DENDRO_61 * DENDRO_790 +
                  DENDRO_64 * DENDRO_790 + DENDRO_70 * DENDRO_790) +
    beta0[pp] * grad_0_K[pp] + beta1[pp] * grad_1_K[pp] +
    beta2[pp] * grad_2_K[pp];
//--
Gt_rhs0[pp] = -DENDRO_806;
//--
Gt_rhs1[pp] =
    -DENDRO_125 * DENDRO_68 * DENDRO_823 + DENDRO_139 * DENDRO_60 * DENDRO_823 +
    DENDRO_156 * DENDRO_52 * DENDRO_822 - 2.0 / 3.0 * DENDRO_17 * DENDRO_678 -
    DENDRO_234 * DENDRO_62 * DENDRO_823 - DENDRO_243 * DENDRO_46 * DENDRO_822 +
    DENDRO_251 * DENDRO_38 * DENDRO_822 + DENDRO_544 * DENDRO_821 +
    (7.0 / 3.0) * DENDRO_544 * grad2_1_2_beta1[pp] +
    (1.0 / 3.0) * DENDRO_544 * grad2_2_2_beta2[pp] + DENDRO_62 * DENDRO_796 +
    (7.0 / 3.0) * DENDRO_628 * grad2_0_1_beta1[pp] +
    DENDRO_678 * grad_1_beta1[pp] + DENDRO_68 * DENDRO_800 +
    DENDRO_680 * grad_0_beta1[pp] + DENDRO_682 * grad_2_beta1[pp] +
    DENDRO_799 * DENDRO_819 -
    DENDRO_799 * (-DENDRO_62 * DENDRO_813 + DENDRO_812) -
    DENDRO_799 * (-DENDRO_68 * DENDRO_815 + DENDRO_814) - DENDRO_807 -
    DENDRO_808 - DENDRO_809 - DENDRO_810 - DENDRO_811 - DENDRO_817 -
    DENDRO_818 + DENDRO_820 * grad2_0_0_beta0[pp] +
    DENDRO_820 * grad2_0_2_beta2[pp] + DENDRO_824;
//--
Gt_rhs2[pp] = -DENDRO_825;
//--
B_rhs0[pp] =
    -B0[pp] * eta - DENDRO_806 +
    lambda[2] * (beta0[pp] * grad_0_B0[pp] + beta1[pp] * grad_1_B0[pp] +
                 beta2[pp] * grad_2_B0[pp]) -
    lambda[3] * (beta0[pp] * grad_0_Gt0[pp] + beta1[pp] * grad_1_Gt0[pp] +
                 beta2[pp] * grad_2_Gt0[pp]);
//--
B_rhs1[pp] =
    -B1[pp] * eta + 2.0 * DENDRO_125 * DENDRO_69 * DENDRO_797 * alpha[pp] +
    2.0 * DENDRO_139 * DENDRO_60 * DENDRO_797 * alpha[pp] +
    2 * DENDRO_156 * DENDRO_52 * DENDRO_797 * alpha[pp] +
    (2.0 / 3.0) * DENDRO_17 * DENDRO_254 * DENDRO_26 +
    2.0 * DENDRO_234 * DENDRO_63 * DENDRO_797 * alpha[pp] +
    2 * DENDRO_244 * DENDRO_46 * DENDRO_797 * alpha[pp] +
    2 * DENDRO_251 * DENDRO_38 * DENDRO_797 * alpha[pp] -
    DENDRO_255 * grad_1_beta1[pp] - DENDRO_272 * grad_0_beta1[pp] +
    (1.0 / 3.0) * DENDRO_28 * DENDRO_76 * grad2_0_0_beta0[pp] +
    (7.0 / 3.0) * DENDRO_28 * DENDRO_76 * grad2_0_1_beta1[pp] +
    (1.0 / 3.0) * DENDRO_28 * DENDRO_76 * grad2_0_2_beta2[pp] -
    DENDRO_287 * grad_2_beta1[pp] +
    (1.0 / 3.0) * DENDRO_40 * DENDRO_76 * grad2_0_2_beta0[pp] +
    (7.0 / 3.0) * DENDRO_40 * DENDRO_76 * grad2_1_2_beta1[pp] +
    (1.0 / 3.0) * DENDRO_40 * DENDRO_76 * grad2_2_2_beta2[pp] -
    DENDRO_63 * DENDRO_796 - DENDRO_69 * DENDRO_800 + DENDRO_799 * DENDRO_819 -
    DENDRO_799 * (DENDRO_63 * DENDRO_813 + DENDRO_812) -
    DENDRO_799 * (DENDRO_69 * DENDRO_815 + DENDRO_814) - DENDRO_807 -
    DENDRO_808 - DENDRO_809 - DENDRO_810 - DENDRO_811 - DENDRO_817 -
    DENDRO_818 - DENDRO_824 * lambda[3] + beta0[pp] * grad_0_Gt1[pp] +
    beta1[pp] * grad_1_Gt1[pp] + beta2[pp] * grad_2_Gt1[pp] +
    lambda[2] * (beta0[pp] * grad_0_B1[pp] + beta1[pp] * grad_1_B1[pp] +
                 beta2[pp] * grad_2_B1[pp]);
//--
B_rhs2[pp] =
    -B2[pp] * eta - DENDRO_825 +
    lambda[2] * (beta0[pp] * grad_0_B2[pp] + beta1[pp] * grad_1_B2[pp] +
                 beta2[pp] * grad_2_B2[pp]) -
    lambda[3] * (beta0[pp] * grad_0_Gt2[pp] + beta1[pp] * grad_1_Gt2[pp] +
                 beta2[pp] * grad_2_Gt2[pp]);
// Dendro: reduced ops: 4361
// Dendro: }}}
