

// Dendro: START REGISTER-AWARE GENERATION (MaxRegs=25)
// Total Execution Units: 221
double *__restrict__ scratch_0 = massive_workspace.data() + (0 * nx * ny * nz);
double *__restrict__ scratch_1 = massive_workspace.data() + (1 * nx * ny * nz);
double *__restrict__ scratch_2 = massive_workspace.data() + (2 * nx * ny * nz);
double *__restrict__ scratch_3 = massive_workspace.data() + (3 * nx * ny * nz);
double *__restrict__ scratch_4 = massive_workspace.data() + (4 * nx * ny * nz);
double *__restrict__ scratch_5 = massive_workspace.data() + (5 * nx * ny * nz);
double *__restrict__ scratch_6 = massive_workspace.data() + (6 * nx * ny * nz);
double *__restrict__ scratch_7 = massive_workspace.data() + (7 * nx * ny * nz);
double *__restrict__ scratch_8 = massive_workspace.data() + (8 * nx * ny * nz);
double *__restrict__ scratch_9 = massive_workspace.data() + (9 * nx * ny * nz);
double *__restrict__ scratch_10 =
    massive_workspace.data() + (10 * nx * ny * nz);
double *__restrict__ scratch_11 =
    massive_workspace.data() + (11 * nx * ny * nz);
double *__restrict__ scratch_12 =
    massive_workspace.data() + (12 * nx * ny * nz);
double *__restrict__ scratch_13 =
    massive_workspace.data() + (13 * nx * ny * nz);
double *__restrict__ scratch_14 =
    massive_workspace.data() + (14 * nx * ny * nz);
double *__restrict__ scratch_15 =
    massive_workspace.data() + (15 * nx * ny * nz);
double *__restrict__ scratch_16 =
    massive_workspace.data() + (16 * nx * ny * nz);
double *__restrict__ scratch_17 =
    massive_workspace.data() + (17 * nx * ny * nz);
double *__restrict__ scratch_18 =
    massive_workspace.data() + (18 * nx * ny * nz);
double *__restrict__ scratch_19 =
    massive_workspace.data() + (19 * nx * ny * nz);
double *__restrict__ scratch_20 =
    massive_workspace.data() + (20 * nx * ny * nz);
double *__restrict__ scratch_21 =
    massive_workspace.data() + (21 * nx * ny * nz);
double *__restrict__ scratch_22 =
    massive_workspace.data() + (22 * nx * ny * nz);
double *__restrict__ scratch_23 =
    massive_workspace.data() + (23 * nx * ny * nz);
double *__restrict__ scratch_24 =
    massive_workspace.data() + (24 * nx * ny * nz);
double *__restrict__ scratch_25 =
    massive_workspace.data() + (25 * nx * ny * nz);
double *__restrict__ scratch_26 =
    massive_workspace.data() + (26 * nx * ny * nz);
double *__restrict__ scratch_27 =
    massive_workspace.data() + (27 * nx * ny * nz);
double *__restrict__ scratch_28 =
    massive_workspace.data() + (28 * nx * ny * nz);
double *__restrict__ scratch_29 =
    massive_workspace.data() + (29 * nx * ny * nz);
double *__restrict__ scratch_30 =
    massive_workspace.data() + (30 * nx * ny * nz);
double *__restrict__ scratch_31 =
    massive_workspace.data() + (31 * nx * ny * nz);
double *__restrict__ scratch_32 =
    massive_workspace.data() + (32 * nx * ny * nz);
double *__restrict__ scratch_33 =
    massive_workspace.data() + (33 * nx * ny * nz);
double *__restrict__ scratch_34 =
    massive_workspace.data() + (34 * nx * ny * nz);
double *__restrict__ scratch_35 =
    massive_workspace.data() + (35 * nx * ny * nz);
double *__restrict__ scratch_36 =
    massive_workspace.data() + (36 * nx * ny * nz);
double *__restrict__ scratch_37 =
    massive_workspace.data() + (37 * nx * ny * nz);
double *__restrict__ scratch_38 =
    massive_workspace.data() + (38 * nx * ny * nz);
double *__restrict__ scratch_39 =
    massive_workspace.data() + (39 * nx * ny * nz);
double *__restrict__ scratch_40 =
    massive_workspace.data() + (40 * nx * ny * nz);
double *__restrict__ scratch_41 =
    massive_workspace.data() + (41 * nx * ny * nz);
double *__restrict__ scratch_42 =
    massive_workspace.data() + (42 * nx * ny * nz);
double *__restrict__ scratch_43 =
    massive_workspace.data() + (43 * nx * ny * nz);
double *__restrict__ scratch_44 =
    massive_workspace.data() + (44 * nx * ny * nz);
double *__restrict__ scratch_45 =
    massive_workspace.data() + (45 * nx * ny * nz);
double *__restrict__ scratch_46 =
    massive_workspace.data() + (46 * nx * ny * nz);
double *__restrict__ scratch_47 =
    massive_workspace.data() + (47 * nx * ny * nz);
double *__restrict__ scratch_48 =
    massive_workspace.data() + (48 * nx * ny * nz);
double *__restrict__ scratch_49 =
    massive_workspace.data() + (49 * nx * ny * nz);
double *__restrict__ scratch_50 =
    massive_workspace.data() + (50 * nx * ny * nz);
double *__restrict__ scratch_51 =
    massive_workspace.data() + (51 * nx * ny * nz);
double *__restrict__ scratch_52 =
    massive_workspace.data() + (52 * nx * ny * nz);
double *__restrict__ scratch_53 =
    massive_workspace.data() + (53 * nx * ny * nz);
double *__restrict__ scratch_54 =
    massive_workspace.data() + (54 * nx * ny * nz);
double *__restrict__ scratch_55 =
    massive_workspace.data() + (55 * nx * ny * nz);
double *__restrict__ scratch_56 =
    massive_workspace.data() + (56 * nx * ny * nz);
double *__restrict__ scratch_57 =
    massive_workspace.data() + (57 * nx * ny * nz);
double *__restrict__ scratch_58 =
    massive_workspace.data() + (58 * nx * ny * nz);
double *__restrict__ scratch_59 =
    massive_workspace.data() + (59 * nx * ny * nz);
double *__restrict__ scratch_60 =
    massive_workspace.data() + (60 * nx * ny * nz);
double *__restrict__ scratch_61 =
    massive_workspace.data() + (61 * nx * ny * nz);
double *__restrict__ scratch_62 =
    massive_workspace.data() + (62 * nx * ny * nz);
double *__restrict__ scratch_63 =
    massive_workspace.data() + (63 * nx * ny * nz);
double *__restrict__ scratch_64 =
    massive_workspace.data() + (64 * nx * ny * nz);
double *__restrict__ scratch_65 =
    massive_workspace.data() + (65 * nx * ny * nz);
double *__restrict__ scratch_66 =
    massive_workspace.data() + (66 * nx * ny * nz);
double *__restrict__ scratch_67 =
    massive_workspace.data() + (67 * nx * ny * nz);
double *__restrict__ scratch_68 =
    massive_workspace.data() + (68 * nx * ny * nz);
double *__restrict__ scratch_69 =
    massive_workspace.data() + (69 * nx * ny * nz);
double *__restrict__ scratch_70 =
    massive_workspace.data() + (70 * nx * ny * nz);
double *__restrict__ scratch_71 =
    massive_workspace.data() + (71 * nx * ny * nz);
double *__restrict__ scratch_72 =
    massive_workspace.data() + (72 * nx * ny * nz);
double *__restrict__ scratch_73 =
    massive_workspace.data() + (73 * nx * ny * nz);
double *__restrict__ scratch_74 =
    massive_workspace.data() + (74 * nx * ny * nz);
double *__restrict__ scratch_75 =
    massive_workspace.data() + (75 * nx * ny * nz);
double *__restrict__ scratch_76 =
    massive_workspace.data() + (76 * nx * ny * nz);
double *__restrict__ scratch_77 =
    massive_workspace.data() + (77 * nx * ny * nz);
double *__restrict__ scratch_78 =
    massive_workspace.data() + (78 * nx * ny * nz);
double *__restrict__ scratch_79 =
    massive_workspace.data() + (79 * nx * ny * nz);
double *__restrict__ scratch_80 =
    massive_workspace.data() + (80 * nx * ny * nz);
double *__restrict__ scratch_81 =
    massive_workspace.data() + (81 * nx * ny * nz);
double *__restrict__ scratch_82 =
    massive_workspace.data() + (82 * nx * ny * nz);
double *__restrict__ scratch_83 =
    massive_workspace.data() + (83 * nx * ny * nz);
double *__restrict__ scratch_84 =
    massive_workspace.data() + (84 * nx * ny * nz);
double *__restrict__ scratch_85 =
    massive_workspace.data() + (85 * nx * ny * nz);
double *__restrict__ scratch_86 =
    massive_workspace.data() + (86 * nx * ny * nz);
double *__restrict__ scratch_87 =
    massive_workspace.data() + (87 * nx * ny * nz);
double *__restrict__ scratch_88 =
    massive_workspace.data() + (88 * nx * ny * nz);
double *__restrict__ scratch_89 =
    massive_workspace.data() + (89 * nx * ny * nz);
double *__restrict__ scratch_90 =
    massive_workspace.data() + (90 * nx * ny * nz);
double *__restrict__ scratch_91 =
    massive_workspace.data() + (91 * nx * ny * nz);
double *__restrict__ scratch_92 =
    massive_workspace.data() + (92 * nx * ny * nz);
double *__restrict__ scratch_93 =
    massive_workspace.data() + (93 * nx * ny * nz);
double *__restrict__ scratch_94 =
    massive_workspace.data() + (94 * nx * ny * nz);
double *__restrict__ scratch_95 =
    massive_workspace.data() + (95 * nx * ny * nz);
double *__restrict__ scratch_96 =
    massive_workspace.data() + (96 * nx * ny * nz);
double *__restrict__ scratch_97 =
    massive_workspace.data() + (97 * nx * ny * nz);
double *__restrict__ scratch_98 =
    massive_workspace.data() + (98 * nx * ny * nz);
double *__restrict__ scratch_99 =
    massive_workspace.data() + (99 * nx * ny * nz);
double *__restrict__ scratch_100 =
    massive_workspace.data() + (100 * nx * ny * nz);
double *__restrict__ scratch_101 =
    massive_workspace.data() + (101 * nx * ny * nz);
double *__restrict__ scratch_102 =
    massive_workspace.data() + (102 * nx * ny * nz);
double *__restrict__ scratch_103 =
    massive_workspace.data() + (103 * nx * ny * nz);
double *__restrict__ scratch_104 =
    massive_workspace.data() + (104 * nx * ny * nz);
double *__restrict__ scratch_105 =
    massive_workspace.data() + (105 * nx * ny * nz);
double *__restrict__ scratch_106 =
    massive_workspace.data() + (106 * nx * ny * nz);
double *__restrict__ scratch_107 =
    massive_workspace.data() + (107 * nx * ny * nz);
double *__restrict__ scratch_108 =
    massive_workspace.data() + (108 * nx * ny * nz);
double *__restrict__ scratch_109 =
    massive_workspace.data() + (109 * nx * ny * nz);
double *__restrict__ scratch_110 =
    massive_workspace.data() + (110 * nx * ny * nz);
double *__restrict__ scratch_111 =
    massive_workspace.data() + (111 * nx * ny * nz);
double *__restrict__ scratch_112 =
    massive_workspace.data() + (112 * nx * ny * nz);
double *__restrict__ scratch_113 =
    massive_workspace.data() + (113 * nx * ny * nz);
double *__restrict__ scratch_114 =
    massive_workspace.data() + (114 * nx * ny * nz);
double *__restrict__ scratch_115 =
    massive_workspace.data() + (115 * nx * ny * nz);
double *__restrict__ scratch_116 =
    massive_workspace.data() + (116 * nx * ny * nz);
double *__restrict__ scratch_117 =
    massive_workspace.data() + (117 * nx * ny * nz);
double *__restrict__ scratch_118 =
    massive_workspace.data() + (118 * nx * ny * nz);
double *__restrict__ scratch_119 =
    massive_workspace.data() + (119 * nx * ny * nz);
double *__restrict__ scratch_120 =
    massive_workspace.data() + (120 * nx * ny * nz);
double *__restrict__ scratch_121 =
    massive_workspace.data() + (121 * nx * ny * nz);
double *__restrict__ scratch_122 =
    massive_workspace.data() + (122 * nx * ny * nz);
double *__restrict__ scratch_123 =
    massive_workspace.data() + (123 * nx * ny * nz);
double *__restrict__ scratch_124 =
    massive_workspace.data() + (124 * nx * ny * nz);
double *__restrict__ scratch_125 =
    massive_workspace.data() + (125 * nx * ny * nz);
double *__restrict__ scratch_126 =
    massive_workspace.data() + (126 * nx * ny * nz);
double *__restrict__ scratch_127 =
    massive_workspace.data() + (127 * nx * ny * nz);
double *__restrict__ scratch_128 =
    massive_workspace.data() + (128 * nx * ny * nz);
double *__restrict__ scratch_129 =
    massive_workspace.data() + (129 * nx * ny * nz);
double *__restrict__ scratch_130 =
    massive_workspace.data() + (130 * nx * ny * nz);
double *__restrict__ scratch_131 =
    massive_workspace.data() + (131 * nx * ny * nz);
double *__restrict__ scratch_132 =
    massive_workspace.data() + (132 * nx * ny * nz);
double *__restrict__ scratch_133 =
    massive_workspace.data() + (133 * nx * ny * nz);
double *__restrict__ scratch_134 =
    massive_workspace.data() + (134 * nx * ny * nz);
double *__restrict__ scratch_135 =
    massive_workspace.data() + (135 * nx * ny * nz);
double *__restrict__ scratch_136 =
    massive_workspace.data() + (136 * nx * ny * nz);
double *__restrict__ scratch_137 =
    massive_workspace.data() + (137 * nx * ny * nz);
double *__restrict__ scratch_138 =
    massive_workspace.data() + (138 * nx * ny * nz);
double *__restrict__ scratch_139 =
    massive_workspace.data() + (139 * nx * ny * nz);
double *__restrict__ scratch_140 =
    massive_workspace.data() + (140 * nx * ny * nz);
double *__restrict__ scratch_141 =
    massive_workspace.data() + (141 * nx * ny * nz);
double *__restrict__ scratch_142 =
    massive_workspace.data() + (142 * nx * ny * nz);
double *__restrict__ scratch_143 =
    massive_workspace.data() + (143 * nx * ny * nz);
double *__restrict__ scratch_144 =
    massive_workspace.data() + (144 * nx * ny * nz);
double *__restrict__ scratch_145 =
    massive_workspace.data() + (145 * nx * ny * nz);
double *__restrict__ scratch_146 =
    massive_workspace.data() + (146 * nx * ny * nz);
double *__restrict__ scratch_147 =
    massive_workspace.data() + (147 * nx * ny * nz);
double *__restrict__ scratch_148 =
    massive_workspace.data() + (148 * nx * ny * nz);
double *__restrict__ scratch_149 =
    massive_workspace.data() + (149 * nx * ny * nz);
double *__restrict__ scratch_150 =
    massive_workspace.data() + (150 * nx * ny * nz);
double *__restrict__ scratch_151 =
    massive_workspace.data() + (151 * nx * ny * nz);
double *__restrict__ scratch_152 =
    massive_workspace.data() + (152 * nx * ny * nz);
double *__restrict__ scratch_153 =
    massive_workspace.data() + (153 * nx * ny * nz);
double *__restrict__ scratch_154 =
    massive_workspace.data() + (154 * nx * ny * nz);
double *__restrict__ scratch_155 =
    massive_workspace.data() + (155 * nx * ny * nz);
double *__restrict__ scratch_156 =
    massive_workspace.data() + (156 * nx * ny * nz);
double *__restrict__ scratch_157 =
    massive_workspace.data() + (157 * nx * ny * nz);
double *__restrict__ scratch_158 =
    massive_workspace.data() + (158 * nx * ny * nz);
double *__restrict__ scratch_159 =
    massive_workspace.data() + (159 * nx * ny * nz);
double *__restrict__ scratch_160 =
    massive_workspace.data() + (160 * nx * ny * nz);
double *__restrict__ scratch_161 =
    massive_workspace.data() + (161 * nx * ny * nz);
double *__restrict__ scratch_162 =
    massive_workspace.data() + (162 * nx * ny * nz);
double *__restrict__ scratch_163 =
    massive_workspace.data() + (163 * nx * ny * nz);
double *__restrict__ scratch_164 =
    massive_workspace.data() + (164 * nx * ny * nz);
double *__restrict__ scratch_165 =
    massive_workspace.data() + (165 * nx * ny * nz);
double *__restrict__ scratch_166 =
    massive_workspace.data() + (166 * nx * ny * nz);
double *__restrict__ scratch_167 =
    massive_workspace.data() + (167 * nx * ny * nz);
double *__restrict__ scratch_168 =
    massive_workspace.data() + (168 * nx * ny * nz);
double *__restrict__ scratch_169 =
    massive_workspace.data() + (169 * nx * ny * nz);
double *__restrict__ scratch_170 =
    massive_workspace.data() + (170 * nx * ny * nz);
double *__restrict__ scratch_171 =
    massive_workspace.data() + (171 * nx * ny * nz);
double *__restrict__ scratch_172 =
    massive_workspace.data() + (172 * nx * ny * nz);
double *__restrict__ scratch_173 =
    massive_workspace.data() + (173 * nx * ny * nz);
double *__restrict__ scratch_174 =
    massive_workspace.data() + (174 * nx * ny * nz);
double *__restrict__ scratch_175 =
    massive_workspace.data() + (175 * nx * ny * nz);
double *__restrict__ scratch_176 =
    massive_workspace.data() + (176 * nx * ny * nz);
double *__restrict__ scratch_177 =
    massive_workspace.data() + (177 * nx * ny * nz);
double *__restrict__ scratch_178 =
    massive_workspace.data() + (178 * nx * ny * nz);
double *__restrict__ scratch_179 =
    massive_workspace.data() + (179 * nx * ny * nz);
double *__restrict__ scratch_180 =
    massive_workspace.data() + (180 * nx * ny * nz);
double *__restrict__ scratch_181 =
    massive_workspace.data() + (181 * nx * ny * nz);
double *__restrict__ scratch_182 =
    massive_workspace.data() + (182 * nx * ny * nz);
double *__restrict__ scratch_183 =
    massive_workspace.data() + (183 * nx * ny * nz);
double *__restrict__ scratch_184 =
    massive_workspace.data() + (184 * nx * ny * nz);
double *__restrict__ scratch_185 =
    massive_workspace.data() + (185 * nx * ny * nz);
double *__restrict__ scratch_186 =
    massive_workspace.data() + (186 * nx * ny * nz);
double *__restrict__ scratch_187 =
    massive_workspace.data() + (187 * nx * ny * nz);
double *__restrict__ scratch_188 =
    massive_workspace.data() + (188 * nx * ny * nz);
double *__restrict__ scratch_189 =
    massive_workspace.data() + (189 * nx * ny * nz);
double *__restrict__ scratch_190 =
    massive_workspace.data() + (190 * nx * ny * nz);
double *__restrict__ scratch_191 =
    massive_workspace.data() + (191 * nx * ny * nz);
double *__restrict__ scratch_192 =
    massive_workspace.data() + (192 * nx * ny * nz);
double *__restrict__ scratch_193 =
    massive_workspace.data() + (193 * nx * ny * nz);
double *__restrict__ scratch_194 =
    massive_workspace.data() + (194 * nx * ny * nz);
double *__restrict__ scratch_195 =
    massive_workspace.data() + (195 * nx * ny * nz);
double *__restrict__ scratch_196 =
    massive_workspace.data() + (196 * nx * ny * nz);
double *__restrict__ scratch_197 =
    massive_workspace.data() + (197 * nx * ny * nz);
double *__restrict__ scratch_198 =
    massive_workspace.data() + (198 * nx * ny * nz);
double *__restrict__ scratch_199 =
    massive_workspace.data() + (199 * nx * ny * nz);
double *__restrict__ scratch_200 =
    massive_workspace.data() + (200 * nx * ny * nz);
double *__restrict__ scratch_201 =
    massive_workspace.data() + (201 * nx * ny * nz);
double *__restrict__ scratch_202 =
    massive_workspace.data() + (202 * nx * ny * nz);
double *__restrict__ scratch_203 =
    massive_workspace.data() + (203 * nx * ny * nz);
double *__restrict__ scratch_204 =
    massive_workspace.data() + (204 * nx * ny * nz);
double *__restrict__ scratch_205 =
    massive_workspace.data() + (205 * nx * ny * nz);
double *__restrict__ scratch_206 =
    massive_workspace.data() + (206 * nx * ny * nz);
double *__restrict__ scratch_207 =
    massive_workspace.data() + (207 * nx * ny * nz);
double *__restrict__ scratch_208 =
    massive_workspace.data() + (208 * nx * ny * nz);
double *__restrict__ scratch_209 =
    massive_workspace.data() + (209 * nx * ny * nz);
double *__restrict__ scratch_210 =
    massive_workspace.data() + (210 * nx * ny * nz);
double *__restrict__ scratch_211 =
    massive_workspace.data() + (211 * nx * ny * nz);
double *__restrict__ scratch_212 =
    massive_workspace.data() + (212 * nx * ny * nz);
double *__restrict__ scratch_213 =
    massive_workspace.data() + (213 * nx * ny * nz);
double *__restrict__ scratch_214 =
    massive_workspace.data() + (214 * nx * ny * nz);
double *__restrict__ scratch_215 =
    massive_workspace.data() + (215 * nx * ny * nz);
double *__restrict__ scratch_216 =
    massive_workspace.data() + (216 * nx * ny * nz);
double *__restrict__ scratch_217 =
    massive_workspace.data() + (217 * nx * ny * nz);
double *__restrict__ scratch_218 =
    massive_workspace.data() + (218 * nx * ny * nz);
double *__restrict__ scratch_219 =
    massive_workspace.data() + (219 * nx * ny * nz);
double *__restrict__ scratch_220 =
    massive_workspace.data() + (220 * nx * ny * nz);
double *__restrict__ scratch_221 =
    massive_workspace.data() + (221 * nx * ny * nz);
double *__restrict__ scratch_222 =
    massive_workspace.data() + (222 * nx * ny * nz);
double *__restrict__ scratch_223 =
    massive_workspace.data() + (223 * nx * ny * nz);
double *__restrict__ scratch_224 =
    massive_workspace.data() + (224 * nx * ny * nz);
double *__restrict__ scratch_225 =
    massive_workspace.data() + (225 * nx * ny * nz);
double *__restrict__ scratch_226 =
    massive_workspace.data() + (226 * nx * ny * nz);
double *__restrict__ scratch_227 =
    massive_workspace.data() + (227 * nx * ny * nz);
double *__restrict__ scratch_228 =
    massive_workspace.data() + (228 * nx * ny * nz);
double *__restrict__ scratch_229 =
    massive_workspace.data() + (229 * nx * ny * nz);
double *__restrict__ scratch_230 =
    massive_workspace.data() + (230 * nx * ny * nz);
double *__restrict__ scratch_231 =
    massive_workspace.data() + (231 * nx * ny * nz);
double *__restrict__ scratch_232 =
    massive_workspace.data() + (232 * nx * ny * nz);
double *__restrict__ scratch_233 =
    massive_workspace.data() + (233 * nx * ny * nz);
double *__restrict__ scratch_234 =
    massive_workspace.data() + (234 * nx * ny * nz);
double *__restrict__ scratch_235 =
    massive_workspace.data() + (235 * nx * ny * nz);
double *__restrict__ scratch_236 =
    massive_workspace.data() + (236 * nx * ny * nz);
double *__restrict__ scratch_237 =
    massive_workspace.data() + (237 * nx * ny * nz);
double *__restrict__ scratch_238 =
    massive_workspace.data() + (238 * nx * ny * nz);
double *__restrict__ scratch_239 =
    massive_workspace.data() + (239 * nx * ny * nz);
double *__restrict__ scratch_240 =
    massive_workspace.data() + (240 * nx * ny * nz);
double *__restrict__ scratch_241 =
    massive_workspace.data() + (241 * nx * ny * nz);
double *__restrict__ scratch_242 =
    massive_workspace.data() + (242 * nx * ny * nz);
double *__restrict__ scratch_243 =
    massive_workspace.data() + (243 * nx * ny * nz);
double *__restrict__ scratch_244 =
    massive_workspace.data() + (244 * nx * ny * nz);
double *__restrict__ scratch_245 =
    massive_workspace.data() + (245 * nx * ny * nz);
double *__restrict__ scratch_246 =
    massive_workspace.data() + (246 * nx * ny * nz);
double *__restrict__ scratch_247 =
    massive_workspace.data() + (247 * nx * ny * nz);
double *__restrict__ scratch_248 =
    massive_workspace.data() + (248 * nx * ny * nz);
double *__restrict__ scratch_249 =
    massive_workspace.data() + (249 * nx * ny * nz);
double *__restrict__ scratch_250 =
    massive_workspace.data() + (250 * nx * ny * nz);
double *__restrict__ scratch_251 =
    massive_workspace.data() + (251 * nx * ny * nz);
double *__restrict__ scratch_252 =
    massive_workspace.data() + (252 * nx * ny * nz);
double *__restrict__ scratch_253 =
    massive_workspace.data() + (253 * nx * ny * nz);
double *__restrict__ scratch_254 =
    massive_workspace.data() + (254 * nx * ny * nz);
double *__restrict__ scratch_255 =
    massive_workspace.data() + (255 * nx * ny * nz);
double *__restrict__ scratch_256 =
    massive_workspace.data() + (256 * nx * ny * nz);
double *__restrict__ scratch_257 =
    massive_workspace.data() + (257 * nx * ny * nz);
double *__restrict__ scratch_258 =
    massive_workspace.data() + (258 * nx * ny * nz);
double *__restrict__ scratch_259 =
    massive_workspace.data() + (259 * nx * ny * nz);
double *__restrict__ scratch_260 =
    massive_workspace.data() + (260 * nx * ny * nz);
double *__restrict__ scratch_261 =
    massive_workspace.data() + (261 * nx * ny * nz);
double *__restrict__ scratch_262 =
    massive_workspace.data() + (262 * nx * ny * nz);
double *__restrict__ scratch_263 =
    massive_workspace.data() + (263 * nx * ny * nz);
double *__restrict__ scratch_264 =
    massive_workspace.data() + (264 * nx * ny * nz);
double *__restrict__ scratch_265 =
    massive_workspace.data() + (265 * nx * ny * nz);
double *__restrict__ scratch_266 =
    massive_workspace.data() + (266 * nx * ny * nz);
double *__restrict__ scratch_267 =
    massive_workspace.data() + (267 * nx * ny * nz);
double *__restrict__ scratch_268 =
    massive_workspace.data() + (268 * nx * ny * nz);
double *__restrict__ scratch_269 =
    massive_workspace.data() + (269 * nx * ny * nz);
double *__restrict__ scratch_270 =
    massive_workspace.data() + (270 * nx * ny * nz);
double *__restrict__ scratch_271 =
    massive_workspace.data() + (271 * nx * ny * nz);
double *__restrict__ scratch_272 =
    massive_workspace.data() + (272 * nx * ny * nz);
double *__restrict__ scratch_273 =
    massive_workspace.data() + (273 * nx * ny * nz);
double *__restrict__ scratch_274 =
    massive_workspace.data() + (274 * nx * ny * nz);
double *__restrict__ scratch_275 =
    massive_workspace.data() + (275 * nx * ny * nz);
double *__restrict__ scratch_276 =
    massive_workspace.data() + (276 * nx * ny * nz);
double *__restrict__ scratch_277 =
    massive_workspace.data() + (277 * nx * ny * nz);
double *__restrict__ scratch_278 =
    massive_workspace.data() + (278 * nx * ny * nz);
double *__restrict__ scratch_279 =
    massive_workspace.data() + (279 * nx * ny * nz);
double *__restrict__ scratch_280 =
    massive_workspace.data() + (280 * nx * ny * nz);
double *__restrict__ scratch_281 =
    massive_workspace.data() + (281 * nx * ny * nz);
double *__restrict__ scratch_282 =
    massive_workspace.data() + (282 * nx * ny * nz);
double *__restrict__ scratch_283 =
    massive_workspace.data() + (283 * nx * ny * nz);
double *__restrict__ scratch_284 =
    massive_workspace.data() + (284 * nx * ny * nz);
double *__restrict__ scratch_285 =
    massive_workspace.data() + (285 * nx * ny * nz);
double *__restrict__ scratch_286 =
    massive_workspace.data() + (286 * nx * ny * nz);
double *__restrict__ scratch_287 =
    massive_workspace.data() + (287 * nx * ny * nz);
double *__restrict__ scratch_288 =
    massive_workspace.data() + (288 * nx * ny * nz);
double *__restrict__ scratch_289 =
    massive_workspace.data() + (289 * nx * ny * nz);
double *__restrict__ scratch_290 =
    massive_workspace.data() + (290 * nx * ny * nz);
double *__restrict__ scratch_291 =
    massive_workspace.data() + (291 * nx * ny * nz);
double *__restrict__ scratch_292 =
    massive_workspace.data() + (292 * nx * ny * nz);
double *__restrict__ scratch_293 =
    massive_workspace.data() + (293 * nx * ny * nz);
double *__restrict__ scratch_294 =
    massive_workspace.data() + (294 * nx * ny * nz);
double *__restrict__ scratch_295 =
    massive_workspace.data() + (295 * nx * ny * nz);
double *__restrict__ scratch_296 =
    massive_workspace.data() + (296 * nx * ny * nz);
double *__restrict__ scratch_297 =
    massive_workspace.data() + (297 * nx * ny * nz);
double *__restrict__ scratch_298 =
    massive_workspace.data() + (298 * nx * ny * nz);
double *__restrict__ scratch_299 =
    massive_workspace.data() + (299 * nx * ny * nz);
double *__restrict__ scratch_300 =
    massive_workspace.data() + (300 * nx * ny * nz);
double *__restrict__ scratch_301 =
    massive_workspace.data() + (301 * nx * ny * nz);
double *__restrict__ scratch_302 =
    massive_workspace.data() + (302 * nx * ny * nz);
double *__restrict__ scratch_303 =
    massive_workspace.data() + (303 * nx * ny * nz);
double *__restrict__ scratch_304 =
    massive_workspace.data() + (304 * nx * ny * nz);
double *__restrict__ scratch_305 =
    massive_workspace.data() + (305 * nx * ny * nz);
double *__restrict__ scratch_306 =
    massive_workspace.data() + (306 * nx * ny * nz);
double *__restrict__ scratch_307 =
    massive_workspace.data() + (307 * nx * ny * nz);
double *__restrict__ scratch_308 =
    massive_workspace.data() + (308 * nx * ny * nz);
double *__restrict__ scratch_309 =
    massive_workspace.data() + (309 * nx * ny * nz);
double *__restrict__ scratch_310 =
    massive_workspace.data() + (310 * nx * ny * nz);
double *__restrict__ scratch_311 =
    massive_workspace.data() + (311 * nx * ny * nz);

// --- Execution Unit 0 (ID: RegBlock_0) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0        = gt1[pp] * gt1[pp];
            scratch_1[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1        = gt4[pp] * gt4[pp];
            scratch_2[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2        = gt2[pp] * gt2[pp];
            scratch_9[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3        = _tmp_0 * gt5[pp];
            scratch_8[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4        = -0.66666666666666663 * At3[pp] * grad_0_beta0[pp];
            scratch_7[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5        = -gt0[pp] * gt3[pp] * gt5[pp];
            scratch_6[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = _tmp_1 * gt0[pp];
            scratch_5[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7        = beta0[pp] * grad_0_At3[pp];
            scratch_4[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8        = -0.66666666666666663 * At3[pp] * grad_2_beta2[pp];
            scratch_3[pp] = _tmp_8;
            double _tmp_9;
            _tmp_9        = -2 * gt1[pp] * gt2[pp] * gt4[pp];
            scratch_0[pp] = _tmp_9;
        }
    }
}

// --- Execution Unit 1 (ID: RegBlock_1) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = gt3[pp] * scratch_9[pp];
            double _tmp_1;
            _tmp_1 = -gt2[pp] * gt4[pp];
            double _tmp_2;
            _tmp_2 = gt1[pp] * gt5[pp];
            _tmp_0 = _tmp_0 + scratch_0[pp] + scratch_5[pp] + scratch_6[pp] +
                     scratch_8[pp];
            scratch_10[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3 = -gt1[pp] * gt4[pp];
            double _tmp_4;
            _tmp_4         = gt2[pp] * gt3[pp];
            _tmp_2         = _tmp_1 + _tmp_2;
            scratch_14[pp] = _tmp_2;
            _tmp_1         = 1.0 / _tmp_0;
            scratch_13[pp] = _tmp_1;
            double _tmp_5;
            _tmp_5         = 0.5 * grad_1_gt2[pp];
            scratch_12[pp] = _tmp_5;
            _tmp_4         = _tmp_3 + _tmp_4;
            scratch_11[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 2 (ID: RegBlock_2) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt3[pp] * gt5[pp];
            double _tmp_1;
            _tmp_1 = -0.5 * grad_2_gt1[pp];
            double _tmp_2;
            _tmp_2         = 0.5 * grad_0_gt4[pp];
            scratch_5[pp]  = _tmp_2;
            _tmp_0         = _tmp_0 + scratch_2[pp];
            scratch_18[pp] = _tmp_0;
            _tmp_1         = _tmp_1 + _tmp_2 + scratch_12[pp];
            scratch_17[pp] = _tmp_1;
            double _tmp_3;
            _tmp_3        = 0.5 * _tmp_0 * grad_1_gt0[pp] * scratch_13[pp];
            scratch_8[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 0.5 * grad_0_gt3[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_16[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5        = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_6[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = _tmp_3 + _tmp_4 + _tmp_5;
            scratch_15[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7         = -0.5 * grad_0_gt3[pp];
            scratch_19[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8        = _tmp_6 * grad_0_gt3[pp];
            scratch_0[pp] = _tmp_8;
        }
    }
}

// --- Execution Unit 3 (ID: RegBlock_3) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -0.5 * grad_2_gt3[pp];
            _tmp_0         = _tmp_0 + grad_1_gt4[pp];
            scratch_20[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = grad_1_gt1[pp] + scratch_19[pp];
            scratch_26[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.5 * grad_1_gt3[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_24[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_22[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = _tmp_1 * scratch_13[pp] * scratch_18[pp];
            scratch_28[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = _tmp_2 + _tmp_3 + _tmp_4;
            scratch_25[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = 0.5 * _tmp_5 * grad_1_gt0[pp];
            scratch_21[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7 = _tmp_6 + scratch_0[pp];
            double _tmp_8;
            _tmp_8         = grad_1_Gt2[pp] * gt4[pp];
            scratch_27[pp] = _tmp_8;
            _tmp_7         = _tmp_7 * scratch_13[pp] * scratch_14[pp];
            scratch_23[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 4 (ID: RegBlock_4) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt0[pp] * gt3[pp];
            double _tmp_1;
            _tmp_1 = -0.5 * grad_0_gt4[pp];
            double _tmp_2;
            _tmp_2         = 0.5 * grad_2_gt1[pp];
            scratch_19[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = -gt1[pp] * gt2[pp];
            double _tmp_4;
            _tmp_4         = gt0[pp] * gt4[pp];
            _tmp_0         = _tmp_0 + scratch_1[pp];
            scratch_29[pp] = _tmp_0;
            _tmp_1         = _tmp_1 + _tmp_2 + scratch_12[pp];
            scratch_32[pp] = _tmp_1;
            _tmp_4         = _tmp_3 + _tmp_4;
            scratch_33[pp] = _tmp_4;
            _tmp_3         = 0.5 * _tmp_0 * grad_1_gt5[pp] * scratch_13[pp];
            scratch_31[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5         = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_30[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = 0.5 * _tmp_4 * grad_2_gt3[pp] * scratch_13[pp];
            scratch_0[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 5 (ID: RegBlock_5) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.5 * grad_1_gt3[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_40[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_13[pp] * scratch_20[pp] * scratch_29[pp];
            scratch_35[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = scratch_11[pp] * scratch_13[pp] * scratch_26[pp];
            scratch_34[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = -0.5 * grad_1_gt5[pp];
            double _tmp_4;
            _tmp_4         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_39[pp] = _tmp_4;
            _tmp_3         = _tmp_3 + grad_2_gt4[pp];
            scratch_12[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5         = scratch_0[pp] + scratch_30[pp] + scratch_31[pp];
            scratch_41[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = 2 * _tmp_3 * _tmp_4;
            double _tmp_7;
            _tmp_7         = _tmp_5 * scratch_20[pp];
            scratch_37[pp] = _tmp_7;
            _tmp_6         = _tmp_6 + _tmp_7;
            _tmp_6         = _tmp_6 * scratch_13[pp] * scratch_33[pp];
            scratch_38[pp] = _tmp_6;
            double _tmp_8;
            _tmp_8         = scratch_13[pp] * scratch_20[pp] * scratch_33[pp];
            scratch_36[pp] = _tmp_8;
        }
    }
}

// --- Execution Unit 6 (ID: RegBlock_6) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -gt0[pp] * gt5[pp];
            _tmp_0         = _tmp_0 + scratch_9[pp];
            scratch_46[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = 0.5 * _tmp_0 * grad_1_gt3[pp] * scratch_13[pp];
            scratch_47[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = scratch_13[pp] * scratch_14[pp] * scratch_26[pp];
            scratch_50[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 0.5 * _tmp_0 * grad_2_gt3[pp] * scratch_13[pp];
            scratch_52[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 0.5 * grad_1_gt5[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_42[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = scratch_13[pp] * scratch_14[pp] * scratch_32[pp];
            scratch_51[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = _tmp_1 + _tmp_2 + scratch_36[pp];
            scratch_48[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7         = _tmp_3 + _tmp_4 + _tmp_5;
            scratch_49[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8         = 0.5 * _tmp_6 * grad_2_gt3[pp];
            scratch_45[pp] = _tmp_8;
            double _tmp_9;
            _tmp_9         = _tmp_7 * grad_1_gt3[pp];
            scratch_43[pp] = _tmp_9;
            double _tmp_10;
            _tmp_10        = _tmp_8 + _tmp_9;
            _tmp_10        = _tmp_10 * scratch_13[pp] * scratch_33[pp];
            scratch_44[pp] = _tmp_10;
        }
    }
}

// --- Execution Unit 7 (ID: RegBlock_7) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.5 * grad_1_gt0[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_53[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 0.5 * grad_0_gt3[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_54[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = scratch_13[pp] * scratch_17[pp] * scratch_29[pp];
            scratch_59[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_58[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = scratch_25[pp] * scratch_26[pp];
            double _tmp_5;
            _tmp_5 = grad_0_gt3[pp] * scratch_25[pp];
            double _tmp_6;
            _tmp_6 = 2 * _tmp_3 * scratch_12[pp];
            double _tmp_7;
            _tmp_7         = scratch_17[pp] * scratch_41[pp];
            scratch_57[pp] = _tmp_7;
            _tmp_5         = _tmp_4 + _tmp_5;
            _tmp_6         = _tmp_6 + _tmp_7;
            _tmp_5         = _tmp_5 * scratch_13[pp] * scratch_46[pp];
            scratch_56[pp] = _tmp_5;
            _tmp_6         = _tmp_6 * scratch_11[pp] * scratch_13[pp];
            scratch_55[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 8 (ID: RegBlock_8) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_1_gt5[pp] * scratch_39[pp];
            scratch_65[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = grad_2_gt3[pp] * scratch_41[pp];
            double _tmp_2;
            _tmp_2 = scratch_20[pp] * scratch_39[pp];
            double _tmp_3;
            _tmp_3         = grad_2_gt3[pp] * scratch_39[pp];
            _tmp_1         = _tmp_0 + _tmp_1;
            _tmp_3         = _tmp_2 + _tmp_3;
            _tmp_1         = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_64[pp] = _tmp_1;
            _tmp_2         = grad_2_gt3[pp] * scratch_48[pp];
            scratch_63[pp] = _tmp_2;
            _tmp_3         = _tmp_3 * scratch_13[pp] * scratch_46[pp];
            scratch_62[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = 0.5 * grad_1_gt3[pp] * scratch_49[pp];
            scratch_61[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = -0.5 * grad2_2_2_gt3[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_60[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 9 (ID: RegBlock_9) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -0.5 * grad_0_gt5[pp];
            _tmp_0         = _tmp_0 + grad_2_gt2[pp];
            scratch_68[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 0.5 * grad_2_gt5[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_69[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = scratch_12[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_66[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_72[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = _tmp_1 + _tmp_2 + _tmp_3;
            scratch_71[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = scratch_61[pp] + scratch_63[pp];
            double _tmp_6;
            _tmp_6         = _tmp_4 * scratch_13[pp] * scratch_29[pp];
            scratch_73[pp] = _tmp_6;
            _tmp_5         = _tmp_5 * scratch_13[pp] * scratch_33[pp];
            scratch_70[pp] = _tmp_5;
            double _tmp_7;
            _tmp_7 = 2 * scratch_13[pp] * scratch_33[pp] * scratch_49[pp];
            scratch_67[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 10 (ID: RegBlock_10) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.5 * grad_2_gt0[pp];
            double _tmp_1;
            _tmp_1         = -0.5 * grad_1_gt0[pp];
            _tmp_0         = _tmp_0 + grad_0_gt2[pp];
            scratch_63[pp] = _tmp_0;
            _tmp_1         = _tmp_1 + grad_0_gt1[pp];
            scratch_77[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.5 * grad_0_gt0[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_79[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_74[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = _tmp_1 * scratch_13[pp] * scratch_46[pp];
            scratch_78[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = _tmp_2 + _tmp_3 + _tmp_4;
            scratch_82[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = 0.5 * grad_0_gt5[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_81[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7         = scratch_13[pp] * scratch_46[pp] * scratch_48[pp];
            scratch_80[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8 = 0.5 * grad_2_gt0[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_76[pp] = _tmp_8;
            double _tmp_9;
            _tmp_9         = _tmp_5 * scratch_13[pp] * scratch_18[pp];
            scratch_75[pp] = _tmp_9;
        }
    }
}

// --- Execution Unit 11 (ID: RegBlock_11) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -0.5 * grad_1_gt2[pp];
            _tmp_0         = _tmp_0 + scratch_19[pp] + scratch_5[pp];
            scratch_86[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 0.5 * grad_1_gt0[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_90[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.5 * grad_0_gt3[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_88[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = scratch_13[pp] * scratch_17[pp] * scratch_33[pp];
            scratch_83[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            scratch_87[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = _tmp_1 + _tmp_2 + _tmp_3;
            scratch_89[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = _tmp_4 + scratch_76[pp] + scratch_81[pp];
            scratch_85[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7         = 2 * _tmp_5 * scratch_13[pp] * scratch_14[pp];
            scratch_91[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8         = 2 * _tmp_6 * scratch_11[pp] * scratch_13[pp];
            scratch_84[pp] = _tmp_8;
        }
    }
}

// --- Execution Unit 12 (ID: RegBlock_12) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_0_gt3[pp] * scratch_48[pp];
            scratch_94[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = grad_1_gt3[pp] * scratch_89[pp];
            scratch_19[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_67[pp] + scratch_73[pp] + scratch_75[pp] +
                     scratch_80[pp] + scratch_84[pp] + scratch_91[pp];
            scratch_93[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1;
            double _tmp_4;
            _tmp_4 = 1.5 * grad_0_gt3[pp] * scratch_13[pp] * scratch_18[pp] *
                     scratch_89[pp];
            scratch_96[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = 0.5 * _tmp_2 * grad_1_gt3[pp];
            scratch_95[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = 1.5 * grad_2_gt3[pp] * scratch_13[pp] * scratch_29[pp] *
                     scratch_49[pp];
            scratch_92[pp] = _tmp_6;
            _tmp_3         = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_5[pp]  = _tmp_3;
        }
    }
}

// --- Execution Unit 13 (ID: RegBlock_13) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_2_gt3[pp] * scratch_89[pp];
            scratch_91[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = grad_0_gt3[pp] * scratch_49[pp];
            double _tmp_2;
            _tmp_2 = 2 * scratch_15[pp] * scratch_77[pp];
            double _tmp_3;
            _tmp_3         = 0.5 * grad_1_gt0[pp] * scratch_15[pp];
            scratch_84[pp] = _tmp_3;
            _tmp_1         = _tmp_0 + _tmp_1;
            _tmp_2         = _tmp_2 + _tmp_3;
            _tmp_1         = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_97[pp] = _tmp_1;
            double _tmp_4;
            _tmp_4 = -grad2_0_2_gt3[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_80[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = -grad2_1_2_gt3[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_75[pp] = _tmp_5;
            _tmp_2         = _tmp_2 * scratch_13[pp] * scratch_18[pp];
            scratch_73[pp] = _tmp_2;
            double _tmp_6;
            _tmp_6         = grad_2_gt3[pp] * scratch_89[pp];
            scratch_67[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 14 (ID: RegBlock_14) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_0_gt3[pp] * scratch_49[pp];
            scratch_105[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 0.5 * grad_2_gt0[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_100[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.5 * grad_0_gt5[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_99[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = scratch_13[pp] * scratch_33[pp] * scratch_86[pp];
            scratch_98[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = _tmp_0 + scratch_67[pp];
            double _tmp_5;
            _tmp_5          = _tmp_1 + _tmp_2 + _tmp_3;
            scratch_104[pp] = _tmp_5;
            _tmp_4          = _tmp_4 * scratch_11[pp] * scratch_13[pp];
            scratch_103[pp] = _tmp_4;
            double _tmp_6;
            _tmp_6          = 1.0 / chi[pp];
            scratch_102[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = scratch_13[pp] * scratch_39[pp] * scratch_46[pp];
            scratch_101[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 15 (ID: RegBlock_15) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.5 * grad_0_gt0[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_106[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_13[pp] * scratch_29[pp] * scratch_63[pp];
            scratch_112[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_13[pp] * scratch_33[pp] * scratch_77[pp];
            scratch_115[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 0.5 * grad_2_gt5[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_109[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = scratch_12[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_110[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = scratch_11[pp] * scratch_13[pp] * scratch_68[pp];
            scratch_108[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_113[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = _tmp_3 + _tmp_4 + _tmp_5;
            scratch_111[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8          = _tmp_6 * scratch_13[pp] * scratch_18[pp];
            scratch_114[pp] = _tmp_8;
            double _tmp_9;
            _tmp_9 = 2 * scratch_104[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_107[pp] = _tmp_9;
            double _tmp_10;
            _tmp_10        = _tmp_7 * scratch_13[pp] * scratch_29[pp];
            scratch_67[pp] = _tmp_10;
        }
    }
}

// --- Execution Unit 16 (ID: RegBlock_16) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -1.5 * grad_1_chi[pp] * grad_2_chi[pp] * scratch_102[pp];
            double _tmp_1;
            _tmp_1 = 2 * scratch_13[pp] * scratch_14[pp] * scratch_58[pp];
            double _tmp_2;
            _tmp_2 = 2 * scratch_13[pp] * scratch_33[pp] * scratch_41[pp];
            _tmp_0 = _tmp_0 + grad2_1_2_chi[pp];
            _tmp_2 = _tmp_1 + _tmp_2 + scratch_101[pp] + scratch_107[pp] +
                     scratch_114[pp] + scratch_67[pp];
            scratch_118[pp] = _tmp_2;
            _tmp_0          = 2 * _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_117[pp] = _tmp_0;
            _tmp_1          = -_tmp_2 * grad_2_chi[pp];
            scratch_116[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 17 (ID: RegBlock_17) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.5 * grad_2_gt5[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_121[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_12[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_124[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_13[pp] * scratch_18[pp] * scratch_68[pp];
            scratch_120[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 0.5 * grad_0_gt0[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_67[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = scratch_11[pp] * scratch_13[pp] * scratch_63[pp];
            scratch_125[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = scratch_13[pp] * scratch_14[pp] * scratch_77[pp];
            scratch_101[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_119[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = _tmp_3 + _tmp_4 + _tmp_5;
            scratch_126[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8 = 0.5 * grad_2_gt3[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_123[pp] = _tmp_8;
            double _tmp_9;
            _tmp_9          = _tmp_6 * scratch_13[pp] * scratch_29[pp];
            scratch_122[pp] = _tmp_9;
            double _tmp_10;
            _tmp_10         = _tmp_7 * scratch_13[pp] * scratch_18[pp];
            scratch_114[pp] = _tmp_10;
            double _tmp_11;
            _tmp_11         = scratch_13[pp] * scratch_18[pp] * scratch_32[pp];
            scratch_107[pp] = _tmp_11;
        }
    }
}

// --- Execution Unit 18 (ID: RegBlock_18) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.5 * grad_1_gt5[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_133[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 0.5 * grad_2_gt0[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_132[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.5 * grad_0_gt5[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_130[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_13[pp] * scratch_14[pp] * scratch_86[pp];
            scratch_127[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = _tmp_0 + scratch_107[pp] + scratch_123[pp];
            scratch_131[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = _tmp_1 + _tmp_2 + _tmp_3;
            scratch_134[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = 2 * _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_136[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = 2 * _tmp_5 * scratch_11[pp] * scratch_13[pp];
            scratch_135[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8          = scratch_13[pp] * scratch_25[pp] * scratch_46[pp];
            scratch_129[pp] = _tmp_8;
            double _tmp_9;
            _tmp_9 = 2 * scratch_13[pp] * scratch_14[pp] * scratch_15[pp];
            scratch_128[pp] = _tmp_9;
        }
    }
}

// --- Execution Unit 19 (ID: RegBlock_19) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -1.5 * grad_0_chi[pp] * grad_2_chi[pp] * scratch_102[pp];
            _tmp_0 = _tmp_0 + grad2_0_2_chi[pp];
            double _tmp_1;
            _tmp_1 = scratch_114[pp] + scratch_122[pp] + scratch_128[pp] +
                     scratch_129[pp] + scratch_135[pp] + scratch_136[pp];
            scratch_139[pp] = _tmp_1;
            _tmp_0          = 2 * _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_141[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2          = -_tmp_1 * grad_0_chi[pp];
            scratch_140[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = -1.5 * grad_0_chi[pp] * grad_1_chi[pp] * scratch_102[pp];
            scratch_138[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = -grad_1_chi[pp] * scratch_93[pp];
            scratch_137[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 20 (ID: RegBlock_20) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_chi[pp] * grad_0_chi[pp];
            double _tmp_1;
            _tmp_1 = grad_2_chi[pp] * grad_2_chi[pp];
            _tmp_0 = -1.5 * _tmp_0 * scratch_102[pp];
            _tmp_1 = -1.5 * _tmp_1 * scratch_102[pp];
            _tmp_0 = _tmp_0 + grad2_0_0_chi[pp];
            double _tmp_2;
            _tmp_2          = grad2_0_1_chi[pp] + scratch_138[pp];
            _tmp_1          = _tmp_1 + grad2_2_2_chi[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_18[pp];
            scratch_122[pp] = _tmp_0;
            _tmp_2          = 2 * _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_129[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = grad_1_chi[pp] * grad_1_chi[pp];
            scratch_114[pp] = _tmp_3;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_29[pp];
            scratch_128[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 21 (ID: RegBlock_21) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -1.5 * scratch_102[pp] * scratch_114[pp];
            _tmp_0 = _tmp_0 + grad2_1_1_chi[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            _tmp_0 = _tmp_0 + scratch_116[pp] + scratch_117[pp] +
                     scratch_122[pp] + scratch_128[pp] + scratch_129[pp] +
                     scratch_137[pp] + scratch_140[pp] + scratch_141[pp];
            scratch_138[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * _tmp_0 * gt3[pp] * scratch_102[pp];
            scratch_136[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 0.5 * grad_2_gt3[pp] * scratch_118[pp];
            scratch_135[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 22 (ID: RegBlock_22) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_131[pp] * scratch_77[pp];
            double _tmp_1;
            _tmp_1          = scratch_15[pp] * scratch_32[pp];
            scratch_116[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 2 * scratch_41[pp] * scratch_86[pp];
            double _tmp_3;
            _tmp_3          = 0.5 * grad_1_gt5[pp] * scratch_58[pp];
            scratch_114[pp] = _tmp_3;
            _tmp_0          = _tmp_0 + _tmp_1;
            _tmp_2          = _tmp_2 + _tmp_3;
            double _tmp_4;
            _tmp_4          = scratch_20[pp] * scratch_58[pp];
            scratch_129[pp] = _tmp_4;
            _tmp_0          = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_128[pp] = _tmp_0;
            double _tmp_5;
            _tmp_5          = grad_1_Gt1[pp] * gt3[pp];
            scratch_122[pp] = _tmp_5;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_117[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 23 (ID: RegBlock_23) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_131[pp] * scratch_86[pp];
            double _tmp_1;
            _tmp_1          = scratch_131[pp] * scratch_32[pp];
            scratch_141[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 2 * scratch_39[pp] * scratch_86[pp];
            _tmp_0 = _tmp_0 + _tmp_1;
            _tmp_2 = _tmp_2 + scratch_129[pp];
            double _tmp_3;
            _tmp_3          = grad_0_gt3[pp] * scratch_131[pp];
            scratch_144[pp] = _tmp_3;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_29[pp];
            scratch_143[pp] = _tmp_0;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_142[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_0_0_gt3[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_140[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = -0.5 * grad2_1_1_gt3[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_137[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 24 (ID: RegBlock_24) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_25[pp] * scratch_32[pp];
            scratch_146[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_1_gt3[pp] * scratch_89[pp];
            scratch_149[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = grad_0_gt3[pp] * scratch_48[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 + scratch_144[pp];
            _tmp_2 = _tmp_1 + _tmp_2;
            double _tmp_4;
            _tmp_4 = 1.5 * grad_1_gt3[pp] * scratch_13[pp] * scratch_46[pp] *
                     scratch_48[pp];
            scratch_150[pp] = _tmp_4;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_148[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5 = -grad2_0_1_gt3[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_147[pp] = _tmp_5;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_145[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 25 (ID: RegBlock_25) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_17[pp] * scratch_39[pp];
            scratch_154[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = grad_2_gt3[pp] * scratch_58[pp];
            double _tmp_2;
            _tmp_2 = 2 * scratch_25[pp] * scratch_86[pp];
            double _tmp_3;
            _tmp_3          = scratch_131[pp] * scratch_26[pp];
            scratch_155[pp] = _tmp_3;
            _tmp_1          = _tmp_0 + _tmp_1;
            _tmp_2          = _tmp_2 + _tmp_3;
            double _tmp_4;
            _tmp_4 = 2 * scratch_25[pp] * scratch_77[pp];
            double _tmp_5;
            _tmp_5          = scratch_15[pp] * scratch_26[pp];
            scratch_151[pp] = _tmp_5;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_153[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_152[pp] = _tmp_2;
            _tmp_4          = _tmp_4 + _tmp_5;
            scratch_144[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 26 (ID: RegBlock_26) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_15[pp] * scratch_86[pp];
            double _tmp_1;
            _tmp_1          = 0.5 * grad_1_gt0[pp] * scratch_131[pp];
            scratch_161[pp] = _tmp_1;
            _tmp_0          = _tmp_0 + _tmp_1;
            double _tmp_2;
            _tmp_2          = 2 * scratch_12[pp] * scratch_41[pp];
            scratch_160[pp] = _tmp_2;
            _tmp_0          = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_159[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3          = scratch_13[pp] * scratch_144[pp] * scratch_14[pp];
            scratch_158[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = grad_1_Gt0[pp] * gt1[pp];
            scratch_157[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_0_gt3[pp] * scratch_139[pp];
            scratch_156[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 27 (ID: RegBlock_27) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_1_gt5[pp] * scratch_41[pp];
            scratch_144[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 2 * scratch_58[pp] * scratch_86[pp];
            double _tmp_2;
            _tmp_2          = scratch_17[pp] * scratch_58[pp];
            scratch_163[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = _tmp_0 + scratch_160[pp];
            _tmp_1          = _tmp_1 + _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_29[pp];
            scratch_162[pp] = _tmp_3;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_18[pp];
            scratch_164[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 28 (ID: RegBlock_28) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_103[pp] + scratch_117[pp] + scratch_122[pp] +
                     scratch_128[pp] + scratch_135[pp] + scratch_136[pp] +
                     scratch_137[pp] + scratch_140[pp] + scratch_142[pp] +
                     scratch_143[pp] + scratch_145[pp] + scratch_147[pp] +
                     scratch_148[pp] + scratch_150[pp] + scratch_152[pp] +
                     scratch_153[pp] + scratch_156[pp] + scratch_157[pp] +
                     scratch_158[pp] + scratch_159[pp] + scratch_162[pp] +
                     scratch_164[pp] + scratch_23[pp] + scratch_27[pp] +
                     scratch_38[pp] + scratch_44[pp] + scratch_55[pp] +
                     scratch_56[pp] + scratch_5[pp] + scratch_60[pp] +
                     scratch_62[pp] + scratch_64[pp] + scratch_70[pp] +
                     scratch_73[pp] + scratch_75[pp] + scratch_80[pp] +
                     scratch_92[pp] + scratch_95[pp] + scratch_96[pp] +
                     scratch_97[pp];
            scratch_160[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 29 (ID: RegBlock_29) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_chi[pp] * scratch_13[pp] * scratch_29[pp];
            double _tmp_1;
            _tmp_1 = grad_1_chi[pp] * scratch_13[pp] * scratch_33[pp];
            double _tmp_2;
            _tmp_2         = grad_0_chi[pp] * scratch_11[pp] * scratch_13[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_27[pp] = _tmp_2;
            _tmp_0         = 0.5 * _tmp_2 * gt3[pp] * scratch_102[pp];
            _tmp_0 = _tmp_0 + scratch_34[pp] + scratch_35[pp] + scratch_40[pp];
            scratch_5[pp]  = _tmp_0;
            _tmp_1         = _tmp_0 * grad_2_alpha[pp];
            scratch_38[pp] = _tmp_1;
            double _tmp_3;
            _tmp_3         = alpha[pp] * scratch_160[pp];
            scratch_23[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 30 (ID: RegBlock_30) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_0_gt0[pp] * scratch_25[pp];
            scratch_55[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_15[pp] * scratch_77[pp];
            scratch_44[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.5 * gt1[pp] * scratch_102[pp] * scratch_27[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + scratch_84[pp];
            _tmp_2 = _tmp_2 + scratch_53[pp] + scratch_54[pp] + scratch_59[pp];
            scratch_35[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4         = 0.5 * grad_1_Gt0[pp] * gt0[pp];
            scratch_56[pp] = _tmp_4;
            _tmp_3         = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_40[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5         = _tmp_2 * grad_2_alpha[pp];
            scratch_34[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 31 (ID: RegBlock_31) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_2_gt0[pp] * scratch_58[pp];
            scratch_60[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_113[pp] * scratch_86[pp];
            scratch_54[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = scratch_58[pp] * scratch_63[pp];
            scratch_59[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 0.5 * grad_0_gt3[pp] * scratch_15[pp];
            scratch_64[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = grad_1_gt0[pp] * scratch_25[pp];
            double _tmp_5;
            _tmp_5         = _tmp_0 + _tmp_1 + _tmp_2;
            _tmp_4         = _tmp_3 + _tmp_4;
            _tmp_5         = _tmp_5 * scratch_13[pp] * scratch_18[pp];
            scratch_70[pp] = _tmp_5;
            _tmp_4         = _tmp_4 * scratch_13[pp] * scratch_46[pp];
            scratch_62[pp] = _tmp_4;
            double _tmp_6;
            _tmp_6         = 0.5 * grad_1_gt1[pp] * scratch_93[pp];
            scratch_53[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 32 (ID: RegBlock_32) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_1_gt0[pp] * scratch_48[pp];
            scratch_92[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = grad_0_gt3[pp] * scratch_89[pp];
            double _tmp_2;
            _tmp_2         = 0.5 * grad_0_gt3[pp] * scratch_126[pp];
            scratch_95[pp] = _tmp_2;
            _tmp_1         = _tmp_0 + _tmp_1;
            double _tmp_3;
            _tmp_3 = _tmp_2 + scratch_55[pp] + scratch_84[pp];
            double _tmp_4;
            _tmp_4 = -grad2_1_2_gt1[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_97[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = scratch_32[pp] * scratch_48[pp];
            scratch_96[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = 0.5 * grad_2_gt1[pp] * scratch_118[pp];
            scratch_80[pp] = _tmp_6;
            _tmp_1         = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_75[pp] = _tmp_1;
            _tmp_3         = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_73[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 33 (ID: RegBlock_33) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_113[pp] * scratch_12[pp];
            scratch_103[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_58[pp] * scratch_68[pp];
            scratch_122[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_41[pp] * scratch_63[pp];
            scratch_135[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_4;
            _tmp_4          = scratch_105[pp] + scratch_91[pp] + scratch_96[pp];
            _tmp_3          = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_136[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5          = scratch_15[pp] * scratch_86[pp];
            scratch_128[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = -0.5 * grad2_0_0_gt1[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_117[pp] = _tmp_6;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_84[pp]  = _tmp_4;
        }
    }
}

// --- Execution Unit 34 (ID: RegBlock_34) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt0[pp] * scratch_25[pp];
            scratch_145[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_2_gt0[pp] * scratch_39[pp];
            scratch_137[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_58[pp] * scratch_86[pp];
            scratch_148[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + scratch_128[pp] + scratch_161[pp];
            double _tmp_4;
            _tmp_4          = _tmp_1 + _tmp_2 + scratch_163[pp];
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_150[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5          = scratch_49[pp] * scratch_86[pp];
            scratch_147[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = 0.5 * grad_2_gt3[pp] * scratch_85[pp];
            scratch_143[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = scratch_32[pp] * scratch_49[pp];
            scratch_142[pp] = _tmp_7;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_14[pp];
            scratch_140[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 35 (ID: RegBlock_35) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_126[pp] * scratch_77[pp];
            scratch_153[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = grad_0_gt0[pp] * scratch_15[pp];
            scratch_159[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_142[pp] + scratch_143[pp] + scratch_147[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_0_Gt2[pp] * gt4[pp];
            scratch_162[pp] = _tmp_4;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_29[pp];
            scratch_158[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_18[pp];
            scratch_157[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_0_gt1[pp] * scratch_139[pp];
            scratch_156[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = 0.5 * grad_0_Gt1[pp] * gt3[pp];
            scratch_152[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 36 (ID: RegBlock_36) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_0_gt3[pp] * scratch_134[pp];
            scratch_170[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_1_gt3[pp] * scratch_85[pp];
            scratch_167[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_48[pp] * scratch_86[pp];
            scratch_166[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_26[pp] * scratch_49[pp];
            scratch_164[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = _tmp_0 + scratch_145[pp] + scratch_161[pp];
            double _tmp_5;
            _tmp_5 = _tmp_1 + _tmp_2 + _tmp_3;
            double _tmp_6;
            _tmp_6 = -grad2_0_2_gt1[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_169[pp] = _tmp_6;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_168[pp] = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_33[pp];
            scratch_165[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 37 (ID: RegBlock_37) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_12[pp] * scratch_58[pp];
            scratch_176[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_39[pp] * scratch_68[pp];
            scratch_173[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + _tmp_1 + scratch_57[pp];
            double _tmp_3;
            _tmp_3          = 0.5 * grad_1_gt3[pp] * scratch_82[pp];
            scratch_177[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = scratch_26[pp] * scratch_89[pp];
            scratch_172[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = scratch_48[pp] * scratch_77[pp];
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_175[pp] = _tmp_2;
            double _tmp_6;
            _tmp_6          = 0.5 * gt1[pp] * scratch_102[pp] * scratch_138[pp];
            scratch_174[pp] = _tmp_6;
            _tmp_5          = _tmp_3 + _tmp_4 + _tmp_5;
            scratch_171[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 38 (ID: RegBlock_38) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_26[pp] * scratch_48[pp];
            scratch_182[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = _tmp_0 + scratch_149[pp] + scratch_94[pp];
            double _tmp_2;
            _tmp_2          = scratch_39[pp] * scratch_63[pp];
            scratch_184[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = 0.5 * grad_1_Gt1[pp] * gt1[pp];
            scratch_183[pp] = _tmp_3;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_46[pp];
            scratch_181[pp] = _tmp_1;
            double _tmp_4;
            _tmp_4          = scratch_32[pp] * scratch_58[pp];
            scratch_180[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = -0.5 * grad2_1_1_gt1[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_179[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = scratch_13[pp] * scratch_14[pp] * scratch_171[pp];
            scratch_178[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 39 (ID: RegBlock_39) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_0_gt5[pp] * scratch_41[pp];
            scratch_171[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_104[pp] * scratch_12[pp];
            scratch_187[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_41[pp] * scratch_68[pp];
            scratch_185[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = 0.5 * grad_2_gt3[pp] * scratch_113[pp];
            scratch_186[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_5;
            _tmp_5 = _tmp_3 + scratch_180[pp] + scratch_184[pp];
            double _tmp_6;
            _tmp_6          = scratch_32[pp] * scratch_39[pp];
            scratch_188[pp] = _tmp_6;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_29[pp];
            scratch_94[pp]  = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_14[pp];
            scratch_149[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 40 (ID: RegBlock_40) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt3[pp] * scratch_58[pp];
            scratch_193[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_1_gt0[pp] * scratch_49[pp];
            scratch_194[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 0.5 * grad_0_gt3[pp] * scratch_85[pp];
            scratch_189[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_86[pp] * scratch_89[pp];
            scratch_192[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = _tmp_0 + scratch_154[pp] + scratch_188[pp];
            double _tmp_5;
            _tmp_5 = _tmp_1 + _tmp_2 + _tmp_3;
            double _tmp_6;
            _tmp_6 = -grad2_0_1_gt1[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_191[pp] = _tmp_6;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_46[pp];
            scratch_190[pp] = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_11[pp] * scratch_13[pp];
            scratch_184[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 41 (ID: RegBlock_41) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt3[pp] * scratch_82[pp];
            scratch_201[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_32[pp] * scratch_89[pp];
            scratch_197[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_49[pp] * scratch_77[pp];
            scratch_199[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_1_gt0[pp] * scratch_89[pp];
            scratch_202[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_0_gt3[pp] * scratch_82[pp];
            scratch_200[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = scratch_77[pp] * scratch_89[pp];
            scratch_198[pp] = _tmp_6;
            _tmp_3          = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_196[pp] = _tmp_3;
            double _tmp_7;
            _tmp_7          = _tmp_4 + _tmp_5 + _tmp_6;
            scratch_195[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8 = -0.5 * grad2_2_2_gt1[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_154[pp] = _tmp_8;
        }
    }
}

// --- Execution Unit 42 (ID: RegBlock_42) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt0[pp] * scratch_15[pp];
            scratch_205[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_0_gt0[pp] * scratch_131[pp];
            scratch_207[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_134[pp] * scratch_77[pp];
            scratch_209[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = 0.5 * grad_2_gt0[pp] * scratch_41[pp];
            scratch_203[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_0_gt5[pp] * scratch_58[pp];
            scratch_208[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = scratch_104[pp] * scratch_86[pp];
            scratch_204[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_7;
            _tmp_7          = _tmp_3 + _tmp_4 + _tmp_5;
            _tmp_6          = _tmp_6 * scratch_11[pp] * scratch_13[pp];
            scratch_211[pp] = _tmp_6;
            _tmp_7          = _tmp_7 * scratch_11[pp] * scratch_13[pp];
            scratch_210[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8          = scratch_13[pp] * scratch_18[pp] * scratch_195[pp];
            scratch_206[pp] = _tmp_8;
        }
    }
}

// --- Execution Unit 43 (ID: RegBlock_43) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt3[pp] * scratch_104[pp];
            scratch_213[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_0_gt5[pp] * scratch_39[pp];
            scratch_195[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_32[pp] * scratch_41[pp];
            scratch_216[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_4;
            _tmp_4          = scratch_134[pp] * scratch_86[pp];
            scratch_212[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = grad_2_gt0[pp] * scratch_131[pp];
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_217[pp] = _tmp_3;
            _tmp_5          = _tmp_4 + _tmp_5;
            scratch_215[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = 0.5 * grad_1_Gt2[pp] * gt2[pp];
            scratch_214[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 44 (ID: RegBlock_44) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_126[pp] * scratch_86[pp];
            scratch_218[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = _tmp_0 + scratch_205[pp] + scratch_207[pp];
            _tmp_1          = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_220[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_13[pp] * scratch_215[pp] * scratch_29[pp];
            scratch_221[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = 0.5 * grad_0_Gt0[pp] * gt1[pp];
            scratch_219[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 45 (ID: RegBlock_45) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_117[pp] + scratch_136[pp] + scratch_140[pp] +
                     scratch_149[pp] + scratch_150[pp] + scratch_152[pp] +
                     scratch_154[pp] + scratch_156[pp] + scratch_157[pp] +
                     scratch_158[pp] + scratch_162[pp] + scratch_165[pp] +
                     scratch_168[pp] + scratch_169[pp] + scratch_174[pp] +
                     scratch_175[pp] + scratch_178[pp] + scratch_179[pp] +
                     scratch_181[pp] + scratch_183[pp] + scratch_184[pp] +
                     scratch_190[pp] + scratch_191[pp] + scratch_196[pp] +
                     scratch_206[pp] + scratch_210[pp] + scratch_211[pp] +
                     scratch_214[pp] + scratch_217[pp] + scratch_219[pp] +
                     scratch_220[pp] + scratch_221[pp] + scratch_40[pp] +
                     scratch_53[pp] + scratch_56[pp] + scratch_62[pp] +
                     scratch_70[pp] + scratch_73[pp] + scratch_75[pp] +
                     scratch_80[pp] + scratch_84[pp] + scratch_94[pp] +
                     scratch_97[pp];
            scratch_215[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 46 (ID: RegBlock_46) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_chi[pp] * scratch_11[pp] * scratch_13[pp];
            double _tmp_1;
            _tmp_1 = grad_1_chi[pp] * scratch_13[pp] * scratch_14[pp];
            double _tmp_2;
            _tmp_2         = grad_0_chi[pp] * scratch_13[pp] * scratch_18[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_62[pp] = _tmp_2;
            _tmp_0         = -_tmp_2 * gt1[pp];
            _tmp_0         = _tmp_0 + grad_1_chi[pp];
            _tmp_1         = alpha[pp] * scratch_215[pp];
            scratch_73[pp] = _tmp_1;
            _tmp_0         = -0.5 * _tmp_0 * scratch_102[pp];
            scratch_70[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3         = -grad2_0_1_alpha[pp];
            scratch_40[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 47 (ID: RegBlock_47) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_chi[pp] * scratch_13[pp] * scratch_33[pp];
            double _tmp_1;
            _tmp_1 = grad_1_chi[pp] * scratch_13[pp] * scratch_46[pp];
            double _tmp_2;
            _tmp_2         = grad_0_chi[pp] * scratch_13[pp] * scratch_14[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_84[pp] = _tmp_2;
            _tmp_0 =
                scratch_16[pp] + scratch_6[pp] + scratch_70[pp] + scratch_8[pp];
            scratch_136[pp] = _tmp_0;
            _tmp_1          = -_tmp_2 * gt1[pp];
            double _tmp_3;
            _tmp_3         = _tmp_0 * grad_0_alpha[pp];
            scratch_94[pp] = _tmp_3;
            _tmp_1         = _tmp_1 + grad_0_chi[pp];
            scratch_75[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 48 (ID: RegBlock_48) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.5 * scratch_102[pp] * scratch_75[pp];
            _tmp_0 = _tmp_0 + scratch_83[pp] + scratch_88[pp] + scratch_90[pp];
            scratch_70[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1        = _tmp_0 * grad_1_alpha[pp];
            scratch_6[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_1 + scratch_34[pp] + scratch_40[pp] + scratch_73[pp] +
                     scratch_94[pp];
            double _tmp_3;
            _tmp_3 = -grad2_1_2_gt2[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_140[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = scratch_126[pp] * scratch_17[pp];
            scratch_16[pp] = _tmp_4;
            _tmp_2         = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_8[pp]  = _tmp_2;
        }
    }
}

// --- Execution Unit 49 (ID: RegBlock_49) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_1_gt0[pp] * scratch_134[pp];
            scratch_83[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_17[pp] * scratch_89[pp];
            scratch_75[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + scratch_16[pp] + scratch_205[pp];
            double _tmp_3;
            _tmp_3          = _tmp_1 + scratch_194[pp] + scratch_201[pp];
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_149[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_90[pp]  = _tmp_3;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_1_1_gt2[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_88[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = 0.5 * grad_0_gt2[pp] * scratch_139[pp];
            scratch_73[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 50 (ID: RegBlock_50) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_0_gt0[pp] * scratch_119[pp];
            scratch_181[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = scratch_126[pp] * scratch_68[pp];
            double _tmp_2;
            _tmp_2          = scratch_134[pp] * scratch_63[pp];
            scratch_158[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = 0.5 * grad_2_gt0[pp] * scratch_119[pp];
            scratch_165[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_0_gt5[pp] * scratch_134[pp];
            scratch_168[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = scratch_134[pp] * scratch_68[pp];
            scratch_178[pp] = _tmp_5;
            _tmp_1          = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_6;
            _tmp_6          = _tmp_3 + _tmp_4 + _tmp_5;
            _tmp_1          = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_175[pp] = _tmp_1;
            _tmp_6          = _tmp_6 * scratch_13[pp] * scratch_29[pp];
            scratch_157[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = 0.5 * grad_2_Gt2[pp] * gt2[pp];
            scratch_150[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 51 (ID: RegBlock_51) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_1_gt5[pp] * scratch_58[pp];
            double _tmp_1;
            _tmp_1          = 0.5 * grad_2_gt5[pp] * scratch_58[pp];
            scratch_190[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 0.5 * grad_1_gt5[pp] * scratch_104[pp];
            scratch_210[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_111[pp] * scratch_32[pp];
            scratch_196[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_1_gt5[pp] * scratch_89[pp];
            scratch_184[pp] = _tmp_4;
            _tmp_0          = _tmp_0 + scratch_216[pp];
            double _tmp_5;
            _tmp_5 = _tmp_1 + _tmp_2 + _tmp_3;
            double _tmp_6;
            _tmp_6          = _tmp_4 + scratch_142[pp] + scratch_143[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            scratch_217[pp] = _tmp_0;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_33[pp];
            scratch_211[pp] = _tmp_5;
            _tmp_6          = _tmp_6 * scratch_13[pp] * scratch_33[pp];
            scratch_206[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 52 (ID: RegBlock_52) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_1_gt5[pp] * scratch_113[pp];
            scratch_228[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_104[pp] * scratch_32[pp];
            scratch_226[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_20[pp] * scratch_82[pp];
            scratch_222[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_26[pp] * scratch_85[pp];
            scratch_229[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = _tmp_0 + _tmp_1 + scratch_208[pp];
            double _tmp_5;
            _tmp_5 = _tmp_2 + _tmp_3 + scratch_192[pp];
            double _tmp_6;
            _tmp_6          = 0.5 * grad_1_gt5[pp] * scratch_82[pp];
            scratch_221[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = scratch_32[pp] * scratch_85[pp];
            scratch_220[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8          = scratch_85[pp] * scratch_86[pp];
            scratch_223[pp] = _tmp_8;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_14[pp];
            scratch_227[pp] = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_14[pp];
            scratch_225[pp] = _tmp_5;
            double _tmp_9;
            _tmp_9          = _tmp_6 + _tmp_7 + _tmp_8;
            scratch_224[pp] = _tmp_9;
        }
    }
}

// --- Execution Unit 53 (ID: RegBlock_53) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_1_gt0[pp] * scratch_71[pp];
            scratch_237[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_17[pp] * scratch_85[pp];
            scratch_236[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_12[pp] * scratch_82[pp];
            double _tmp_3;
            _tmp_3          = 0.5 * grad_1_gt5[pp] * scratch_85[pp];
            scratch_234[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = scratch_32[pp] * scratch_71[pp];
            scratch_230[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = scratch_12[pp] * scratch_85[pp];
            scratch_233[pp] = _tmp_5;
            _tmp_2          = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_6;
            _tmp_6          = _tmp_3 + _tmp_4 + _tmp_5;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_235[pp] = _tmp_2;
            _tmp_6          = _tmp_6 * scratch_13[pp] * scratch_29[pp];
            scratch_232[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7          = scratch_11[pp] * scratch_13[pp] * scratch_224[pp];
            scratch_231[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 54 (ID: RegBlock_54) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_111[pp] * scratch_68[pp];
            scratch_242[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = grad_2_gt5[pp] * scratch_104[pp];
            scratch_243[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + _tmp_1;
            double _tmp_3;
            _tmp_3 = scratch_203[pp] + scratch_208[pp] + scratch_228[pp];
            double _tmp_4;
            _tmp_4          = scratch_15[pp] * scratch_63[pp];
            scratch_241[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_0_Gt2[pp] * gt5[pp];
            scratch_240[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6          = 0.5 * grad_0_Gt0[pp] * gt2[pp];
            scratch_239[pp] = _tmp_6;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_29[pp];
            scratch_238[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_224[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 55 (ID: RegBlock_55) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_126[pp] * scratch_32[pp];
            scratch_246[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_2_gt0[pp] * scratch_131[pp];
            scratch_244[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 0.5 * grad_0_gt5[pp] * scratch_15[pp];
            scratch_245[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_134[pp] * scratch_32[pp];
            scratch_249[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_0_gt5[pp] * scratch_126[pp];
            scratch_251[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = grad_2_gt0[pp] * scratch_134[pp];
            double _tmp_6;
            _tmp_6 = _tmp_0 + scratch_207[pp] + scratch_241[pp];
            double _tmp_7;
            _tmp_7          = _tmp_1 + _tmp_2 + _tmp_3;
            _tmp_5          = _tmp_4 + _tmp_5;
            _tmp_6          = _tmp_6 * scratch_13[pp] * scratch_14[pp];
            scratch_250[pp] = _tmp_6;
            _tmp_7          = _tmp_7 * scratch_13[pp] * scratch_33[pp];
            scratch_248[pp] = _tmp_7;
            _tmp_5          = _tmp_5 * scratch_11[pp] * scratch_13[pp];
            scratch_247[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 56 (ID: RegBlock_56) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_1_gt0[pp] * scratch_119[pp];
            scratch_255[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_134[pp] * scratch_17[pp];
            scratch_254[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_15[pp] * scratch_68[pp];
            scratch_257[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_0_0_gt2[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_258[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_1_gt2[pp] * scratch_93[pp];
            scratch_256[pp] = _tmp_5;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_253[pp] = _tmp_3;
            double _tmp_6;
            _tmp_6 = -grad2_0_2_gt2[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_252[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 57 (ID: RegBlock_57) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt0[pp] * scratch_126[pp];
            scratch_263[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_0_gt0[pp] * scratch_134[pp];
            scratch_260[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_126[pp] * scratch_63[pp];
            scratch_264[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_0_Gt1[pp] * gt4[pp];
            scratch_266[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_2_Gt0[pp] * gt0[pp];
            scratch_265[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = -0.5 * grad2_2_2_gt2[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_262[pp] = _tmp_6;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_18[pp];
            scratch_261[pp] = _tmp_3;
            double _tmp_7;
            _tmp_7          = 0.5 * grad_2_gt0[pp] * scratch_104[pp];
            scratch_259[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 58 (ID: RegBlock_58) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_gt5[pp] * scratch_113[pp];
            double _tmp_1;
            _tmp_1          = 0.5 * grad_2_gt5[pp] * scratch_113[pp];
            scratch_272[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 0.5 * grad_2_gt0[pp] * scratch_111[pp];
            scratch_269[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = 0.5 * grad_0_gt5[pp] * scratch_104[pp];
            scratch_271[pp] = _tmp_3;
            _tmp_0          = _tmp_0 + scratch_259[pp];
            double _tmp_4;
            _tmp_4          = _tmp_1 + _tmp_2 + _tmp_3;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_18[pp];
            scratch_270[pp] = _tmp_0;
            _tmp_4          = _tmp_4 * scratch_11[pp] * scratch_13[pp];
            scratch_268[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = -grad2_0_1_gt2[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_267[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 59 (ID: RegBlock_59) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_12[pp] * scratch_89[pp];
            scratch_279[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_20[pp] * scratch_85[pp];
            scratch_278[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_26[pp] * scratch_71[pp];
            scratch_273[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_20[pp] * scratch_89[pp];
            scratch_274[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_5;
            _tmp_5 = _tmp_3 + scratch_164[pp] + scratch_91[pp];
            double _tmp_6;
            _tmp_6          = 0.5 * gt2[pp] * scratch_102[pp] * scratch_138[pp];
            scratch_277[pp] = _tmp_6;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_276[pp] = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_46[pp];
            scratch_275[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 60 (ID: RegBlock_60) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_104[pp] * scratch_68[pp];
            scratch_285[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_15[pp] * scratch_17[pp];
            scratch_280[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + scratch_271[pp] + scratch_272[pp];
            double _tmp_3;
            _tmp_3 = scratch_185[pp] + scratch_190[pp] + scratch_210[pp];
            double _tmp_4;
            _tmp_4          = _tmp_1 + scratch_116[pp] + scratch_161[pp];
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_283[pp] = _tmp_2;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_2_gt2[pp] * scratch_118[pp];
            scratch_282[pp] = _tmp_5;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_284[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_46[pp];
            scratch_281[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 61 (ID: RegBlock_61) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_1_gt0[pp] * scratch_85[pp];
            scratch_289[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_82[pp] * scratch_86[pp];
            scratch_286[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_17[pp] * scratch_82[pp];
            scratch_288[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + _tmp_2;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_2_Gt1[pp] * gt1[pp];
            scratch_290[pp] = _tmp_4;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_18[pp];
            scratch_287[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 62 (ID: RegBlock_62) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_140[pp] + scratch_149[pp] + scratch_150[pp] +
                     scratch_157[pp] + scratch_175[pp] + scratch_206[pp] +
                     scratch_211[pp] + scratch_217[pp] + scratch_224[pp] +
                     scratch_225[pp] + scratch_227[pp] + scratch_231[pp] +
                     scratch_232[pp] + scratch_235[pp] + scratch_238[pp] +
                     scratch_239[pp] + scratch_240[pp] + scratch_247[pp] +
                     scratch_248[pp] + scratch_250[pp] + scratch_252[pp] +
                     scratch_253[pp] + scratch_256[pp] + scratch_258[pp] +
                     scratch_261[pp] + scratch_262[pp] + scratch_265[pp] +
                     scratch_266[pp] + scratch_267[pp] + scratch_268[pp] +
                     scratch_270[pp] + scratch_275[pp] + scratch_276[pp] +
                     scratch_277[pp] + scratch_281[pp] + scratch_282[pp] +
                     scratch_283[pp] + scratch_284[pp] + scratch_287[pp] +
                     scratch_290[pp] + scratch_73[pp] + scratch_88[pp] +
                     scratch_90[pp];
            scratch_291[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 63 (ID: RegBlock_63) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt2[pp] * scratch_27[pp];
            _tmp_0 = _tmp_0 + grad_0_chi[pp];
            _tmp_0 = -0.5 * _tmp_0 * scratch_102[pp];
            double _tmp_1;
            _tmp_1 = 0.5 * gt2[pp] * scratch_102[pp] * scratch_84[pp];
            _tmp_0 = _tmp_0 + scratch_100[pp] + scratch_98[pp] + scratch_99[pp];
            scratch_90[pp] = _tmp_0;
            _tmp_1 = _tmp_1 + scratch_76[pp] + scratch_81[pp] + scratch_87[pp];
            scratch_157[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = _tmp_0 * grad_2_alpha[pp];
            scratch_149[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = alpha[pp] * scratch_291[pp];
            scratch_175[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 64 (ID: RegBlock_64) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt2[pp] * scratch_62[pp];
            _tmp_0 = _tmp_0 + grad_2_chi[pp];
            _tmp_0 = -0.5 * _tmp_0 * scratch_102[pp];
            _tmp_0 =
                _tmp_0 + scratch_127[pp] + scratch_130[pp] + scratch_132[pp];
            scratch_99[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = grad_1_alpha[pp] * scratch_157[pp];
            scratch_87[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = _tmp_0 * grad_0_alpha[pp];
            scratch_81[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = -grad2_0_2_alpha[pp];
            scratch_76[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 =
                _tmp_1 + _tmp_2 + _tmp_3 + scratch_149[pp] + scratch_175[pp];
            scratch_98[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 65 (ID: RegBlock_65) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt5[pp] * scratch_27[pp];
            double _tmp_1;
            _tmp_1 = 2 * grad_2_chi[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            _tmp_1 = -0.5 * _tmp_1 * scratch_102[pp];
            _tmp_1 =
                _tmp_1 + scratch_108[pp] + scratch_109[pp] + scratch_110[pp];
            scratch_127[pp] = _tmp_1;
            _tmp_0          = 0.5 * gt5[pp] * scratch_102[pp] * scratch_62[pp];
            scratch_100[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2          = scratch_11[pp] * scratch_13[pp] * scratch_98[pp];
            scratch_130[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = _tmp_1 * grad_2_alpha[pp];
            scratch_132[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 66 (ID: RegBlock_66) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_0_gt5[pp] * scratch_111[pp];
            scratch_109[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = scratch_12[pp] * scratch_71[pp];
            double _tmp_2;
            _tmp_2 = grad_1_gt5[pp] * scratch_71[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 + scratch_243[pp];
            double _tmp_4;
            _tmp_4 = scratch_100[pp] + scratch_120[pp] + scratch_121[pp] +
                     scratch_124[pp];
            scratch_98[pp]  = _tmp_4;
            _tmp_2          = _tmp_1 + _tmp_2;
            _tmp_3          = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_206[pp] = _tmp_3;
            _tmp_1          = _tmp_4 * grad_0_alpha[pp];
            scratch_110[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_29[pp];
            scratch_108[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 67 (ID: RegBlock_67) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_17[pp] * scratch_49[pp];
            double _tmp_1;
            _tmp_1          = scratch_119[pp] * scratch_32[pp];
            scratch_121[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = grad_0_gt5[pp] * scratch_131[pp];
            _tmp_0 = _tmp_0 + scratch_143[pp];
            _tmp_2 = _tmp_1 + _tmp_2;
            double _tmp_3;
            _tmp_3          = grad_2_Gt1[pp] * gt4[pp];
            scratch_211[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = -grad2_0_1_gt5[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_124[pp] = _tmp_4;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_120[pp] = _tmp_0;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_100[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 68 (ID: RegBlock_68) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_20[pp] * scratch_71[pp];
            double _tmp_1;
            _tmp_1          = scratch_12[pp] * scratch_49[pp];
            scratch_225[pp] = _tmp_1;
            _tmp_0          = _tmp_0 + _tmp_1;
            double _tmp_2;
            _tmp_2          = 0.5 * grad_2_gt5[pp] * scratch_41[pp];
            scratch_227[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = grad_1_gt5[pp] * scratch_111[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_232[pp] = _tmp_0;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_0_0_gt5[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_231[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_2_gt5[pp] * scratch_118[pp];
            scratch_224[pp] = _tmp_5;
            _tmp_3          = _tmp_2 + _tmp_3;
            scratch_217[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 69 (ID: RegBlock_69) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_131[pp] * scratch_63[pp];
            double _tmp_1;
            _tmp_1 = grad_0_gt5[pp] * scratch_134[pp];
            double _tmp_2;
            _tmp_2          = 2 * scratch_119[pp] * scratch_63[pp];
            _tmp_0          = _tmp_0 + scratch_249[pp];
            _tmp_1          = _tmp_1 + scratch_165[pp];
            _tmp_2          = _tmp_2 + scratch_178[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_248[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3          = 2 * scratch_17[pp] * scratch_71[pp];
            scratch_247[pp] = _tmp_3;
            _tmp_1          = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_243[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_238[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4          = scratch_13[pp] * scratch_217[pp] * scratch_33[pp];
            scratch_235[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 70 (ID: RegBlock_70) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_131[pp] * scratch_17[pp];
            double _tmp_1;
            _tmp_1          = 0.5 * grad_1_gt5[pp] * scratch_111[pp];
            scratch_261[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = grad_2_gt5[pp] * scratch_41[pp];
            scratch_217[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = scratch_233[pp] + scratch_247[pp];
            _tmp_0 = _tmp_0 + scratch_141[pp];
            double _tmp_4;
            _tmp_4          = _tmp_1 + _tmp_2;
            _tmp_3          = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_250[pp] = _tmp_3;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            scratch_253[pp] = _tmp_0;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_178[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = -grad2_0_2_gt5[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_165[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 71 (ID: RegBlock_71) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_gt5[pp] * scratch_41[pp];
            double _tmp_1;
            _tmp_1          = grad_1_gt5[pp] * scratch_104[pp];
            _tmp_0          = _tmp_0 + scratch_210[pp];
            _tmp_1          = _tmp_1 + scratch_171[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_275[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_270[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = -grad2_1_2_gt5[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_268[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 1.5 * grad_2_gt5[pp] * scratch_111[pp] * scratch_13[pp] *
                     scratch_29[pp];
            scratch_247[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = scratch_119[pp] * scratch_68[pp];
            scratch_233[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 72 (ID: RegBlock_72) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_gt5[pp] * scratch_119[pp];
            _tmp_0 = _tmp_0 + scratch_233[pp];
            double _tmp_1;
            _tmp_1 = 2 * scratch_17[pp] * scratch_85[pp];
            double _tmp_2;
            _tmp_2          = grad_2_Gt0[pp] * gt2[pp];
            scratch_284[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 1.5 * grad_1_gt5[pp] * scratch_13[pp] * scratch_41[pp] *
                     scratch_46[pp];
            scratch_283[pp] = _tmp_3;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_29[pp];
            scratch_281[pp] = _tmp_0;
            _tmp_1          = _tmp_1 + scratch_223[pp];
            scratch_276[pp] = _tmp_1;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_2_2_gt5[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_287[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 73 (ID: RegBlock_73) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_134[pp] * scratch_63[pp];
            double _tmp_1;
            _tmp_1          = 0.5 * grad_2_gt0[pp] * scratch_134[pp];
            scratch_294[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 2 * scratch_134[pp] * scratch_17[pp];
            _tmp_0          = _tmp_0 + _tmp_1;
            _tmp_2          = _tmp_2 + scratch_244[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_18[pp];
            scratch_295[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3          = 0.5 * gt5[pp] * scratch_102[pp] * scratch_138[pp];
            scratch_293[pp] = _tmp_3;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_292[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4          = scratch_13[pp] * scratch_18[pp] * scratch_276[pp];
            scratch_233[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 74 (ID: RegBlock_74) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_20[pp] * scratch_85[pp];
            double _tmp_1;
            _tmp_1          = scratch_71[pp] * scratch_86[pp];
            scratch_297[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = grad_1_gt5[pp] * scratch_85[pp];
            _tmp_0 = _tmp_0 + scratch_147[pp];
            _tmp_2 = _tmp_1 + _tmp_2;
            double _tmp_3;
            _tmp_3 = -0.5 * grad2_1_1_gt5[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_299[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 1.5 * grad_0_gt5[pp] * scratch_104[pp] * scratch_13[pp] *
                     scratch_18[pp];
            scratch_298[pp] = _tmp_4;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_296[pp] = _tmp_0;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_276[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 75 (ID: RegBlock_75) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt5[pp] * scratch_104[pp];
            scratch_303[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = grad_0_gt5[pp] * scratch_111[pp];
            double _tmp_2;
            _tmp_2          = 0.5 * grad_2_gt3[pp] * scratch_71[pp];
            scratch_304[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = grad_1_gt5[pp] * scratch_49[pp];
            _tmp_1          = _tmp_0 + _tmp_1;
            _tmp_3          = _tmp_2 + _tmp_3;
            _tmp_1          = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_305[pp] = _tmp_1;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_302[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_1_gt5[pp] * scratch_93[pp];
            scratch_301[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = grad_2_Gt2[pp] * gt5[pp];
            scratch_300[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 76 (ID: RegBlock_76) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_119[pp] * scratch_17[pp];
            double _tmp_1;
            _tmp_1          = scratch_131[pp] * scratch_68[pp];
            scratch_307[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 2 * scratch_20[pp] * scratch_49[pp];
            double _tmp_3;
            _tmp_3          = 0.5 * grad_2_gt3[pp] * scratch_49[pp];
            scratch_310[pp] = _tmp_3;
            _tmp_0          = _tmp_0 + _tmp_1;
            _tmp_2          = _tmp_2 + _tmp_3;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_309[pp] = _tmp_0;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_46[pp];
            scratch_308[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4          = 0.5 * grad_0_gt5[pp] * scratch_139[pp];
            scratch_306[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 77 (ID: RegBlock_77) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_100[pp] + scratch_108[pp] + scratch_120[pp] +
                     scratch_124[pp] + scratch_165[pp] + scratch_178[pp] +
                     scratch_206[pp] + scratch_211[pp] + scratch_224[pp] +
                     scratch_231[pp] + scratch_232[pp] + scratch_233[pp] +
                     scratch_235[pp] + scratch_238[pp] + scratch_243[pp] +
                     scratch_247[pp] + scratch_248[pp] + scratch_250[pp] +
                     scratch_253[pp] + scratch_268[pp] + scratch_270[pp] +
                     scratch_275[pp] + scratch_276[pp] + scratch_281[pp] +
                     scratch_283[pp] + scratch_284[pp] + scratch_287[pp] +
                     scratch_292[pp] + scratch_293[pp] + scratch_295[pp] +
                     scratch_296[pp] + scratch_298[pp] + scratch_299[pp] +
                     scratch_300[pp] + scratch_301[pp] + scratch_302[pp] +
                     scratch_305[pp] + scratch_306[pp] + scratch_308[pp] +
                     scratch_309[pp];
            scratch_311[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 78 (ID: RegBlock_78) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.5 * gt5[pp] * scratch_102[pp] * scratch_84[pp];
            _tmp_0 = _tmp_0 + scratch_66[pp] + scratch_69[pp] + scratch_72[pp];
            scratch_178[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = _tmp_0 * grad_1_alpha[pp];
            scratch_108[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = alpha[pp] * scratch_311[pp];
            scratch_124[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = -grad2_2_2_alpha[pp];
            scratch_120[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 =
                _tmp_1 + _tmp_2 + _tmp_3 + scratch_110[pp] + scratch_132[pp];
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_29[pp];
            scratch_165[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * gt3[pp] * scratch_102[pp] * scratch_62[pp];
            scratch_100[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 79 (ID: RegBlock_79) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt3[pp] * scratch_84[pp];
            double _tmp_1;
            _tmp_1 = 2 * grad_1_chi[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            _tmp_1 = -0.5 * _tmp_1 * scratch_102[pp];
            _tmp_0 = scratch_100[pp] + scratch_22[pp] + scratch_24[pp] +
                     scratch_28[pp];
            scratch_69[pp] = _tmp_0;
            _tmp_1 = _tmp_1 + scratch_36[pp] + scratch_47[pp] + scratch_50[pp];
            scratch_72[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = _tmp_0 * grad_0_alpha[pp];
            scratch_206[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = _tmp_1 * grad_1_alpha[pp];
            scratch_66[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 80 (ID: RegBlock_80) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_0_gt3[pp] * scratch_89[pp];
            scratch_24[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -grad2_1_1_alpha[pp];
            scratch_22[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_212[pp] + scratch_244[pp] + scratch_249[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 + scratch_172[pp] + scratch_177[pp];
            double _tmp_4;
            _tmp_4 = _tmp_1 + scratch_206[pp] + scratch_23[pp] +
                     scratch_38[pp] + scratch_66[pp];
            _tmp_2         = _tmp_2 * scratch_13[pp] * scratch_29[pp];
            scratch_47[pp] = _tmp_2;
            _tmp_3         = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_36[pp] = _tmp_3;
            _tmp_4         = _tmp_4 * scratch_13[pp] * scratch_46[pp];
            scratch_28[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 81 (ID: RegBlock_81) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_104[pp] * scratch_17[pp];
            scratch_172[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_104[pp] * scratch_20[pp];
            scratch_50[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_113[pp] * scratch_17[pp];
            scratch_232[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = scratch_151[pp] + scratch_21[pp] + scratch_64[pp];
            double _tmp_4;
            _tmp_4 = _tmp_0 + scratch_103[pp] + scratch_122[pp];
            double _tmp_5;
            _tmp_5 = _tmp_1 + scratch_173[pp] + scratch_176[pp];
            double _tmp_6;
            _tmp_6          = _tmp_2 + scratch_54[pp] + scratch_60[pp];
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_46[pp];
            scratch_231[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_11[pp] * scratch_13[pp];
            scratch_224[pp] = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_33[pp];
            scratch_211[pp] = _tmp_5;
            _tmp_6          = _tmp_6 * scratch_13[pp] * scratch_18[pp];
            scratch_100[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 82 (ID: RegBlock_82) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_1_gt0[pp] * scratch_15[pp];
            double _tmp_1;
            _tmp_1 = grad_0_gt3[pp] * scratch_82[pp];
            _tmp_0 = _tmp_0 + scratch_95[pp];
            _tmp_1 = _tmp_1 + scratch_202[pp];
            double _tmp_2;
            _tmp_2         = scratch_205[pp] + scratch_218[pp] + scratch_83[pp];
            _tmp_0         = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_64[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3         = scratch_134[pp] * scratch_26[pp];
            scratch_54[pp] = _tmp_3;
            _tmp_1         = _tmp_1 * scratch_13[pp] * scratch_18[pp];
            scratch_60[pp] = _tmp_1;
            _tmp_2         = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_21[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 83 (ID: RegBlock_83) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_126[pp] * scratch_26[pp];
            double _tmp_1;
            _tmp_1 = scratch_177[pp] + scratch_24[pp] + scratch_92[pp];
            double _tmp_2;
            _tmp_2 = scratch_203[pp] + scratch_204[pp] + scratch_228[pp];
            double _tmp_3;
            _tmp_3 = scratch_128[pp] + scratch_145[pp] + scratch_54[pp];
            double _tmp_4;
            _tmp_4 = scratch_114[pp] + scratch_213[pp] + scratch_216[pp];
            _tmp_0 = _tmp_0 + scratch_44[pp] + scratch_55[pp];
            _tmp_1 = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_173[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_151[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_122[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_103[pp] = _tmp_4;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_95[pp]  = _tmp_0;
        }
    }
}

// --- Execution Unit 84 (ID: RegBlock_84) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt3[pp] * scratch_85[pp];
            double _tmp_1;
            _tmp_1 = scratch_113[pp] * scratch_20[pp];
            _tmp_0 = _tmp_0 + scratch_142[pp];
            double _tmp_2;
            _tmp_2 = scratch_182[pp] + scratch_19[pp];
            double _tmp_3;
            _tmp_3 = scratch_185[pp] + scratch_187[pp] + scratch_210[pp];
            _tmp_1 = _tmp_1 + scratch_137[pp] + scratch_148[pp];
            double _tmp_4;
            _tmp_4 = scratch_129[pp] + scratch_188[pp] + scratch_193[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_29[pp];
            scratch_176[pp] = _tmp_0;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_46[pp];
            scratch_128[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_29[pp];
            scratch_92[pp]  = _tmp_3;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_55[pp]  = _tmp_1;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_46[pp];
            scratch_44[pp]  = _tmp_4;
        }
    }
}

// --- Execution Unit 85 (ID: RegBlock_85) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_1_gt0[pp] * scratch_126[pp];
            scratch_129[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_0_gt0[pp] * scratch_15[pp];
            scratch_177[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + _tmp_1 + scratch_153[pp];
            double _tmp_3;
            _tmp_3 = scratch_207[pp] + scratch_209[pp] + scratch_246[pp];
            double _tmp_4;
            _tmp_4 = scratch_116[pp] + scratch_161[pp] + scratch_170[pp];
            double _tmp_5;
            _tmp_5 = scratch_189[pp] + scratch_194[pp] + scratch_201[pp];
            _tmp_2 = _tmp_2 * scratch_13[pp] * scratch_18[pp];
            scratch_182[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_148[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_137[pp] = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_11[pp] * scratch_13[pp];
            scratch_19[pp]  = _tmp_5;
        }
    }
}

// --- Execution Unit 86 (ID: RegBlock_86) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_163[pp] + scratch_180[pp] + scratch_186[pp];
            double _tmp_1;
            _tmp_1 = scratch_164[pp] + scratch_167[pp] + scratch_91[pp];
            double _tmp_2;
            _tmp_2 = scratch_189[pp] + scratch_197[pp] + scratch_201[pp];
            double _tmp_3;
            _tmp_3          = scratch_167[pp] + scratch_91[pp] + scratch_96[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_202[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_193[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_153[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_188[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 87 (ID: RegBlock_87) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_100[pp] + scratch_103[pp] + scratch_117[pp] +
                     scratch_122[pp] + scratch_128[pp] + scratch_137[pp] +
                     scratch_148[pp] + scratch_151[pp] + scratch_152[pp] +
                     scratch_153[pp] + scratch_154[pp] + scratch_156[pp] +
                     scratch_162[pp] + scratch_169[pp] + scratch_173[pp] +
                     scratch_174[pp] + scratch_176[pp] + scratch_179[pp] +
                     scratch_182[pp] + scratch_183[pp] + scratch_188[pp] +
                     scratch_191[pp] + scratch_193[pp] + scratch_19[pp] +
                     scratch_202[pp] + scratch_211[pp] + scratch_214[pp] +
                     scratch_219[pp] + scratch_21[pp] + scratch_224[pp] +
                     scratch_231[pp] + scratch_36[pp] + scratch_44[pp] +
                     scratch_47[pp] + scratch_53[pp] + scratch_55[pp] +
                     scratch_56[pp] + scratch_60[pp] + scratch_64[pp] +
                     scratch_80[pp] + scratch_92[pp] + scratch_95[pp] +
                     scratch_97[pp];
            scratch_96[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 88 (ID: RegBlock_88) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt4[pp] * scratch_27[pp];
            _tmp_0 = _tmp_0 + grad_1_chi[pp];
            double _tmp_1;
            _tmp_1         = alpha[pp] * scratch_96[pp];
            scratch_19[pp] = _tmp_1;
            _tmp_0         = -0.5 * _tmp_0 * scratch_102[pp];
            double _tmp_2;
            _tmp_2 = _tmp_1 + scratch_34[pp] + scratch_40[pp] + scratch_6[pp] +
                     scratch_94[pp];
            _tmp_0 = _tmp_0 + scratch_0[pp] + scratch_30[pp] + scratch_31[pp];
            scratch_36[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3         = -gt4[pp] * scratch_84[pp];
            scratch_47[pp] = _tmp_3;
            _tmp_2         = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_44[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4         = _tmp_0 * grad_2_alpha[pp];
            scratch_21[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 89 (ID: RegBlock_89) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_chi[pp] + scratch_47[pp];
            double _tmp_1;
            _tmp_1 = 0.5 * gt4[pp] * scratch_102[pp] * scratch_62[pp];
            _tmp_0 = -0.5 * _tmp_0 * scratch_102[pp];
            _tmp_1 =
                _tmp_1 + scratch_107[pp] + scratch_123[pp] + scratch_133[pp];
            scratch_53[pp] = _tmp_1;
            _tmp_0 = _tmp_0 + scratch_42[pp] + scratch_51[pp] + scratch_52[pp];
            scratch_30[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2         = scratch_111[pp] * scratch_86[pp];
            scratch_55[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = _tmp_1 * grad_0_alpha[pp];
            scratch_31[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4        = _tmp_0 * grad_1_alpha[pp];
            scratch_0[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 90 (ID: RegBlock_90) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_0_gt3[pp] * scratch_119[pp];
            scratch_56[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_131[pp] * scratch_17[pp];
            scratch_52[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_25[pp] * scratch_68[pp];
            double _tmp_3;
            _tmp_3 = scratch_171[pp] + scratch_190[pp] + scratch_55[pp];
            double _tmp_4;
            _tmp_4 = scratch_171[pp] + scratch_187[pp] + scratch_190[pp];
            _tmp_2 = _tmp_0 + _tmp_1 + _tmp_2;
            _tmp_3 = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_51[pp] = _tmp_3;
            _tmp_4         = _tmp_4 * scratch_11[pp] * scratch_13[pp];
            scratch_47[pp] = _tmp_4;
            _tmp_2         = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_42[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 91 (ID: RegBlock_91) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_gt5[pp] * scratch_58[pp];
            _tmp_0 = _tmp_0 + scratch_204[pp];
            double _tmp_1;
            _tmp_1         = 0.5 * grad_1_Gt0[pp] * gt2[pp];
            scratch_60[pp] = _tmp_1;
            _tmp_0         = _tmp_0 * scratch_13[pp] * scratch_18[pp];
            scratch_97[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2         = 0.5 * gt4[pp] * scratch_102[pp] * scratch_138[pp];
            scratch_95[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 0.5 * grad_2_Gt0[pp] * gt1[pp];
            scratch_92[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = 0.5 * grad_2_gt4[pp] * scratch_118[pp];
            scratch_80[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = 0.5 * grad_1_gt4[pp] * scratch_93[pp];
            scratch_64[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 92 (ID: RegBlock_92) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt5[pp] * scratch_39[pp];
            scratch_123[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_12[pp] * scratch_41[pp];
            scratch_100[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 0.5 * grad_0_gt5[pp] * scratch_25[pp];
            scratch_117[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_131[pp] * scratch_86[pp];
            scratch_103[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = _tmp_0 + _tmp_1 + scratch_144[pp];
            double _tmp_5;
            _tmp_5          = _tmp_2 + _tmp_3 + scratch_141[pp];
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_128[pp] = _tmp_4;
            double _tmp_6;
            _tmp_6          = 0.5 * grad_1_gt3[pp] * scratch_71[pp];
            scratch_122[pp] = _tmp_6;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_33[pp];
            scratch_107[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 93 (ID: RegBlock_93) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_12[pp] * scratch_48[pp];
            double _tmp_1;
            _tmp_1          = scratch_20[pp] * scratch_49[pp];
            scratch_133[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_25[pp] * scratch_63[pp];
            scratch_137[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_131[pp] * scratch_77[pp];
            scratch_148[pp] = _tmp_3;
            _tmp_0          = _tmp_0 + _tmp_1 + scratch_122[pp];
            double _tmp_4;
            _tmp_4          = _tmp_2 + _tmp_3 + scratch_116[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_153[pp] = _tmp_0;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_14[pp];
            scratch_152[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_2_Gt2[pp] * gt4[pp];
            scratch_151[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 94 (ID: RegBlock_94) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt3[pp] * scratch_41[pp];
            scratch_156[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = grad_1_gt5[pp] * scratch_39[pp];
            double _tmp_2;
            _tmp_2 = scratch_114[pp] + scratch_195[pp] + scratch_213[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            double _tmp_3;
            _tmp_3          = 0.5 * grad_1_Gt2[pp] * gt5[pp];
            scratch_173[pp] = _tmp_3;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_169[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_2_2_gt4[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_162[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_2_Gt1[pp] * gt3[pp];
            scratch_154[pp] = _tmp_5;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_46[pp];
            scratch_116[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 95 (ID: RegBlock_95) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_1_gt5[pp] * scratch_49[pp];
            scratch_179[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_0_gt3[pp] * scratch_71[pp];
            scratch_180[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = scratch_17[pp] * scratch_49[pp];
            scratch_174[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 + scratch_225[pp] + scratch_304[pp];
            double _tmp_4;
            _tmp_4 = _tmp_1 + _tmp_2 + scratch_279[pp];
            double _tmp_5;
            _tmp_5 = scratch_166[pp] + scratch_167[pp] + scratch_274[pp];
            _tmp_3 = _tmp_3 * scratch_13[pp] * scratch_29[pp];
            scratch_186[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_11[pp] * scratch_13[pp];
            scratch_183[pp] = _tmp_4;
            double _tmp_6;
            _tmp_6          = 0.5 * grad_0_gt4[pp] * scratch_139[pp];
            scratch_182[pp] = _tmp_6;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_14[pp];
            scratch_176[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 96 (ID: RegBlock_96) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_131[pp] * scratch_63[pp];
            scratch_188[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_119[pp] * scratch_77[pp];
            scratch_197[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + _tmp_1 + scratch_257[pp];
            double _tmp_3;
            _tmp_3 = scratch_143[pp] + scratch_147[pp] + scratch_184[pp];
            double _tmp_4;
            _tmp_4 = scratch_205[pp] + scratch_209[pp] + scratch_241[pp];
            double _tmp_5;
            _tmp_5 = -grad2_0_2_gt4[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_201[pp] = _tmp_5;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_193[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_191[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_18[pp];
            scratch_166[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 97 (ID: RegBlock_97) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_111[pp] * scratch_12[pp];
            scratch_214[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = scratch_145[pp] + scratch_170[pp] + scratch_280[pp];
            double _tmp_2;
            _tmp_2 = scratch_189[pp] + scratch_192[pp] + scratch_75[pp];
            double _tmp_3;
            _tmp_3          = _tmp_0 + scratch_217[pp];
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_224[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_18[pp];
            scratch_219[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4          = scratch_17[pp] * scratch_48[pp];
            scratch_218[pp] = _tmp_4;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_29[pp];
            scratch_211[pp] = _tmp_3;
            double _tmp_5;
            _tmp_5 = -grad2_1_2_gt4[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_202[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 98 (ID: RegBlock_98) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_41[pp] * scratch_86[pp];
            scratch_145[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_20[pp] * scratch_48[pp];
            scratch_233[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + scratch_114[pp] + scratch_195[pp];
            double _tmp_3;
            _tmp_3 = _tmp_1 + scratch_45[pp] + scratch_61[pp];
            double _tmp_4;
            _tmp_4 = scratch_105[pp] + scratch_218[pp] + scratch_91[pp];
            _tmp_2 = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_231[pp] = _tmp_2;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_1_Gt1[pp] * gt4[pp];
            scratch_225[pp] = _tmp_5;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_46[pp];
            scratch_12[pp]  = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_14[pp];
            scratch_217[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 99 (ID: RegBlock_99) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_0_gt3[pp] * scratch_131[pp];
            scratch_235[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_17[pp] * scratch_25[pp];
            scratch_45[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_212[pp] + scratch_244[pp] + scratch_245[pp];
            double _tmp_3;
            _tmp_3          = _tmp_0 + _tmp_1 + scratch_146[pp];
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_243[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_46[pp];
            scratch_238[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_0_0_gt4[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_91[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = -grad2_0_1_gt4[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_61[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 100 (ID: RegBlock_100) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 0.5 * grad_2_gt3[pp] * scratch_111[pp];
            scratch_247[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 0.5 * grad_1_gt5[pp] * scratch_48[pp];
            scratch_253[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = grad_2_gt3[pp] * scratch_49[pp];
            double _tmp_3;
            _tmp_3          = _tmp_0 + scratch_123[pp] + scratch_144[pp];
            _tmp_2          = _tmp_1 + _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_250[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_1_1_gt4[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_248[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = 0.5 * grad_0_gt5[pp] * scratch_131[pp];
            scratch_246[pp] = _tmp_5;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_146[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 101 (ID: RegBlock_101) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_119[pp] * scratch_86[pp];
            scratch_257[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = _tmp_0 + scratch_246[pp] + scratch_307[pp];
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_29[pp];
            scratch_144[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 102 (ID: RegBlock_102) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_107[pp] + scratch_116[pp] + scratch_128[pp] +
                     scratch_12[pp] + scratch_144[pp] + scratch_146[pp] +
                     scratch_151[pp] + scratch_152[pp] + scratch_153[pp] +
                     scratch_154[pp] + scratch_162[pp] + scratch_166[pp] +
                     scratch_169[pp] + scratch_173[pp] + scratch_176[pp] +
                     scratch_182[pp] + scratch_183[pp] + scratch_186[pp] +
                     scratch_191[pp] + scratch_193[pp] + scratch_201[pp] +
                     scratch_202[pp] + scratch_211[pp] + scratch_217[pp] +
                     scratch_219[pp] + scratch_224[pp] + scratch_225[pp] +
                     scratch_231[pp] + scratch_238[pp] + scratch_243[pp] +
                     scratch_248[pp] + scratch_250[pp] + scratch_42[pp] +
                     scratch_47[pp] + scratch_51[pp] + scratch_60[pp] +
                     scratch_61[pp] + scratch_64[pp] + scratch_80[pp] +
                     scratch_91[pp] + scratch_92[pp] + scratch_95[pp] +
                     scratch_97[pp];
            scratch_86[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 103 (ID: RegBlock_103) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = alpha[pp] * scratch_86[pp];
            scratch_97[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -grad2_1_2_alpha[pp];
            scratch_12[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = grad_0_gt5[pp] * scratch_104[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 + _tmp_1 + scratch_0[pp] + scratch_21[pp] +
                     scratch_31[pp];
            _tmp_2 = _tmp_2 + scratch_269[pp];
            double _tmp_4;
            _tmp_4 = scratch_142[pp] + scratch_180[pp] + scratch_184[pp];
            _tmp_3 = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_51[pp] = _tmp_3;
            _tmp_2         = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_47[pp] = _tmp_2;
            _tmp_4         = _tmp_4 * scratch_13[pp] * scratch_33[pp];
            scratch_42[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 104 (ID: RegBlock_104) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt0[pp] * scratch_119[pp];
            _tmp_0 = _tmp_0 + scratch_168[pp];
            double _tmp_1;
            _tmp_1 = scratch_244[pp] + scratch_245[pp] + scratch_255[pp];
            double _tmp_2;
            _tmp_2 = scratch_223[pp] + scratch_236[pp] + scratch_237[pp];
            double _tmp_3;
            _tmp_3 = scratch_105[pp] + scratch_164[pp] + scratch_274[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_29[pp];
            scratch_142[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_107[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_116[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_46[pp];
            scratch_128[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 105 (ID: RegBlock_105) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_111[pp] * scratch_17[pp];
            scratch_144[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_77[pp] * scratch_85[pp];
            scratch_152[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_207[pp] + scratch_241[pp] + scratch_83[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 + scratch_185[pp] + scratch_190[pp];
            double _tmp_4;
            _tmp_4          = _tmp_1 + scratch_288[pp] + scratch_289[pp];
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_166[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_164[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_18[pp];
            scratch_153[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = grad_0_gt0[pp] * scratch_134[pp];
            scratch_146[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 106 (ID: RegBlock_106) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.5 * grad_0_gt5[pp] * scratch_113[pp];
            scratch_17[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = scratch_104[pp] * scratch_63[pp];
            scratch_169[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = _tmp_0 + _tmp_1 + scratch_259[pp];
            double _tmp_3;
            _tmp_3 = scratch_146[pp] + scratch_264[pp];
            double _tmp_4;
            _tmp_4 = scratch_230[pp] + scratch_234[pp] + scratch_297[pp];
            double _tmp_5;
            _tmp_5 = scratch_114[pp] + scratch_216[pp] + scratch_57[pp];
            _tmp_2 = _tmp_2 * scratch_13[pp] * scratch_18[pp];
            scratch_185[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_18[pp];
            scratch_183[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_29[pp];
            scratch_176[pp] = _tmp_4;
            _tmp_5          = _tmp_5 * scratch_13[pp] * scratch_46[pp];
            scratch_168[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 107 (ID: RegBlock_107) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_1_gt0[pp] * scratch_131[pp];
            double _tmp_1;
            _tmp_1 = scratch_158[pp] + scratch_181[pp] + scratch_294[pp];
            double _tmp_2;
            _tmp_2 = scratch_147[pp] + scratch_273[pp] + scratch_278[pp];
            _tmp_0 = _tmp_0 + scratch_280[pp];
            double _tmp_3;
            _tmp_3 = scratch_189[pp] + scratch_194[pp] + scratch_75[pp];
            _tmp_1 = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_193[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_186[pp] = _tmp_2;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            scratch_211[pp] = _tmp_0;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_191[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 108 (ID: RegBlock_108) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_111[pp] * scratch_63[pp];
            double _tmp_1;
            _tmp_1 = scratch_135[pp] + scratch_226[pp] + scratch_228[pp];
            double _tmp_2;
            _tmp_2 = scratch_244[pp] + scratch_254[pp] + scratch_255[pp];
            double _tmp_3;
            _tmp_3 = scratch_109[pp] + scratch_242[pp] + scratch_303[pp];
            double _tmp_4;
            _tmp_4          = scratch_16[pp] + scratch_207[pp] + scratch_83[pp];
            _tmp_0          = _tmp_0 + scratch_272[pp] + scratch_285[pp];
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_217[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_194[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_29[pp];
            scratch_216[pp] = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_14[pp];
            scratch_158[pp] = _tmp_4;
            _tmp_0          = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_147[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 109 (ID: RegBlock_109) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_71[pp] * scratch_77[pp];
            double _tmp_1;
            _tmp_1 = scratch_171[pp] + scratch_196[pp] + scratch_210[pp];
            double _tmp_2;
            _tmp_2 = scratch_172[pp] + scratch_203[pp] + scratch_208[pp];
            double _tmp_3;
            _tmp_3 = scratch_199[pp] + scratch_222[pp] + scratch_229[pp];
            _tmp_0 = _tmp_0 + scratch_220[pp] + scratch_221[pp];
            double _tmp_4;
            _tmp_4 = scratch_181[pp] + scratch_251[pp] + scratch_294[pp];
            _tmp_1 = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_219[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_207[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_135[pp] = _tmp_3;
            _tmp_0          = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_109[pp] = _tmp_0;
            _tmp_4          = _tmp_4 * scratch_11[pp] * scratch_13[pp];
            scratch_16[pp]  = _tmp_4;
        }
    }
}

// --- Execution Unit 110 (ID: RegBlock_110) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_107[pp] + scratch_109[pp] + scratch_116[pp] +
                     scratch_128[pp] + scratch_135[pp] + scratch_140[pp] +
                     scratch_142[pp] + scratch_147[pp] + scratch_150[pp] +
                     scratch_153[pp] + scratch_158[pp] + scratch_164[pp] +
                     scratch_166[pp] + scratch_168[pp] + scratch_16[pp] +
                     scratch_176[pp] + scratch_183[pp] + scratch_185[pp] +
                     scratch_186[pp] + scratch_191[pp] + scratch_193[pp] +
                     scratch_194[pp] + scratch_207[pp] + scratch_211[pp] +
                     scratch_216[pp] + scratch_217[pp] + scratch_219[pp] +
                     scratch_239[pp] + scratch_240[pp] + scratch_252[pp] +
                     scratch_256[pp] + scratch_258[pp] + scratch_262[pp] +
                     scratch_265[pp] + scratch_266[pp] + scratch_267[pp] +
                     scratch_277[pp] + scratch_282[pp] + scratch_290[pp] +
                     scratch_42[pp] + scratch_47[pp] + scratch_73[pp] +
                     scratch_88[pp];
            scratch_181[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 111 (ID: RegBlock_111) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_gt3[pp] * scratch_85[pp];
            double _tmp_1;
            _tmp_1 = alpha[pp] * scratch_181[pp];
            double _tmp_2;
            _tmp_2 = scratch_171[pp] + scratch_210[pp] + scratch_55[pp];
            double _tmp_3;
            _tmp_3 = scratch_143[pp] + scratch_174[pp] + scratch_180[pp];
            double _tmp_4;
            _tmp_4 = scratch_145[pp] + scratch_195[pp] + scratch_50[pp];
            _tmp_0 = _tmp_0 + scratch_75[pp];
            _tmp_1 = _tmp_1 + scratch_149[pp] + scratch_76[pp] +
                     scratch_81[pp] + scratch_87[pp];
            _tmp_2         = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_88[pp] = _tmp_2;
            _tmp_3         = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_73[pp] = _tmp_3;
            _tmp_4         = _tmp_4 * scratch_13[pp] * scratch_14[pp];
            scratch_47[pp] = _tmp_4;
            _tmp_0         = _tmp_0 * scratch_13[pp] * scratch_18[pp];
            scratch_42[pp] = _tmp_0;
            _tmp_1         = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_16[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 112 (ID: RegBlock_112) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_111[pp] * scratch_20[pp];
            double _tmp_1;
            _tmp_1 = scratch_119[pp] * scratch_26[pp];
            _tmp_0 = _tmp_0 + scratch_100[pp] + scratch_123[pp];
            double _tmp_2;
            _tmp_2 = grad_1_gt5[pp] * scratch_41[pp];
            _tmp_1 = _tmp_1 + scratch_103[pp] + scratch_117[pp];
            double _tmp_3;
            _tmp_3 = scratch_121[pp] + scratch_246[pp] + scratch_257[pp];
            double _tmp_4;
            _tmp_4 = scratch_137[pp] + scratch_148[pp] + scratch_54[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_109[pp] = _tmp_0;
            _tmp_2          = _tmp_2 + scratch_247[pp];
            scratch_107[pp] = _tmp_2;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_75[pp]  = _tmp_1;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_29[pp];
            scratch_55[pp]  = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_13[pp] * scratch_14[pp];
            scratch_50[pp]  = _tmp_4;
        }
    }
}

// --- Execution Unit 113 (ID: RegBlock_113) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_233[pp] + scratch_43[pp];
            double _tmp_1;
            _tmp_1 = scratch_122[pp] + scratch_133[pp] + scratch_310[pp];
            double _tmp_2;
            _tmp_2 = scratch_114[pp] + scratch_213[pp] + scratch_57[pp];
            double _tmp_3;
            _tmp_3 = scratch_172[pp] + scratch_204[pp] + scratch_208[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            scratch_116[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_103[pp] = _tmp_1;
            double _tmp_4;
            _tmp_4          = scratch_107[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_100[pp] = _tmp_4;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_54[pp]  = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_18[pp];
            scratch_20[pp]  = _tmp_3;
        }
    }
}

// --- Execution Unit 114 (ID: RegBlock_114) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_155[pp] + scratch_235[pp] + scratch_45[pp];
            double _tmp_1;
            _tmp_1 = scratch_161[pp] + scratch_170[pp] + scratch_280[pp];
            double _tmp_2;
            _tmp_2 = scratch_143[pp] + scratch_180[pp] + scratch_184[pp];
            double _tmp_3;
            _tmp_3 = scratch_144[pp] + scratch_187[pp] + scratch_190[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            scratch_117[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_114[pp] = _tmp_1;
            double _tmp_4;
            _tmp_4 = scratch_212[pp] + scratch_245[pp] + scratch_255[pp];
            scratch_57[pp]  = _tmp_4;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_107[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_11[pp] * scratch_13[pp];
            scratch_43[pp]  = _tmp_3;
        }
    }
}

// --- Execution Unit 115 (ID: RegBlock_115) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt3[pp] * scratch_71[pp];
            double _tmp_1;
            _tmp_1 = scratch_105[pp] + scratch_167[pp] + scratch_274[pp];
            double _tmp_2;
            _tmp_2          = scratch_156[pp] + scratch_37[pp] + scratch_65[pp];
            _tmp_0          = _tmp_0 + scratch_179[pp];
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_14[pp];
            scratch_123[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_46[pp];
            scratch_121[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = scratch_11[pp] * scratch_13[pp] * scratch_57[pp];
            scratch_45[pp]  = _tmp_3;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_29[pp];
            scratch_128[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 116 (ID: RegBlock_116) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_122[pp] + scratch_253[pp] + scratch_310[pp];
            double _tmp_1;
            _tmp_1 = scratch_214[pp] + scratch_227[pp] + scratch_261[pp];
            double _tmp_2;
            _tmp_2 = scratch_141[pp] + scratch_52[pp] + scratch_56[pp];
            double _tmp_3;
            _tmp_3 = scratch_209[pp] + scratch_241[pp] + scratch_83[pp];
            double _tmp_4;
            _tmp_4 = scratch_188[pp] + scratch_197[pp] + scratch_249[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_135[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_29[pp];
            scratch_133[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_33[pp];
            scratch_65[pp]  = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_18[pp];
            scratch_57[pp]  = _tmp_3;
            _tmp_4          = _tmp_4 * scratch_11[pp] * scratch_13[pp];
            scratch_37[pp]  = _tmp_4;
        }
    }
}

// --- Execution Unit 117 (ID: RegBlock_117) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_105[pp] + scratch_167[pp] + scratch_218[pp];
            _tmp_0 = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_52[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 118 (ID: RegBlock_118) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_100[pp] + scratch_103[pp] + scratch_107[pp] +
                     scratch_109[pp] + scratch_114[pp] + scratch_116[pp] +
                     scratch_117[pp] + scratch_121[pp] + scratch_123[pp] +
                     scratch_128[pp] + scratch_133[pp] + scratch_135[pp] +
                     scratch_151[pp] + scratch_154[pp] + scratch_162[pp] +
                     scratch_173[pp] + scratch_182[pp] + scratch_201[pp] +
                     scratch_202[pp] + scratch_20[pp] + scratch_225[pp] +
                     scratch_248[pp] + scratch_37[pp] + scratch_42[pp] +
                     scratch_43[pp] + scratch_45[pp] + scratch_47[pp] +
                     scratch_50[pp] + scratch_52[pp] + scratch_54[pp] +
                     scratch_55[pp] + scratch_57[pp] + scratch_60[pp] +
                     scratch_61[pp] + scratch_64[pp] + scratch_65[pp] +
                     scratch_73[pp] + scratch_75[pp] + scratch_80[pp] +
                     scratch_88[pp] + scratch_91[pp] + scratch_92[pp] +
                     scratch_95[pp];
            scratch_56[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 119 (ID: RegBlock_119) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = alpha[pp] * scratch_56[pp];
            double _tmp_1;
            _tmp_1 = 0.5 * gt0[pp] * scratch_102[pp] * scratch_27[pp];
            _tmp_0 = _tmp_0 + scratch_0[pp] + scratch_12[pp] + scratch_21[pp] +
                     scratch_31[pp];
            double _tmp_2;
            _tmp_2 = 0.5 * gt0[pp] * scratch_102[pp] * scratch_84[pp];
            _tmp_1 =
                _tmp_1 + scratch_106[pp] + scratch_112[pp] + scratch_115[pp];
            scratch_37[pp] = _tmp_1;
            _tmp_0         = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_42[pp] = _tmp_0;
            _tmp_2 = _tmp_2 + scratch_74[pp] + scratch_78[pp] + scratch_79[pp];
            scratch_43[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = _tmp_1 * grad_2_alpha[pp];
            scratch_20[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 120 (ID: RegBlock_120) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt0[pp] * scratch_62[pp];
            double _tmp_1;
            _tmp_1 = 2 * grad_0_chi[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            _tmp_1 = -0.5 * _tmp_1 * scratch_102[pp];
            _tmp_1 =
                _tmp_1 + scratch_101[pp] + scratch_125[pp] + scratch_67[pp];
            scratch_27[pp] = _tmp_1;
            _tmp_0         = _tmp_1 * grad_0_alpha[pp];
            scratch_50[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2         = -grad2_0_0_alpha[pp];
            scratch_47[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = grad_1_alpha[pp] * scratch_43[pp];
            scratch_45[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 121 (ID: RegBlock_121) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_104[pp] * scratch_32[pp];
            double _tmp_1;
            _tmp_1 = 2 * scratch_113[pp] * scratch_68[pp];
            _tmp_0 = _tmp_0 + scratch_208[pp];
            _tmp_1 = _tmp_1 + scratch_169[pp];
            double _tmp_2;
            _tmp_2         = 0.5 * grad_2_gt0[pp] * scratch_118[pp];
            scratch_57[pp] = _tmp_2;
            _tmp_0         = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_55[pp] = _tmp_0;
            _tmp_1         = _tmp_1 * scratch_11[pp] * scratch_13[pp];
            scratch_54[pp] = _tmp_1;
            double _tmp_3;
            _tmp_3 = -0.5 * grad2_0_0_gt0[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_52[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 122 (ID: RegBlock_122) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt0[pp] * scratch_15[pp];
            double _tmp_1;
            _tmp_1 = 2 * scratch_58[pp] * scratch_68[pp];
            double _tmp_2;
            _tmp_2 = grad_2_gt0[pp] * scratch_58[pp];
            _tmp_0 = _tmp_0 + scratch_83[pp];
            _tmp_1 = _tmp_1 + scratch_172[pp];
            _tmp_2 = _tmp_2 + scratch_232[pp];
            double _tmp_3;
            _tmp_3 = -0.5 * grad2_1_1_gt0[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_61[pp] = _tmp_3;
            _tmp_0         = _tmp_0 * scratch_13[pp] * scratch_33[pp];
            scratch_64[pp] = _tmp_0;
            _tmp_1         = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_60[pp] = _tmp_1;
            _tmp_2         = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_62[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 123 (ID: RegBlock_123) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_113[pp] * scratch_32[pp];
            _tmp_0 = _tmp_0 + scratch_59[pp];
            double _tmp_1;
            _tmp_1 = -grad2_0_2_gt0[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_78[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = 0.5 * gt0[pp] * scratch_102[pp] * scratch_138[pp];
            scratch_75[pp] = _tmp_2;
            _tmp_0         = _tmp_0 * scratch_13[pp] * scratch_14[pp];
            scratch_74[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3         = 0.5 * grad_0_gt0[pp] * scratch_139[pp];
            scratch_73[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = 0.5 * grad_1_gt0[pp] * scratch_93[pp];
            scratch_67[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = grad_1_gt0[pp] * scratch_89[pp];
            scratch_65[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 124 (ID: RegBlock_124) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_32[pp] * scratch_82[pp];
            double _tmp_1;
            _tmp_1 = scratch_113[pp] * scratch_63[pp];
            double _tmp_2;
            _tmp_2 = grad_2_gt0[pp] * scratch_113[pp];
            _tmp_0 = _tmp_0 + scratch_152[pp];
            double _tmp_3;
            _tmp_3         = scratch_200[pp] + scratch_65[pp];
            _tmp_2         = _tmp_1 + _tmp_2;
            _tmp_0         = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_84[pp] = _tmp_0;
            _tmp_3         = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_83[pp] = _tmp_3;
            _tmp_1         = scratch_77[pp] * scratch_82[pp];
            scratch_80[pp] = _tmp_1;
            _tmp_2         = _tmp_2 * scratch_13[pp] * scratch_18[pp];
            scratch_79[pp] = _tmp_2;
            double _tmp_4;
            _tmp_4         = grad_1_gt0[pp] * scratch_82[pp];
            scratch_59[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 125 (ID: RegBlock_125) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_1_gt0[pp] * scratch_85[pp];
            double _tmp_1;
            _tmp_1 = scratch_59[pp] + scratch_80[pp];
            _tmp_0 = _tmp_0 + scratch_286[pp];
            double _tmp_2;
            _tmp_2 = 1.5 * grad_2_gt0[pp] * scratch_134[pp] * scratch_13[pp] *
                     scratch_29[pp];
            scratch_88[pp] = _tmp_2;
            _tmp_1         = _tmp_1 * scratch_13[pp] * scratch_18[pp];
            scratch_91[pp] = _tmp_1;
            _tmp_0         = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_77[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3 = 1.5 * grad_1_gt0[pp] * scratch_13[pp] * scratch_15[pp] *
                     scratch_46[pp];
            scratch_65[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = -grad2_0_1_gt0[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_63[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 126 (ID: RegBlock_126) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt0[pp] * scratch_104[pp];
            double _tmp_1;
            _tmp_1 = 2 * scratch_26[pp] * scratch_85[pp];
            _tmp_0 = _tmp_0 + scratch_17[pp];
            _tmp_1 = _tmp_1 + scratch_192[pp];
            double _tmp_2;
            _tmp_2          = grad_0_Gt2[pp] * gt2[pp];
            scratch_100[pp] = _tmp_2;
            _tmp_0          = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_95[pp]  = _tmp_0;
            double _tmp_3;
            _tmp_3         = grad_0_Gt1[pp] * gt1[pp];
            scratch_92[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = grad_1_gt0[pp] * scratch_134[pp];
            scratch_80[pp] = _tmp_4;
            _tmp_1         = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_59[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 127 (ID: RegBlock_127) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_32[pp] * scratch_58[pp];
            double _tmp_1;
            _tmp_1 = 2 * scratch_26[pp] * scratch_89[pp];
            double _tmp_2;
            _tmp_2 = 2 * scratch_26[pp] * scratch_82[pp];
            _tmp_0 = _tmp_0 + scratch_163[pp];
            _tmp_1 = _tmp_1 + scratch_24[pp];
            _tmp_2 = _tmp_2 + scratch_198[pp];
            double _tmp_3;
            _tmp_3 = scratch_205[pp] + scratch_80[pp];
            double _tmp_4;
            _tmp_4          = 2 * scratch_32[pp] * scratch_89[pp];
            scratch_105[pp] = _tmp_4;
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_46[pp];
            scratch_106[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_46[pp];
            scratch_103[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_13[pp] * scratch_14[pp];
            scratch_101[pp] = _tmp_2;
            _tmp_3          = _tmp_3 * scratch_13[pp] * scratch_33[pp];
            scratch_17[pp]  = _tmp_3;
        }
    }
}

// --- Execution Unit 128 (ID: RegBlock_128) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_32[pp] * scratch_85[pp];
            _tmp_0 = _tmp_0 + scratch_223[pp];
            double _tmp_1;
            _tmp_1 = scratch_105[pp] + scratch_189[pp];
            double _tmp_2;
            _tmp_2 = scratch_146[pp] + scratch_263[pp];
            double _tmp_3;
            _tmp_3          = scratch_129[pp] + scratch_159[pp];
            _tmp_0          = _tmp_0 * scratch_13[pp] * scratch_29[pp];
            scratch_109[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_33[pp];
            scratch_107[pp] = _tmp_1;
            _tmp_2          = _tmp_2 * scratch_11[pp] * scratch_13[pp];
            scratch_80[pp]  = _tmp_2;
            double _tmp_4;
            _tmp_4 = -grad2_1_2_gt0[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_26[pp] = _tmp_4;
            _tmp_3         = _tmp_3 * scratch_13[pp] * scratch_14[pp];
            scratch_24[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 129 (ID: RegBlock_129) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt0[pp] * scratch_126[pp];
            double _tmp_1;
            _tmp_1 = 2 * scratch_104[pp] * scratch_68[pp];
            double _tmp_2;
            _tmp_2 = grad_1_gt0[pp] * scratch_126[pp];
            _tmp_0 = _tmp_0 + scratch_260[pp];
            _tmp_1 = _tmp_1 + scratch_271[pp];
            double _tmp_3;
            _tmp_3          = grad_0_Gt0[pp] * gt0[pp];
            scratch_112[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = -0.5 * grad2_2_2_gt0[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_105[pp] = _tmp_4;
            _tmp_2          = _tmp_2 + scratch_177[pp];
            scratch_114[pp] = _tmp_2;
            _tmp_0          = _tmp_0 * scratch_11[pp] * scratch_13[pp];
            scratch_115[pp] = _tmp_0;
            _tmp_1          = _tmp_1 * scratch_13[pp] * scratch_29[pp];
            scratch_32[pp]  = _tmp_1;
        }
    }
}

// --- Execution Unit 130 (ID: RegBlock_130) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_114[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_116[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 1.5 * grad_0_gt0[pp] * scratch_126[pp] * scratch_13[pp] *
                     scratch_18[pp];
            scratch_68[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 131 (ID: RegBlock_131) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_100[pp] + scratch_101[pp] + scratch_103[pp] +
                     scratch_105[pp] + scratch_106[pp] + scratch_107[pp] +
                     scratch_109[pp] + scratch_112[pp] + scratch_115[pp] +
                     scratch_116[pp] + scratch_17[pp] + scratch_24[pp] +
                     scratch_26[pp] + scratch_32[pp] + scratch_52[pp] +
                     scratch_54[pp] + scratch_55[pp] + scratch_57[pp] +
                     scratch_59[pp] + scratch_60[pp] + scratch_61[pp] +
                     scratch_62[pp] + scratch_63[pp] + scratch_64[pp] +
                     scratch_65[pp] + scratch_67[pp] + scratch_68[pp] +
                     scratch_73[pp] + scratch_74[pp] + scratch_75[pp] +
                     scratch_77[pp] + scratch_78[pp] + scratch_79[pp] +
                     scratch_80[pp] + scratch_83[pp] + scratch_84[pp] +
                     scratch_88[pp] + scratch_91[pp] + scratch_92[pp] +
                     scratch_95[pp];
            scratch_114[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 132 (ID: RegBlock_132) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = alpha[pp] * scratch_114[pp];
            scratch_17[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = _tmp_0 + scratch_20[pp] + scratch_45[pp] + scratch_47[pp] +
                     scratch_50[pp];
            _tmp_1 = _tmp_1 * scratch_13[pp] * scratch_18[pp];
            _tmp_1 = _tmp_1 + scratch_130[pp] + scratch_165[pp] +
                     scratch_16[pp] + scratch_28[pp] + scratch_42[pp] +
                     scratch_44[pp] + scratch_51[pp] + scratch_8[pp];
            scratch_26[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -0.33333333333333331 * _tmp_1 * gt3[pp];
            scratch_24[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 133 (ID: RegBlock_133) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = At4[pp] * scratch_13[pp] * scratch_29[pp];
            double _tmp_1;
            _tmp_1 = At3[pp] * scratch_13[pp] * scratch_33[pp];
            double _tmp_2;
            _tmp_2         = At1[pp] * scratch_11[pp] * scratch_13[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_28[pp] = _tmp_2;
            _tmp_0         = scratch_206[pp] + scratch_22[pp] + scratch_23[pp] +
                     scratch_24[pp] + scratch_38[pp] + scratch_66[pp];
            _tmp_1         = At3[pp] * K[pp];
            scratch_44[pp] = _tmp_1;
            double _tmp_3;
            _tmp_3         = -2 * At4[pp] * _tmp_2;
            scratch_42[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = beta1[pp] * grad_1_At3[pp];
            scratch_32[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = 1.3333333333333333 * At3[pp] * grad_1_beta1[pp];
            scratch_16[pp] = _tmp_5;
            _tmp_0         = _tmp_0 * chi[pp];
            scratch_8[pp]  = _tmp_0;
        }
    }
}

// --- Execution Unit 134 (ID: RegBlock_134) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = At4[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_22[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = At3[pp] * scratch_13[pp] * scratch_46[pp];
            double _tmp_2;
            _tmp_2         = At1[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_51[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = At4[pp] * scratch_11[pp] * scratch_13[pp];
            double _tmp_4;
            _tmp_4 = At3[pp] * scratch_13[pp] * scratch_14[pp];
            double _tmp_5;
            _tmp_5         = At1[pp] * scratch_13[pp] * scratch_18[pp];
            _tmp_1         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_24[pp] = _tmp_1;
            _tmp_5         = _tmp_3 + _tmp_4 + _tmp_5;
            scratch_38[pp] = _tmp_5;
            _tmp_3         = -2 * At3[pp] * _tmp_1;
            _tmp_4         = -2 * At1[pp] * _tmp_5;
            _tmp_4         = _tmp_3 + _tmp_4 + scratch_42[pp] + scratch_44[pp];
            _tmp_4         = _tmp_4 * alpha[pp];
            scratch_23[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 135 (ID: RegBlock_135) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * At4[pp] * grad_1_beta2[pp];
            double _tmp_1;
            _tmp_1 = 2 * At1[pp] * grad_1_beta0[pp];
            double _tmp_2;
            _tmp_2 = beta2[pp] * grad_2_At3[pp];
            double _tmp_3;
            _tmp_3         = beta2[pp] * grad_2_beta1[pp];
            scratch_44[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = beta0[pp] * grad_0_beta1[pp];
            scratch_42[pp] = _tmp_4;
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2 + scratch_16[pp] +
                     scratch_23[pp] + scratch_32[pp] + scratch_3[pp] +
                     scratch_4[pp] + scratch_7[pp] + scratch_8[pp];
            At_rhs11[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 136 (ID: RegBlock_136) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = beta1[pp] * grad_1_beta1[pp];
            double _tmp_1;
            _tmp_1 = 0.75 * alpha[pp] * lambda_f[1];
            double _tmp_2;
            _tmp_2        = 0.75 * lambda_f[0];
            _tmp_0        = _tmp_0 + scratch_42[pp] + scratch_44[pp];
            _tmp_2        = _tmp_1 + _tmp_2;
            scratch_4[pp] = _tmp_2;
            _tmp_0        = _tmp_0 * lambda[1];
            _tmp_1        = B1[pp] * _tmp_2;
            double _tmp_3;
            _tmp_3        = beta2[pp] * grad_2_gt3[pp];
            scratch_7[pp] = _tmp_3;
            _tmp_1        = _tmp_0 + _tmp_1;
            b_rhs1[pp]    = _tmp_1;
            _tmp_0        = 2 * grad_1_beta2[pp] * gt4[pp];
            scratch_3[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 137 (ID: RegBlock_137) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = beta0[pp] * grad_0_gt3[pp];
            scratch_52[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = 2 * grad_1_beta0[pp] * gt1[pp];
            scratch_44[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -0.66666666666666663 * grad_0_beta0[pp] * gt3[pp];
            scratch_42[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = beta1[pp] * grad_1_gt3[pp];
            scratch_32[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -2 * At3[pp] * alpha[pp];
            scratch_23[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = -0.66666666666666663 * grad_2_beta2[pp] * gt3[pp];
            scratch_16[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = 1.3333333333333333 * grad_1_beta1[pp] * gt3[pp];
            scratch_8[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 138 (ID: RegBlock_138) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 1.0 / (scratch_10[pp] * scratch_10[pp]);
            scratch_55[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_33[pp] * scratch_33[pp];
            scratch_54[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_16[pp] + scratch_23[pp] + scratch_32[pp] +
                     scratch_3[pp] + scratch_42[pp] + scratch_44[pp] +
                     scratch_52[pp] + scratch_7[pp] + scratch_8[pp];
            gt_rhs11[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 2 * At1[pp] * _tmp_0 * scratch_14[pp] * scratch_46[pp];
            scratch_60[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 2 * At2[pp] * _tmp_0 * scratch_14[pp] * scratch_33[pp];
            scratch_59[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = At5[pp] * _tmp_0 * _tmp_1;
            scratch_57[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 139 (ID: RegBlock_139) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0        = scratch_46[pp] * scratch_46[pp];
            scratch_8[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_14[pp] * scratch_14[pp];
            scratch_10[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 =
                2 * At4[pp] * scratch_33[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 = At3[pp] * _tmp_0 * scratch_55[pp];
            double _tmp_4;
            _tmp_4 = At0[pp] * _tmp_1 * scratch_55[pp];
            _tmp_4 = _tmp_2 + _tmp_3 + _tmp_4 + scratch_57[pp] +
                     scratch_59[pp] + scratch_60[pp];
            scratch_3[pp]  = _tmp_4;
            _tmp_2         = 3 * _tmp_4 * grad_1_chi[pp] * scratch_102[pp];
            scratch_16[pp] = _tmp_2;
            _tmp_3 = 1.3333333333333333 * grad_1_K[pp] * scratch_13[pp] *
                     scratch_46[pp];
            scratch_7[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 140 (ID: RegBlock_140) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_16[pp] + scratch_7[pp];
            double _tmp_1;
            _tmp_1 = At4[pp] * scratch_11[pp] * scratch_46[pp] * scratch_55[pp];
            scratch_52[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = At2[pp] * scratch_18[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_57[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = At1[pp] * scratch_10[pp] * scratch_55[pp];
            scratch_44[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = At5[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_42[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = 1.3333333333333333 * grad_0_K[pp] * scratch_13[pp] *
                     scratch_14[pp];
            scratch_32[pp] = _tmp_5;
            _tmp_0         = -_tmp_0 * alpha[pp];
            scratch_23[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 141 (ID: RegBlock_141) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = At4[pp] * scratch_14[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 = At3[pp] * scratch_14[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 = At2[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 = At1[pp] * scratch_18[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 = At0[pp] * scratch_14[pp] * scratch_18[pp] * scratch_55[pp];
            _tmp_4 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 +
                     scratch_42[pp] + scratch_44[pp] + scratch_52[pp] +
                     scratch_57[pp];
            scratch_16[pp] = _tmp_4;
            _tmp_0         = 3 * _tmp_4 * grad_0_chi[pp] * scratch_102[pp];
            scratch_7[pp]  = _tmp_0;
        }
    }
}

// --- Execution Unit 142 (ID: RegBlock_142) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = scratch_32[pp] + scratch_7[pp];
            _tmp_0         = -_tmp_0 * alpha[pp];
            scratch_60[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 0.33333333333333331 * grad2_0_0_beta0[pp] *
                     scratch_13[pp] * scratch_14[pp];
            scratch_59[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 =
                2 * At5[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_57[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 =
                2 * At0[pp] * scratch_14[pp] * scratch_18[pp] * scratch_55[pp];
            scratch_52[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 =
                2 * At1[pp] * scratch_18[pp] * scratch_46[pp] * scratch_55[pp];
            scratch_44[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = 2 * At1[pp] * scratch_10[pp] * scratch_55[pp];
            scratch_42[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 143 (ID: RegBlock_143) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                2 * At4[pp] * scratch_14[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 =
                2 * At4[pp] * scratch_11[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 =
                2 * At3[pp] * scratch_14[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 =
                2 * At2[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 =
                2 * At2[pp] * scratch_18[pp] * scratch_33[pp] * scratch_55[pp];
            _tmp_4 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 +
                     scratch_42[pp] + scratch_44[pp] + scratch_52[pp] +
                     scratch_57[pp];
            scratch_7[pp]  = _tmp_4;
            _tmp_0         = -_tmp_4 * grad_0_alpha[pp];
            scratch_32[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 144 (ID: RegBlock_144) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad2_0_0_beta1[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_63[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 =
                2 * At3[pp] * scratch_33[pp] * scratch_46[pp] * scratch_55[pp];
            scratch_62[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = 2 * At4[pp] * scratch_54[pp] * scratch_55[pp];
            scratch_61[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 0.33333333333333331 * grad2_0_1_beta0[pp] *
                     scratch_13[pp] * scratch_46[pp];
            scratch_57[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 0.33333333333333331 * grad2_2_2_beta2[pp] *
                     scratch_13[pp] * scratch_33[pp];
            scratch_52[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 =
                2 * At0[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            scratch_44[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 =
                2 * At2[pp] * scratch_14[pp] * scratch_29[pp] * scratch_55[pp];
            scratch_42[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 145 (ID: RegBlock_145) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                2 * At5[pp] * scratch_29[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 =
                2 * At4[pp] * scratch_29[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 =
                2 * At2[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 =
                2 * At1[pp] * scratch_14[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 =
                2 * At1[pp] * scratch_11[pp] * scratch_46[pp] * scratch_55[pp];
            _tmp_4 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 +
                     scratch_42[pp] + scratch_44[pp] + scratch_61[pp] +
                     scratch_62[pp];
            scratch_65[pp] = _tmp_4;
            _tmp_0 = At1[pp] * scratch_14[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_66[pp] = _tmp_0;
            _tmp_1         = -_tmp_4 * grad_2_alpha[pp];
            scratch_64[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 146 (ID: RegBlock_146) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = At5[pp] * scratch_29[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 = At4[pp] * scratch_29[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 = At3[pp] * scratch_33[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 = At2[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 = At2[pp] * scratch_14[pp] * scratch_29[pp] * scratch_55[pp];
            double _tmp_5;
            _tmp_5 = At1[pp] * scratch_11[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_6;
            _tmp_6 = At0[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            double _tmp_7;
            _tmp_7 = At4[pp] * scratch_54[pp] * scratch_55[pp];
            _tmp_7 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 + _tmp_5 +
                     _tmp_6 + _tmp_7 + scratch_66[pp];
            scratch_42[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 147 (ID: RegBlock_147) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 1.3333333333333333 * grad_2_K[pp] * scratch_13[pp] *
                     scratch_33[pp];
            double _tmp_1;
            _tmp_1 = 3 * grad_2_chi[pp] * scratch_102[pp] * scratch_42[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            _tmp_0 = 4 * alpha[pp] * scratch_42[pp] * scratch_49[pp];
            scratch_62[pp] = _tmp_0;
            _tmp_1         = -_tmp_1 * alpha[pp];
            scratch_66[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -grad_2_beta1[pp] * scratch_118[pp];
            scratch_61[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = -grad_0_beta1[pp] * scratch_139[pp];
            scratch_44[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 148 (ID: RegBlock_148) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = beta1[pp] * grad_1_Gt1[pp];
            scratch_77[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 0.33333333333333331 * grad2_0_2_beta0[pp] *
                     scratch_13[pp] * scratch_33[pp];
            scratch_75[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 2.3333333333333335 * grad2_0_1_beta1[pp] * scratch_13[pp] *
                     scratch_14[pp];
            scratch_74[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 0.33333333333333331 * grad2_1_2_beta2[pp] *
                     scratch_13[pp] * scratch_46[pp];
            scratch_73[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 2 * grad2_0_2_beta1[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_68[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = 0.33333333333333331 * grad2_0_2_beta2[pp] *
                     scratch_13[pp] * scratch_14[pp];
            scratch_67[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = -grad_1_beta1[pp] * scratch_93[pp];
            scratch_49[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 149 (ID: RegBlock_149) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = scratch_11[pp] * scratch_11[pp];
            scratch_84[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = scratch_18[pp] * scratch_18[pp];
            scratch_78[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 =
                2 * At4[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 =
                2 * At2[pp] * scratch_11[pp] * scratch_18[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 =
                2 * At1[pp] * scratch_14[pp] * scratch_18[pp] * scratch_55[pp];
            double _tmp_5;
            _tmp_5 = At5[pp] * _tmp_0 * scratch_55[pp];
            double _tmp_6;
            _tmp_6 = At3[pp] * scratch_10[pp] * scratch_55[pp];
            double _tmp_7;
            _tmp_7 = At0[pp] * _tmp_1 * scratch_55[pp];
            _tmp_7 = _tmp_2 + _tmp_3 + _tmp_4 + _tmp_5 + _tmp_6 + _tmp_7;
            scratch_83[pp] = _tmp_7;
            _tmp_2         = 2 * _tmp_7 * alpha[pp] * scratch_82[pp];
            scratch_80[pp] = _tmp_2;
            _tmp_3         = At2[pp] * _tmp_0 * scratch_55[pp];
            scratch_79[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 150 (ID: RegBlock_150) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = At5[pp] * scratch_11[pp] * scratch_29[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 = At4[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 = At4[pp] * scratch_14[pp] * scratch_29[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 = At3[pp] * scratch_14[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 = At2[pp] * scratch_18[pp] * scratch_29[pp] * scratch_55[pp];
            double _tmp_5;
            _tmp_5 = At1[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            double _tmp_6;
            _tmp_6 = At1[pp] * scratch_18[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_7;
            _tmp_7 = At0[pp] * scratch_11[pp] * scratch_18[pp] * scratch_55[pp];
            _tmp_7 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 + _tmp_5 +
                     _tmp_6 + _tmp_7 + scratch_79[pp];
            scratch_82[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 151 (ID: RegBlock_151) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_beta0[pp] + grad_1_beta1[pp] + grad_2_beta2[pp];
            scratch_79[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1          = 4 * alpha[pp] * scratch_82[pp] * scratch_85[pp];
            scratch_100[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = 0.66666666666666663 * _tmp_0 * scratch_93[pp];
            scratch_95[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 1.3333333333333333 * grad2_1_1_beta1[pp] * scratch_13[pp] *
                     scratch_46[pp];
            scratch_92[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = beta2[pp] * grad_2_Gt1[pp];
            scratch_91[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = 2 * alpha[pp] * scratch_3[pp] * scratch_48[pp];
            scratch_88[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 152 (ID: RegBlock_152) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                4 * At4[pp] * scratch_33[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 =
                4 * At2[pp] * scratch_14[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 =
                4 * At1[pp] * scratch_14[pp] * scratch_46[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 = 2 * At5[pp] * scratch_54[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 = 2 * At3[pp] * scratch_55[pp] * scratch_8[pp];
            double _tmp_5;
            _tmp_5 = 2 * At0[pp] * scratch_10[pp] * scratch_55[pp];
            _tmp_5 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 + _tmp_5;
            _tmp_5 = -_tmp_5 * grad_1_alpha[pp];
            scratch_48[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 153 (ID: RegBlock_153) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = scratch_29[pp] * scratch_29[pp];
            scratch_109[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 =
                2 * At1[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_107[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 =
                2 * At2[pp] * scratch_11[pp] * scratch_29[pp] * scratch_55[pp];
            scratch_106[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3          = 4 * alpha[pp] * scratch_16[pp] * scratch_89[pp];
            scratch_105[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4          = At3[pp] * scratch_54[pp] * scratch_55[pp];
            scratch_103[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5          = beta0[pp] * grad_0_Gt1[pp];
            scratch_101[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = At5[pp] * _tmp_0 * scratch_55[pp];
            scratch_85[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7 =
                2 * At4[pp] * scratch_29[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_8[pp] = _tmp_7;
        }
    }
}

// --- Execution Unit 154 (ID: RegBlock_154) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = At0[pp] * scratch_55[pp] * scratch_84[pp];
            _tmp_0 = _tmp_0 + scratch_103[pp] + scratch_106[pp] +
                     scratch_107[pp] + scratch_85[pp] + scratch_8[pp];
            scratch_115[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = grad2_2_2_beta1[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_116[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2          = 2 * _tmp_0 * alpha[pp] * scratch_71[pp];
            scratch_112[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 2.3333333333333335 * grad2_1_2_beta1[pp] * scratch_13[pp] *
                     scratch_33[pp];
            scratch_89[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 155 (ID: RegBlock_155) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_100[pp] + scratch_101[pp] + scratch_105[pp] +
                     scratch_112[pp] + scratch_116[pp] + scratch_23[pp] +
                     scratch_32[pp] + scratch_44[pp] + scratch_48[pp] +
                     scratch_49[pp] + scratch_52[pp] + scratch_57[pp] +
                     scratch_59[pp] + scratch_60[pp] + scratch_61[pp] +
                     scratch_62[pp] + scratch_63[pp] + scratch_64[pp] +
                     scratch_66[pp] + scratch_67[pp] + scratch_68[pp] +
                     scratch_73[pp] + scratch_74[pp] + scratch_75[pp] +
                     scratch_77[pp] + scratch_80[pp] + scratch_88[pp] +
                     scratch_89[pp] + scratch_91[pp] + scratch_92[pp] +
                     scratch_95[pp];
            Gt_rhs1[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 156 (ID: RegBlock_156) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = beta2[pp] * grad_2_B1[pp];
            double _tmp_1;
            _tmp_1 = beta1[pp] * grad_1_B1[pp];
            double _tmp_2;
            _tmp_2 = beta0[pp] * grad_0_B1[pp];
            double _tmp_3;
            _tmp_3         = scratch_101[pp] + scratch_77[pp] + scratch_91[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            _tmp_3         = -_tmp_3 * lambda[3];
            scratch_85[pp] = _tmp_3;
            _tmp_0         = -B1[pp] * eta[pp];
            scratch_71[pp] = _tmp_0;
            _tmp_2         = _tmp_2 * lambda[2];
            scratch_8[pp]  = _tmp_2;
        }
    }
}

// --- Execution Unit 157 (ID: RegBlock_157) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_100[pp] + scratch_101[pp] + scratch_105[pp] +
                     scratch_112[pp] + scratch_116[pp] + scratch_23[pp] +
                     scratch_32[pp] + scratch_44[pp] + scratch_48[pp] +
                     scratch_49[pp] + scratch_52[pp] + scratch_57[pp] +
                     scratch_59[pp] + scratch_60[pp] + scratch_61[pp] +
                     scratch_62[pp] + scratch_63[pp] + scratch_64[pp] +
                     scratch_66[pp] + scratch_67[pp] + scratch_68[pp] +
                     scratch_71[pp] + scratch_73[pp] + scratch_74[pp] +
                     scratch_75[pp] + scratch_77[pp] + scratch_80[pp] +
                     scratch_85[pp] + scratch_88[pp] + scratch_89[pp] +
                     scratch_8[pp] + scratch_91[pp] + scratch_92[pp] +
                     scratch_95[pp];
            B_rhs1[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 158 (ID: RegBlock_158) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.66666666666666663 * scratch_118[pp] * scratch_79[pp];
            scratch_49[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 2 * grad2_0_1_beta2[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_48[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = grad2_1_1_beta2[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_44[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 3 * grad_2_chi[pp] * scratch_102[pp] * scratch_115[pp];
            scratch_32[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = grad2_0_0_beta2[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_23[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = 0.33333333333333331 * grad2_0_0_beta0[pp] *
                     scratch_11[pp] * scratch_13[pp];
            scratch_8[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 159 (ID: RegBlock_159) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 1.3333333333333333 * grad_2_K[pp] * scratch_13[pp] *
                     scratch_29[pp];
            _tmp_0 = _tmp_0 + scratch_32[pp];
            double _tmp_1;
            _tmp_1         = beta1[pp] * grad_1_Gt2[pp];
            scratch_62[pp] = _tmp_1;
            _tmp_0         = -_tmp_0 * alpha[pp];
            scratch_61[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2         = 4 * alpha[pp] * scratch_104[pp] * scratch_82[pp];
            scratch_60[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 0.33333333333333331 * grad2_0_2_beta0[pp] *
                     scratch_13[pp] * scratch_29[pp];
            scratch_59[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -grad_1_beta2[pp] * scratch_93[pp];
            scratch_57[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = 0.33333333333333331 * grad2_1_2_beta1[pp] *
                     scratch_13[pp] * scratch_29[pp];
            scratch_52[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 160 (ID: RegBlock_160) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.33333333333333331 * grad2_0_1_beta0[pp] *
                     scratch_13[pp] * scratch_33[pp];
            scratch_68[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = 2 * alpha[pp] * scratch_113[pp] * scratch_83[pp];
            scratch_67[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.33333333333333331 * grad2_0_1_beta1[pp] *
                     scratch_11[pp] * scratch_13[pp];
            scratch_66[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 1.3333333333333333 * grad_1_K[pp] * scratch_13[pp] *
                     scratch_33[pp];
            scratch_64[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = 4 * alpha[pp] * scratch_41[pp] * scratch_42[pp];
            scratch_63[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = beta2[pp] * grad_2_Gt2[pp];
            scratch_32[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 161 (ID: RegBlock_161) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 3 * grad_1_chi[pp] * scratch_102[pp] * scratch_42[pp];
            _tmp_0 = _tmp_0 + scratch_64[pp];
            double _tmp_1;
            _tmp_1         = 2 * alpha[pp] * scratch_111[pp] * scratch_115[pp];
            scratch_41[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 1.3333333333333333 * grad2_2_2_beta2[pp] * scratch_13[pp] *
                     scratch_29[pp];
            scratch_74[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 4 * alpha[pp] * scratch_16[pp] * scratch_58[pp];
            scratch_73[pp] = _tmp_3;
            _tmp_0         = -_tmp_0 * alpha[pp];
            scratch_71[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 162 (ID: RegBlock_162) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 1.3333333333333333 * grad_0_K[pp] * scratch_11[pp] *
                     scratch_13[pp];
            double _tmp_1;
            _tmp_1 = 3 * grad_0_chi[pp] * scratch_102[pp] * scratch_82[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            _tmp_0 = -grad_1_alpha[pp] * scratch_65[pp];
            scratch_77[pp] = _tmp_0;
            _tmp_1         = -_tmp_1 * alpha[pp];
            scratch_58[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = beta0[pp] * grad_0_Gt2[pp];
            scratch_75[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 0.33333333333333331 * grad2_1_1_beta1[pp] *
                     scratch_13[pp] * scratch_33[pp];
            scratch_64[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 163 (ID: RegBlock_163) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                4 * At4[pp] * scratch_29[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 =
                4 * At2[pp] * scratch_11[pp] * scratch_29[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 =
                4 * At1[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 = 2 * At5[pp] * scratch_109[pp] * scratch_55[pp];
            double _tmp_4;
            _tmp_4 = 2 * At3[pp] * scratch_54[pp] * scratch_55[pp];
            double _tmp_5;
            _tmp_5 = 2 * At0[pp] * scratch_55[pp] * scratch_84[pp];
            _tmp_5 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 + _tmp_5;
            scratch_80[pp] = _tmp_5;
            _tmp_0         = -grad_2_beta2[pp] * scratch_118[pp];
            scratch_65[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 164 (ID: RegBlock_164) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 2 * At2[pp] * scratch_55[pp] * scratch_84[pp];
            scratch_101[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 =
                2 * At5[pp] * scratch_11[pp] * scratch_29[pp] * scratch_55[pp];
            scratch_100[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 =
                2 * At2[pp] * scratch_18[pp] * scratch_29[pp] * scratch_55[pp];
            scratch_95[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 =
                2 * At1[pp] * scratch_18[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_92[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 =
                2 * At4[pp] * scratch_14[pp] * scratch_29[pp] * scratch_55[pp];
            scratch_91[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 =
                2 * At4[pp] * scratch_11[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_89[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = -grad_2_alpha[pp] * scratch_80[pp];
            scratch_88[pp] = _tmp_6;
            double _tmp_7;
            _tmp_7 =
                2 * At3[pp] * scratch_14[pp] * scratch_33[pp] * scratch_55[pp];
            scratch_85[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8 =
                2 * At1[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            scratch_54[pp] = _tmp_8;
        }
    }
}

// --- Execution Unit 165 (ID: RegBlock_165) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                2 * At0[pp] * scratch_11[pp] * scratch_18[pp] * scratch_55[pp];
            _tmp_0 = _tmp_0 + scratch_100[pp] + scratch_101[pp] +
                     scratch_54[pp] + scratch_85[pp] + scratch_89[pp] +
                     scratch_91[pp] + scratch_92[pp] + scratch_95[pp];
            scratch_103[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 2.3333333333333335 * grad2_0_2_beta2[pp] * scratch_11[pp] *
                     scratch_13[pp];
            scratch_104[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -_tmp_0 * grad_0_alpha[pp];
            scratch_80[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 166 (ID: RegBlock_166) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -grad_0_beta2[pp] * scratch_139[pp];
            scratch_89[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = 2 * alpha[pp] * scratch_39[pp] * scratch_3[pp];
            scratch_85[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 2.3333333333333335 * grad2_1_2_beta2[pp] * scratch_13[pp] *
                     scratch_33[pp];
            scratch_54[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 167 (ID: RegBlock_167) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_104[pp] + scratch_23[pp] + scratch_32[pp] +
                     scratch_41[pp] + scratch_44[pp] + scratch_48[pp] +
                     scratch_49[pp] + scratch_52[pp] + scratch_54[pp] +
                     scratch_57[pp] + scratch_58[pp] + scratch_59[pp] +
                     scratch_60[pp] + scratch_61[pp] + scratch_62[pp] +
                     scratch_63[pp] + scratch_64[pp] + scratch_65[pp] +
                     scratch_66[pp] + scratch_67[pp] + scratch_68[pp] +
                     scratch_71[pp] + scratch_73[pp] + scratch_74[pp] +
                     scratch_75[pp] + scratch_77[pp] + scratch_80[pp] +
                     scratch_85[pp] + scratch_88[pp] + scratch_89[pp] +
                     scratch_8[pp];
            Gt_rhs2[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 168 (ID: RegBlock_168) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = beta2[pp] * grad_2_B2[pp];
            double _tmp_1;
            _tmp_1 = beta1[pp] * grad_1_B2[pp];
            double _tmp_2;
            _tmp_2 = beta0[pp] * grad_0_B2[pp];
            double _tmp_3;
            _tmp_3         = scratch_32[pp] + scratch_62[pp] + scratch_75[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            _tmp_3         = -_tmp_3 * lambda[3];
            scratch_91[pp] = _tmp_3;
            _tmp_0         = -B2[pp] * eta[pp];
            scratch_39[pp] = _tmp_0;
            _tmp_2         = _tmp_2 * lambda[2];
            scratch_92[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 169 (ID: RegBlock_169) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_104[pp] + scratch_23[pp] + scratch_32[pp] +
                     scratch_39[pp] + scratch_41[pp] + scratch_44[pp] +
                     scratch_48[pp] + scratch_49[pp] + scratch_52[pp] +
                     scratch_54[pp] + scratch_57[pp] + scratch_58[pp] +
                     scratch_59[pp] + scratch_60[pp] + scratch_61[pp] +
                     scratch_62[pp] + scratch_63[pp] + scratch_64[pp] +
                     scratch_65[pp] + scratch_66[pp] + scratch_67[pp] +
                     scratch_68[pp] + scratch_71[pp] + scratch_73[pp] +
                     scratch_74[pp] + scratch_75[pp] + scratch_77[pp] +
                     scratch_80[pp] + scratch_85[pp] + scratch_88[pp] +
                     scratch_89[pp] + scratch_8[pp] + scratch_91[pp] +
                     scratch_92[pp];
            B_rhs2[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 170 (ID: RegBlock_170) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = beta0[pp] * grad_0_chi[pp];
            scratch_48[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = beta2[pp] * grad_2_chi[pp];
            scratch_44[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = 0.66666666666666663 * K[pp] * alpha[pp] * chi[pp];
            scratch_41[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 1.0 / dt;
            scratch_39[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -At0[pp] * scratch_83[pp];
            scratch_32[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 =
                chi[pp] * scratch_13[pp] * scratch_160[pp] * scratch_46[pp];
            scratch_23[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = dx_i * dx_i;
            scratch_8[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 171 (ID: RegBlock_171) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = K[pp] * K[pp];
            scratch_60[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -At3[pp] * scratch_3[pp];
            scratch_59[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -2 * At4[pp] * scratch_42[pp];
            scratch_58[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 0.66666666666666663 * _tmp_0;
            scratch_57[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -2 * At1[pp] * scratch_16[pp];
            scratch_54[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 =
                chi[pp] * scratch_13[pp] * scratch_14[pp] * scratch_215[pp];
            scratch_52[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 =
                chi[pp] * scratch_114[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_49[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 172 (ID: RegBlock_172) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                chi[pp] * scratch_13[pp] * scratch_29[pp] * scratch_311[pp];
            scratch_67[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -2 * At2[pp] * scratch_82[pp];
            scratch_66[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = chi[pp] * scratch_13[pp] * scratch_14[pp] * scratch_96[pp];
            scratch_65[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = chi[pp] * scratch_13[pp] * scratch_33[pp] * scratch_56[pp];
            scratch_64[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = chi[pp] * scratch_13[pp] * scratch_33[pp] * scratch_86[pp];
            scratch_63[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = -At5[pp] * scratch_115[pp];
            scratch_62[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 =
                chi[pp] * scratch_11[pp] * scratch_13[pp] * scratch_291[pp];
            scratch_61[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 173 (ID: RegBlock_173) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                chi[pp] * scratch_11[pp] * scratch_13[pp] * scratch_181[pp];
            _tmp_0 = _tmp_0 + scratch_23[pp] + scratch_32[pp] + scratch_49[pp] +
                     scratch_52[pp] + scratch_54[pp] + scratch_57[pp] +
                     scratch_58[pp] + scratch_59[pp] + scratch_61[pp] +
                     scratch_62[pp] + scratch_63[pp] + scratch_64[pp] +
                     scratch_65[pp] + scratch_66[pp] + scratch_67[pp];
            _tmp_0 =
                BSSN_CAHD_C * _tmp_0 * chi[pp] * scratch_39[pp] * scratch_8[pp];
            scratch_56[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 174 (ID: RegBlock_174) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.33333333333333331 * gt1[pp] * scratch_26[pp];
            _tmp_0 = _tmp_0 + scratch_19[pp] + scratch_34[pp] + scratch_40[pp] +
                     scratch_6[pp] + scratch_94[pp];
            double _tmp_1;
            _tmp_1 = -0.66666666666666663 * chi[pp] * scratch_79[pp];
            double _tmp_2;
            _tmp_2 = beta1[pp] * grad_1_chi[pp];
            double _tmp_3;
            _tmp_3         = beta1[pp] * grad_1_At1[pp];
            scratch_8[pp]  = _tmp_3;
            _tmp_0         = _tmp_0 * chi[pp];
            scratch_23[pp] = _tmp_0;
            _tmp_2         = _tmp_1 + _tmp_2 + scratch_41[pp] + scratch_44[pp] +
                     scratch_48[pp] + scratch_56[pp];
            chi_rhs[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 175 (ID: RegBlock_175) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -2 * At2[pp] * scratch_28[pp];
            double _tmp_1;
            _tmp_1 = -2 * At1[pp] * scratch_24[pp];
            double _tmp_2;
            _tmp_2 = -2 * At0[pp] * scratch_38[pp];
            double _tmp_3;
            _tmp_3         = At1[pp] * K[pp];
            _tmp_3         = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3;
            _tmp_3         = _tmp_3 * alpha[pp];
            scratch_34[pp] = _tmp_3;
            _tmp_0         = 0.33333333333333331 * At1[pp] * grad_0_beta0[pp];
            scratch_32[pp] = _tmp_0;
            _tmp_1         = 0.33333333333333331 * At1[pp] * grad_1_beta1[pp];
            scratch_19[pp] = _tmp_1;
            _tmp_2         = At3[pp] * grad_0_beta1[pp];
            scratch_6[pp]  = _tmp_2;
        }
    }
}

// --- Execution Unit 176 (ID: RegBlock_176) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = At2[pp] * grad_1_beta2[pp];
            scratch_41[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = beta2[pp] * grad_2_At1[pp];
            scratch_40[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = At0[pp] * grad_1_beta0[pp];
            scratch_39[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = At4[pp] * grad_0_beta2[pp];
            scratch_38[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -0.66666666666666663 * At1[pp] * grad_2_beta2[pp];
            scratch_28[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = beta0[pp] * grad_0_At1[pp];
            scratch_24[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 177 (ID: RegBlock_177) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -gt3[pp] * scratch_9[pp];
            scratch_52[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -gt5[pp] * scratch_1[pp];
            scratch_49[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -gt0[pp] * scratch_2[pp];
            scratch_48[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = gt0[pp] * gt3[pp] * gt5[pp];
            scratch_44[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = scratch_19[pp] + scratch_23[pp] + scratch_24[pp] +
                     scratch_28[pp] + scratch_32[pp] + scratch_34[pp] +
                     scratch_38[pp] + scratch_39[pp] + scratch_40[pp] +
                     scratch_41[pp] + scratch_6[pp] + scratch_8[pp];
            At_rhs01[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 178 (ID: RegBlock_178) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * gt1[pp] * gt2[pp] * gt4[pp];
            double _tmp_1;
            _tmp_1 = -grad_2_alpha[pp] * scratch_37[pp];
            double _tmp_2;
            _tmp_2 = -grad_1_alpha[pp] * scratch_43[pp];
            double _tmp_3;
            _tmp_3 = -grad_0_alpha[pp] * scratch_27[pp];
            _tmp_0 = _tmp_0 + scratch_44[pp] + scratch_48[pp] + scratch_49[pp] +
                     scratch_52[pp];
            double _tmp_4;
            _tmp_4         = -scratch_2[pp];
            scratch_8[pp]  = _tmp_4;
            _tmp_3         = _tmp_1 + _tmp_2 + _tmp_3 + grad2_0_0_alpha[pp];
            scratch_19[pp] = _tmp_3;
            _tmp_0         = 1.0 / _tmp_0;
            scratch_6[pp]  = _tmp_0;
        }
    }
}

// --- Execution Unit 179 (ID: RegBlock_179) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -grad_2_alpha[pp] * scratch_36[pp];
            double _tmp_1;
            _tmp_1 = -grad_1_alpha[pp] * scratch_30[pp];
            double _tmp_2;
            _tmp_2 = -grad_0_alpha[pp] * scratch_53[pp];
            double _tmp_3;
            _tmp_3 = gt3[pp] * gt5[pp];
            _tmp_2 = _tmp_0 + _tmp_1 + _tmp_2 + grad2_1_2_alpha[pp];
            _tmp_3 = _tmp_3 + scratch_8[pp];
            _tmp_2 = -2 * _tmp_2 * chi[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_23[pp] = _tmp_2;
            _tmp_3         = -_tmp_3 * chi[pp] * scratch_19[pp] * scratch_6[pp];
            scratch_2[pp]  = _tmp_3;
        }
    }
}

// --- Execution Unit 180 (ID: RegBlock_180) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -grad_2_alpha[pp] * scratch_5[pp];
            double _tmp_1;
            _tmp_1 = -grad_1_alpha[pp] * scratch_72[pp];
            double _tmp_2;
            _tmp_2 = -grad_0_alpha[pp] * scratch_69[pp];
            double _tmp_3;
            _tmp_3 = gt0[pp] * gt5[pp];
            double _tmp_4;
            _tmp_4         = -scratch_9[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2 + grad2_1_1_alpha[pp];
            _tmp_4         = _tmp_3 + _tmp_4;
            _tmp_3         = beta1[pp] * grad_1_K[pp];
            scratch_19[pp] = _tmp_3;
            _tmp_4         = -_tmp_2 * _tmp_4 * chi[pp] * scratch_6[pp];
            scratch_8[pp]  = _tmp_4;
        }
    }
}

// --- Execution Unit 181 (ID: RegBlock_181) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -gt2[pp] * gt3[pp];
            double _tmp_1;
            _tmp_1 = gt1[pp] * gt4[pp];
            double _tmp_2;
            _tmp_2 = -grad_2_alpha[pp] * scratch_90[pp];
            double _tmp_3;
            _tmp_3 = -grad_1_alpha[pp] * scratch_157[pp];
            double _tmp_4;
            _tmp_4 = -grad_0_alpha[pp] * scratch_99[pp];
            double _tmp_5;
            _tmp_5         = beta2[pp] * grad_2_K[pp];
            scratch_24[pp] = _tmp_5;
            _tmp_1         = _tmp_0 + _tmp_1;
            scratch_9[pp]  = _tmp_1;
            _tmp_4         = _tmp_2 + _tmp_3 + _tmp_4 + grad2_0_2_alpha[pp];
            scratch_5[pp]  = _tmp_4;
        }
    }
}

// --- Execution Unit 182 (ID: RegBlock_182) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -grad_2_alpha[pp] * scratch_35[pp];
            double _tmp_1;
            _tmp_1 = -grad_1_alpha[pp] * scratch_70[pp];
            double _tmp_2;
            _tmp_2         = -grad_0_alpha[pp] * scratch_136[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2 + grad2_0_1_alpha[pp];
            _tmp_0         = At5[pp] * scratch_115[pp];
            scratch_30[pp] = _tmp_0;
            _tmp_1 =
                -2 * chi[pp] * scratch_5[pp] * scratch_6[pp] * scratch_9[pp];
            scratch_28[pp] = _tmp_1;
            _tmp_2 = -2 * _tmp_2 * chi[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_27[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 183 (ID: RegBlock_183) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * At4[pp] * scratch_42[pp];
            double _tmp_1;
            _tmp_1 = 2 * At2[pp] * scratch_82[pp];
            double _tmp_2;
            _tmp_2 = 2 * At1[pp] * scratch_16[pp];
            double _tmp_3;
            _tmp_3 = At3[pp] * scratch_3[pp];
            double _tmp_4;
            _tmp_4 = At0[pp] * scratch_83[pp];
            double _tmp_5;
            _tmp_5 = 0.33333333333333331 * scratch_60[pp];
            _tmp_5 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 + _tmp_5 +
                     scratch_30[pp];
            _tmp_5        = _tmp_5 * alpha[pp];
            scratch_5[pp] = _tmp_5;
            _tmp_0        = beta0[pp] * grad_0_K[pp];
            scratch_9[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 184 (ID: RegBlock_184) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -grad_2_alpha[pp] * scratch_127[pp];
            double _tmp_1;
            _tmp_1 = -grad_1_alpha[pp] * scratch_178[pp];
            double _tmp_2;
            _tmp_2 = -grad_0_alpha[pp] * scratch_98[pp];
            double _tmp_3;
            _tmp_3 = gt0[pp] * gt3[pp];
            double _tmp_4;
            _tmp_4         = -scratch_1[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2 + grad2_2_2_alpha[pp];
            _tmp_4         = _tmp_3 + _tmp_4;
            _tmp_4         = -_tmp_2 * _tmp_4 * chi[pp] * scratch_6[pp];
            scratch_30[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 185 (ID: RegBlock_185) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = beta2[pp] * grad_2_alpha[pp];
            double _tmp_1;
            _tmp_1 = beta1[pp] * grad_1_alpha[pp];
            double _tmp_2;
            _tmp_2        = beta0[pp] * grad_0_alpha[pp];
            _tmp_2        = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_1[pp] = _tmp_2;
            _tmp_0        = scratch_19[pp] + scratch_23[pp] + scratch_24[pp] +
                     scratch_27[pp] + scratch_28[pp] + scratch_2[pp] +
                     scratch_30[pp] + scratch_5[pp] + scratch_8[pp] +
                     scratch_9[pp];
            K_rhs[pp]     = _tmp_0;
            _tmp_1        = -2 * K[pp] * alpha[pp];
            scratch_6[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 186 (ID: RegBlock_186) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = t * t;
            double _tmp_1;
            _tmp_1 = 1.0 / (sig_ssl * sig_ssl);
            double _tmp_2;
            _tmp_2        = sqrt(chi[pp]);
            _tmp_1        = -0.5 * _tmp_0 * _tmp_1;
            _tmp_0        = -_tmp_2;
            _tmp_1        = exp(_tmp_1);
            _tmp_0        = _tmp_0 + alpha[pp];
            _tmp_2        = -_tmp_0 * _tmp_1 * _tmp_2 * h_ssl;
            _tmp_1        = lambda[0] * scratch_1[pp];
            _tmp_1        = _tmp_1 + _tmp_2 + scratch_6[pp];
            a_rhs[pp]     = _tmp_1;
            _tmp_2        = 2 * grad_0_beta2[pp] * gt2[pp];
            scratch_2[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 187 (ID: RegBlock_187) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -2 * At0[pp] * alpha[pp];
            scratch_23[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = beta1[pp] * grad_1_gt0[pp];
            scratch_19[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2        = -0.66666666666666663 * grad_2_beta2[pp] * gt0[pp];
            scratch_9[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3        = 1.3333333333333333 * grad_0_beta0[pp] * gt0[pp];
            scratch_8[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4        = beta0[pp] * grad_0_gt0[pp];
            scratch_6[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5        = beta2[pp] * grad_2_gt0[pp];
            scratch_5[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = 2 * grad_0_beta1[pp] * gt1[pp];
            scratch_1[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 188 (ID: RegBlock_188) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.66666666666666663 * grad_1_beta1[pp] * gt0[pp];
            _tmp_0 = _tmp_0 + scratch_19[pp] + scratch_1[pp] + scratch_23[pp] +
                     scratch_2[pp] + scratch_5[pp] + scratch_6[pp] +
                     scratch_8[pp] + scratch_9[pp];
            gt_rhs00[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = At4[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_24[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = beta0[pp] * grad_0_At4[pp];
            scratch_28[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = At2[pp] * scratch_13[pp] * scratch_14[pp];
            scratch_27[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 189 (ID: RegBlock_189) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = At5[pp] * scratch_11[pp] * scratch_13[pp];
            double _tmp_1;
            _tmp_1 = At4[pp] * scratch_13[pp] * scratch_14[pp];
            double _tmp_2;
            _tmp_2 = At2[pp] * scratch_13[pp] * scratch_18[pp];
            double _tmp_3;
            _tmp_3        = At5[pp] * scratch_13[pp] * scratch_33[pp];
            _tmp_2        = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_6[pp] = _tmp_2;
            _tmp_3        = _tmp_3 + scratch_24[pp] + scratch_27[pp];
            scratch_5[pp] = _tmp_3;
            _tmp_0        = At4[pp] * K[pp];
            scratch_9[pp] = _tmp_0;
            _tmp_1        = At2[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_8[pp] = _tmp_1;
            double _tmp_4;
            _tmp_4        = -2 * At1[pp] * _tmp_2;
            scratch_2[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5        = -2 * At3[pp] * _tmp_3;
            scratch_1[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 190 (ID: RegBlock_190) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = At5[pp] * scratch_13[pp] * scratch_29[pp];
            _tmp_0         = _tmp_0 + scratch_22[pp] + scratch_8[pp];
            scratch_23[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = -2 * At4[pp] * _tmp_0;
            _tmp_1 = _tmp_1 + scratch_1[pp] + scratch_2[pp] + scratch_9[pp];
            double _tmp_2;
            _tmp_2         = At2[pp] * grad_1_beta0[pp];
            scratch_30[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = At1[pp] * grad_2_beta0[pp];
            scratch_27[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -0.66666666666666663 * At4[pp] * grad_0_beta0[pp];
            scratch_24[pp] = _tmp_4;
            _tmp_1         = _tmp_1 * alpha[pp];
            scratch_19[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 191 (ID: RegBlock_191) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.33333333333333331 * gt4[pp] * scratch_26[pp];
            _tmp_0 = _tmp_0 + scratch_0[pp] + scratch_12[pp] + scratch_21[pp] +
                     scratch_31[pp] + scratch_97[pp];
            double _tmp_1;
            _tmp_1         = beta1[pp] * grad_1_At4[pp];
            scratch_32[pp] = _tmp_1;
            _tmp_0         = _tmp_0 * chi[pp];
            scratch_22[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2        = At3[pp] * grad_2_beta1[pp];
            scratch_9[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3        = 0.33333333333333331 * At4[pp] * grad_2_beta2[pp];
            scratch_2[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4        = beta2[pp] * grad_2_At4[pp];
            scratch_1[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 192 (ID: RegBlock_192) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.33333333333333331 * At4[pp] * grad_1_beta1[pp];
            double _tmp_1;
            _tmp_1 = At5[pp] * grad_1_beta2[pp];
            _tmp_1 = _tmp_0 + _tmp_1 + scratch_19[pp] + scratch_1[pp] +
                     scratch_22[pp] + scratch_24[pp] + scratch_27[pp] +
                     scratch_28[pp] + scratch_2[pp] + scratch_30[pp] +
                     scratch_32[pp] + scratch_9[pp];
            At_rhs12[pp] = _tmp_1;
            _tmp_0       = 0.33333333333333331 * grad2_2_2_beta2[pp] *
                     scratch_11[pp] * scratch_13[pp];
            scratch_0[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 193 (ID: RegBlock_193) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 1.3333333333333333 * grad_2_K[pp] * scratch_11[pp] *
                     scratch_13[pp];
            double _tmp_1;
            _tmp_1 = 3 * grad_2_chi[pp] * scratch_102[pp] * scratch_82[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            _tmp_1 = -_tmp_1 * alpha[pp];
            scratch_9[pp] = _tmp_1;
            _tmp_0        = 4 * alpha[pp] * scratch_134[pp] * scratch_82[pp];
            scratch_1[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2         = -grad_2_beta0[pp] * scratch_118[pp];
            scratch_12[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3 = 0.33333333333333331 * grad2_1_2_beta2[pp] *
                     scratch_13[pp] * scratch_14[pp];
            scratch_2[pp] = _tmp_3;
        }
    }
}

// --- Execution Unit 194 (ID: RegBlock_194) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.66666666666666663 * scratch_139[pp] * scratch_79[pp];
            scratch_28[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = 2 * alpha[pp] * scratch_25[pp] * scratch_3[pp];
            scratch_27[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -grad_1_beta0[pp] * scratch_93[pp];
            scratch_24[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = beta0[pp] * grad_0_Gt0[pp];
            scratch_22[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = 4 * alpha[pp] * scratch_131[pp] * scratch_42[pp];
            scratch_21[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = grad2_1_1_beta0[pp] * scratch_13[pp] * scratch_46[pp];
            scratch_19[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 195 (ID: RegBlock_195) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.33333333333333331 * grad2_1_1_beta1[pp] *
                     scratch_13[pp] * scratch_14[pp];
            scratch_35[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 2.3333333333333335 * grad2_0_1_beta0[pp] * scratch_13[pp] *
                     scratch_14[pp];
            scratch_34[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = 0.33333333333333331 * grad2_0_2_beta2[pp] *
                     scratch_13[pp] * scratch_18[pp];
            scratch_32[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = beta2[pp] * grad_2_Gt0[pp];
            scratch_31[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 0.33333333333333331 * grad2_1_2_beta1[pp] *
                     scratch_11[pp] * scratch_13[pp];
            scratch_30[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = 1.3333333333333333 * grad2_0_0_beta0[pp] * scratch_13[pp] *
                     scratch_18[pp];
            scratch_25[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = 2.3333333333333335 * grad2_0_2_beta0[pp] * scratch_11[pp] *
                     scratch_13[pp];
            scratch_3[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 196 (ID: RegBlock_196) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 =
                4 * At4[pp] * scratch_11[pp] * scratch_14[pp] * scratch_55[pp];
            double _tmp_1;
            _tmp_1 =
                4 * At2[pp] * scratch_11[pp] * scratch_18[pp] * scratch_55[pp];
            double _tmp_2;
            _tmp_2 =
                4 * At1[pp] * scratch_14[pp] * scratch_18[pp] * scratch_55[pp];
            double _tmp_3;
            _tmp_3 = 2 * At5[pp] * scratch_55[pp] * scratch_84[pp];
            double _tmp_4;
            _tmp_4 = 2 * At3[pp] * scratch_10[pp] * scratch_55[pp];
            double _tmp_5;
            _tmp_5 = 2 * At0[pp] * scratch_55[pp] * scratch_78[pp];
            _tmp_5 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 + _tmp_5;
            _tmp_5 = -_tmp_5 * grad_0_alpha[pp];
            scratch_36[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 197 (ID: RegBlock_197) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 2 * alpha[pp] * scratch_115[pp] * scratch_119[pp];
            scratch_42[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -grad_2_alpha[pp] * scratch_103[pp];
            scratch_41[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = beta1[pp] * grad_1_Gt0[pp];
            scratch_40[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = -grad_0_beta0[pp] * scratch_139[pp];
            scratch_39[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4 = 2 * grad2_1_2_beta0[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_38[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5 = 0.33333333333333331 * grad2_0_1_beta1[pp] *
                     scratch_13[pp] * scratch_18[pp];
            scratch_37[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6 = grad2_2_2_beta0[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_10[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 198 (ID: RegBlock_198) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = beta2[pp] * grad_2_B0[pp];
            double _tmp_1;
            _tmp_1 = beta1[pp] * grad_1_B0[pp];
            double _tmp_2;
            _tmp_2 = beta0[pp] * grad_0_B0[pp];
            _tmp_2 = _tmp_0 + _tmp_1 + _tmp_2;
            _tmp_0 = 1.3333333333333333 * grad_0_K[pp] * scratch_13[pp] *
                     scratch_18[pp];
            _tmp_1 = 3 * grad_0_chi[pp] * scratch_102[pp] * scratch_83[pp];
            _tmp_2 = _tmp_2 * lambda[2];
            scratch_44[pp] = _tmp_2;
            _tmp_1         = _tmp_0 + _tmp_1;
            scratch_43[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 199 (ID: RegBlock_199) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_22[pp] + scratch_31[pp] + scratch_40[pp];
            double _tmp_1;
            _tmp_1         = -alpha[pp] * scratch_43[pp];
            scratch_55[pp] = _tmp_1;
            _tmp_0         = -_tmp_0 * lambda[3];
            scratch_54[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2         = 2 * alpha[pp] * scratch_126[pp] * scratch_83[pp];
            scratch_53[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 4 * alpha[pp] * scratch_15[pp] * scratch_16[pp];
            scratch_52[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -B0[pp] * eta[pp];
            scratch_49[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = -grad_1_alpha[pp] * scratch_7[pp];
            scratch_48[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 200 (ID: RegBlock_200) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 1.3333333333333333 * grad_1_K[pp] * scratch_13[pp] *
                     scratch_14[pp];
            double _tmp_1;
            _tmp_1 = 3 * grad_1_chi[pp] * scratch_102[pp] * scratch_16[pp];
            _tmp_1 = _tmp_0 + _tmp_1;
            _tmp_1 = -_tmp_1 * alpha[pp];
            scratch_7[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 201 (ID: RegBlock_201) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_0[pp] + scratch_10[pp] + scratch_12[pp] +
                     scratch_19[pp] + scratch_1[pp] + scratch_21[pp] +
                     scratch_22[pp] + scratch_24[pp] + scratch_25[pp] +
                     scratch_27[pp] + scratch_28[pp] + scratch_2[pp] +
                     scratch_30[pp] + scratch_31[pp] + scratch_32[pp] +
                     scratch_34[pp] + scratch_35[pp] + scratch_36[pp] +
                     scratch_37[pp] + scratch_38[pp] + scratch_39[pp] +
                     scratch_3[pp] + scratch_40[pp] + scratch_41[pp] +
                     scratch_42[pp] + scratch_44[pp] + scratch_48[pp] +
                     scratch_49[pp] + scratch_52[pp] + scratch_53[pp] +
                     scratch_54[pp] + scratch_55[pp] + scratch_7[pp] +
                     scratch_9[pp];
            B_rhs0[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 202 (ID: RegBlock_202) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -0.66666666666666663 * grad_0_beta0[pp] * gt5[pp];
            scratch_56[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = 2 * grad_2_beta1[pp] * gt4[pp];
            scratch_54[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = beta1[pp] * grad_1_gt5[pp];
            scratch_49[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 1.3333333333333333 * grad_2_beta2[pp] * gt5[pp];
            scratch_44[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -2 * At5[pp] * alpha[pp];
            scratch_43[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = beta2[pp] * grad_2_gt5[pp];
            scratch_16[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6         = beta0[pp] * grad_0_gt5[pp];
            scratch_15[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 203 (ID: RegBlock_203) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.66666666666666663 * grad_1_beta1[pp] * gt5[pp];
            double _tmp_1;
            _tmp_1 = 2 * grad_2_beta0[pp] * gt2[pp];
            _tmp_1 = _tmp_0 + _tmp_1 + scratch_15[pp] + scratch_16[pp] +
                     scratch_43[pp] + scratch_44[pp] + scratch_49[pp] +
                     scratch_54[pp] + scratch_56[pp];
            gt_rhs22[pp]   = _tmp_1;
            _tmp_0         = -0.66666666666666663 * At0[pp] * grad_2_beta2[pp];
            scratch_58[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2         = 2 * At1[pp] * grad_0_beta1[pp];
            scratch_57[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 204 (ID: RegBlock_204) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.33333333333333331 * gt0[pp] * scratch_26[pp];
            _tmp_0 = _tmp_0 + scratch_17[pp] + scratch_20[pp] + scratch_45[pp] +
                     scratch_47[pp] + scratch_50[pp];
            double _tmp_1;
            _tmp_1         = At0[pp] * scratch_13[pp] * scratch_18[pp];
            scratch_54[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = beta2[pp] * grad_2_At0[pp];
            scratch_49[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = 2 * At2[pp] * grad_0_beta2[pp];
            scratch_44[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -0.66666666666666663 * At0[pp] * grad_1_beta1[pp];
            scratch_43[pp] = _tmp_4;
            _tmp_0         = _tmp_0 * chi[pp];
            scratch_16[pp] = _tmp_0;
            double _tmp_5;
            _tmp_5         = 1.3333333333333333 * At0[pp] * grad_0_beta0[pp];
            scratch_15[pp] = _tmp_5;
        }
    }
}

// --- Execution Unit 205 (ID: RegBlock_205) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = At2[pp] * scratch_13[pp] * scratch_33[pp];
            double _tmp_1;
            _tmp_1 = At1[pp] * scratch_13[pp] * scratch_46[pp];
            double _tmp_2;
            _tmp_2 = At0[pp] * scratch_13[pp] * scratch_14[pp];
            double _tmp_3;
            _tmp_3         = scratch_51[pp] + scratch_54[pp] + scratch_8[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            _tmp_3         = -2 * At0[pp] * _tmp_3;
            scratch_50[pp] = _tmp_3;
            _tmp_0         = At1[pp] * scratch_13[pp] * scratch_33[pp];
            scratch_47[pp] = _tmp_0;
            _tmp_1         = At0[pp] * K[pp];
            scratch_45[pp] = _tmp_1;
            double _tmp_4;
            _tmp_4         = At0[pp] * scratch_11[pp] * scratch_13[pp];
            scratch_20[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = At2[pp] * scratch_13[pp] * scratch_29[pp];
            scratch_18[pp] = _tmp_5;
            _tmp_2         = -2 * At1[pp] * _tmp_2;
            scratch_17[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 206 (ID: RegBlock_206) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_18[pp] + scratch_20[pp] + scratch_47[pp];
            _tmp_0 = -2 * At2[pp] * _tmp_0;
            _tmp_0 = _tmp_0 + scratch_17[pp] + scratch_45[pp] + scratch_50[pp];
            double _tmp_1;
            _tmp_1         = beta1[pp] * grad_1_At0[pp];
            scratch_11[pp] = _tmp_1;
            _tmp_0         = _tmp_0 * alpha[pp];
            scratch_13[pp] = _tmp_0;
            double _tmp_2;
            _tmp_2        = beta0[pp] * grad_0_At0[pp];
            scratch_8[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 207 (ID: RegBlock_207) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = beta1[pp] * grad_1_gt4[pp];
            scratch_18[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = grad_1_beta0[pp] * gt2[pp];
            scratch_14[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_11[pp] + scratch_13[pp] + scratch_15[pp] +
                     scratch_16[pp] + scratch_43[pp] + scratch_44[pp] +
                     scratch_49[pp] + scratch_57[pp] + scratch_58[pp] +
                     scratch_8[pp];
            At_rhs00[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = grad_2_beta1[pp] * gt3[pp];
            scratch_17[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = 0.33333333333333331 * grad_2_beta2[pp] * gt4[pp];
            scratch_20[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 208 (ID: RegBlock_208) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = -2 * At4[pp] * alpha[pp];
            scratch_33[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -0.66666666666666663 * grad_0_beta0[pp] * gt4[pp];
            scratch_29[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = beta0[pp] * grad_0_gt4[pp];
            scratch_16[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = beta2[pp] * grad_2_gt4[pp];
            scratch_15[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = 0.33333333333333331 * grad_1_beta1[pp] * gt4[pp];
            scratch_13[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = grad_1_beta2[pp] * gt5[pp];
            scratch_11[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = grad_2_beta0[pp] * gt1[pp];
            scratch_8[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 209 (ID: RegBlock_209) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = beta1[pp] * grad_1_gt2[pp];
            scratch_44[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = grad_0_beta2[pp] * gt5[pp];
            scratch_45[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2 = scratch_11[pp] + scratch_13[pp] + scratch_14[pp] +
                     scratch_15[pp] + scratch_16[pp] + scratch_17[pp] +
                     scratch_18[pp] + scratch_20[pp] + scratch_29[pp] +
                     scratch_33[pp] + scratch_8[pp];
            gt_rhs12[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = beta2[pp] * grad_2_gt2[pp];
            scratch_46[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = grad_2_beta1[pp] * gt1[pp];
            scratch_43[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 210 (ID: RegBlock_210) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 0.33333333333333331 * grad_0_beta0[pp] * gt2[pp];
            scratch_17[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = -0.66666666666666663 * grad_1_beta1[pp] * gt2[pp];
            scratch_16[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = grad_2_beta0[pp] * gt0[pp];
            scratch_15[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = beta0[pp] * grad_0_gt2[pp];
            scratch_14[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -2 * At2[pp] * alpha[pp];
            scratch_13[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = grad_0_beta1[pp] * gt4[pp];
            scratch_11[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = 0.33333333333333331 * grad_2_beta2[pp] * gt2[pp];
            scratch_8[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 211 (ID: RegBlock_211) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = beta2[pp] * grad_2_beta2[pp];
            double _tmp_1;
            _tmp_1 = beta1[pp] * grad_1_beta2[pp];
            double _tmp_2;
            _tmp_2         = beta0[pp] * grad_0_beta2[pp];
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_18[pp] = _tmp_2;
            _tmp_0         = scratch_11[pp] + scratch_13[pp] + scratch_14[pp] +
                     scratch_15[pp] + scratch_16[pp] + scratch_17[pp] +
                     scratch_43[pp] + scratch_44[pp] + scratch_45[pp] +
                     scratch_46[pp] + scratch_8[pp];
            gt_rhs02[pp]   = _tmp_0;
            _tmp_1         = B2[pp] * scratch_4[pp];
            scratch_20[pp] = _tmp_1;
        }
    }
}

// --- Execution Unit 212 (ID: RegBlock_212) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0     = lambda[1] * scratch_18[pp];
            _tmp_0     = _tmp_0 + scratch_20[pp];
            b_rhs2[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = 0.33333333333333331 * grad_0_beta0[pp] * gt1[pp];
            scratch_16[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = beta0[pp] * grad_0_gt1[pp];
            scratch_15[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = grad_0_beta1[pp] * gt3[pp];
            scratch_14[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4         = -0.66666666666666663 * grad_2_beta2[pp] * gt1[pp];
            scratch_13[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5         = grad_1_beta0[pp] * gt0[pp];
            scratch_11[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = beta1[pp] * grad_1_gt1[pp];
            scratch_8[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 213 (ID: RegBlock_213) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 0.33333333333333331 * grad_1_beta1[pp] * gt1[pp];
            double _tmp_1;
            _tmp_1 = -2 * At1[pp] * alpha[pp];
            double _tmp_2;
            _tmp_2 = grad_1_beta2[pp] * gt2[pp];
            double _tmp_3;
            _tmp_3 = grad_0_beta2[pp] * gt4[pp];
            double _tmp_4;
            _tmp_4 = beta2[pp] * grad_2_gt1[pp];
            _tmp_4 = _tmp_0 + _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4 +
                     scratch_11[pp] + scratch_13[pp] + scratch_14[pp] +
                     scratch_15[pp] + scratch_16[pp] + scratch_8[pp];
            gt_rhs01[pp] = _tmp_4;
        }
    }
}

// --- Execution Unit 214 (ID: RegBlock_214) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_0[pp] + scratch_10[pp] + scratch_12[pp] +
                     scratch_19[pp] + scratch_1[pp] + scratch_21[pp] +
                     scratch_22[pp] + scratch_24[pp] + scratch_25[pp] +
                     scratch_27[pp] + scratch_28[pp] + scratch_2[pp] +
                     scratch_30[pp] + scratch_31[pp] + scratch_32[pp] +
                     scratch_34[pp] + scratch_35[pp] + scratch_36[pp] +
                     scratch_37[pp] + scratch_38[pp] + scratch_39[pp] +
                     scratch_3[pp] + scratch_40[pp] + scratch_41[pp] +
                     scratch_42[pp] + scratch_48[pp] + scratch_52[pp] +
                     scratch_53[pp] + scratch_55[pp] + scratch_7[pp] +
                     scratch_9[pp];
            Gt_rhs0[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 215 (ID: RegBlock_215) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.33333333333333331 * gt5[pp] * scratch_26[pp];
            double _tmp_1;
            _tmp_1 = -2 * At5[pp] * scratch_23[pp];
            double _tmp_2;
            _tmp_2 = -2 * At4[pp] * scratch_5[pp];
            double _tmp_3;
            _tmp_3 = -2 * At2[pp] * scratch_6[pp];
            double _tmp_4;
            _tmp_4 = At5[pp] * K[pp];
            _tmp_0 = _tmp_0 + scratch_108[pp] + scratch_110[pp] +
                     scratch_120[pp] + scratch_124[pp] + scratch_132[pp];
            _tmp_4        = _tmp_1 + _tmp_2 + _tmp_3 + _tmp_4;
            scratch_0[pp] = _tmp_4;
            _tmp_1        = -0.66666666666666663 * At5[pp] * grad_0_beta0[pp];
            scratch_2[pp] = _tmp_1;
            _tmp_0        = _tmp_0 * chi[pp];
            scratch_3[pp] = _tmp_0;
            _tmp_2        = -0.66666666666666663 * At5[pp] * grad_1_beta1[pp];
            scratch_1[pp] = _tmp_2;
        }
    }
}

// --- Execution Unit 216 (ID: RegBlock_216) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0         = 2 * At2[pp] * grad_2_beta0[pp];
            scratch_13[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1         = beta1[pp] * grad_1_At5[pp];
            scratch_12[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = 2 * At4[pp] * grad_2_beta1[pp];
            scratch_11[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = beta0[pp] * grad_0_At5[pp];
            scratch_10[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4        = beta2[pp] * grad_2_At5[pp];
            scratch_8[pp] = _tmp_4;
            double _tmp_5;
            _tmp_5        = alpha[pp] * scratch_0[pp];
            scratch_9[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = 1.3333333333333333 * At5[pp] * grad_2_beta2[pp];
            scratch_7[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 217 (ID: RegBlock_217) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = beta2[pp] * grad_2_beta0[pp];
            double _tmp_1;
            _tmp_1 = beta1[pp] * grad_1_beta0[pp];
            double _tmp_2;
            _tmp_2 = beta0[pp] * grad_0_beta0[pp];
            double _tmp_3;
            _tmp_3         = B0[pp] * scratch_4[pp];
            scratch_14[pp] = _tmp_3;
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_2;
            scratch_0[pp]  = _tmp_2;
            _tmp_0         = scratch_10[pp] + scratch_11[pp] + scratch_12[pp] +
                     scratch_13[pp] + scratch_1[pp] + scratch_2[pp] +
                     scratch_3[pp] + scratch_7[pp] + scratch_8[pp] +
                     scratch_9[pp];
            At_rhs22[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 218 (ID: RegBlock_218) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = lambda[1] * scratch_0[pp];
            double _tmp_1;
            _tmp_1        = -0.66666666666666663 * At2[pp] * grad_1_beta1[pp];
            scratch_8[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2        = At1[pp] * grad_2_beta1[pp];
            scratch_7[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3        = beta2[pp] * grad_2_At2[pp];
            scratch_4[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4        = 0.33333333333333331 * At2[pp] * grad_2_beta2[pp];
            scratch_3[pp] = _tmp_4;
            _tmp_0        = _tmp_0 + scratch_14[pp];
            b_rhs0[pp]    = _tmp_0;
            double _tmp_5;
            _tmp_5        = 0.33333333333333331 * At2[pp] * grad_0_beta0[pp];
            scratch_2[pp] = _tmp_5;
            double _tmp_6;
            _tmp_6        = At4[pp] * grad_0_beta1[pp];
            scratch_1[pp] = _tmp_6;
        }
    }
}

// --- Execution Unit 219 (ID: RegBlock_219) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -0.33333333333333331 * gt2[pp] * scratch_26[pp];
            _tmp_0 = _tmp_0 + scratch_149[pp] + scratch_175[pp] +
                     scratch_76[pp] + scratch_81[pp] + scratch_87[pp];
            double _tmp_1;
            _tmp_1         = beta0[pp] * grad_0_At2[pp];
            scratch_12[pp] = _tmp_1;
            double _tmp_2;
            _tmp_2         = -2 * At2[pp] * scratch_23[pp];
            scratch_11[pp] = _tmp_2;
            double _tmp_3;
            _tmp_3         = At5[pp] * grad_0_beta2[pp];
            scratch_10[pp] = _tmp_3;
            double _tmp_4;
            _tmp_4        = beta1[pp] * grad_1_At2[pp];
            scratch_9[pp] = _tmp_4;
            _tmp_0        = _tmp_0 * chi[pp];
            scratch_0[pp] = _tmp_0;
        }
    }
}

// --- Execution Unit 220 (ID: RegBlock_220) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -2 * At1[pp] * scratch_5[pp];
            double _tmp_1;
            _tmp_1 = -2 * At0[pp] * scratch_6[pp];
            double _tmp_2;
            _tmp_2 = At2[pp] * K[pp];
            _tmp_2 = _tmp_0 + _tmp_1 + _tmp_2 + scratch_11[pp];
            _tmp_2 = _tmp_2 * alpha[pp];
            _tmp_0 = At0[pp] * grad_2_beta0[pp];
            _tmp_0 = _tmp_0 + _tmp_2 + scratch_0[pp] + scratch_10[pp] +
                     scratch_12[pp] + scratch_1[pp] + scratch_2[pp] +
                     scratch_3[pp] + scratch_4[pp] + scratch_7[pp] +
                     scratch_8[pp] + scratch_9[pp];
            At_rhs02[pp] = _tmp_0;
        }
    }
}
// DENDRO: END GENERATION

/**
-------------------------
  DENDRO CODE GENERATION STATS
-------------------------

  Total Blocks (Kernels) : 221
  Global Scratchpads     : 312

  [OPS]
  Add/Sub                : 1487
  Mul/Div                : 2562
  Pow                    : 22
  Special Funcs          : 0
  ----------
  Total FLOPs (Approx)   : 4071

  [MEMORY TRAFFIC]
  Local Register Writes  : 1745
  Global Mem Writes      : 1112

-------------------------
*/

