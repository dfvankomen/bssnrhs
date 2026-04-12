

// Dendro: START VECTORIZED BLOCK GENERATION
// Total Execution Units (After Slicing): 18
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
double *__restrict__ scratch_312 =
    massive_workspace.data() + (312 * nx * ny * nz);
double *__restrict__ scratch_313 =
    massive_workspace.data() + (313 * nx * ny * nz);
double *__restrict__ scratch_314 =
    massive_workspace.data() + (314 * nx * ny * nz);
double *__restrict__ scratch_315 =
    massive_workspace.data() + (315 * nx * ny * nz);
double *__restrict__ scratch_316 =
    massive_workspace.data() + (316 * nx * ny * nz);
double *__restrict__ scratch_317 =
    massive_workspace.data() + (317 * nx * ny * nz);
double *__restrict__ scratch_318 =
    massive_workspace.data() + (318 * nx * ny * nz);
double *__restrict__ scratch_319 =
    massive_workspace.data() + (319 * nx * ny * nz);
double *__restrict__ scratch_320 =
    massive_workspace.data() + (320 * nx * ny * nz);
double *__restrict__ scratch_321 =
    massive_workspace.data() + (321 * nx * ny * nz);
double *__restrict__ scratch_322 =
    massive_workspace.data() + (322 * nx * ny * nz);
double *__restrict__ scratch_323 =
    massive_workspace.data() + (323 * nx * ny * nz);
double *__restrict__ scratch_324 =
    massive_workspace.data() + (324 * nx * ny * nz);
double *__restrict__ scratch_325 =
    massive_workspace.data() + (325 * nx * ny * nz);
double *__restrict__ scratch_326 =
    massive_workspace.data() + (326 * nx * ny * nz);
double *__restrict__ scratch_327 =
    massive_workspace.data() + (327 * nx * ny * nz);
double *__restrict__ scratch_328 =
    massive_workspace.data() + (328 * nx * ny * nz);
double *__restrict__ scratch_329 =
    massive_workspace.data() + (329 * nx * ny * nz);
double *__restrict__ scratch_330 =
    massive_workspace.data() + (330 * nx * ny * nz);
double *__restrict__ scratch_331 =
    massive_workspace.data() + (331 * nx * ny * nz);
double *__restrict__ scratch_332 =
    massive_workspace.data() + (332 * nx * ny * nz);
double *__restrict__ scratch_333 =
    massive_workspace.data() + (333 * nx * ny * nz);
double *__restrict__ scratch_334 =
    massive_workspace.data() + (334 * nx * ny * nz);
double *__restrict__ scratch_335 =
    massive_workspace.data() + (335 * nx * ny * nz);
double *__restrict__ scratch_336 =
    massive_workspace.data() + (336 * nx * ny * nz);
double *__restrict__ scratch_337 =
    massive_workspace.data() + (337 * nx * ny * nz);
double *__restrict__ scratch_338 =
    massive_workspace.data() + (338 * nx * ny * nz);
double *__restrict__ scratch_339 =
    massive_workspace.data() + (339 * nx * ny * nz);
double *__restrict__ scratch_340 =
    massive_workspace.data() + (340 * nx * ny * nz);
double *__restrict__ scratch_341 =
    massive_workspace.data() + (341 * nx * ny * nz);
double *__restrict__ scratch_342 =
    massive_workspace.data() + (342 * nx * ny * nz);
double *__restrict__ scratch_343 =
    massive_workspace.data() + (343 * nx * ny * nz);
double *__restrict__ scratch_344 =
    massive_workspace.data() + (344 * nx * ny * nz);
double *__restrict__ scratch_345 =
    massive_workspace.data() + (345 * nx * ny * nz);
double *__restrict__ scratch_346 =
    massive_workspace.data() + (346 * nx * ny * nz);
double *__restrict__ scratch_347 =
    massive_workspace.data() + (347 * nx * ny * nz);
double *__restrict__ scratch_348 =
    massive_workspace.data() + (348 * nx * ny * nz);
double *__restrict__ scratch_349 =
    massive_workspace.data() + (349 * nx * ny * nz);
double *__restrict__ scratch_350 =
    massive_workspace.data() + (350 * nx * ny * nz);
double *__restrict__ scratch_351 =
    massive_workspace.data() + (351 * nx * ny * nz);
double *__restrict__ scratch_352 =
    massive_workspace.data() + (352 * nx * ny * nz);
double *__restrict__ scratch_353 =
    massive_workspace.data() + (353 * nx * ny * nz);
double *__restrict__ scratch_354 =
    massive_workspace.data() + (354 * nx * ny * nz);
double *__restrict__ scratch_355 =
    massive_workspace.data() + (355 * nx * ny * nz);
double *__restrict__ scratch_356 =
    massive_workspace.data() + (356 * nx * ny * nz);
double *__restrict__ scratch_357 =
    massive_workspace.data() + (357 * nx * ny * nz);
double *__restrict__ scratch_358 =
    massive_workspace.data() + (358 * nx * ny * nz);
double *__restrict__ scratch_359 =
    massive_workspace.data() + (359 * nx * ny * nz);
double *__restrict__ scratch_360 =
    massive_workspace.data() + (360 * nx * ny * nz);
double *__restrict__ scratch_361 =
    massive_workspace.data() + (361 * nx * ny * nz);
double *__restrict__ scratch_362 =
    massive_workspace.data() + (362 * nx * ny * nz);
double *__restrict__ scratch_363 =
    massive_workspace.data() + (363 * nx * ny * nz);
double *__restrict__ scratch_364 =
    massive_workspace.data() + (364 * nx * ny * nz);
double *__restrict__ scratch_365 =
    massive_workspace.data() + (365 * nx * ny * nz);
double *__restrict__ scratch_366 =
    massive_workspace.data() + (366 * nx * ny * nz);
double *__restrict__ scratch_367 =
    massive_workspace.data() + (367 * nx * ny * nz);
double *__restrict__ scratch_368 =
    massive_workspace.data() + (368 * nx * ny * nz);
double *__restrict__ scratch_369 =
    massive_workspace.data() + (369 * nx * ny * nz);
double *__restrict__ scratch_370 =
    massive_workspace.data() + (370 * nx * ny * nz);
double *__restrict__ scratch_371 =
    massive_workspace.data() + (371 * nx * ny * nz);
double *__restrict__ scratch_372 =
    massive_workspace.data() + (372 * nx * ny * nz);
double *__restrict__ scratch_373 =
    massive_workspace.data() + (373 * nx * ny * nz);
double *__restrict__ scratch_374 =
    massive_workspace.data() + (374 * nx * ny * nz);
double *__restrict__ scratch_375 =
    massive_workspace.data() + (375 * nx * ny * nz);
double *__restrict__ scratch_376 =
    massive_workspace.data() + (376 * nx * ny * nz);
double *__restrict__ scratch_377 =
    massive_workspace.data() + (377 * nx * ny * nz);
double *__restrict__ scratch_378 =
    massive_workspace.data() + (378 * nx * ny * nz);
double *__restrict__ scratch_379 =
    massive_workspace.data() + (379 * nx * ny * nz);
double *__restrict__ scratch_380 =
    massive_workspace.data() + (380 * nx * ny * nz);
double *__restrict__ scratch_381 =
    massive_workspace.data() + (381 * nx * ny * nz);
double *__restrict__ scratch_382 =
    massive_workspace.data() + (382 * nx * ny * nz);
double *__restrict__ scratch_383 =
    massive_workspace.data() + (383 * nx * ny * nz);
double *__restrict__ scratch_384 =
    massive_workspace.data() + (384 * nx * ny * nz);
double *__restrict__ scratch_385 =
    massive_workspace.data() + (385 * nx * ny * nz);
double *__restrict__ scratch_386 =
    massive_workspace.data() + (386 * nx * ny * nz);
double *__restrict__ scratch_387 =
    massive_workspace.data() + (387 * nx * ny * nz);
double *__restrict__ scratch_388 =
    massive_workspace.data() + (388 * nx * ny * nz);
double *__restrict__ scratch_389 =
    massive_workspace.data() + (389 * nx * ny * nz);
double *__restrict__ scratch_390 =
    massive_workspace.data() + (390 * nx * ny * nz);
double *__restrict__ scratch_391 =
    massive_workspace.data() + (391 * nx * ny * nz);
double *__restrict__ scratch_392 =
    massive_workspace.data() + (392 * nx * ny * nz);
double *__restrict__ scratch_393 =
    massive_workspace.data() + (393 * nx * ny * nz);
double *__restrict__ scratch_394 =
    massive_workspace.data() + (394 * nx * ny * nz);
double *__restrict__ scratch_395 =
    massive_workspace.data() + (395 * nx * ny * nz);
double *__restrict__ scratch_396 =
    massive_workspace.data() + (396 * nx * ny * nz);
double *__restrict__ scratch_397 =
    massive_workspace.data() + (397 * nx * ny * nz);
double *__restrict__ scratch_398 =
    massive_workspace.data() + (398 * nx * ny * nz);
double *__restrict__ scratch_399 =
    massive_workspace.data() + (399 * nx * ny * nz);
double *__restrict__ scratch_400 =
    massive_workspace.data() + (400 * nx * ny * nz);
double *__restrict__ scratch_401 =
    massive_workspace.data() + (401 * nx * ny * nz);
double *__restrict__ scratch_402 =
    massive_workspace.data() + (402 * nx * ny * nz);
double *__restrict__ scratch_403 =
    massive_workspace.data() + (403 * nx * ny * nz);
double *__restrict__ scratch_404 =
    massive_workspace.data() + (404 * nx * ny * nz);
double *__restrict__ scratch_405 =
    massive_workspace.data() + (405 * nx * ny * nz);
double *__restrict__ scratch_406 =
    massive_workspace.data() + (406 * nx * ny * nz);
double *__restrict__ scratch_407 =
    massive_workspace.data() + (407 * nx * ny * nz);
double *__restrict__ scratch_408 =
    massive_workspace.data() + (408 * nx * ny * nz);
double *__restrict__ scratch_409 =
    massive_workspace.data() + (409 * nx * ny * nz);
double *__restrict__ scratch_410 =
    massive_workspace.data() + (410 * nx * ny * nz);
double *__restrict__ scratch_411 =
    massive_workspace.data() + (411 * nx * ny * nz);
double *__restrict__ scratch_412 =
    massive_workspace.data() + (412 * nx * ny * nz);
double *__restrict__ scratch_413 =
    massive_workspace.data() + (413 * nx * ny * nz);
double *__restrict__ scratch_414 =
    massive_workspace.data() + (414 * nx * ny * nz);
double *__restrict__ scratch_415 =
    massive_workspace.data() + (415 * nx * ny * nz);
double *__restrict__ scratch_416 =
    massive_workspace.data() + (416 * nx * ny * nz);
double *__restrict__ scratch_417 =
    massive_workspace.data() + (417 * nx * ny * nz);
double *__restrict__ scratch_418 =
    massive_workspace.data() + (418 * nx * ny * nz);
double *__restrict__ scratch_419 =
    massive_workspace.data() + (419 * nx * ny * nz);
double *__restrict__ scratch_420 =
    massive_workspace.data() + (420 * nx * ny * nz);
double *__restrict__ scratch_421 =
    massive_workspace.data() + (421 * nx * ny * nz);
double *__restrict__ scratch_422 =
    massive_workspace.data() + (422 * nx * ny * nz);
double *__restrict__ scratch_423 =
    massive_workspace.data() + (423 * nx * ny * nz);
double *__restrict__ scratch_424 =
    massive_workspace.data() + (424 * nx * ny * nz);
double *__restrict__ scratch_425 =
    massive_workspace.data() + (425 * nx * ny * nz);
double *__restrict__ scratch_426 =
    massive_workspace.data() + (426 * nx * ny * nz);
double *__restrict__ scratch_427 =
    massive_workspace.data() + (427 * nx * ny * nz);
double *__restrict__ scratch_428 =
    massive_workspace.data() + (428 * nx * ny * nz);
double *__restrict__ scratch_429 =
    massive_workspace.data() + (429 * nx * ny * nz);
double *__restrict__ scratch_430 =
    massive_workspace.data() + (430 * nx * ny * nz);
double *__restrict__ scratch_431 =
    massive_workspace.data() + (431 * nx * ny * nz);
double *__restrict__ scratch_432 =
    massive_workspace.data() + (432 * nx * ny * nz);
double *__restrict__ scratch_433 =
    massive_workspace.data() + (433 * nx * ny * nz);
double *__restrict__ scratch_434 =
    massive_workspace.data() + (434 * nx * ny * nz);
double *__restrict__ scratch_435 =
    massive_workspace.data() + (435 * nx * ny * nz);
double *__restrict__ scratch_436 =
    massive_workspace.data() + (436 * nx * ny * nz);
double *__restrict__ scratch_437 =
    massive_workspace.data() + (437 * nx * ny * nz);
double *__restrict__ scratch_438 =
    massive_workspace.data() + (438 * nx * ny * nz);
double *__restrict__ scratch_439 =
    massive_workspace.data() + (439 * nx * ny * nz);
double *__restrict__ scratch_440 =
    massive_workspace.data() + (440 * nx * ny * nz);
double *__restrict__ scratch_441 =
    massive_workspace.data() + (441 * nx * ny * nz);
double *__restrict__ scratch_442 =
    massive_workspace.data() + (442 * nx * ny * nz);
double *__restrict__ scratch_443 =
    massive_workspace.data() + (443 * nx * ny * nz);
double *__restrict__ scratch_444 =
    massive_workspace.data() + (444 * nx * ny * nz);
double *__restrict__ scratch_445 =
    massive_workspace.data() + (445 * nx * ny * nz);
double *__restrict__ scratch_446 =
    massive_workspace.data() + (446 * nx * ny * nz);
double *__restrict__ scratch_447 =
    massive_workspace.data() + (447 * nx * ny * nz);
double *__restrict__ scratch_448 =
    massive_workspace.data() + (448 * nx * ny * nz);
double *__restrict__ scratch_449 =
    massive_workspace.data() + (449 * nx * ny * nz);
double *__restrict__ scratch_450 =
    massive_workspace.data() + (450 * nx * ny * nz);
double *__restrict__ scratch_451 =
    massive_workspace.data() + (451 * nx * ny * nz);
double *__restrict__ scratch_452 =
    massive_workspace.data() + (452 * nx * ny * nz);
double *__restrict__ scratch_453 =
    massive_workspace.data() + (453 * nx * ny * nz);
double *__restrict__ scratch_454 =
    massive_workspace.data() + (454 * nx * ny * nz);
double *__restrict__ scratch_455 =
    massive_workspace.data() + (455 * nx * ny * nz);

// --- Execution Unit 0 (ID: Comp0_Slice0) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = gt2[pp] * gt2[pp];
            double _tmp_1;
            _tmp_1 = gt2[pp] * gt4[pp];
            double _tmp_2;
            _tmp_2 = gt4[pp] * gt4[pp];
            double _tmp_3;
            _tmp_3 = gt3[pp] * gt5[pp];
            double _tmp_4;
            _tmp_4 = 2 * gt1[pp];
            double _tmp_5;
            _tmp_5         = gt1[pp] * gt1[pp];
            scratch_47[pp] = _tmp_4;
            double _tmp_6;
            _tmp_6 = gt0[pp] * gt5[pp];
            double _tmp_7;
            _tmp_7 = -_tmp_0;
            double _tmp_8;
            _tmp_8 = -gt1[pp] * gt2[pp];
            double _tmp_9;
            _tmp_9 = gt0[pp] * gt4[pp];
            double _tmp_10;
            _tmp_10 = gt1[pp] * gt5[pp];
            double _tmp_11;
            _tmp_11 = -_tmp_1;
            double _tmp_12;
            _tmp_12 = -_tmp_2;
            double _tmp_13;
            _tmp_13 = -gt2[pp] * gt3[pp];
            double _tmp_14;
            _tmp_14 = gt1[pp] * gt4[pp];
            double _tmp_15;
            _tmp_15 = -_tmp_3 * gt0[pp];
            _tmp_1  = -_tmp_1 * _tmp_4;
            _tmp_0  = _tmp_0 * gt3[pp];
            double _tmp_16;
            _tmp_16        = _tmp_5 * gt5[pp];
            _tmp_2         = _tmp_2 * gt0[pp];
            _tmp_7         = _tmp_6 + _tmp_7;
            _tmp_9         = _tmp_8 + _tmp_9;
            _tmp_11        = _tmp_10 + _tmp_11;
            _tmp_3         = _tmp_12 + _tmp_3;
            _tmp_14        = _tmp_13 + _tmp_14;
            _tmp_13        = -grad_0_gt4[pp];
            _tmp_12        = gt0[pp] * gt3[pp];
            _tmp_5         = -_tmp_5;
            _tmp_2         = _tmp_0 + _tmp_1 + _tmp_15 + _tmp_16 + _tmp_2;
            scratch_31[pp] = _tmp_7;
            scratch_26[pp] = _tmp_9;
            scratch_16[pp] = _tmp_11;
            _tmp_15        = -grad_2_gt1[pp];
            scratch_13[pp] = _tmp_3;
            scratch_7[pp]  = _tmp_14;
            scratch_45[pp] = _tmp_13;
            _tmp_5         = _tmp_12 + _tmp_5;
            scratch_5[pp]  = _tmp_2;
            _tmp_12        = -_tmp_7;
            _tmp_1         = _tmp_9 * grad_2_chi[pp];
            _tmp_0         = _tmp_11 * grad_0_chi[pp];
            scratch_19[pp] = _tmp_15;
            _tmp_16        = -_tmp_3;
            _tmp_10        = -_tmp_14;
            _tmp_8         = _tmp_13 + grad_1_gt2[pp];
            scratch_34[pp] = _tmp_5;
            _tmp_6         = 1.0 / _tmp_2;
            scratch_17[pp] = _tmp_12;
            _tmp_0         = _tmp_0 + _tmp_1;
            _tmp_1         = _tmp_15 + grad_0_gt4[pp];
            scratch_12[pp] = _tmp_16;
            scratch_30[pp] = _tmp_10;
            scratch_41[pp] = _tmp_8;
            double _tmp_17;
            _tmp_17       = -_tmp_5;
            scratch_2[pp] = _tmp_6;
            double _tmp_18;
            _tmp_18        = _tmp_12 * grad_1_chi[pp];
            scratch_4[pp]  = _tmp_0;
            scratch_24[pp] = _tmp_1;
            double _tmp_19;
            _tmp_19 = _tmp_16 * grad_0_chi[pp];
            double _tmp_20;
            _tmp_20 = _tmp_10 * grad_2_chi[pp];
            double _tmp_21;
            _tmp_21 = _tmp_11 * grad_1_chi[pp];
            double _tmp_22;
            _tmp_22        = _tmp_8 + grad_2_gt1[pp];
            scratch_44[pp] = _tmp_17;
            double _tmp_23;
            _tmp_23 = _tmp_6 * gt1[pp];
            _tmp_18 = _tmp_0 + _tmp_18;
            double _tmp_24;
            _tmp_24        = _tmp_1 + grad_1_gt2[pp];
            _tmp_21        = _tmp_19 + _tmp_20 + _tmp_21;
            _tmp_19        = 1.0 / chi[pp];
            scratch_18[pp] = _tmp_22;
            _tmp_20        = _tmp_17 * grad_2_chi[pp];
            double _tmp_25;
            _tmp_25 = _tmp_10 * grad_0_chi[pp];
            double _tmp_26;
            _tmp_26        = _tmp_9 * grad_1_chi[pp];
            scratch_8[pp]  = _tmp_18;
            scratch_9[pp]  = _tmp_24;
            scratch_3[pp]  = _tmp_21;
            scratch_10[pp] = _tmp_19;
            double _tmp_27;
            _tmp_27 = _tmp_6 * gt4[pp];
            double _tmp_28;
            _tmp_28 = _tmp_11 * _tmp_22;
            double _tmp_29;
            _tmp_29 = _tmp_9 * grad_1_gt5[pp];
            _tmp_26 = _tmp_20 + _tmp_25 + _tmp_26;
            _tmp_20 = -_tmp_18 * _tmp_23;
            _tmp_25 = _tmp_12 * _tmp_6;
            double _tmp_30;
            _tmp_30 = _tmp_24 * _tmp_9;
            double _tmp_31;
            _tmp_31 = _tmp_11 * grad_1_gt0[pp];
            _tmp_23 = -_tmp_21 * _tmp_23;
            double _tmp_32;
            _tmp_32 = _tmp_16 * _tmp_6;
            double _tmp_33;
            _tmp_33 = _tmp_10 * _tmp_6;
            double _tmp_34;
            _tmp_34        = _tmp_19 * gt1[pp];
            scratch_1[pp]  = _tmp_28;
            scratch_33[pp] = _tmp_29;
            scratch_23[pp] = _tmp_26;
            _tmp_20        = _tmp_20 + grad_0_chi[pp];
            scratch_39[pp] = _tmp_25;
            scratch_22[pp] = _tmp_30;
            scratch_28[pp] = _tmp_31;
            _tmp_23        = _tmp_23 + grad_1_chi[pp];
            scratch_40[pp] = _tmp_32;
            scratch_25[pp] = _tmp_33;
            scratch_27[pp] = _tmp_34;
            double _tmp_35;
            _tmp_35 = _tmp_9 * grad_0_gt3[pp];
            double _tmp_36;
            _tmp_36 = _tmp_19 * gt4[pp];
            double _tmp_37;
            _tmp_37 = -_tmp_18 * _tmp_27;
            double _tmp_38;
            _tmp_38 = _tmp_28 * _tmp_6;
            double _tmp_39;
            _tmp_39 = _tmp_29 * _tmp_6;
            _tmp_27 = -_tmp_26 * _tmp_27;
            double _tmp_40;
            _tmp_40 = _tmp_17 * _tmp_6;
            _tmp_20 = -_tmp_19 * _tmp_20;
            double _tmp_41;
            _tmp_41 = _tmp_25 * grad_0_gt3[pp];
            double _tmp_42;
            _tmp_42 = _tmp_30 * _tmp_6;
            double _tmp_43;
            _tmp_43 = _tmp_31 * _tmp_6;
            double _tmp_44;
            _tmp_44 = _tmp_11 * _tmp_6 * grad_0_gt3[pp];
            _tmp_23 = -_tmp_19 * _tmp_23;
            double _tmp_45;
            _tmp_45 = _tmp_32 * grad_1_gt0[pp];
            double _tmp_46;
            _tmp_46 = _tmp_24 * _tmp_33;
            double _tmp_47;
            _tmp_47 = _tmp_10 * grad_1_gt0[pp];
            double _tmp_48;
            _tmp_48 = _tmp_26 * _tmp_34;
            double _tmp_49;
            _tmp_49        = _tmp_17 * _tmp_24;
            scratch_21[pp] = _tmp_35;
            double _tmp_50;
            _tmp_50 = _tmp_6 * grad_2_alpha[pp];
            double _tmp_51;
            _tmp_51        = _tmp_11 * _tmp_6;
            scratch_38[pp] = _tmp_36;
            _tmp_37        = _tmp_37 + grad_2_chi[pp];
            _tmp_39        = _tmp_38 + _tmp_39;
            _tmp_27        = _tmp_27 + grad_1_chi[pp];
            scratch_29[pp] = _tmp_40;
            _tmp_38        = _tmp_6 * _tmp_9;
            _tmp_43        = _tmp_20 + _tmp_41 + _tmp_42 + _tmp_43;
            _tmp_46        = _tmp_23 + _tmp_44 + _tmp_45 + _tmp_46;
            _tmp_49        = _tmp_35 + _tmp_47 + _tmp_48 + _tmp_49;
            scratch_36[pp] = _tmp_50;
            scratch_32[pp] = _tmp_51;
            _tmp_47        = _tmp_10 * grad_1_gt5[pp];
            _tmp_48        = _tmp_21 * _tmp_36;
            _tmp_44        = _tmp_16 * _tmp_22;
            _tmp_23        = _tmp_11 * grad_2_gt3[pp];
            _tmp_45        = _tmp_6 * grad_0_alpha[pp];
            _tmp_37        = -_tmp_19 * _tmp_37;
            _tmp_20        = _tmp_25 * grad_2_gt3[pp];
            scratch_20[pp] = _tmp_39;
            _tmp_41        = _tmp_6 * _tmp_9 * grad_2_gt3[pp];
            _tmp_27        = -_tmp_19 * _tmp_27;
            _tmp_42        = _tmp_40 * grad_1_gt5[pp];
            double _tmp_52;
            _tmp_52        = _tmp_22 * _tmp_33;
            scratch_11[pp] = _tmp_38;
            _tmp_43        = _tmp_43 * grad_1_alpha[pp];
            _tmp_46        = _tmp_46 * grad_0_alpha[pp];
            _tmp_49        = _tmp_49 * _tmp_50;
            double _tmp_53;
            _tmp_53 = -2 * grad2_0_1_alpha[pp];
            double _tmp_54;
            _tmp_54        = _tmp_51 * chi[pp];
            _tmp_23        = _tmp_23 + _tmp_44 + _tmp_47 + _tmp_48;
            scratch_6[pp]  = _tmp_45;
            _tmp_20        = _tmp_20 + _tmp_37 + _tmp_39;
            _tmp_52        = _tmp_27 + _tmp_41 + _tmp_42 + _tmp_52;
            _tmp_41        = _tmp_38 * chi[pp];
            _tmp_53        = _tmp_43 + _tmp_46 + _tmp_49 + _tmp_53;
            scratch_37[pp] = _tmp_54;
            _tmp_23        = _tmp_23 * _tmp_45;
            scratch_46[pp] = _tmp_23;
            _tmp_20        = _tmp_20 * grad_1_alpha[pp];
            scratch_43[pp] = _tmp_20;
            _tmp_43        = beta0[pp] * grad_0_K[pp];
            scratch_42[pp] = _tmp_43;
            _tmp_52        = _tmp_52 * grad_2_alpha[pp];
            scratch_35[pp] = _tmp_52;
            scratch_15[pp] = _tmp_41;
            _tmp_46        = beta2[pp] * grad_2_K[pp];
            scratch_14[pp] = _tmp_46;
            _tmp_53        = _tmp_53 * _tmp_54;
            scratch_0[pp]  = _tmp_53;
        }
    }
}

// --- Execution Unit 1 (ID: Comp0_Slice1) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * grad_1_gt1[pp];
            double _tmp_1;
            _tmp_1 = 2 * grad_2_gt2[pp];
            double _tmp_2;
            _tmp_2         = 2 * grad_2_gt4[pp];
            scratch_83[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3 = -grad_1_gt2[pp];
            double _tmp_4;
            _tmp_4 = -grad_2_gt0[pp];
            double _tmp_5;
            _tmp_5         = 2 * grad_0_gt2[pp];
            scratch_72[pp] = _tmp_1;
            scratch_57[pp] = _tmp_2;
            double _tmp_6;
            _tmp_6         = -_tmp_0;
            scratch_53[pp] = _tmp_3;
            double _tmp_7;
            _tmp_7 = -grad_1_gt0[pp];
            double _tmp_8;
            _tmp_8         = 2 * grad_0_gt1[pp];
            scratch_88[pp] = _tmp_4;
            scratch_81[pp] = _tmp_5;
            double _tmp_9;
            _tmp_9 = -_tmp_1;
            double _tmp_10;
            _tmp_10 = -_tmp_2;
            double _tmp_11;
            _tmp_11 = -grad_2_gt3[pp];
            double _tmp_12;
            _tmp_12 = 2 * grad_1_gt4[pp];
            _tmp_6  = _tmp_6 + grad_0_gt3[pp];
            double _tmp_13;
            _tmp_13 = _tmp_3 + grad_0_gt4[pp];
            double _tmp_14;
            _tmp_14        = gt2[pp] * scratch_2[pp];
            scratch_50[pp] = _tmp_7;
            scratch_74[pp] = _tmp_8;
            double _tmp_15;
            _tmp_15        = _tmp_4 + _tmp_5;
            _tmp_9         = _tmp_9 + grad_0_gt5[pp];
            _tmp_10        = _tmp_10 + grad_1_gt5[pp];
            scratch_84[pp] = _tmp_11;
            scratch_78[pp] = _tmp_12;
            double _tmp_16;
            _tmp_16        = 2 * grad_1_chi[pp];
            scratch_80[pp] = _tmp_6;
            scratch_79[pp] = _tmp_13;
            double _tmp_17;
            _tmp_17 = 2 * grad_0_chi[pp];
            double _tmp_18;
            _tmp_18        = _tmp_7 + _tmp_8;
            scratch_49[pp] = _tmp_15;
            double _tmp_19;
            _tmp_19        = 2 * grad_2_chi[pp];
            scratch_85[pp] = _tmp_9;
            scratch_71[pp] = _tmp_10;
            double _tmp_20;
            _tmp_20 = _tmp_11 + _tmp_12;
            double _tmp_21;
            _tmp_21        = -gt3[pp] * scratch_2[pp] * scratch_8[pp];
            scratch_60[pp] = _tmp_16;
            double _tmp_22;
            _tmp_22 = -_tmp_6;
            double _tmp_23;
            _tmp_23 = gt3[pp] * scratch_10[pp];
            double _tmp_24;
            _tmp_24 = _tmp_13 + grad_2_gt1[pp];
            double _tmp_25;
            _tmp_25 = -_tmp_14 * scratch_23[pp];
            _tmp_14 = -_tmp_14 * scratch_3[pp];
            double _tmp_26;
            _tmp_26 = gt2[pp] * scratch_10[pp];
            double _tmp_27;
            _tmp_27 = grad_0_gt5[pp] * scratch_26[pp];
            double _tmp_28;
            _tmp_28 = grad_2_gt0[pp] * scratch_16[pp];
            double _tmp_29;
            _tmp_29        = -gt0[pp] * scratch_2[pp] * scratch_3[pp];
            scratch_62[pp] = _tmp_17;
            scratch_54[pp] = _tmp_18;
            double _tmp_30;
            _tmp_30 = gt0[pp] * scratch_10[pp];
            double _tmp_31;
            _tmp_31 = _tmp_15 * scratch_26[pp];
            double _tmp_32;
            _tmp_32 = grad_0_gt0[pp] * scratch_16[pp];
            double _tmp_33;
            _tmp_33        = -gt5[pp] * scratch_23[pp] * scratch_2[pp];
            scratch_63[pp] = _tmp_19;
            double _tmp_34;
            _tmp_34 = -_tmp_9;
            double _tmp_35;
            _tmp_35 = -_tmp_10;
            double _tmp_36;
            _tmp_36        = gt5[pp] * scratch_10[pp];
            scratch_76[pp] = _tmp_20;
            _tmp_21        = _tmp_16 + _tmp_21;
            scratch_87[pp] = _tmp_23;
            double _tmp_37;
            _tmp_37 = grad_1_gt3[pp] * scratch_26[pp];
            double _tmp_38;
            _tmp_38        = grad_1_gt3[pp] * scratch_16[pp];
            scratch_69[pp] = _tmp_24;
            _tmp_25        = _tmp_25 + grad_0_chi[pp];
            _tmp_14        = _tmp_14 + grad_2_chi[pp];
            scratch_89[pp] = _tmp_26;
            _tmp_28        = _tmp_27 + _tmp_28;
            _tmp_29        = _tmp_17 + _tmp_29;
            _tmp_27        = _tmp_18 * scratch_16[pp] * scratch_2[pp];
            scratch_61[pp] = _tmp_30;
            _tmp_32        = _tmp_31 + _tmp_32;
            _tmp_33        = _tmp_19 + _tmp_33;
            scratch_82[pp] = _tmp_36;
            _tmp_31        = grad_2_gt5[pp] * scratch_26[pp];
            double _tmp_39;
            _tmp_39 = _tmp_20 * scratch_26[pp] * scratch_2[pp];
            _tmp_21 = -_tmp_21 * scratch_10[pp];
            double _tmp_40;
            _tmp_40 = grad_1_gt3[pp] * scratch_39[pp];
            double _tmp_41;
            _tmp_41 = _tmp_22 * scratch_32[pp];
            double _tmp_42;
            _tmp_42 = _tmp_22 * scratch_30[pp];
            double _tmp_43;
            _tmp_43 = _tmp_23 * scratch_23[pp];
            double _tmp_44;
            _tmp_44        = _tmp_20 * scratch_44[pp];
            scratch_70[pp] = _tmp_37;
            _tmp_22        = _tmp_22 * scratch_12[pp];
            double _tmp_45;
            _tmp_45 = _tmp_23 * scratch_3[pp];
            double _tmp_46;
            _tmp_46        = _tmp_20 * scratch_30[pp];
            scratch_77[pp] = _tmp_38;
            double _tmp_47;
            _tmp_47 = _tmp_24 * scratch_26[pp] * scratch_2[pp];
            _tmp_25 = -_tmp_25 * scratch_10[pp];
            double _tmp_48;
            _tmp_48 = grad_2_gt0[pp] * scratch_25[pp];
            double _tmp_49;
            _tmp_49 = grad_0_gt5[pp] * scratch_29[pp];
            double _tmp_50;
            _tmp_50 = _tmp_24 * scratch_16[pp] * scratch_2[pp];
            _tmp_14 = -_tmp_14 * scratch_10[pp];
            double _tmp_51;
            _tmp_51 = grad_2_gt0[pp] * scratch_40[pp];
            double _tmp_52;
            _tmp_52 = grad_0_gt5[pp] * scratch_25[pp];
            double _tmp_53;
            _tmp_53 = _tmp_26 * scratch_8[pp];
            double _tmp_54;
            _tmp_54        = _tmp_24 * scratch_17[pp];
            scratch_48[pp] = _tmp_28;
            double _tmp_55;
            _tmp_55 = grad_1_alpha[pp] * scratch_2[pp];
            double _tmp_56;
            _tmp_56 = scratch_2[pp] * scratch_7[pp];
            _tmp_29 = -_tmp_29 * scratch_10[pp];
            double _tmp_57;
            _tmp_57 = grad_0_gt0[pp] * scratch_40[pp];
            double _tmp_58;
            _tmp_58        = _tmp_15 * scratch_25[pp];
            scratch_68[pp] = _tmp_27;
            double _tmp_59;
            _tmp_59 = grad_0_gt0[pp] * scratch_30[pp];
            double _tmp_60;
            _tmp_60 = _tmp_30 * scratch_23[pp];
            double _tmp_61;
            _tmp_61 = _tmp_15 * scratch_44[pp];
            double _tmp_62;
            _tmp_62 = _tmp_18 * scratch_26[pp];
            double _tmp_63;
            _tmp_63 = _tmp_30 * scratch_8[pp];
            double _tmp_64;
            _tmp_64        = _tmp_18 * scratch_17[pp];
            scratch_51[pp] = _tmp_32;
            _tmp_33        = -_tmp_33 * scratch_10[pp];
            double _tmp_65;
            _tmp_65 = grad_2_gt5[pp] * scratch_29[pp];
            double _tmp_66;
            _tmp_66 = _tmp_34 * scratch_25[pp];
            double _tmp_67;
            _tmp_67 = _tmp_35 * scratch_11[pp];
            double _tmp_68;
            _tmp_68 = _tmp_35 * scratch_17[pp];
            double _tmp_69;
            _tmp_69 = _tmp_36 * scratch_8[pp];
            double _tmp_70;
            _tmp_70        = _tmp_34 * scratch_16[pp];
            scratch_75[pp] = _tmp_31;
            _tmp_34        = _tmp_34 * scratch_12[pp];
            double _tmp_71;
            _tmp_71 = grad_2_gt5[pp] * scratch_30[pp];
            double _tmp_72;
            _tmp_72        = _tmp_36 * scratch_3[pp];
            _tmp_35        = _tmp_35 * scratch_16[pp];
            _tmp_41        = _tmp_21 + _tmp_39 + _tmp_40 + _tmp_41;
            _tmp_44        = _tmp_37 + _tmp_42 + _tmp_43 + _tmp_44;
            _tmp_46        = _tmp_22 + _tmp_38 + _tmp_45 + _tmp_46;
            _tmp_49        = _tmp_25 + _tmp_47 + _tmp_48 + _tmp_49;
            _tmp_52        = _tmp_14 + _tmp_50 + _tmp_51 + _tmp_52;
            _tmp_54        = _tmp_28 + _tmp_53 + _tmp_54;
            scratch_65[pp] = _tmp_56;
            _tmp_58        = _tmp_27 + _tmp_29 + _tmp_57 + _tmp_58;
            _tmp_62        = _tmp_59 + _tmp_60 + _tmp_61 + _tmp_62;
            _tmp_64        = _tmp_32 + _tmp_63 + _tmp_64;
            _tmp_67        = _tmp_33 + _tmp_65 + _tmp_66 + _tmp_67;
            _tmp_70        = _tmp_31 + _tmp_68 + _tmp_69 + _tmp_70;
            _tmp_35        = _tmp_34 + _tmp_35 + _tmp_71 + _tmp_72;
            _tmp_41        = _tmp_41 * grad_1_alpha[pp];
            _tmp_44        = _tmp_44 * scratch_36[pp];
            _tmp_46        = _tmp_46 * scratch_6[pp];
            _tmp_34        = -2 * grad2_1_1_alpha[pp];
            _tmp_71        = 0.5 * chi[pp];
            _tmp_72        = scratch_2[pp] * scratch_31[pp];
            _tmp_49        = _tmp_49 * grad_2_alpha[pp];
            _tmp_52        = _tmp_52 * grad_0_alpha[pp];
            _tmp_54        = _tmp_54 * _tmp_55;
            _tmp_68        = -2 * grad2_0_2_alpha[pp];
            _tmp_69        = _tmp_56 * chi[pp];
            _tmp_58        = _tmp_58 * grad_0_alpha[pp];
            _tmp_62        = _tmp_62 * scratch_36[pp];
            _tmp_64        = _tmp_55 * _tmp_64;
            _tmp_33        = -2 * grad2_0_0_alpha[pp];
            _tmp_65        = scratch_13[pp] * scratch_2[pp];
            _tmp_66        = -2 * grad2_1_2_alpha[pp];
            _tmp_67        = _tmp_67 * grad_2_alpha[pp];
            _tmp_55        = _tmp_55 * _tmp_70;
            _tmp_35        = _tmp_35 * scratch_6[pp];
            _tmp_70        = -2 * grad2_2_2_alpha[pp];
            _tmp_63        = scratch_2[pp] * scratch_34[pp];
            _tmp_34        = _tmp_34 + _tmp_41 + _tmp_44 + _tmp_46;
            scratch_64[pp] = _tmp_72;
            _tmp_68        = _tmp_49 + _tmp_52 + _tmp_54 + _tmp_68;
            scratch_52[pp] = _tmp_69;
            _tmp_33        = _tmp_33 + _tmp_58 + _tmp_62 + _tmp_64;
            scratch_58[pp] = _tmp_65;
            _tmp_66 =
                _tmp_66 + scratch_35[pp] + scratch_43[pp] + scratch_46[pp];
            _tmp_70        = _tmp_35 + _tmp_55 + _tmp_67 + _tmp_70;
            scratch_55[pp] = _tmp_63;
            _tmp_34        = -_tmp_34 * _tmp_71 * _tmp_72;
            scratch_86[pp] = _tmp_34;
            _tmp_67        = beta1[pp] * grad_1_K[pp];
            scratch_56[pp] = _tmp_67;
            _tmp_68        = -_tmp_68 * _tmp_69;
            scratch_59[pp] = _tmp_68;
            _tmp_33        = -_tmp_33 * _tmp_65 * _tmp_71;
            scratch_66[pp] = _tmp_33;
            _tmp_66        = _tmp_66 * scratch_15[pp];
            scratch_73[pp] = _tmp_66;
            _tmp_71        = -_tmp_63 * _tmp_70 * _tmp_71;
            scratch_67[pp] = _tmp_71;
        }
    }
}

// --- Execution Unit 2 (ID: Comp0_Slice2) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_26[pp] * scratch_26[pp];
            double _tmp_1;
            _tmp_1 = At5[pp] * scratch_26[pp];
            double _tmp_2;
            _tmp_2 = At3[pp] * scratch_31[pp];
            double _tmp_3;
            _tmp_3 = At2[pp] * scratch_7[pp];
            double _tmp_4;
            _tmp_4 = At0[pp] * scratch_16[pp];
            double _tmp_5;
            _tmp_5 = At2[pp] * scratch_34[pp];
            double _tmp_6;
            _tmp_6 = scratch_16[pp] * scratch_16[pp];
            double _tmp_7;
            _tmp_7          = At3[pp] * scratch_16[pp];
            scratch_108[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8 = At5[pp] * scratch_7[pp];
            double _tmp_9;
            _tmp_9 = At2[pp] * scratch_26[pp];
            double _tmp_10;
            _tmp_10         = At0[pp] * scratch_13[pp];
            scratch_23[pp]  = _tmp_1;
            scratch_110[pp] = _tmp_2;
            scratch_124[pp] = _tmp_3;
            scratch_104[pp] = _tmp_4;
            scratch_121[pp] = _tmp_5;
            scratch_117[pp] = _tmp_8;
            scratch_122[pp] = _tmp_9;
            scratch_6[pp]   = _tmp_10;
            double _tmp_11;
            _tmp_11 = -At4[pp] * scratch_31[pp] * scratch_34[pp];
            double _tmp_12;
            _tmp_12 = -At1[pp] * scratch_31[pp] * scratch_7[pp];
            double _tmp_13;
            _tmp_13 = -At1[pp] * scratch_16[pp] * scratch_26[pp];
            double _tmp_14;
            _tmp_14 = -At4[pp] * _tmp_0;
            double _tmp_15;
            _tmp_15 = _tmp_1 * scratch_34[pp];
            double _tmp_16;
            _tmp_16 = _tmp_2 * scratch_26[pp];
            double _tmp_17;
            _tmp_17 = _tmp_3 * scratch_26[pp];
            double _tmp_18;
            _tmp_18 = _tmp_4 * scratch_7[pp];
            double _tmp_19;
            _tmp_19 = _tmp_5 * scratch_16[pp];
            double _tmp_20;
            _tmp_20 = -At4[pp] * scratch_31[pp] * scratch_7[pp];
            double _tmp_21;
            _tmp_21 = -At4[pp] * scratch_16[pp] * scratch_26[pp];
            double _tmp_22;
            _tmp_22 = -At1[pp] * scratch_13[pp] * scratch_31[pp];
            double _tmp_23;
            _tmp_23 = -At1[pp] * _tmp_6;
            double _tmp_24;
            _tmp_24 = _tmp_7 * scratch_31[pp];
            double _tmp_25;
            _tmp_25 = _tmp_8 * scratch_26[pp];
            double _tmp_26;
            _tmp_26 = _tmp_9 * scratch_13[pp];
            double _tmp_27;
            _tmp_27 = _tmp_10 * scratch_16[pp];
            double _tmp_28;
            _tmp_28 = _tmp_3 * scratch_16[pp];
            double _tmp_29;
            _tmp_29 = At4[pp] * scratch_7[pp];
            double _tmp_30;
            _tmp_30        = At1[pp] * scratch_26[pp];
            scratch_39[pp] = _tmp_30;
            double _tmp_31;
            _tmp_31        = At1[pp] * scratch_16[pp];
            scratch_90[pp] = _tmp_31;
            double _tmp_32;
            _tmp_32 = At4[pp] * scratch_34[pp];
            double _tmp_33;
            _tmp_33 = scratch_7[pp] * scratch_7[pp];
            double _tmp_34;
            _tmp_34 = 2 * scratch_7[pp];
            double _tmp_35;
            _tmp_35 = 2 * scratch_34[pp];
            double _tmp_36;
            _tmp_36         = At4[pp] * scratch_26[pp];
            scratch_109[pp] = _tmp_36;
            double _tmp_37;
            _tmp_37 = 2 * scratch_31[pp];
            double _tmp_38;
            _tmp_38 = 2 * scratch_16[pp];
            double _tmp_39;
            _tmp_39 = 2 * scratch_13[pp];
            _tmp_19 = _tmp_11 + _tmp_12 + _tmp_13 + _tmp_14 + _tmp_15 +
                      _tmp_16 + _tmp_17 + _tmp_18 + _tmp_19;
            _tmp_28 = _tmp_20 + _tmp_21 + _tmp_22 + _tmp_23 + _tmp_24 +
                      _tmp_25 + _tmp_26 + _tmp_27 + _tmp_28;
            scratch_120[pp] = _tmp_29;
            scratch_12[pp]  = _tmp_31;
            scratch_98[pp]  = _tmp_32;
            scratch_116[pp] = _tmp_34;
            scratch_36[pp]  = _tmp_36;
            _tmp_20         = scratch_34[pp] * scratch_34[pp];
            _tmp_21         = scratch_31[pp] * scratch_31[pp];
            _tmp_22         = scratch_13[pp] * scratch_13[pp];
            scratch_29[pp]  = _tmp_19;
            scratch_35[pp]  = _tmp_28;
            _tmp_23         = -_tmp_29 * scratch_26[pp];
            _tmp_24         = -_tmp_30 * scratch_13[pp];
            _tmp_25         = -_tmp_31 * scratch_7[pp];
            _tmp_26         = -_tmp_32 * scratch_16[pp];
            _tmp_27         = _tmp_8 * scratch_34[pp];
            _tmp_7          = _tmp_7 * scratch_26[pp];
            _tmp_11         = _tmp_5 * scratch_13[pp];
            _tmp_12         = _tmp_10 * scratch_7[pp];
            _tmp_13         = At2[pp] * _tmp_33;
            _tmp_30         = -_tmp_30 * _tmp_34;
            _tmp_14         = -_tmp_35 * _tmp_36;
            _tmp_35         = _tmp_3 * _tmp_35;
            _tmp_20         = At5[pp] * _tmp_20;
            _tmp_15         = At3[pp] * _tmp_0;
            _tmp_16         = At0[pp] * _tmp_33;
            _tmp_17         = -_tmp_36 * _tmp_37;
            _tmp_37         = -_tmp_31 * _tmp_37;
            _tmp_18         = _tmp_38 * _tmp_9;
            _tmp_0          = At5[pp] * _tmp_0;
            _tmp_21         = At3[pp] * _tmp_21;
            double _tmp_40;
            _tmp_40 = At0[pp] * _tmp_6;
            double _tmp_41;
            _tmp_41 = -_tmp_31 * _tmp_39;
            _tmp_38 = -_tmp_29 * _tmp_38;
            _tmp_39 = _tmp_3 * _tmp_39;
            _tmp_33 = At5[pp] * _tmp_33;
            _tmp_6  = At3[pp] * _tmp_6;
            _tmp_22 = At0[pp] * _tmp_22;
            double _tmp_42;
            _tmp_42 = 1.0 / (scratch_5[pp] * scratch_5[pp]);
            double _tmp_43;
            _tmp_43 = -_tmp_19;
            double _tmp_44;
            _tmp_44 = -_tmp_28;
            _tmp_13 = _tmp_11 + _tmp_12 + _tmp_13 + _tmp_23 + _tmp_24 +
                      _tmp_25 + _tmp_26 + _tmp_27 + _tmp_7;
            _tmp_16 = _tmp_14 + _tmp_15 + _tmp_16 + _tmp_20 + _tmp_30 + _tmp_35;
            _tmp_40 = _tmp_0 + _tmp_17 + _tmp_18 + _tmp_21 + _tmp_37 + _tmp_40;
            _tmp_22 = _tmp_22 + _tmp_33 + _tmp_38 + _tmp_39 + _tmp_41 + _tmp_6;
            _tmp_41 = scratch_7[pp] * scratch_9[pp];
            _tmp_38 = grad_1_gt0[pp] * scratch_13[pp];
            _tmp_39 = grad_2_gt0[pp] * scratch_13[pp];
            _tmp_33 = grad_0_gt5[pp] * scratch_7[pp];
            scratch_30[pp]  = _tmp_42;
            scratch_25[pp]  = _tmp_43;
            scratch_101[pp] = _tmp_44;
            scratch_17[pp]  = _tmp_13;
            scratch_91[pp]  = _tmp_16;
            scratch_8[pp]   = _tmp_40;
            scratch_103[pp] = _tmp_22;
            _tmp_6          = -scratch_13[pp] * scratch_85[pp];
            _tmp_17         = grad_2_gt5[pp] * scratch_7[pp];
            _tmp_37         = scratch_16[pp] * scratch_71[pp];
            _tmp_18         = -grad_0_gt3[pp] * scratch_16[pp];
            scratch_105[pp] = _tmp_41;
            scratch_123[pp] = _tmp_38;
            _tmp_0          = -scratch_16[pp] * scratch_69[pp];
            scratch_107[pp] = _tmp_39;
            scratch_114[pp] = _tmp_33;
            _tmp_21         = 6 * _tmp_42;
            _tmp_30         = At4[pp] * _tmp_43;
            _tmp_14         = At1[pp] * _tmp_44;
            _tmp_35         = At2[pp] * _tmp_13;
            _tmp_20         = 3 * _tmp_42;
            _tmp_15         = At5[pp] * _tmp_16;
            _tmp_23         = At3[pp] * _tmp_40;
            _tmp_24         = At0[pp] * _tmp_22;
            _tmp_37         = _tmp_17 + _tmp_37 + _tmp_6;
            _tmp_18         = _tmp_18 + _tmp_38 + _tmp_41;
            _tmp_0          = _tmp_0 + _tmp_33 + _tmp_39;
            scratch_118[pp] = _tmp_30;
            scratch_44[pp]  = _tmp_14;
            scratch_95[pp]  = _tmp_35;
            scratch_40[pp]  = _tmp_20;
            scratch_97[pp]  = _tmp_15;
            scratch_93[pp]  = _tmp_24;
            _tmp_6          = K[pp] * K[pp];
            scratch_112[pp] = _tmp_37;
            scratch_43[pp]  = _tmp_18;
            scratch_46[pp]  = _tmp_0;
            _tmp_17         = _tmp_21 * _tmp_30;
            _tmp_25         = _tmp_14 * _tmp_21;
            _tmp_21         = _tmp_21 * _tmp_35;
            _tmp_26         = _tmp_15 * _tmp_20;
            _tmp_27         = _tmp_20 * _tmp_23;
            _tmp_7          = _tmp_20 * _tmp_24;
            scratch_94[pp]  = _tmp_6;
            _tmp_11         = 0.33333333333333331 * alpha[pp];
            _tmp_12         = -_tmp_37;
            double _tmp_45;
            _tmp_45 = -_tmp_18;
            double _tmp_46;
            _tmp_46 = 12 * _tmp_42;
            double _tmp_47;
            _tmp_47 = -_tmp_0;
            double _tmp_48;
            _tmp_48 = grad_0_beta0[pp] + grad_1_beta1[pp] + grad_2_beta2[pp];
            double _tmp_49;
            _tmp_49 = 0.66666666666666663 * chi[pp];
            _tmp_7  = _tmp_17 + _tmp_21 + _tmp_25 + _tmp_26 + _tmp_27 + _tmp_6 +
                     _tmp_7;
            scratch_125[pp] = _tmp_11;
            scratch_3[pp]   = _tmp_12;
            scratch_106[pp] = _tmp_45;
            scratch_100[pp] = _tmp_46;
            scratch_115[pp] = _tmp_47;
            scratch_126[pp] = _tmp_48;
            _tmp_7          = _tmp_11 * _tmp_7;
            _tmp_17         = _tmp_12 * grad_1_gt0[pp];
            _tmp_25         = 0.083333333333333329 * chi[pp];
            _tmp_21         = _tmp_45 * grad_0_gt5[pp];
            _tmp_26         = 1.0 / dt;
            scratch_128[pp] = _tmp_26;
            _tmp_23         = _tmp_23 * _tmp_46;
            scratch_127[pp] = _tmp_23;
            _tmp_27         = beta0[pp] * grad_0_chi[pp];
            scratch_99[pp]  = _tmp_27;
            double _tmp_50;
            _tmp_50        = _tmp_47 * scratch_69[pp];
            scratch_92[pp] = _tmp_50;
            double _tmp_51;
            _tmp_51         = -_tmp_48 * _tmp_49;
            scratch_119[pp] = _tmp_51;
            _tmp_7 = _tmp_7 + scratch_0[pp] + scratch_14[pp] + scratch_42[pp] +
                     scratch_56[pp] + scratch_59[pp] + scratch_66[pp] +
                     scratch_67[pp] + scratch_73[pp] + scratch_86[pp];
            K_rhs[pp]       = _tmp_7;
            scratch_113[pp] = _tmp_17;
            scratch_111[pp] = _tmp_25;
            _tmp_49         = K[pp] * _tmp_49 * alpha[pp];
            scratch_129[pp] = _tmp_49;
            scratch_96[pp]  = _tmp_21;
            double _tmp_52;
            _tmp_52         = beta1[pp] * grad_1_chi[pp];
            scratch_102[pp] = _tmp_52;
        }
    }
}

// --- Execution Unit 3 (ID: Comp0_Slice3) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_16[pp] * scratch_80[pp];
            double _tmp_1;
            _tmp_1 = grad_1_gt3[pp] * scratch_31[pp];
            double _tmp_2;
            _tmp_2 = grad_2_gt3[pp] * scratch_31[pp];
            double _tmp_3;
            _tmp_3 = grad_0_gt3[pp] * scratch_31[pp];
            double _tmp_4;
            _tmp_4          = -scratch_26[pp] * scratch_76[pp];
            scratch_14[pp]  = _tmp_0;
            scratch_131[pp] = _tmp_1;
            scratch_133[pp] = _tmp_2;
            scratch_154[pp] = _tmp_3;
            _tmp_4          = _tmp_0 + _tmp_1 + _tmp_4;
            double _tmp_5;
            _tmp_5 = -scratch_31[pp] * scratch_54[pp];
            double _tmp_6;
            _tmp_6 = -scratch_16[pp] * scratch_85[pp];
            double _tmp_7;
            _tmp_7 = scratch_31[pp] * scratch_71[pp];
            double _tmp_8;
            _tmp_8 = grad_0_gt5[pp] * scratch_34[pp];
            double _tmp_9;
            _tmp_9 = grad_2_gt0[pp] * scratch_7[pp];
            double _tmp_10;
            _tmp_10 = scratch_18[pp] * scratch_7[pp];
            double _tmp_11;
            _tmp_11 = grad_1_gt5[pp] * scratch_34[pp];
            double _tmp_12;
            _tmp_12 = -grad_2_gt3[pp] * scratch_16[pp];
            double _tmp_13;
            _tmp_13 = scratch_13[pp] * scratch_18[pp];
            double _tmp_14;
            _tmp_14 = grad_1_gt5[pp] * scratch_7[pp];
            double _tmp_15;
            _tmp_15 = -_tmp_2;
            double _tmp_16;
            _tmp_16 = -_tmp_3;
            double _tmp_17;
            _tmp_17         = -scratch_31[pp] * scratch_69[pp];
            scratch_204[pp] = _tmp_4;
            _tmp_5          = _tmp_5 + scratch_51[pp];
            _tmp_7          = _tmp_6 + _tmp_7 + scratch_75[pp];
            _tmp_6          = -scratch_26[pp] * scratch_69[pp];
            scratch_198[pp] = _tmp_8;
            scratch_206[pp] = _tmp_9;
            double _tmp_18;
            _tmp_18         = -grad_2_gt3[pp] * scratch_26[pp];
            scratch_156[pp] = _tmp_10;
            scratch_169[pp] = _tmp_11;
            _tmp_14         = _tmp_12 + _tmp_13 + _tmp_14;
            _tmp_15         = _tmp_15 + scratch_1[pp] + scratch_33[pp];
            _tmp_16         = _tmp_16 + scratch_22[pp] + scratch_28[pp];
            _tmp_17         = _tmp_17 + scratch_48[pp];
            _tmp_12         = -_tmp_4;
            scratch_141[pp] = _tmp_5;
            scratch_66[pp]  = _tmp_7;
            _tmp_6          = _tmp_6 + _tmp_8 + _tmp_9;
            _tmp_18         = _tmp_10 + _tmp_11 + _tmp_18;
            _tmp_13         = scratch_26[pp] * scratch_71[pp];
            double _tmp_19;
            _tmp_19         = grad_2_gt5[pp] * scratch_34[pp];
            scratch_190[pp] = _tmp_14;
            scratch_177[pp] = _tmp_15;
            scratch_142[pp] = _tmp_16;
            scratch_0[pp]   = _tmp_17;
            scratch_168[pp] = _tmp_12;
            double _tmp_20;
            _tmp_20 = _tmp_5 * scratch_13[pp];
            double _tmp_21;
            _tmp_21         = _tmp_7 * scratch_34[pp];
            scratch_188[pp] = _tmp_6;
            scratch_59[pp]  = _tmp_18;
            double _tmp_22;
            _tmp_22         = -scratch_7[pp] * scratch_85[pp];
            scratch_183[pp] = _tmp_13;
            scratch_153[pp] = _tmp_19;
            double _tmp_23;
            _tmp_23 = -_tmp_14;
            double _tmp_24;
            _tmp_24 = -2 * _tmp_15 * scratch_26[pp];
            double _tmp_25;
            _tmp_25 = -2 * _tmp_16 * scratch_16[pp];
            double _tmp_26;
            _tmp_26 = _tmp_17 * scratch_116[pp];
            double _tmp_27;
            _tmp_27         = _tmp_12 * scratch_31[pp];
            scratch_136[pp] = _tmp_20;
            scratch_147[pp] = _tmp_21;
            double _tmp_28;
            _tmp_28 = -_tmp_6;
            double _tmp_29;
            _tmp_29         = -_tmp_18;
            _tmp_22         = _tmp_13 + _tmp_19 + _tmp_22;
            scratch_187[pp] = _tmp_23;
            double _tmp_30;
            _tmp_30 = -scratch_34[pp] * scratch_76[pp];
            double _tmp_31;
            _tmp_31 = scratch_7[pp] * scratch_80[pp];
            _tmp_27 = _tmp_20 + _tmp_21 + _tmp_24 + _tmp_25 + _tmp_26 + _tmp_27;
            scratch_179[pp] = _tmp_28;
            scratch_194[pp] = _tmp_29;
            scratch_186[pp] = _tmp_22;
            _tmp_24         = _tmp_7 * grad_1_gt3[pp];
            _tmp_25         = grad_0_gt3[pp] * scratch_115[pp];
            _tmp_26         = scratch_106[pp] * scratch_9[pp];
            double _tmp_32;
            _tmp_32 = _tmp_23 * scratch_49[pp];
            double _tmp_33;
            _tmp_33 = _tmp_16 * scratch_76[pp];
            double _tmp_34;
            _tmp_34         = _tmp_17 * grad_1_gt3[pp];
            _tmp_31         = _tmp_30 + _tmp_31 + scratch_70[pp];
            scratch_199[pp] = _tmp_27;
            _tmp_30         = _tmp_15 * grad_0_gt3[pp];
            double _tmp_35;
            _tmp_35 = _tmp_28 * grad_1_gt5[pp];
            double _tmp_36;
            _tmp_36         = _tmp_29 * grad_0_gt5[pp];
            scratch_150[pp] = _tmp_36;
            double _tmp_37;
            _tmp_37 = -_tmp_22;
            double _tmp_38;
            _tmp_38         = _tmp_15 * scratch_76[pp];
            scratch_196[pp] = _tmp_24;
            scratch_197[pp] = _tmp_25;
            scratch_202[pp] = _tmp_26;
            double _tmp_39;
            _tmp_39         = scratch_3[pp] * scratch_54[pp];
            scratch_139[pp] = _tmp_32;
            scratch_182[pp] = _tmp_33;
            scratch_159[pp] = _tmp_34;
            scratch_157[pp] = _tmp_31;
            scratch_149[pp] = scratch_92[pp];
            double _tmp_40;
            _tmp_40 = -_tmp_27;
            double _tmp_41;
            _tmp_41 = grad_0_gt3[pp] * scratch_3[pp];
            double _tmp_42;
            _tmp_42 = _tmp_23 * scratch_9[pp];
            double _tmp_43;
            _tmp_43         = _tmp_12 * scratch_9[pp];
            scratch_205[pp] = _tmp_30;
            scratch_166[pp] = _tmp_35;
            scratch_175[pp] = _tmp_36;
            scratch_144[pp] = _tmp_37;
            double _tmp_44;
            _tmp_44 = _tmp_29 * grad_1_gt5[pp];
            double _tmp_45;
            _tmp_45 = _tmp_17 * grad_0_gt3[pp];
            double _tmp_46;
            _tmp_46 = _tmp_7 * grad_2_gt3[pp];
            double _tmp_47;
            _tmp_47 = 2 * scratch_58[pp];
            _tmp_38 = _tmp_24 + _tmp_38;
            double _tmp_48;
            _tmp_48 = _tmp_15 * grad_2_gt3[pp];
            double _tmp_49;
            _tmp_49 = _tmp_25 + _tmp_26;
            double _tmp_50;
            _tmp_50 = _tmp_23 * grad_1_gt0[pp];
            _tmp_39 = _tmp_32 + _tmp_39;
            double _tmp_51;
            _tmp_51 = scratch_115[pp] * scratch_18[pp];
            double _tmp_52;
            _tmp_52 = _tmp_33 + _tmp_34;
            double _tmp_53;
            _tmp_53 = _tmp_31 * grad_0_gt5[pp];
            double _tmp_54;
            _tmp_54 = _tmp_29 * scratch_69[pp];
            double _tmp_55;
            _tmp_55 = scratch_92[pp] + scratch_96[pp];
            double _tmp_56;
            _tmp_56         = 4 * scratch_65[pp];
            scratch_193[pp] = _tmp_40;
            _tmp_42         = _tmp_41 + _tmp_42;
            _tmp_41         = _tmp_23 * scratch_18[pp];
            _tmp_43         = _tmp_30 + _tmp_43;
            double _tmp_57;
            _tmp_57 = _tmp_35 + _tmp_36;
            double _tmp_58;
            _tmp_58         = _tmp_37 * scratch_69[pp];
            scratch_130[pp] = _tmp_44;
            double _tmp_59;
            _tmp_59         = _tmp_37 * grad_2_gt3[pp];
            scratch_162[pp] = _tmp_45;
            double _tmp_60;
            _tmp_60         = _tmp_16 * scratch_9[pp];
            scratch_145[pp] = _tmp_46;
            double _tmp_61;
            _tmp_61         = _tmp_15 * grad_1_gt5[pp];
            scratch_170[pp] = _tmp_47;
            scratch_138[pp] = _tmp_38;
            scratch_191[pp] = _tmp_48;
            double _tmp_62;
            _tmp_62         = scratch_26[pp] * scratch_30[pp];
            scratch_167[pp] = _tmp_49;
            scratch_195[pp] = _tmp_50;
            double _tmp_63;
            _tmp_63         = scratch_16[pp] * scratch_30[pp];
            scratch_163[pp] = _tmp_39;
            scratch_146[pp] = _tmp_51;
            double _tmp_64;
            _tmp_64         = scratch_30[pp] * scratch_7[pp];
            scratch_155[pp] = _tmp_52;
            double _tmp_65;
            _tmp_65         = _tmp_28 * scratch_76[pp];
            scratch_180[pp] = _tmp_53;
            scratch_171[pp] = _tmp_54;
            scratch_137[pp] = _tmp_55;
            scratch_134[pp] = _tmp_56;
            double _tmp_66;
            _tmp_66         = _tmp_40 * scratch_30[pp];
            scratch_152[pp] = _tmp_42;
            scratch_56[pp]  = _tmp_41;
            scratch_161[pp] = _tmp_43;
            scratch_173[pp] = _tmp_57;
            scratch_164[pp] = _tmp_58;
            double _tmp_67;
            _tmp_67        = 2 * _tmp_44;
            scratch_67[pp] = _tmp_59;
            double _tmp_68;
            _tmp_68         = 2 * _tmp_45;
            scratch_181[pp] = _tmp_60;
            double _tmp_69;
            _tmp_69 = scratch_13[pp] * scratch_30[pp];
            double _tmp_70;
            _tmp_70        = 2 * _tmp_46;
            scratch_73[pp] = _tmp_61;
            double _tmp_71;
            _tmp_71 = scratch_30[pp] * scratch_34[pp];
            double _tmp_72;
            _tmp_72 = _tmp_47 * grad2_0_0_gt4[pp];
            double _tmp_73;
            _tmp_73         = _tmp_38 + _tmp_48;
            scratch_200[pp] = _tmp_62;
            double _tmp_74;
            _tmp_74         = _tmp_49 + _tmp_50;
            scratch_165[pp] = _tmp_63;
            double _tmp_75;
            _tmp_75         = _tmp_39 + _tmp_51;
            scratch_172[pp] = _tmp_64;
            double _tmp_76;
            _tmp_76 = _tmp_30 + _tmp_52;
            _tmp_65 = _tmp_53 + _tmp_54 + _tmp_65;
            double _tmp_77;
            _tmp_77 = _tmp_55 + scratch_113[pp];
            double _tmp_78;
            _tmp_78         = _tmp_56 * grad2_0_2_gt4[pp];
            scratch_135[pp] = _tmp_66;
            double _tmp_79;
            _tmp_79 = 2 * gt2[pp];
            double _tmp_80;
            _tmp_80 = _tmp_41 + _tmp_42;
            double _tmp_81;
            _tmp_81 = _tmp_34 + _tmp_43;
            double _tmp_82;
            _tmp_82         = _tmp_57 + _tmp_58;
            _tmp_67         = _tmp_59 + _tmp_67;
            _tmp_68         = _tmp_60 + _tmp_68;
            scratch_174[pp] = _tmp_69;
            _tmp_70         = _tmp_61 + _tmp_70;
            scratch_201[pp] = _tmp_71;
            scratch_203[pp] = _tmp_72;
            _tmp_73         = _tmp_62 * _tmp_73;
            scratch_192[pp] = _tmp_73;
            _tmp_74         = _tmp_63 * _tmp_74;
            scratch_189[pp] = _tmp_74;
            _tmp_75         = -_tmp_64 * _tmp_75;
            scratch_185[pp] = _tmp_75;
            _tmp_76         = _tmp_63 * _tmp_76;
            scratch_184[pp] = _tmp_76;
            _tmp_65         = _tmp_63 * _tmp_65;
            scratch_178[pp] = _tmp_65;
            _tmp_77         = -_tmp_64 * _tmp_77;
            scratch_176[pp] = _tmp_77;
            scratch_160[pp] = _tmp_78;
            double _tmp_83;
            _tmp_83         = _tmp_66 * grad_1_gt4[pp];
            scratch_158[pp] = _tmp_83;
            scratch_151[pp] = _tmp_79;
            _tmp_80         = _tmp_62 * _tmp_80;
            scratch_148[pp] = _tmp_80;
            _tmp_81         = _tmp_63 * _tmp_81;
            scratch_143[pp] = _tmp_81;
            _tmp_82         = -_tmp_64 * _tmp_82;
            scratch_140[pp] = _tmp_82;
            _tmp_67         = _tmp_62 * _tmp_67;
            scratch_132[pp] = _tmp_67;
            _tmp_68         = -_tmp_68 * _tmp_69;
            scratch_86[pp]  = _tmp_68;
            _tmp_70         = -_tmp_70 * _tmp_71;
            scratch_42[pp]  = _tmp_70;
        }
    }
}

// --- Execution Unit 4 (ID: Comp0_Slice4) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_34[pp] * scratch_9[pp];
            double _tmp_1;
            _tmp_1 = grad_1_gt0[pp] * scratch_7[pp];
            double _tmp_2;
            _tmp_2 = -scratch_26[pp] * scratch_54[pp];
            double _tmp_3;
            _tmp_3 = scratch_34[pp] * scratch_49[pp];
            double _tmp_4;
            _tmp_4 = grad_0_gt0[pp] * scratch_7[pp];
            double _tmp_5;
            _tmp_5 = scratch_49[pp] * scratch_7[pp];
            double _tmp_6;
            _tmp_6 = grad_0_gt0[pp] * scratch_13[pp];
            double _tmp_7;
            _tmp_7          = -grad_0_gt3[pp] * scratch_26[pp];
            scratch_208[pp] = _tmp_0;
            scratch_216[pp] = _tmp_1;
            _tmp_4          = _tmp_2 + _tmp_3 + _tmp_4;
            _tmp_2          = -scratch_16[pp] * scratch_54[pp];
            scratch_212[pp] = _tmp_5;
            scratch_219[pp] = _tmp_6;
            _tmp_7          = _tmp_0 + _tmp_1 + _tmp_7;
            scratch_259[pp] = _tmp_4;
            _tmp_2          = _tmp_2 + _tmp_5 + _tmp_6;
            _tmp_3          = -scratch_76[pp] * scratch_7[pp];
            double _tmp_8;
            _tmp_8          = scratch_13[pp] * scratch_80[pp];
            scratch_217[pp] = _tmp_7;
            double _tmp_9;
            _tmp_9          = -_tmp_4;
            scratch_22[pp]  = _tmp_2;
            _tmp_8          = _tmp_3 + _tmp_8 + scratch_77[pp];
            _tmp_3          = -_tmp_7;
            scratch_207[pp] = _tmp_3;
            scratch_213[pp] = _tmp_9;
            double _tmp_10;
            _tmp_10         = -_tmp_2;
            scratch_224[pp] = _tmp_8;
            double _tmp_11;
            _tmp_11         = 3 * scratch_10[pp];
            scratch_253[pp] = _tmp_3;
            double _tmp_12;
            _tmp_12 = _tmp_9 * scratch_13[pp];
            double _tmp_13;
            _tmp_13       = scratch_157[pp] * scratch_31[pp];
            scratch_1[pp] = _tmp_10;
            double _tmp_14;
            _tmp_14 = _tmp_8 * scratch_31[pp];
            double _tmp_15;
            _tmp_15 = scratch_34[pp] * scratch_3[pp];
            double _tmp_16;
            _tmp_16 = -2 * scratch_194[pp] * scratch_26[pp];
            double _tmp_17;
            _tmp_17 = -2 * _tmp_3 * scratch_16[pp];
            double _tmp_18;
            _tmp_18 = scratch_116[pp] * scratch_179[pp];
            double _tmp_19;
            _tmp_19         = scratch_144[pp] * scratch_34[pp];
            scratch_233[pp] = _tmp_12;
            scratch_223[pp] = _tmp_13;
            double _tmp_20;
            _tmp_20 = -2 * scratch_187[pp] * scratch_26[pp];
            double _tmp_21;
            _tmp_21 = -2 * scratch_106[pp] * scratch_16[pp];
            double _tmp_22;
            _tmp_22 = scratch_115[pp] * scratch_116[pp];
            double _tmp_23;
            _tmp_23         = _tmp_10 * scratch_13[pp];
            scratch_254[pp] = _tmp_14;
            scratch_226[pp] = _tmp_15;
            double _tmp_24;
            _tmp_24 = _tmp_11 * grad_0_chi[pp];
            _tmp_19 = _tmp_12 + _tmp_13 + _tmp_16 + _tmp_17 + _tmp_18 + _tmp_19;
            _tmp_23 = _tmp_14 + _tmp_15 + _tmp_20 + _tmp_21 + _tmp_22 + _tmp_23;
            scratch_48[pp] = _tmp_19;
            scratch_92[pp] = _tmp_23;
            _tmp_20        = grad_2_chi[pp] * grad_2_chi[pp];
            _tmp_21        = grad_1_chi[pp] * grad_1_chi[pp];
            _tmp_22        = grad_0_chi[pp] * grad_0_chi[pp];
            _tmp_16        = -_tmp_11 * grad_1_chi[pp] * grad_2_chi[pp];
            _tmp_17        = 2 * grad2_1_2_chi[pp];
            _tmp_18        = -_tmp_24 * grad_1_chi[pp];
            double _tmp_25;
            _tmp_25 = 2 * grad2_0_1_chi[pp];
            double _tmp_26;
            _tmp_26 = grad_2_chi[pp] * scratch_2[pp];
            double _tmp_27;
            _tmp_27 = -_tmp_19;
            double _tmp_28;
            _tmp_28 = grad_1_chi[pp] * scratch_2[pp];
            double _tmp_29;
            _tmp_29 = grad_0_chi[pp] * scratch_2[pp];
            double _tmp_30;
            _tmp_30 = -_tmp_23;
            _tmp_24 = -_tmp_24 * grad_2_chi[pp];
            double _tmp_31;
            _tmp_31 = 2 * grad2_0_2_chi[pp];
            _tmp_20 = -_tmp_11 * _tmp_20;
            double _tmp_32;
            _tmp_32 = 2 * grad2_2_2_chi[pp];
            _tmp_21 = -_tmp_11 * _tmp_21;
            double _tmp_33;
            _tmp_33         = 2 * grad2_1_1_chi[pp];
            _tmp_11         = -_tmp_11 * _tmp_22;
            _tmp_22         = 2 * grad2_0_0_chi[pp];
            _tmp_17         = _tmp_16 + _tmp_17;
            _tmp_25         = _tmp_18 + _tmp_25;
            scratch_210[pp] = _tmp_26;
            scratch_221[pp] = _tmp_27;
            scratch_28[pp]  = _tmp_28;
            scratch_70[pp]  = _tmp_29;
            scratch_215[pp] = _tmp_30;
            _tmp_31         = _tmp_24 + _tmp_31;
            _tmp_32         = _tmp_20 + _tmp_32;
            _tmp_33         = _tmp_21 + _tmp_33;
            _tmp_22         = _tmp_11 + _tmp_22;
            _tmp_17         = -2 * _tmp_17 * scratch_26[pp];
            _tmp_25         = -2 * _tmp_25 * scratch_16[pp];
            _tmp_11         = _tmp_26 * _tmp_27;
            _tmp_21         = _tmp_28 * scratch_193[pp];
            _tmp_20         = _tmp_29 * _tmp_30;
            _tmp_31         = _tmp_31 * scratch_116[pp];
            _tmp_32         = _tmp_32 * scratch_34[pp];
            _tmp_33         = _tmp_33 * scratch_31[pp];
            _tmp_22         = _tmp_22 * scratch_13[pp];
            _tmp_22         = _tmp_11 + _tmp_17 + _tmp_20 + _tmp_21 + _tmp_22 +
                      _tmp_25 + _tmp_31 + _tmp_32 + _tmp_33;
            _tmp_17         = grad_2_gt3[pp] * scratch_179[pp];
            _tmp_25         = _tmp_3 * grad_1_gt5[pp];
            _tmp_11         = grad_0_gt5[pp] * scratch_187[pp];
            _tmp_21         = grad_1_gt3[pp] * scratch_177[pp];
            scratch_244[pp] = _tmp_21;
            scratch_242[pp] = _tmp_22;
            _tmp_20         = 2 * scratch_55[pp];
            _tmp_31         = 2 * scratch_64[pp];
            _tmp_32         = 4 * scratch_11[pp];
            _tmp_33         = 4 * scratch_32[pp];
            _tmp_24         = 2 * gt4[pp];
            _tmp_18         = 2 * gt3[pp];
            _tmp_16         = 2 * gt5[pp];
            scratch_75[pp]  = _tmp_17;
            scratch_262[pp] = _tmp_25;
            double _tmp_34;
            _tmp_34         = scratch_3[pp] * scratch_69[pp];
            scratch_241[pp] = _tmp_11;
            scratch_239[pp] = _tmp_21;
            double _tmp_35;
            _tmp_35 = -_tmp_22 * scratch_2[pp];
            double _tmp_36;
            _tmp_36 = _tmp_27 * scratch_30[pp];
            double _tmp_37;
            _tmp_37         = _tmp_30 * scratch_30[pp];
            scratch_236[pp] = _tmp_20;
            scratch_237[pp] = _tmp_31;
            scratch_263[pp] = _tmp_32;
            scratch_261[pp] = _tmp_33;
            scratch_234[pp] = _tmp_24;
            scratch_232[pp] = _tmp_18;
            scratch_209[pp] = _tmp_16;
            double _tmp_38;
            _tmp_38 = _tmp_17 + _tmp_25;
            double _tmp_39;
            _tmp_39 = scratch_194[pp] * scratch_9[pp];
            _tmp_34 = _tmp_11 + _tmp_34;
            double _tmp_40;
            _tmp_40 = scratch_18[pp] * scratch_3[pp];
            double _tmp_41;
            _tmp_41 = scratch_168[pp] * scratch_76[pp];
            double _tmp_42;
            _tmp_42 = 2 * _tmp_21;
            double _tmp_43;
            _tmp_43 = -scratch_194[pp] * scratch_71[pp];
            double _tmp_44;
            _tmp_44         = grad_2_gt5[pp] * scratch_157[pp];
            scratch_222[pp] = _tmp_44;
            scratch_247[pp] = _tmp_35;
            scratch_248[pp] = _tmp_36;
            scratch_255[pp] = _tmp_37;
            double _tmp_45;
            _tmp_45 = _tmp_20 * grad2_2_2_gt4[pp];
            double _tmp_46;
            _tmp_46 = _tmp_31 * grad2_1_1_gt4[pp];
            double _tmp_47;
            _tmp_47 = -_tmp_32 * grad2_1_2_gt4[pp];
            double _tmp_48;
            _tmp_48 = -_tmp_33 * grad2_0_1_gt4[pp];
            double _tmp_49;
            _tmp_49 = _tmp_24 * grad_2_Gt2[pp];
            double _tmp_50;
            _tmp_50 = _tmp_18 * grad_2_Gt1[pp];
            double _tmp_51;
            _tmp_51 = grad_2_Gt0[pp] * scratch_47[pp];
            double _tmp_52;
            _tmp_52 = _tmp_16 * grad_1_Gt2[pp];
            double _tmp_53;
            _tmp_53 = _tmp_24 * grad_1_Gt1[pp];
            double _tmp_54;
            _tmp_54 = grad_1_Gt0[pp] * scratch_151[pp];
            double _tmp_55;
            _tmp_55 = scratch_194[pp] * scratch_76[pp];
            double _tmp_56;
            _tmp_56 = grad_1_gt5[pp] * scratch_157[pp];
            double _tmp_57;
            _tmp_57         = grad_2_gt3[pp] * scratch_194[pp];
            scratch_256[pp] = _tmp_38;
            scratch_218[pp] = _tmp_39;
            scratch_251[pp] = _tmp_34;
            scratch_258[pp] = _tmp_40;
            scratch_265[pp] = _tmp_41;
            scratch_264[pp] = _tmp_42;
            double _tmp_58;
            _tmp_58 = scratch_30[pp] * scratch_31[pp];
            double _tmp_59;
            _tmp_59         = scratch_144[pp] * scratch_76[pp];
            scratch_228[pp] = _tmp_43;
            scratch_33[pp]  = _tmp_44;
            double _tmp_60;
            _tmp_60 = _tmp_35 * scratch_38[pp];
            double _tmp_61;
            _tmp_61 = _tmp_36 * grad_2_gt4[pp];
            double _tmp_62;
            _tmp_62         = _tmp_37 * grad_0_gt4[pp];
            scratch_246[pp] = _tmp_45;
            scratch_243[pp] = _tmp_46;
            scratch_227[pp] = _tmp_47;
            scratch_257[pp] = _tmp_48;
            scratch_245[pp] = _tmp_49;
            scratch_238[pp] = _tmp_50;
            scratch_235[pp] = _tmp_51;
            scratch_249[pp] = _tmp_52;
            scratch_230[pp] = _tmp_53;
            scratch_225[pp] = _tmp_54;
            scratch_51[pp]  = _tmp_55;
            scratch_252[pp] = _tmp_56;
            scratch_231[pp] = _tmp_57;
            double _tmp_63;
            _tmp_63 = _tmp_38 + _tmp_39;
            double _tmp_64;
            _tmp_64 = _tmp_34 + _tmp_40;
            double _tmp_65;
            _tmp_65         = _tmp_41 + _tmp_42;
            scratch_211[pp] = _tmp_58;
            _tmp_59         = _tmp_43 + _tmp_44 + _tmp_59;
            _tmp_62         = _tmp_45 + _tmp_46 + _tmp_47 + _tmp_48 + _tmp_49 +
                      _tmp_50 + _tmp_51 + _tmp_52 + _tmp_53 + _tmp_54 +
                      _tmp_60 + _tmp_61 + _tmp_62 + scratch_158[pp] +
                      scratch_160[pp] + scratch_203[pp];
            _tmp_60         = _tmp_55 + _tmp_56 + _tmp_57;
            _tmp_61         = grad_2_gt5[pp] * scratch_194[pp];
            scratch_250[pp] = _tmp_61;
            _tmp_63         = _tmp_63 * scratch_165[pp];
            scratch_240[pp] = _tmp_63;
            _tmp_64         = -_tmp_64 * scratch_201[pp];
            scratch_266[pp] = _tmp_64;
            _tmp_65         = -_tmp_58 * _tmp_65;
            scratch_260[pp] = _tmp_65;
            _tmp_59         = _tmp_59 * scratch_200[pp];
            scratch_229[pp] = _tmp_59;
            scratch_220[pp] = _tmp_62;
            _tmp_60         = -_tmp_58 * _tmp_60;
            scratch_214[pp] = _tmp_60;
        }
    }
}

// --- Execution Unit 5 (ID: Comp0_Slice5) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_224[pp] * scratch_9[pp];
            double _tmp_1;
            _tmp_1 = grad_0_gt3[pp] * scratch_187[pp];
            double _tmp_2;
            _tmp_2 = scratch_179[pp] * scratch_69[pp];
            double _tmp_3;
            _tmp_3 = grad_0_gt5[pp] * scratch_253[pp];
            double _tmp_4;
            _tmp_4 = scratch_106[pp] * scratch_49[pp];
            double _tmp_5;
            _tmp_5 = scratch_115[pp] * scratch_54[pp];
            double _tmp_6;
            _tmp_6 = grad_2_gt5[pp] * scratch_253[pp];
            double _tmp_7;
            _tmp_7 = scratch_179[pp] * scratch_71[pp];
            double _tmp_8;
            _tmp_8 = grad_1_gt5[pp] * scratch_142[pp];
            double _tmp_9;
            _tmp_9 = grad_2_gt3[pp] * scratch_0[pp];
            double _tmp_10;
            _tmp_10 = grad_0_gt3[pp] * scratch_66[pp];
            double _tmp_11;
            _tmp_11 = scratch_177[pp] * scratch_9[pp];
            double _tmp_12;
            _tmp_12 = scratch_187[pp] * scratch_54[pp];
            double _tmp_13;
            _tmp_13         = scratch_187[pp] * scratch_80[pp];
            scratch_313[pp] = _tmp_0;
            scratch_299[pp] = _tmp_1;
            scratch_272[pp] = _tmp_2;
            scratch_305[pp] = _tmp_3;
            scratch_332[pp] = _tmp_4;
            scratch_308[pp] = _tmp_5;
            double _tmp_14;
            _tmp_14         = scratch_144[pp] * scratch_9[pp];
            scratch_302[pp] = _tmp_6;
            scratch_317[pp] = _tmp_7;
            scratch_311[pp] = _tmp_8;
            scratch_321[pp] = _tmp_9;
            scratch_280[pp] = _tmp_10;
            scratch_282[pp] = _tmp_11;
            double _tmp_15;
            _tmp_15         = grad_0_gt5[pp] * scratch_224[pp];
            scratch_289[pp] = _tmp_15;
            double _tmp_16;
            _tmp_16 = scratch_187[pp] * scratch_69[pp];
            double _tmp_17;
            _tmp_17         = scratch_224[pp] * scratch_49[pp];
            scratch_291[pp] = _tmp_17;
            scratch_325[pp] = _tmp_12;
            double _tmp_18;
            _tmp_18 = grad_2_gt3[pp] * scratch_142[pp];
            double _tmp_19;
            _tmp_19 = -scratch_144[pp] * scratch_71[pp];
            double _tmp_20;
            _tmp_20         = grad_1_gt5[pp] * scratch_144[pp];
            scratch_278[pp] = _tmp_13;
            double _tmp_21;
            _tmp_21 = _tmp_0 + _tmp_1;
            double _tmp_22;
            _tmp_22 = _tmp_2 + _tmp_3;
            double _tmp_23;
            _tmp_23 = scratch_179[pp] * scratch_9[pp];
            double _tmp_24;
            _tmp_24 = _tmp_4 + _tmp_5;
            double _tmp_25;
            _tmp_25 = grad_1_gt0[pp] * scratch_115[pp];
            _tmp_14 = _tmp_14 + _tmp_6;
            double _tmp_26;
            _tmp_26 = -_tmp_7;
            double _tmp_27;
            _tmp_27 = _tmp_8 + _tmp_9;
            double _tmp_28;
            _tmp_28 = _tmp_10 + _tmp_11;
            double _tmp_29;
            _tmp_29 = grad_1_gt5[pp] * scratch_168[pp];
            _tmp_16 = _tmp_15 + _tmp_16;
            double _tmp_30;
            _tmp_30 = _tmp_12 + _tmp_17;
            double _tmp_31;
            _tmp_31         = -scratch_115[pp] * scratch_80[pp];
            scratch_301[pp] = _tmp_18;
            double _tmp_32;
            _tmp_32 = 3 * grad_0_gt4[pp];
            double _tmp_33;
            _tmp_33         = scratch_253[pp] * scratch_71[pp];
            scratch_284[pp] = _tmp_19;
            scratch_312[pp] = _tmp_20;
            scratch_269[pp] = scratch_250[pp];
            double _tmp_34;
            _tmp_34         = -_tmp_13;
            scratch_330[pp] = _tmp_21;
            scratch_334[pp] = _tmp_22;
            scratch_288[pp] = _tmp_23;
            scratch_327[pp] = _tmp_24;
            scratch_336[pp] = _tmp_25;
            scratch_271[pp] = _tmp_14;
            scratch_324[pp] = _tmp_26;
            scratch_326[pp] = _tmp_27;
            scratch_292[pp] = _tmp_28;
            scratch_285[pp] = _tmp_29;
            double _tmp_35;
            _tmp_35         = -scratch_3[pp] * scratch_80[pp];
            scratch_77[pp]  = _tmp_16;
            scratch_300[pp] = _tmp_30;
            scratch_287[pp] = _tmp_31;
            double _tmp_36;
            _tmp_36 = 3 * grad_2_gt1[pp];
            double _tmp_37;
            _tmp_37 = 3 * scratch_201[pp];
            double _tmp_38;
            _tmp_38 = grad_0_gt3[pp] * scratch_142[pp];
            double _tmp_39;
            _tmp_39 = 3 * scratch_174[pp];
            double _tmp_40;
            _tmp_40 = 2 * scratch_205[pp];
            double _tmp_41;
            _tmp_41 = 2 * _tmp_18;
            double _tmp_42;
            _tmp_42 = 4 * gt1[pp];
            double _tmp_43;
            _tmp_43 = 4 * gt4[pp];
            double _tmp_44;
            _tmp_44 = scratch_106[pp] * scratch_69[pp];
            double _tmp_45;
            _tmp_45         = 2 * scratch_157[pp];
            scratch_298[pp] = _tmp_32;
            double _tmp_46;
            _tmp_46         = grad_0_gt3[pp] * scratch_168[pp];
            scratch_286[pp] = _tmp_33;
            double _tmp_47;
            _tmp_47 = -scratch_194[pp] * scratch_9[pp];
            double _tmp_48;
            _tmp_48 = grad_0_gt3[pp] * scratch_106[pp];
            double _tmp_49;
            _tmp_49 = _tmp_19 + _tmp_20 + scratch_250[pp];
            _tmp_34 = _tmp_21 + _tmp_34;
            double _tmp_50;
            _tmp_50 = _tmp_22 + _tmp_23;
            double _tmp_51;
            _tmp_51 = _tmp_24 + _tmp_25;
            double _tmp_52;
            _tmp_52 = _tmp_14 + _tmp_26;
            double _tmp_53;
            _tmp_53 = _tmp_10 + _tmp_27;
            double _tmp_54;
            _tmp_54 = _tmp_28 + _tmp_9;
            double _tmp_55;
            _tmp_55 = _tmp_29 + scratch_191[pp] + scratch_196[pp];
            _tmp_35 = _tmp_16 + _tmp_35;
            double _tmp_56;
            _tmp_56 = _tmp_30 + _tmp_31;
            double _tmp_57;
            _tmp_57 = grad_2_gt3[pp] * scratch_168[pp];
            double _tmp_58;
            _tmp_58         = grad_2_gt3[pp] * scratch_253[pp];
            scratch_277[pp] = _tmp_36;
            double _tmp_59;
            _tmp_59 = grad_2_gt3[pp] + scratch_78[pp];
            double _tmp_60;
            _tmp_60         = grad_0_gt3[pp] + scratch_83[pp];
            scratch_333[pp] = _tmp_37;
            scratch_294[pp] = _tmp_38;
            scratch_283[pp] = _tmp_39;
            _tmp_40         = _tmp_18 + _tmp_40;
            _tmp_41         = _tmp_41 + scratch_205[pp];
            scratch_279[pp] = _tmp_42;
            scratch_158[pp] = _tmp_43;
            scratch_267[pp] = _tmp_44;
            scratch_281[pp] = _tmp_45;
            double _tmp_61;
            _tmp_61 = scratch_253[pp] * scratch_76[pp];
            double _tmp_62;
            _tmp_62         = _tmp_32 + grad_2_gt1[pp] + scratch_53[pp];
            scratch_274[pp] = _tmp_46;
            double _tmp_63;
            _tmp_63         = grad_1_gt3[pp] * scratch_142[pp];
            scratch_270[pp] = _tmp_63;
            double _tmp_64;
            _tmp_64         = 2 * _tmp_33;
            scratch_335[pp] = _tmp_47;
            scratch_315[pp] = _tmp_48;
            double _tmp_65;
            _tmp_65         = grad_1_gt0[pp] * scratch_224[pp];
            scratch_273[pp] = _tmp_65;
            _tmp_49         = -_tmp_49 * scratch_201[pp];
            _tmp_34         = -_tmp_34 * scratch_211[pp];
            _tmp_50         = -_tmp_50 * scratch_174[pp];
            _tmp_51         = -_tmp_51 * scratch_174[pp];
            _tmp_52         = -_tmp_52 * scratch_172[pp];
            _tmp_53         = -_tmp_53 * scratch_172[pp];
            _tmp_54         = -_tmp_54 * scratch_172[pp];
            _tmp_55         = _tmp_55 * scratch_200[pp];
            _tmp_35         = _tmp_35 * scratch_200[pp];
            _tmp_56         = _tmp_56 * scratch_165[pp];
            scratch_297[pp] = _tmp_57;
            scratch_329[pp] = _tmp_58;
            double _tmp_66;
            _tmp_66         = scratch_157[pp] * scratch_9[pp];
            scratch_339[pp] = _tmp_66;
            double _tmp_67;
            _tmp_67 = _tmp_36 + scratch_79[pp];
            _tmp_59 = -_tmp_59 * scratch_223[pp] * scratch_30[pp];
            _tmp_60 = -_tmp_60 * scratch_254[pp] * scratch_30[pp];
            double _tmp_68;
            _tmp_68 = 4 * grad_1_Gt1[pp] * gt3[pp];
            double _tmp_69;
            _tmp_69 = -_tmp_37 * scratch_191[pp];
            double _tmp_70;
            _tmp_70 = -grad2_1_2_gt3[pp] * scratch_263[pp];
            double _tmp_71;
            _tmp_71 = -grad2_0_1_gt3[pp] * scratch_261[pp];
            double _tmp_72;
            _tmp_72 = -_tmp_38 * _tmp_39;
            _tmp_40 = -_tmp_40 * scratch_172[pp];
            _tmp_41 = -_tmp_41 * scratch_172[pp];
            double _tmp_73;
            _tmp_73 = _tmp_42 * grad_1_Gt0[pp];
            double _tmp_74;
            _tmp_74 = grad2_0_2_gt3[pp] * scratch_134[pp];
            double _tmp_75;
            _tmp_75 = grad2_2_2_gt3[pp] * scratch_236[pp];
            double _tmp_76;
            _tmp_76 = grad2_1_1_gt3[pp] * scratch_237[pp];
            double _tmp_77;
            _tmp_77 = grad2_0_0_gt3[pp] * scratch_170[pp];
            double _tmp_78;
            _tmp_78 = _tmp_43 * grad_1_Gt2[pp];
            double _tmp_79;
            _tmp_79 = 2 * _tmp_44;
            double _tmp_80;
            _tmp_80 = 2 * scratch_171[pp];
            double _tmp_81;
            _tmp_81         = _tmp_45 * scratch_69[pp];
            scratch_307[pp] = _tmp_61;
            _tmp_62         = _tmp_62 * scratch_174[pp];
            double _tmp_82;
            _tmp_82         = 2 * _tmp_46;
            scratch_338[pp] = _tmp_63;
            _tmp_64         = _tmp_47 + _tmp_64;
            double _tmp_83;
            _tmp_83         = 2 * _tmp_48;
            scratch_293[pp] = _tmp_65;
            double _tmp_84;
            _tmp_84 = 3 * scratch_15[pp];
            _tmp_56 = _tmp_34 + _tmp_35 + _tmp_49 + _tmp_50 + _tmp_51 +
                      _tmp_52 + _tmp_53 + _tmp_54 + _tmp_55 + _tmp_56 +
                      scratch_132[pp] + scratch_140[pp] + scratch_143[pp] +
                      scratch_148[pp] + scratch_176[pp] + scratch_178[pp] +
                      scratch_184[pp] + scratch_185[pp] + scratch_189[pp] +
                      scratch_192[pp] + scratch_214[pp] + scratch_220[pp] +
                      scratch_229[pp] + scratch_240[pp] + scratch_260[pp] +
                      scratch_266[pp] + scratch_42[pp] + scratch_86[pp];
            _tmp_49         = 2 * _tmp_57;
            _tmp_34         = 2 * _tmp_58;
            scratch_323[pp] = _tmp_66;
            _tmp_67         = _tmp_67 * scratch_201[pp];
            _tmp_78         = _tmp_40 + _tmp_41 + _tmp_59 + _tmp_60 + _tmp_68 +
                      _tmp_69 + _tmp_70 + _tmp_71 + _tmp_72 + _tmp_73 +
                      _tmp_74 + _tmp_75 + _tmp_76 + _tmp_77 + _tmp_78;
            _tmp_79         = _tmp_79 + scratch_195[pp];
            _tmp_80         = _tmp_80 + scratch_262[pp];
            _tmp_81         = _tmp_61 + _tmp_81;
            _tmp_59         = 3 * chi[pp];
            scratch_275[pp] = _tmp_62;
            _tmp_82         = _tmp_63 + _tmp_82;
            _tmp_83         = _tmp_65 + _tmp_83;
            _tmp_60         = _tmp_57 + scratch_264[pp];
            scratch_328[pp] = _tmp_84;
            scratch_322[pp] = _tmp_56;
            _tmp_49         = _tmp_49 + scratch_239[pp];
            _tmp_34         = _tmp_34 + _tmp_66;
            scratch_276[pp] = _tmp_67;
            _tmp_68         = 2 * scratch_231[pp];
            scratch_319[pp] = _tmp_78;
            _tmp_79         = -_tmp_79 * scratch_172[pp];
            scratch_310[pp] = _tmp_79;
            _tmp_80         = -_tmp_80 * scratch_172[pp];
            scratch_296[pp] = _tmp_80;
            _tmp_69         = scratch_247[pp] * scratch_87[pp];
            scratch_295[pp] = _tmp_69;
            _tmp_81         = _tmp_81 * scratch_165[pp];
            scratch_337[pp] = _tmp_81;
            scratch_320[pp] = _tmp_59;
            _tmp_70         = -_tmp_62 * scratch_253[pp];
            scratch_318[pp] = _tmp_70;
            _tmp_82         = _tmp_82 * scratch_165[pp];
            scratch_290[pp] = _tmp_82;
            _tmp_64         = _tmp_64 * scratch_172[pp];
            scratch_268[pp] = _tmp_64;
            _tmp_83         = _tmp_83 * scratch_165[pp];
            scratch_331[pp] = _tmp_83;
            _tmp_60         = _tmp_60 * scratch_200[pp];
            scratch_316[pp] = _tmp_60;
            _tmp_71         = -_tmp_56 * _tmp_84;
            scratch_303[pp] = _tmp_71;
            _tmp_49         = _tmp_49 * scratch_200[pp];
            scratch_304[pp] = _tmp_49;
            _tmp_34         = _tmp_34 * scratch_165[pp];
            scratch_340[pp] = _tmp_34;
            _tmp_72         = -_tmp_67 * scratch_187[pp];
            scratch_314[pp] = _tmp_72;
            _tmp_40         = grad_0_gt3[pp] * scratch_255[pp];
            scratch_309[pp] = _tmp_40;
            _tmp_68         = _tmp_68 + scratch_252[pp];
            scratch_306[pp] = _tmp_68;
        }
    }
}

// --- Execution Unit 6 (ID: Comp0_Slice6) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_1_gt5[pp] * scratch_0[pp];
            double _tmp_1;
            _tmp_1 = scratch_0[pp] * scratch_76[pp];
            double _tmp_2;
            _tmp_2 = grad_2_gt5[pp] * scratch_179[pp];
            double _tmp_3;
            _tmp_3          = 3 * grad_1_gt2[pp];
            scratch_353[pp] = _tmp_0;
            double _tmp_4;
            _tmp_4 = scratch_66[pp] * scratch_69[pp];
            double _tmp_5;
            _tmp_5          = -scratch_177[pp] * scratch_71[pp];
            scratch_342[pp] = _tmp_1;
            double _tmp_6;
            _tmp_6 = scratch_177[pp] * scratch_69[pp];
            double _tmp_7;
            _tmp_7 = 4 * grad_0_gt1[pp];
            double _tmp_8;
            _tmp_8 = scratch_281[pp] * scratch_71[pp];
            double _tmp_9;
            _tmp_9          = grad_0_gt5[pp] * scratch_115[pp];
            scratch_254[pp] = _tmp_2;
            double _tmp_10;
            _tmp_10 = grad_0_gt5[pp] * scratch_144[pp];
            double _tmp_11;
            _tmp_11 = scratch_187[pp] * scratch_85[pp];
            double _tmp_12;
            _tmp_12         = 4 * grad_0_gt2[pp];
            scratch_343[pp] = _tmp_3;
            double _tmp_13;
            _tmp_13 = scratch_0[pp] * scratch_71[pp];
            double _tmp_14;
            _tmp_14 = scratch_115[pp] * scratch_9[pp];
            double _tmp_15;
            _tmp_15 = 4 * grad_1_gt4[pp];
            double _tmp_16;
            _tmp_16        = 2 * _tmp_0;
            scratch_15[pp] = _tmp_4;
            double _tmp_17;
            _tmp_17 = 4 * gt2[pp];
            double _tmp_18;
            _tmp_18        = 2 * scratch_66[pp] * scratch_76[pp];
            scratch_53[pp] = _tmp_5;
            double _tmp_19;
            _tmp_19 = 2 * scratch_73[pp];
            double _tmp_20;
            _tmp_20         = 2 * _tmp_1;
            scratch_360[pp] = _tmp_6;
            double _tmp_21;
            _tmp_21 = 2 * scratch_282[pp];
            double _tmp_22;
            _tmp_22 = -4 * grad_2_gt4[pp];
            double _tmp_23;
            _tmp_23 = scratch_106[pp] * scratch_18[pp];
            double _tmp_24;
            _tmp_24 = -2 * scratch_224[pp] * scratch_69[pp];
            _tmp_7  = _tmp_7 + scratch_50[pp];
            double _tmp_25;
            _tmp_25         = scratch_18[pp] * scratch_224[pp];
            scratch_223[pp] = _tmp_25;
            scratch_132[pp] = _tmp_8;
            double _tmp_26;
            _tmp_26 = 2 * scratch_224[pp] * scratch_54[pp];
            double _tmp_27;
            _tmp_27 = -scratch_106[pp] * scratch_80[pp];
            double _tmp_28;
            _tmp_28 = 2 * scratch_338[pp];
            double _tmp_29;
            _tmp_29         = -scratch_115[pp] * scratch_85[pp];
            scratch_362[pp] = _tmp_9;
            double _tmp_30;
            _tmp_30 = grad_2_gt0[pp] * scratch_3[pp];
            double _tmp_31;
            _tmp_31         = 2 * _tmp_2;
            scratch_214[pp] = _tmp_10;
            double _tmp_32;
            _tmp_32         = -2 * scratch_3[pp] * scratch_9[pp];
            scratch_341[pp] = _tmp_11;
            _tmp_12         = _tmp_12 + scratch_88[pp];
            double _tmp_33;
            _tmp_33 = _tmp_3 + scratch_24[pp];
            double _tmp_34;
            _tmp_34         = -2 * scratch_66[pp] * scratch_9[pp];
            scratch_229[pp] = _tmp_13;
            double _tmp_35;
            _tmp_35         = 2 * scratch_269[pp];
            scratch_189[pp] = _tmp_14;
            double _tmp_36;
            _tmp_36 = grad_2_gt0[pp] * scratch_187[pp];
            double _tmp_37;
            _tmp_37 = grad_1_gt2[pp] + scratch_19[pp] + scratch_298[pp];
            _tmp_15 = _tmp_15 + scratch_84[pp];
            double _tmp_38;
            _tmp_38         = grad_1_gt5[pp] + scratch_57[pp];
            _tmp_16         = _tmp_16 + _tmp_4;
            scratch_352[pp] = _tmp_17;
            _tmp_18         = _tmp_18 + _tmp_5;
            _tmp_19         = _tmp_19 + scratch_145[pp];
            _tmp_20         = _tmp_20 + _tmp_6;
            _tmp_21         = _tmp_21 + scratch_321[pp];
            _tmp_22         = _tmp_22 + grad_1_gt5[pp];
            double _tmp_39;
            _tmp_39         = 2 * scratch_325[pp];
            scratch_148[pp] = _tmp_23;
            _tmp_24         = _tmp_24 + scratch_278[pp];
            double _tmp_40;
            _tmp_40 = scratch_131[pp] * scratch_40[pp];
            _tmp_7  = _tmp_7 * scratch_174[pp];
            double _tmp_41;
            _tmp_41         = 2 * scratch_299[pp];
            scratch_358[pp] = _tmp_25;
            double _tmp_42;
            _tmp_42         = -_tmp_8;
            scratch_356[pp] = _tmp_26;
            scratch_350[pp] = _tmp_27;
            scratch_78[pp]  = _tmp_28;
            double _tmp_43;
            _tmp_43 = grad_0_gt5[pp] + scratch_72[pp];
            double _tmp_44;
            _tmp_44 = 3 * scratch_211[pp];
            double _tmp_45;
            _tmp_45 = grad_0_gt5[pp] * scratch_179[pp];
            double _tmp_46;
            _tmp_46         = 2 * scratch_3[pp] * scratch_49[pp];
            scratch_361[pp] = _tmp_29;
            double _tmp_47;
            _tmp_47         = 2 * _tmp_9;
            scratch_250[pp] = _tmp_30;
            scratch_260[pp] = _tmp_31;
            double _tmp_48;
            _tmp_48 = 2 * _tmp_10;
            _tmp_32 = _tmp_11 + _tmp_32;
            double _tmp_49;
            _tmp_49 = scratch_153[pp] * scratch_40[pp];
            _tmp_12 = _tmp_12 * scratch_174[pp];
            _tmp_33 = _tmp_33 * scratch_211[pp];
            _tmp_34 = _tmp_13 + _tmp_34;
            double _tmp_50;
            _tmp_50        = 2 * scratch_241[pp];
            scratch_86[pp] = _tmp_35;
            double _tmp_51;
            _tmp_51 = 2 * scratch_312[pp];
            double _tmp_52;
            _tmp_52 = 2 * scratch_139[pp];
            double _tmp_53;
            _tmp_53         = 2 * _tmp_14;
            scratch_344[pp] = _tmp_36;
            double _tmp_54;
            _tmp_54 = 2 * scratch_175[pp];
            double _tmp_55;
            _tmp_55 = 2 * scratch_166[pp];
            _tmp_37 = -_tmp_37 * scratch_0[pp] * scratch_174[pp];
            _tmp_15 = -_tmp_15 * scratch_177[pp] * scratch_211[pp];
            _tmp_38 = -_tmp_38 * scratch_147[pp] * scratch_30[pp];
            double _tmp_56;
            _tmp_56 = 4 * grad_2_Gt2[pp] * gt5[pp];
            double _tmp_57;
            _tmp_57 = -grad2_1_2_gt5[pp] * scratch_263[pp];
            double _tmp_58;
            _tmp_58 = -grad2_0_1_gt5[pp] * scratch_261[pp];
            _tmp_16 = -_tmp_16 * scratch_172[pp];
            double _tmp_59;
            _tmp_59 = grad2_0_2_gt5[pp] * scratch_134[pp];
            double _tmp_60;
            _tmp_60 = grad2_2_2_gt5[pp] * scratch_236[pp];
            double _tmp_61;
            _tmp_61 = grad2_1_1_gt5[pp] * scratch_237[pp];
            double _tmp_62;
            _tmp_62 = grad2_0_0_gt5[pp] * scratch_170[pp];
            double _tmp_63;
            _tmp_63 = grad_2_Gt1[pp] * scratch_158[pp];
            double _tmp_64;
            _tmp_64         = _tmp_17 * grad_2_Gt0[pp];
            _tmp_18         = _tmp_18 * scratch_200[pp];
            _tmp_19         = _tmp_19 * scratch_200[pp];
            _tmp_20         = _tmp_20 * scratch_165[pp];
            _tmp_21         = _tmp_21 * scratch_165[pp];
            scratch_240[pp] = _tmp_22;
            _tmp_39         = _tmp_23 + _tmp_39;
            scratch_143[pp] = _tmp_40;
            scratch_79[pp]  = _tmp_7;
            _tmp_41         = _tmp_25 + _tmp_41;
            _tmp_42         = _tmp_42 + scratch_51[pp];
            double _tmp_65;
            _tmp_65 = _tmp_26 + _tmp_27;
            double _tmp_66;
            _tmp_66         = _tmp_28 + scratch_274[pp];
            scratch_345[pp] = _tmp_43;
            scratch_140[pp] = _tmp_44;
            scratch_359[pp] = _tmp_45;
            _tmp_46         = _tmp_29 + _tmp_46;
            _tmp_47         = _tmp_30 + _tmp_47;
            double _tmp_67;
            _tmp_67         = _tmp_10 + _tmp_31;
            _tmp_48         = _tmp_2 + _tmp_48;
            scratch_192[pp] = _tmp_49;
            scratch_185[pp] = _tmp_12;
            scratch_349[pp] = _tmp_33;
            _tmp_50         = _tmp_50 + scratch_258[pp];
            double _tmp_68;
            _tmp_68 = _tmp_35 + scratch_312[pp];
            _tmp_51 = _tmp_51 + scratch_269[pp];
            _tmp_52 = _tmp_52 + scratch_146[pp];
            _tmp_53 = _tmp_36 + _tmp_53;
            _tmp_54 = _tmp_54 + scratch_166[pp];
            _tmp_55 = _tmp_55 + scratch_175[pp];
            _tmp_21 = _tmp_15 + _tmp_16 + _tmp_18 + _tmp_19 + _tmp_20 +
                      _tmp_21 + _tmp_37 + _tmp_38 + _tmp_56 + _tmp_57 +
                      _tmp_58 + _tmp_59 + _tmp_60 + _tmp_61 + _tmp_62 +
                      _tmp_63 + _tmp_64;
            _tmp_37         = _tmp_22 * scratch_194[pp] * scratch_201[pp];
            _tmp_39         = -_tmp_39 * scratch_172[pp];
            _tmp_24         = -_tmp_24 * scratch_200[pp];
            scratch_178[pp] = _tmp_24;
            _tmp_15         = -_tmp_40 * scratch_168[pp];
            _tmp_38         = -_tmp_7 * scratch_106[pp];
            _tmp_41         = _tmp_41 * scratch_200[pp];
            _tmp_42         = _tmp_42 * scratch_200[pp];
            _tmp_56         = scratch_200[pp] * scratch_306[pp];
            _tmp_65         = _tmp_65 * scratch_165[pp];
            _tmp_66         = _tmp_66 * scratch_165[pp];
            _tmp_57         = grad_2_gt3[pp] * scratch_248[pp];
            _tmp_58         = grad_1_gt3[pp] * scratch_135[pp];
            _tmp_16         = -_tmp_43 * scratch_226[pp] * scratch_30[pp];
            _tmp_59         = -_tmp_44 * scratch_130[pp];
            _tmp_60         = -_tmp_45 * scratch_283[pp];
            _tmp_46         = -_tmp_46 * scratch_172[pp];
            _tmp_47         = -_tmp_47 * scratch_172[pp];
            _tmp_67         = -_tmp_67 * scratch_172[pp];
            _tmp_48         = -_tmp_48 * scratch_172[pp];
            _tmp_32         = -_tmp_32 * scratch_200[pp];
            scratch_357[pp] = _tmp_32;
            _tmp_61         = -_tmp_49 * scratch_144[pp];
            _tmp_62         = -_tmp_12 * scratch_115[pp];
            _tmp_63         = -_tmp_33 * scratch_187[pp];
            _tmp_64         = scratch_247[pp] * scratch_82[pp];
            _tmp_34         = _tmp_34 * scratch_172[pp];
            scratch_346[pp] = _tmp_34;
            _tmp_50         = _tmp_50 * scratch_200[pp];
            _tmp_68         = _tmp_68 * scratch_200[pp];
            _tmp_51         = _tmp_51 * scratch_200[pp];
            _tmp_52         = _tmp_52 * scratch_165[pp];
            _tmp_53         = _tmp_53 * scratch_165[pp];
            _tmp_54         = _tmp_54 * scratch_165[pp];
            _tmp_55         = _tmp_55 * scratch_165[pp];
            _tmp_18         = grad_2_gt5[pp] * scratch_248[pp];
            _tmp_19         = grad_1_gt5[pp] * scratch_135[pp];
            _tmp_20         = grad_0_gt5[pp] * scratch_255[pp];
            scratch_83[pp]  = _tmp_21;
            double _tmp_69;
            _tmp_69 = 24 * scratch_30[pp];
            _tmp_58 = _tmp_15 + _tmp_24 + _tmp_37 + _tmp_38 + _tmp_39 +
                      _tmp_41 + _tmp_42 + _tmp_56 + _tmp_57 + _tmp_58 +
                      _tmp_65 + _tmp_66 + scratch_268[pp] + scratch_290[pp] +
                      scratch_295[pp] + scratch_296[pp] + scratch_304[pp] +
                      scratch_309[pp] + scratch_310[pp] + scratch_314[pp] +
                      scratch_316[pp] + scratch_318[pp] + scratch_319[pp] +
                      scratch_331[pp] + scratch_337[pp] + scratch_340[pp];
            _tmp_20 = _tmp_16 + _tmp_18 + _tmp_19 + _tmp_20 + _tmp_21 +
                      _tmp_32 + _tmp_34 + _tmp_46 + _tmp_47 + _tmp_48 +
                      _tmp_50 + _tmp_51 + _tmp_52 + _tmp_53 + _tmp_54 +
                      _tmp_55 + _tmp_59 + _tmp_60 + _tmp_61 + _tmp_62 +
                      _tmp_63 + _tmp_64 + _tmp_67 + _tmp_68;
            _tmp_16         = 3 * scratch_37[pp];
            _tmp_59         = _tmp_36 + scratch_146[pp];
            scratch_354[pp] = _tmp_69;
            scratch_176[pp] = _tmp_58;
            scratch_42[pp]  = _tmp_20;
            scratch_355[pp] = _tmp_16;
            scratch_348[pp] = _tmp_59;
            _tmp_60         = _tmp_69 * scratch_118[pp];
            scratch_184[pp] = _tmp_60;
            _tmp_46         = _tmp_58 * scratch_320[pp] * scratch_64[pp];
            scratch_351[pp] = _tmp_46;
            _tmp_47         = _tmp_20 * scratch_320[pp] * scratch_55[pp];
            scratch_347[pp] = _tmp_47;
            _tmp_67         = scratch_100[pp] * scratch_93[pp];
            scratch_196[pp] = _tmp_67;
            _tmp_48         = _tmp_69 * scratch_44[pp];
            scratch_266[pp] = _tmp_48;
        }
    }
}

// --- Execution Unit 7 (ID: Comp0_Slice7) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt3[pp] * scratch_141[pp];
            double _tmp_1;
            _tmp_1 = grad_1_gt3[pp] * scratch_141[pp];
            double _tmp_2;
            _tmp_2          = grad_0_gt3[pp] * scratch_141[pp];
            scratch_394[pp] = _tmp_0;
            scratch_72[pp]  = _tmp_1;
            double _tmp_3;
            _tmp_3 = scratch_194[pp] * scratch_85[pp];
            double _tmp_4;
            _tmp_4          = scratch_177[pp] * scratch_18[pp];
            scratch_306[pp] = _tmp_2;
            double _tmp_5;
            _tmp_5 = grad_1_gt0[pp] * scratch_142[pp];
            double _tmp_6;
            _tmp_6 = _tmp_0 + scratch_162[pp];
            double _tmp_7;
            _tmp_7 = grad_1_gt0[pp] * scratch_177[pp];
            double _tmp_8;
            _tmp_8 = scratch_142[pp] * scratch_18[pp];
            double _tmp_9;
            _tmp_9 = scratch_159[pp] + scratch_301[pp];
            double _tmp_10;
            _tmp_10 = -scratch_177[pp] * scratch_80[pp];
            double _tmp_11;
            _tmp_11 = _tmp_1 + scratch_294[pp];
            double _tmp_12;
            _tmp_12 = -scratch_142[pp] * scratch_80[pp];
            double _tmp_13;
            _tmp_13 = grad_0_gt0[pp] * scratch_224[pp];
            double _tmp_14;
            _tmp_14 = scratch_157[pp] * scratch_85[pp];
            double _tmp_15;
            _tmp_15         = grad_2_gt0[pp] * scratch_224[pp];
            scratch_226[pp] = _tmp_15;
            double _tmp_16;
            _tmp_16 = grad_2_gt0[pp] * scratch_253[pp];
            double _tmp_17;
            _tmp_17 = 2 * gt0[pp];
            double _tmp_18;
            _tmp_18         = grad_2_gt0[pp] * scratch_106[pp];
            scratch_337[pp] = _tmp_3;
            double _tmp_19;
            _tmp_19 = grad_0_gt0[pp] * scratch_187[pp];
            double _tmp_20;
            _tmp_20 = grad_2_gt3[pp] * scratch_213[pp];
            double _tmp_21;
            _tmp_21 = scratch_18[pp] * scratch_253[pp];
            double _tmp_22;
            _tmp_22         = 2 * scratch_321[pp];
            scratch_392[pp] = _tmp_4;
            double _tmp_23;
            _tmp_23         = 2 * _tmp_2;
            scratch_88[pp]  = _tmp_5;
            scratch_373[pp] = _tmp_7;
            scratch_385[pp] = _tmp_8;
            scratch_118[pp] = _tmp_9;
            scratch_393[pp] = _tmp_10;
            scratch_50[pp]  = _tmp_11;
            scratch_44[pp]  = _tmp_12;
            double _tmp_24;
            _tmp_24 = grad_1_gt0[pp] * scratch_106[pp];
            double _tmp_25;
            _tmp_25         = scratch_106[pp] * scratch_54[pp];
            scratch_378[pp] = _tmp_13;
            _tmp_14         = _tmp_14 + scratch_286[pp];
            scratch_298[pp] = _tmp_15;
            double _tmp_26;
            _tmp_26 = grad_1_gt5[pp] * scratch_213[pp];
            double _tmp_27;
            _tmp_27 = grad_2_gt0[pp] * scratch_194[pp];
            double _tmp_28;
            _tmp_28         = scratch_157[pp] * scratch_18[pp];
            scratch_367[pp] = _tmp_28;
            double _tmp_29;
            _tmp_29         = scratch_213[pp] * scratch_69[pp];
            scratch_374[pp] = _tmp_16;
            double _tmp_30;
            _tmp_30         = grad_2_gt0[pp] * scratch_157[pp];
            scratch_398[pp] = _tmp_30;
            double _tmp_31;
            _tmp_31         = scratch_253[pp] * scratch_69[pp];
            scratch_278[pp] = _tmp_17;
            double _tmp_32;
            _tmp_32         = scratch_1[pp] * scratch_69[pp];
            scratch_312[pp] = _tmp_18;
            double _tmp_33;
            _tmp_33         = _tmp_3 + scratch_317[pp];
            scratch_290[pp] = _tmp_19;
            _tmp_21         = _tmp_20 + _tmp_21;
            _tmp_20         = scratch_253[pp] * scratch_9[pp];
            double _tmp_34;
            _tmp_34 = grad_1_gt0[pp] * scratch_168[pp];
            double _tmp_35;
            _tmp_35 = scratch_18[pp] * scratch_194[pp];
            double _tmp_36;
            _tmp_36 = scratch_195[pp] + scratch_197[pp];
            _tmp_22 = _tmp_22 + _tmp_4;
            _tmp_23 = _tmp_23 + _tmp_5;
            double _tmp_37;
            _tmp_37 = _tmp_6 + _tmp_7;
            _tmp_6  = _tmp_6 + _tmp_8;
            double _tmp_38;
            _tmp_38 = _tmp_10 + _tmp_9;
            double _tmp_39;
            _tmp_39         = _tmp_11 + _tmp_12;
            scratch_402[pp] = _tmp_24;
            double _tmp_40;
            _tmp_40 = grad_0_gt3[pp] * scratch_1[pp];
            _tmp_25 = _tmp_13 + _tmp_25;
            double _tmp_41;
            _tmp_41 = -scratch_168[pp] * scratch_80[pp];
            double _tmp_42;
            _tmp_42         = -scratch_179[pp] * scratch_76[pp];
            scratch_370[pp] = _tmp_14;
            double _tmp_43;
            _tmp_43         = _tmp_15 + scratch_267[pp];
            scratch_93[pp]  = _tmp_26;
            scratch_388[pp] = _tmp_27;
            double _tmp_44;
            _tmp_44 = _tmp_28 + scratch_329[pp];
            _tmp_29 = _tmp_16 + _tmp_29;
            double _tmp_45;
            _tmp_45 = scratch_213[pp] * scratch_9[pp];
            double _tmp_46;
            _tmp_46 = scratch_168[pp] * scratch_18[pp];
            _tmp_31 = _tmp_30 + _tmp_31;
            double _tmp_47;
            _tmp_47 = grad2_0_2_gt1[pp] * scratch_134[pp];
            double _tmp_48;
            _tmp_48 = grad2_2_2_gt1[pp] * scratch_236[pp];
            double _tmp_49;
            _tmp_49 = grad2_1_1_gt1[pp] * scratch_237[pp];
            double _tmp_50;
            _tmp_50 = grad2_0_0_gt1[pp] * scratch_170[pp];
            double _tmp_51;
            _tmp_51 = -grad2_1_2_gt1[pp] * scratch_263[pp];
            double _tmp_52;
            _tmp_52 = -grad2_0_1_gt1[pp] * scratch_261[pp];
            double _tmp_53;
            _tmp_53 = grad_1_Gt2[pp] * scratch_151[pp];
            double _tmp_54;
            _tmp_54 = grad_1_Gt1[pp] * scratch_47[pp];
            double _tmp_55;
            _tmp_55 = _tmp_17 * grad_1_Gt0[pp];
            double _tmp_56;
            _tmp_56 = grad_0_Gt2[pp] * scratch_234[pp];
            double _tmp_57;
            _tmp_57 = grad_0_Gt1[pp] * scratch_232[pp];
            double _tmp_58;
            _tmp_58 = grad_0_Gt0[pp] * scratch_47[pp];
            double _tmp_59;
            _tmp_59 = scratch_1[pp] * scratch_54[pp];
            double _tmp_60;
            _tmp_60 = grad_1_gt0[pp] * scratch_1[pp];
            double _tmp_61;
            _tmp_61 = grad_0_gt0[pp] * scratch_106[pp];
            _tmp_32 = _tmp_18 + _tmp_32;
            double _tmp_62;
            _tmp_62         = -grad_1_gt5[pp] * scratch_179[pp];
            scratch_396[pp] = _tmp_33;
            double _tmp_63;
            _tmp_63 = _tmp_19 + scratch_308[pp];
            double _tmp_64;
            _tmp_64         = scratch_18[pp] * scratch_1[pp];
            scratch_314[pp] = _tmp_21;
            scratch_57[pp]  = _tmp_20;
            scratch_400[pp] = _tmp_34;
            scratch_403[pp] = _tmp_35;
            scratch_258[pp] = _tmp_36;
            _tmp_22         = -_tmp_22 * scratch_201[pp];
            _tmp_23         = -_tmp_23 * scratch_174[pp];
            _tmp_37         = -_tmp_37 * scratch_172[pp];
            _tmp_6          = -_tmp_6 * scratch_172[pp];
            _tmp_38         = _tmp_38 * scratch_200[pp];
            _tmp_39         = _tmp_39 * scratch_165[pp];
            double _tmp_65;
            _tmp_65         = 2 * _tmp_24;
            scratch_380[pp] = _tmp_40;
            double _tmp_66;
            _tmp_66         = -scratch_1[pp] * scratch_80[pp];
            scratch_19[pp]  = _tmp_25;
            scratch_382[pp] = _tmp_41;
            _tmp_42         = _tmp_14 + _tmp_42;
            scratch_295[pp] = _tmp_43;
            double _tmp_67;
            _tmp_67         = _tmp_26 + _tmp_27;
            scratch_310[pp] = _tmp_44;
            scratch_365[pp] = _tmp_29;
            scratch_146[pp] = _tmp_45;
            scratch_364[pp] = _tmp_46;
            double _tmp_68;
            _tmp_68         = scratch_213[pp] * scratch_76[pp];
            scratch_363[pp] = _tmp_31;
            double _tmp_69;
            _tmp_69 = scratch_247[pp] * scratch_27[pp];
            double _tmp_70;
            _tmp_70 = grad_2_gt1[pp] * scratch_248[pp];
            double _tmp_71;
            _tmp_71 = grad_1_gt1[pp] * scratch_135[pp];
            double _tmp_72;
            _tmp_72         = grad_0_gt1[pp] * scratch_255[pp];
            scratch_331[pp] = _tmp_47;
            scratch_37[pp]  = _tmp_48;
            scratch_299[pp] = _tmp_49;
            scratch_375[pp] = _tmp_50;
            scratch_399[pp] = _tmp_51;
            scratch_368[pp] = _tmp_52;
            scratch_376[pp] = _tmp_53;
            scratch_390[pp] = _tmp_54;
            scratch_139[pp] = _tmp_55;
            scratch_383[pp] = _tmp_56;
            scratch_371[pp] = _tmp_57;
            scratch_366[pp] = _tmp_58;
            scratch_325[pp] = _tmp_59;
            scratch_309[pp] = _tmp_60;
            scratch_269[pp] = _tmp_61;
            scratch_391[pp] = _tmp_32;
            _tmp_62         = _tmp_33 + _tmp_62;
            scratch_241[pp] = _tmp_63;
            scratch_384[pp] = _tmp_64;
            double _tmp_73;
            _tmp_73 = _tmp_20 + _tmp_21;
            double _tmp_74;
            _tmp_74 = _tmp_11 + _tmp_34;
            double _tmp_75;
            _tmp_75 = _tmp_35 + scratch_256[pp];
            double _tmp_76;
            _tmp_76 = _tmp_36 + scratch_148[pp];
            double _tmp_77;
            _tmp_77 = scratch_293[pp] + scratch_315[pp] + scratch_350[pp];
            _tmp_39 = _tmp_22 + _tmp_23 + _tmp_37 + _tmp_38 + _tmp_39 + _tmp_6;
            _tmp_65 = _tmp_40 + _tmp_65;
            _tmp_66 = _tmp_25 + _tmp_66;
            _tmp_22 = _tmp_41 + scratch_78[pp];
            _tmp_23 = _tmp_43 + scratch_287[pp];
            scratch_296[pp] = _tmp_67;
            _tmp_37         = _tmp_44 + scratch_307[pp];
            _tmp_6          = scratch_149[pp] + scratch_348[pp];
            _tmp_38         = _tmp_29 + _tmp_45;
            double _tmp_78;
            _tmp_78 = _tmp_46 + _tmp_9;
            _tmp_68 = _tmp_31 + _tmp_68;
            _tmp_72 = _tmp_47 + _tmp_48 + _tmp_49 + _tmp_50 + _tmp_51 +
                      _tmp_52 + _tmp_53 + _tmp_54 + _tmp_55 + _tmp_56 +
                      _tmp_57 + _tmp_58 + _tmp_69 + _tmp_70 + _tmp_71 + _tmp_72;
            _tmp_69         = _tmp_59 + _tmp_60 + _tmp_61;
            _tmp_70         = _tmp_32 + scratch_336[pp];
            _tmp_71         = _tmp_63 + _tmp_64;
            _tmp_73         = _tmp_73 * scratch_165[pp];
            scratch_401[pp] = _tmp_73;
            _tmp_74         = _tmp_74 * scratch_165[pp];
            scratch_397[pp] = _tmp_74;
            _tmp_75         = _tmp_75 * scratch_200[pp];
            scratch_395[pp] = _tmp_75;
            _tmp_76         = _tmp_76 * scratch_200[pp];
            scratch_389[pp] = _tmp_76;
            _tmp_77         = -_tmp_77 * scratch_211[pp];
            scratch_387[pp] = _tmp_77;
            scratch_386[pp] = _tmp_39;
            _tmp_65         = _tmp_65 * scratch_165[pp];
            scratch_381[pp] = _tmp_65;
            _tmp_66         = _tmp_66 * scratch_165[pp];
            scratch_379[pp] = _tmp_66;
            _tmp_22         = -_tmp_22 * scratch_211[pp];
            scratch_377[pp] = _tmp_22;
            _tmp_42         = -_tmp_42 * scratch_200[pp];
            scratch_372[pp] = _tmp_42;
            _tmp_23         = _tmp_23 * scratch_200[pp];
            scratch_369[pp] = _tmp_23;
            double _tmp_79;
            _tmp_79         = _tmp_67 + scratch_272[pp];
            scratch_340[pp] = _tmp_79;
            _tmp_37         = -_tmp_37 * scratch_211[pp];
            scratch_318[pp] = _tmp_37;
            _tmp_6          = -_tmp_6 * scratch_201[pp];
            scratch_316[pp] = _tmp_6;
            _tmp_38         = -_tmp_38 * scratch_174[pp];
            scratch_304[pp] = _tmp_38;
            _tmp_78         = _tmp_78 * scratch_200[pp];
            scratch_282[pp] = _tmp_78;
            _tmp_68         = _tmp_68 * scratch_165[pp];
            scratch_281[pp] = _tmp_68;
            scratch_158[pp] = _tmp_72;
            _tmp_69         = -_tmp_69 * scratch_174[pp];
            scratch_147[pp] = _tmp_69;
            _tmp_70         = -_tmp_70 * scratch_172[pp];
            scratch_84[pp]  = _tmp_70;
            _tmp_62         = _tmp_62 * scratch_201[pp];
            scratch_51[pp]  = _tmp_62;
            _tmp_71         = -_tmp_71 * scratch_172[pp];
            scratch_24[pp]  = _tmp_71;
        }
    }
}

// --- Execution Unit 8 (ID: Comp0_Slice8) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_0[pp] * scratch_80[pp];
            double _tmp_1;
            _tmp_1 = scratch_253[pp] * scratch_85[pp];
            double _tmp_2;
            _tmp_2 = grad_1_gt0[pp] * scratch_0[pp];
            double _tmp_3;
            _tmp_3 = grad_0_gt0[pp] * scratch_115[pp];
            double _tmp_4;
            _tmp_4 = grad_2_gt5[pp] * scratch_213[pp];
            double _tmp_5;
            _tmp_5 = grad_0_gt0[pp] * scratch_3[pp];
            double _tmp_6;
            _tmp_6          = grad_2_gt0[pp] * scratch_115[pp];
            scratch_428[pp] = _tmp_0;
            double _tmp_7;
            _tmp_7 = scratch_179[pp] * scratch_18[pp];
            double _tmp_8;
            _tmp_8          = scratch_213[pp] * scratch_71[pp];
            scratch_406[pp] = _tmp_1;
            double _tmp_9;
            _tmp_9 = scratch_18[pp] * scratch_66[pp];
            double _tmp_10;
            _tmp_10         = scratch_141[pp] * scratch_9[pp];
            scratch_418[pp] = _tmp_2;
            scratch_443[pp] = _tmp_3;
            double _tmp_11;
            _tmp_11         = -scratch_179[pp] * scratch_85[pp];
            scratch_422[pp] = _tmp_4;
            double _tmp_12;
            _tmp_12 = grad_1_gt5[pp] * scratch_141[pp];
            double _tmp_13;
            _tmp_13 = scratch_0[pp] * scratch_18[pp];
            double _tmp_14;
            _tmp_14 = grad_1_gt0[pp] * scratch_66[pp];
            double _tmp_15;
            _tmp_15         = scratch_0[pp] * scratch_9[pp];
            scratch_429[pp] = _tmp_5;
            scratch_434[pp] = _tmp_6;
            double _tmp_16;
            _tmp_16 = scratch_66[pp] * scratch_80[pp];
            double _tmp_17;
            _tmp_17 = scratch_141[pp] * scratch_76[pp];
            double _tmp_18;
            _tmp_18         = -_tmp_0;
            scratch_408[pp] = _tmp_7;
            double _tmp_19;
            _tmp_19 = grad2_1_2_gt2[pp] * scratch_263[pp];
            double _tmp_20;
            _tmp_20 = grad2_0_1_gt2[pp] * scratch_261[pp];
            _tmp_8  = _tmp_1 + _tmp_8;
            double _tmp_21;
            _tmp_21 = -scratch_179[pp] * scratch_9[pp];
            double _tmp_22;
            _tmp_22 = -scratch_144[pp] * scratch_85[pp];
            _tmp_9  = _tmp_9 + scratch_353[pp];
            double _tmp_23;
            _tmp_23 = scratch_182[pp] + scratch_393[pp];
            double _tmp_24;
            _tmp_24 = scratch_179[pp] * scratch_49[pp];
            double _tmp_25;
            _tmp_25 = grad_0_gt5[pp] * scratch_213[pp];
            double _tmp_26;
            _tmp_26 = grad_2_gt0[pp] * scratch_179[pp];
            _tmp_10 = _tmp_10 + _tmp_2;
            double _tmp_27;
            _tmp_27 = scratch_0[pp] * scratch_54[pp];
            double _tmp_28;
            _tmp_28 = scratch_1[pp] * scratch_49[pp];
            double _tmp_29;
            _tmp_29 = 2 * _tmp_3;
            _tmp_11 = _tmp_11 + _tmp_4;
            _tmp_13 = _tmp_12 + _tmp_13;
            _tmp_15 = _tmp_14 + _tmp_15;
            _tmp_14 = scratch_0[pp] * scratch_69[pp];
            _tmp_12 = scratch_115[pp] * scratch_49[pp];
            double _tmp_30;
            _tmp_30 = _tmp_5 + _tmp_6;
            double _tmp_31;
            _tmp_31 = grad_0_gt5[pp] * scratch_1[pp];
            double _tmp_32;
            _tmp_32         = grad_2_gt0[pp] * scratch_144[pp];
            scratch_197[pp] = _tmp_16;
            double _tmp_33;
            _tmp_33 = -scratch_337[pp];
            double _tmp_34;
            _tmp_34 = scratch_144[pp] * scratch_18[pp];
            double _tmp_35;
            _tmp_35 = scratch_113[pp] + scratch_344[pp];
            _tmp_18 = _tmp_17 + _tmp_18;
            _tmp_17 = scratch_177[pp] * scratch_54[pp];
            double _tmp_36;
            _tmp_36 = _tmp_7 + scratch_93[pp];
            double _tmp_37;
            _tmp_37 = scratch_1[pp] * scratch_9[pp];
            double _tmp_38;
            _tmp_38 = scratch_290[pp] + scratch_336[pp];
            double _tmp_39;
            _tmp_39         = scratch_181[pp] + scratch_373[pp];
            scratch_350[pp] = _tmp_8;
            scratch_256[pp] = _tmp_21;
            scratch_432[pp] = _tmp_22;
            scratch_414[pp] = _tmp_9;
            double _tmp_40;
            _tmp_40 = 2 * scratch_250[pp];
            double _tmp_41;
            _tmp_41         = 2 * scratch_195[pp];
            scratch_436[pp] = _tmp_23;
            scratch_430[pp] = _tmp_24;
            scratch_438[pp] = _tmp_25;
            scratch_416[pp] = _tmp_26;
            scratch_417[pp] = _tmp_10;
            scratch_437[pp] = _tmp_27;
            scratch_409[pp] = _tmp_28;
            double _tmp_42;
            _tmp_42         = scratch_144[pp] * scratch_49[pp];
            scratch_427[pp] = _tmp_11;
            double _tmp_43;
            _tmp_43         = scratch_54[pp] * scratch_66[pp];
            scratch_413[pp] = _tmp_13;
            scratch_439[pp] = _tmp_15;
            scratch_407[pp] = _tmp_14;
            scratch_405[pp] = _tmp_12;
            scratch_286[pp] = _tmp_31;
            double _tmp_44;
            _tmp_44         = 2 * scratch_359[pp];
            scratch_308[pp] = _tmp_32;
            double _tmp_45;
            _tmp_45         = -_tmp_16;
            scratch_267[pp] = _tmp_33;
            scratch_419[pp] = _tmp_34;
            scratch_444[pp] = _tmp_18;
            scratch_435[pp] = _tmp_17;
            double _tmp_46;
            _tmp_46         = scratch_194[pp] * scratch_49[pp];
            scratch_431[pp] = _tmp_46;
            scratch_307[pp] = _tmp_36;
            scratch_442[pp] = _tmp_37;
            scratch_232[pp] = _tmp_39;
            double _tmp_47;
            _tmp_47 = grad_2_Gt0[pp] * scratch_278[pp];
            double _tmp_48;
            _tmp_48 = grad_0_Gt2[pp] * scratch_209[pp];
            double _tmp_49;
            _tmp_49 = grad2_0_2_gt2[pp] * scratch_134[pp];
            double _tmp_50;
            _tmp_50 = grad2_2_2_gt2[pp] * scratch_236[pp];
            double _tmp_51;
            _tmp_51 = grad2_1_1_gt2[pp] * scratch_237[pp];
            double _tmp_52;
            _tmp_52 = grad2_0_0_gt2[pp] * scratch_170[pp];
            double _tmp_53;
            _tmp_53 = scratch_247[pp] * scratch_89[pp];
            double _tmp_54;
            _tmp_54 = grad_2_gt2[pp] * scratch_248[pp];
            double _tmp_55;
            _tmp_55 = grad_1_gt2[pp] * scratch_135[pp];
            double _tmp_56;
            _tmp_56 = grad_0_gt2[pp] * scratch_255[pp];
            double _tmp_57;
            _tmp_57 = grad_0_Gt1[pp] * scratch_234[pp];
            double _tmp_58;
            _tmp_58 = grad_2_Gt2[pp] * scratch_151[pp];
            double _tmp_59;
            _tmp_59 = grad_0_Gt0[pp] * scratch_151[pp];
            double _tmp_60;
            _tmp_60         = grad_2_Gt1[pp] * scratch_47[pp];
            _tmp_19         = -_tmp_19;
            scratch_421[pp] = _tmp_19;
            _tmp_20         = -_tmp_20;
            scratch_411[pp] = _tmp_20;
            double _tmp_61;
            _tmp_61 = _tmp_21 + _tmp_8;
            double _tmp_62;
            _tmp_62 = _tmp_22 + scratch_214[pp] + scratch_254[pp];
            double _tmp_63;
            _tmp_63 = _tmp_9 + scratch_15[pp];
            _tmp_40 = _tmp_40 + scratch_362[pp];
            double _tmp_64;
            _tmp_64 = scratch_218[pp] + scratch_262[pp] + scratch_403[pp];
            _tmp_41 = _tmp_41 + scratch_202[pp];
            double _tmp_65;
            _tmp_65 = _tmp_23 + scratch_205[pp];
            double _tmp_66;
            _tmp_66 = _tmp_24 + _tmp_25 + _tmp_26;
            double _tmp_67;
            _tmp_67 = _tmp_10 + _tmp_27;
            double _tmp_68;
            _tmp_68 = _tmp_28 + _tmp_29;
            _tmp_42 = _tmp_11 + _tmp_42;
            _tmp_43 = _tmp_13 + _tmp_43;
            double _tmp_69;
            _tmp_69 = _tmp_14 + _tmp_15;
            double _tmp_70;
            _tmp_70 = _tmp_12 + _tmp_30;
            _tmp_30 = _tmp_30 + _tmp_31;
            _tmp_44 = _tmp_32 + _tmp_44;
            double _tmp_71;
            _tmp_71 = scratch_280[pp] + scratch_311[pp] + scratch_392[pp];
            _tmp_45 = _tmp_45 + scratch_342[pp] + scratch_360[pp];
            double _tmp_72;
            _tmp_72 = _tmp_33 + scratch_271[pp];
            double _tmp_73;
            _tmp_73 = _tmp_34 + scratch_173[pp];
            double _tmp_74;
            _tmp_74 = _tmp_35 + scratch_96[pp];
            _tmp_35 = _tmp_35 + scratch_189[pp];
            double _tmp_75;
            _tmp_75 = scratch_288[pp] + scratch_305[pp] + scratch_388[pp];
            double _tmp_76;
            _tmp_76 = _tmp_17 + _tmp_18;
            double _tmp_77;
            _tmp_77 = _tmp_36 + _tmp_46;
            double _tmp_78;
            _tmp_78 = _tmp_37 + _tmp_38;
            _tmp_38 = _tmp_38 + scratch_332[pp];
            double _tmp_79;
            _tmp_79 = _tmp_39 + scratch_162[pp];
            _tmp_60 = _tmp_19 + _tmp_20 + _tmp_47 + _tmp_48 + _tmp_49 +
                      _tmp_50 + _tmp_51 + _tmp_52 + _tmp_53 + _tmp_54 +
                      _tmp_55 + _tmp_56 + _tmp_57 + _tmp_58 + _tmp_59 + _tmp_60;
            _tmp_47         = grad_2_gt0[pp] * scratch_1[pp];
            _tmp_62         = -_tmp_62 * scratch_201[pp];
            _tmp_63         = -_tmp_63 * scratch_201[pp];
            _tmp_40         = -_tmp_40 * scratch_201[pp];
            _tmp_64         = -_tmp_64 * scratch_211[pp];
            _tmp_41         = -_tmp_41 * scratch_211[pp];
            _tmp_65         = -_tmp_65 * scratch_211[pp];
            _tmp_66         = -_tmp_66 * scratch_174[pp];
            _tmp_67         = -_tmp_67 * scratch_174[pp];
            _tmp_68         = -_tmp_68 * scratch_174[pp];
            _tmp_42         = -_tmp_42 * scratch_172[pp];
            _tmp_43         = -_tmp_43 * scratch_172[pp];
            _tmp_69         = -_tmp_69 * scratch_172[pp];
            _tmp_70         = -_tmp_70 * scratch_172[pp];
            _tmp_30         = -_tmp_30 * scratch_172[pp];
            _tmp_44         = -_tmp_44 * scratch_172[pp];
            _tmp_71         = _tmp_71 * scratch_200[pp];
            _tmp_45         = _tmp_45 * scratch_200[pp];
            _tmp_72         = _tmp_72 * scratch_200[pp];
            _tmp_73         = _tmp_73 * scratch_200[pp];
            _tmp_74         = _tmp_74 * scratch_200[pp];
            _tmp_35         = _tmp_35 * scratch_200[pp];
            _tmp_75         = _tmp_75 * scratch_165[pp];
            _tmp_76         = _tmp_76 * scratch_165[pp];
            _tmp_77         = _tmp_77 * scratch_165[pp];
            _tmp_78         = _tmp_78 * scratch_165[pp];
            _tmp_38         = _tmp_38 * scratch_165[pp];
            _tmp_79         = _tmp_79 * scratch_165[pp];
            scratch_440[pp] = _tmp_60;
            _tmp_48         = -scratch_172[pp] * scratch_340[pp];
            _tmp_61         = _tmp_61 * scratch_172[pp];
            scratch_410[pp] = _tmp_61;
            _tmp_49         = -4 * grad_2_gt2[pp];
            scratch_441[pp] = _tmp_47;
            _tmp_50         = 3 * scratch_52[pp];
            _tmp_79         = _tmp_30 + _tmp_35 + _tmp_38 + _tmp_40 + _tmp_41 +
                      _tmp_42 + _tmp_43 + _tmp_44 + _tmp_45 + _tmp_60 +
                      _tmp_62 + _tmp_63 + _tmp_64 + _tmp_65 + _tmp_66 +
                      _tmp_67 + _tmp_68 + _tmp_69 + _tmp_70 + _tmp_71 +
                      _tmp_72 + _tmp_73 + _tmp_74 + _tmp_75 + _tmp_76 +
                      _tmp_77 + _tmp_78 + _tmp_79;
            _tmp_48 = _tmp_48 + _tmp_61 + scratch_147[pp] + scratch_158[pp] +
                      scratch_24[pp] + scratch_281[pp] + scratch_282[pp] +
                      scratch_304[pp] + scratch_316[pp] + scratch_318[pp] +
                      scratch_369[pp] + scratch_372[pp] + scratch_377[pp] +
                      scratch_379[pp] + scratch_381[pp] + scratch_386[pp] +
                      scratch_387[pp] + scratch_389[pp] + scratch_395[pp] +
                      scratch_397[pp] + scratch_401[pp] + scratch_51[pp] +
                      scratch_84[pp];
            _tmp_62         = grad_2_gt0[pp] + scratch_81[pp];
            _tmp_49         = _tmp_49 + grad_0_gt5[pp];
            _tmp_29         = _tmp_29 + _tmp_47;
            scratch_423[pp] = _tmp_50;
            scratch_287[pp] = _tmp_79;
            scratch_404[pp] = _tmp_48;
            scratch_433[pp] = _tmp_62;
            scratch_415[pp] = _tmp_49;
            _tmp_29         = -_tmp_29 * scratch_172[pp];
            scratch_425[pp] = _tmp_29;
            _tmp_63         = scratch_354[pp] * scratch_95[pp];
            scratch_424[pp] = _tmp_63;
            _tmp_40         = _tmp_50 * _tmp_79;
            scratch_329[pp] = _tmp_40;
            _tmp_64         = scratch_100[pp] * scratch_97[pp];
            scratch_317[pp] = _tmp_64;
            _tmp_41         = -_tmp_48 * scratch_355[pp];
            scratch_412[pp] = _tmp_41;
            _tmp_65         = -_tmp_62 * scratch_233[pp] * scratch_30[pp];
            scratch_426[pp] = _tmp_65;
            _tmp_66         = _tmp_49 * scratch_179[pp] * scratch_201[pp];
            scratch_420[pp] = _tmp_66;
        }
    }
}

// --- Execution Unit 9 (ID: Comp0_Slice9) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = 2 * scratch_141[pp];
            double _tmp_1;
            _tmp_1 = scratch_141[pp] * scratch_69[pp];
            double _tmp_2;
            _tmp_2 = 2 * scratch_213[pp];
            double _tmp_3;
            _tmp_3 = scratch_142[pp] * scratch_54[pp];
            double _tmp_4;
            _tmp_4 = _tmp_0 * scratch_18[pp];
            double _tmp_5;
            _tmp_5 = 2 * scratch_418[pp];
            double _tmp_6;
            _tmp_6 = 4 * grad_1_gt1[pp];
            double _tmp_7;
            _tmp_7 = -grad_0_gt3[pp];
            double _tmp_8;
            _tmp_8 = 2 * scratch_406[pp];
            double _tmp_9;
            _tmp_9 = -scratch_142[pp] * scratch_69[pp];
            double _tmp_10;
            _tmp_10 = 2 * scratch_428[pp];
            double _tmp_11;
            _tmp_11 = 2 * scratch_385[pp];
            double _tmp_12;
            _tmp_12 = scratch_253[pp] * scratch_49[pp];
            double _tmp_13;
            _tmp_13         = 2 * scratch_269[pp];
            _tmp_0          = -_tmp_0 * scratch_80[pp];
            scratch_209[pp] = _tmp_3;
            double _tmp_14;
            _tmp_14 = 2 * scratch_88[pp];
            _tmp_4  = _tmp_4 + scratch_437[pp];
            _tmp_5  = _tmp_1 + _tmp_5;
            double _tmp_15;
            _tmp_15 = grad_1_gt0[pp] + scratch_74[pp];
            double _tmp_16;
            _tmp_16 = scratch_277[pp] + scratch_41[pp];
            _tmp_7  = _tmp_6 + _tmp_7;
            _tmp_6  = grad_2_gt1[pp] + scratch_343[pp] + scratch_45[pp];
            double _tmp_17;
            _tmp_17 = -_tmp_2 * scratch_85[pp];
            double _tmp_18;
            _tmp_18 = 2 * scratch_416[pp];
            double _tmp_19;
            _tmp_19 = 2 * scratch_441[pp];
            _tmp_8  = _tmp_8 + scratch_256[pp];
            _tmp_10 = _tmp_10 + _tmp_9;
            _tmp_9  = 2 * scratch_408[pp];
            double _tmp_20;
            _tmp_20 = 2 * scratch_336[pp];
            double _tmp_21;
            _tmp_21         = 2 * scratch_312[pp];
            _tmp_11         = _tmp_11 + scratch_162[pp];
            _tmp_2          = _tmp_2 * scratch_18[pp];
            scratch_397[pp] = _tmp_12;
            double _tmp_22;
            _tmp_22         = 2 * scratch_374[pp];
            scratch_395[pp] = _tmp_13;
            double _tmp_23;
            _tmp_23 = 2 * scratch_309[pp];
            _tmp_0  = _tmp_0 + _tmp_3;
            _tmp_14 = _tmp_14 + scratch_306[pp];
            _tmp_4  = _tmp_4 * scratch_172[pp];
            _tmp_5  = _tmp_5 * scratch_172[pp];
            _tmp_15 = _tmp_15 * scratch_136[pp] * scratch_30[pp];
            _tmp_16 = _tmp_16 * scratch_0[pp] * scratch_201[pp];
            _tmp_7  = _tmp_7 * scratch_142[pp] * scratch_211[pp];
            double _tmp_24;
            _tmp_24 = grad2_1_2_gt0[pp] * scratch_263[pp];
            double _tmp_25;
            _tmp_25 = grad2_0_1_gt0[pp] * scratch_261[pp];
            double _tmp_26;
            _tmp_26 = -scratch_229[pp];
            double _tmp_27;
            _tmp_27         = scratch_142[pp] * scratch_71[pp];
            scratch_52[pp]  = _tmp_6;
            _tmp_17         = _tmp_17 + scratch_430[pp];
            _tmp_18         = _tmp_18 + scratch_438[pp];
            _tmp_19         = _tmp_19 + scratch_443[pp];
            _tmp_9          = _tmp_9 + scratch_305[pp];
            _tmp_20         = _tmp_20 + scratch_312[pp];
            _tmp_21         = _tmp_21 + scratch_336[pp];
            scratch_288[pp] = _tmp_11;
            _tmp_2          = _tmp_12 + _tmp_2;
            _tmp_22         = _tmp_22 + scratch_146[pp];
            double _tmp_28;
            _tmp_28         = _tmp_13 + scratch_309[pp];
            _tmp_23         = _tmp_23 + scratch_269[pp];
            scratch_452[pp] = _tmp_0;
            scratch_147[pp] = _tmp_14;
            double _tmp_29;
            _tmp_29 = -scratch_141[pp] * scratch_71[pp];
            double _tmp_30;
            _tmp_30 = scratch_142[pp] * scratch_69[pp];
            _tmp_26 = _tmp_26 + scratch_414[pp];
            double _tmp_31;
            _tmp_31         = -scratch_0[pp] * scratch_76[pp];
            scratch_271[pp] = _tmp_27;
            double _tmp_32;
            _tmp_32 = scratch_301[pp] + scratch_436[pp];
            double _tmp_33;
            _tmp_33 = scratch_407[pp] + scratch_413[pp];
            double _tmp_34;
            _tmp_34 = -_tmp_6 * scratch_211[pp] * scratch_253[pp];
            double _tmp_35;
            _tmp_35 = -scratch_1[pp] * scratch_219[pp] * scratch_40[pp];
            double _tmp_36;
            _tmp_36         = 4 * grad_0_Gt0[pp] * gt0[pp];
            scratch_353[pp] = _tmp_36;
            double _tmp_37;
            _tmp_37 = -scratch_333[pp] * scratch_434[pp];
            double _tmp_38;
            _tmp_38         = -scratch_140[pp] * scratch_402[pp];
            _tmp_17         = -_tmp_17 * scratch_172[pp];
            _tmp_18         = -_tmp_18 * scratch_172[pp];
            _tmp_19         = -_tmp_19 * scratch_172[pp];
            _tmp_8          = -_tmp_8 * scratch_200[pp];
            scratch_447[pp] = _tmp_8;
            _tmp_10         = -_tmp_10 * scratch_200[pp];
            scratch_214[pp] = _tmp_10;
            double _tmp_39;
            _tmp_39 = grad_0_Gt1[pp] * scratch_279[pp];
            double _tmp_40;
            _tmp_40 = grad2_0_2_gt0[pp] * scratch_134[pp];
            double _tmp_41;
            _tmp_41 = grad2_2_2_gt0[pp] * scratch_236[pp];
            double _tmp_42;
            _tmp_42 = grad2_1_1_gt0[pp] * scratch_237[pp];
            double _tmp_43;
            _tmp_43 = grad2_0_0_gt0[pp] * scratch_170[pp];
            double _tmp_44;
            _tmp_44 = grad_0_Gt2[pp] * scratch_352[pp];
            double _tmp_45;
            _tmp_45 = scratch_247[pp] * scratch_61[pp];
            _tmp_9  = _tmp_9 * scratch_200[pp];
            _tmp_20 = _tmp_20 * scratch_200[pp];
            _tmp_21 = _tmp_21 * scratch_200[pp];
            double _tmp_46;
            _tmp_46 = _tmp_11 * scratch_200[pp];
            _tmp_2  = _tmp_2 * scratch_165[pp];
            _tmp_22 = _tmp_22 * scratch_165[pp];
            _tmp_28 = _tmp_28 * scratch_165[pp];
            _tmp_23 = _tmp_23 * scratch_165[pp];
            double _tmp_47;
            _tmp_47 = _tmp_0 * scratch_165[pp];
            double _tmp_48;
            _tmp_48 = _tmp_14 * scratch_165[pp];
            double _tmp_49;
            _tmp_49 = grad_2_gt0[pp] * scratch_248[pp];
            double _tmp_50;
            _tmp_50 = grad_1_gt0[pp] * scratch_135[pp];
            double _tmp_51;
            _tmp_51         = grad_0_gt0[pp] * scratch_255[pp];
            _tmp_4          = -_tmp_4;
            scratch_446[pp] = _tmp_4;
            _tmp_5          = -_tmp_5;
            scratch_379[pp] = _tmp_5;
            _tmp_15         = -_tmp_15;
            scratch_280[pp] = _tmp_15;
            _tmp_16         = -_tmp_16;
            scratch_377[pp] = _tmp_16;
            _tmp_7          = -_tmp_7;
            scratch_311[pp] = _tmp_7;
            _tmp_24         = -_tmp_24;
            scratch_95[pp]  = _tmp_24;
            _tmp_25         = -_tmp_25;
            scratch_448[pp] = _tmp_25;
            _tmp_29         = _tmp_29 + scratch_439[pp];
            double _tmp_52;
            _tmp_52         = scratch_166[pp] + scratch_302[pp];
            scratch_389[pp] = _tmp_30;
            double _tmp_53;
            _tmp_53 = -scratch_106[pp] * scratch_85[pp];
            _tmp_1  = _tmp_1 + scratch_417[pp];
            _tmp_26 = _tmp_26 * scratch_201[pp];
            _tmp_31 = _tmp_27 + _tmp_31 + scratch_197[pp];
            double _tmp_54;
            _tmp_54 = 2 * scratch_438[pp];
            double _tmp_55;
            _tmp_55 = scratch_232[pp] + scratch_394[pp];
            _tmp_32 = _tmp_32 * scratch_211[pp];
            _tmp_33 = _tmp_33 * scratch_172[pp];
            _tmp_51 = _tmp_10 + _tmp_15 + _tmp_16 + _tmp_17 + _tmp_18 +
                      _tmp_19 + _tmp_2 + _tmp_20 + _tmp_21 + _tmp_22 + _tmp_23 +
                      _tmp_24 + _tmp_25 + _tmp_28 + _tmp_34 + _tmp_35 +
                      _tmp_36 + _tmp_37 + _tmp_38 + _tmp_39 + _tmp_4 + _tmp_40 +
                      _tmp_41 + _tmp_42 + _tmp_43 + _tmp_44 + _tmp_45 +
                      _tmp_46 + _tmp_47 + _tmp_48 + _tmp_49 + _tmp_5 + _tmp_50 +
                      _tmp_51 + _tmp_7 + _tmp_8 + _tmp_9 + scratch_420[pp] +
                      scratch_425[pp] + scratch_426[pp];
            _tmp_34         = 2 * scratch_262[pp];
            _tmp_35         = scratch_326[pp] + scratch_392[pp];
            _tmp_29         = _tmp_29 * scratch_172[pp];
            _tmp_37         = _tmp_30 + scratch_444[pp];
            scratch_453[pp] = _tmp_53;
            _tmp_1          = _tmp_1 * scratch_174[pp];
            _tmp_38         = 2 * scratch_434[pp];
            _tmp_17 = scratch_308[pp] + scratch_359[pp] + scratch_422[pp];
            _tmp_18 = scratch_305[pp] + scratch_307[pp];
            _tmp_19 = scratch_148[pp] + scratch_195[pp] + scratch_202[pp];
            _tmp_54 = _tmp_54 + scratch_416[pp];
            scratch_381[pp] = _tmp_55;
            _tmp_39         = scratch_359[pp] + scratch_427[pp];
            _tmp_40         = -scratch_1[pp] * scratch_85[pp];
            _tmp_41 = scratch_290[pp] + scratch_332[pp] + scratch_384[pp];
            _tmp_42 = scratch_260[pp] + scratch_432[pp];
            scratch_304[pp] = _tmp_51;
            _tmp_34         = _tmp_34 + scratch_403[pp];
            _tmp_43 = scratch_312[pp] + scratch_336[pp] + scratch_442[pp];
            scratch_354[pp] = _tmp_35;
            _tmp_44         = _tmp_52 + scratch_419[pp];
            _tmp_45         = scratch_348[pp] + scratch_96[pp];
            _tmp_9  = scratch_409[pp] + scratch_441[pp] + scratch_443[pp];
            _tmp_20 = scratch_296[pp] + scratch_305[pp];
            _tmp_21 = scratch_250[pp] + scratch_361[pp] + scratch_362[pp];
            scratch_173[pp] = _tmp_37;
            _tmp_46         = _tmp_53 + scratch_113[pp] + scratch_189[pp];
            _tmp_52         = _tmp_52 + scratch_267[pp];
            _tmp_38         = _tmp_38 + scratch_286[pp];
            _tmp_26         = -_tmp_26;
            scratch_451[pp] = _tmp_26;
            _tmp_17         = -_tmp_17 * scratch_172[pp];
            scratch_449[pp] = _tmp_17;
            _tmp_18         = _tmp_18 * scratch_165[pp];
            scratch_445[pp] = _tmp_18;
            _tmp_19         = -_tmp_19 * scratch_211[pp];
            scratch_401[pp] = _tmp_19;
            _tmp_31         = -_tmp_31 * scratch_200[pp];
            scratch_100[pp] = _tmp_31;
            _tmp_54         = -_tmp_54 * scratch_174[pp];
            scratch_369[pp] = _tmp_54;
            _tmp_2          = _tmp_55 * scratch_165[pp];
            scratch_342[pp] = _tmp_2;
            _tmp_32         = -_tmp_32;
            scratch_316[pp] = _tmp_32;
            _tmp_39         = -_tmp_39 * scratch_172[pp];
            scratch_282[pp] = _tmp_39;
            _tmp_33         = -_tmp_33;
            scratch_281[pp] = _tmp_33;
            _tmp_40         = _tmp_40 + scratch_405[pp] + scratch_429[pp];
            scratch_278[pp] = _tmp_40;
            _tmp_41         = _tmp_41 * scratch_165[pp];
            scratch_218[pp] = _tmp_41;
            _tmp_42         = -_tmp_42 * scratch_201[pp];
            scratch_182[pp] = _tmp_42;
            _tmp_22         = _tmp_51 * scratch_320[pp] * scratch_58[pp];
            scratch_93[pp]  = _tmp_22;
            _tmp_34         = -_tmp_34 * scratch_211[pp];
            scratch_15[pp]  = _tmp_34;
            _tmp_43         = _tmp_43 * scratch_165[pp];
            scratch_455[pp] = _tmp_43;
            _tmp_28         = _tmp_35 * scratch_200[pp];
            scratch_450[pp] = _tmp_28;
            _tmp_29         = -_tmp_29;
            scratch_387[pp] = _tmp_29;
            _tmp_44         = _tmp_44 * scratch_200[pp];
            scratch_340[pp] = _tmp_44;
            _tmp_45         = _tmp_45 * scratch_200[pp];
            scratch_337[pp] = _tmp_45;
            _tmp_9          = -_tmp_9 * scratch_174[pp];
            scratch_318[pp] = _tmp_9;
            _tmp_20         = _tmp_20 * scratch_165[pp];
            scratch_254[pp] = _tmp_20;
            _tmp_21         = -_tmp_21 * scratch_201[pp];
            scratch_233[pp] = _tmp_21;
            _tmp_23         = _tmp_37 * scratch_165[pp];
            scratch_97[pp]  = _tmp_23;
            _tmp_46         = _tmp_46 * scratch_200[pp];
            scratch_84[pp]  = _tmp_46;
            _tmp_1          = -_tmp_1;
            scratch_454[pp] = _tmp_1;
            _tmp_52         = _tmp_52 * scratch_200[pp];
            scratch_81[pp]  = _tmp_52;
            _tmp_38         = -_tmp_38 * scratch_172[pp];
            scratch_24[pp]  = _tmp_38;
        }
    }
}

// --- Execution Unit 10 (ID: Comp0_Slice10) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = scratch_162[pp] + scratch_389[pp];
            double _tmp_1;
            _tmp_1 = scratch_224[pp] * scratch_85[pp];
            double _tmp_2;
            _tmp_2 = -scratch_271[pp];
            double _tmp_3;
            _tmp_3 = scratch_168[pp] * scratch_69[pp];
            double _tmp_4;
            _tmp_4 = scratch_205[pp] + scratch_301[pp];
            double _tmp_5;
            _tmp_5 = 2 * scratch_252[pp];
            double _tmp_6;
            _tmp_6 = scratch_175[pp] + scratch_302[pp];
            double _tmp_7;
            _tmp_7          = scratch_130[pp] + scratch_33[pp];
            scratch_166[pp] = _tmp_1;
            double _tmp_8;
            _tmp_8 = scratch_180[pp] + scratch_262[pp];
            double _tmp_9;
            _tmp_9 = scratch_145[pp] + scratch_53[pp] + scratch_73[pp];
            double _tmp_10;
            _tmp_10 = _tmp_0 + scratch_181[pp];
            _tmp_2  = _tmp_2 + scratch_292[pp];
            double _tmp_11;
            _tmp_11 = scratch_326[pp] + scratch_360[pp];
            double _tmp_12;
            _tmp_12 = -scratch_396[pp];
            double _tmp_13;
            _tmp_13 = 2 * scratch_344[pp];
            double _tmp_14;
            _tmp_14 = 2 * scratch_293[pp];
            double _tmp_15;
            _tmp_15 = -scratch_350[pp];
            double _tmp_16;
            _tmp_16 = -scratch_370[pp];
            double _tmp_17;
            _tmp_17         = -scratch_335[pp];
            scratch_134[pp] = _tmp_4;
            double _tmp_18;
            _tmp_18 = scratch_168[pp] * scratch_54[pp];
            double _tmp_19;
            _tmp_19 = scratch_157[pp] * scratch_49[pp];
            double _tmp_20;
            _tmp_20 = 2 * scratch_294[pp];
            double _tmp_21;
            _tmp_21         = -scratch_341[pp];
            scratch_113[pp] = _tmp_5;
            double _tmp_22;
            _tmp_22 = 2 * scratch_305[pp];
            double _tmp_23;
            _tmp_23 = -scratch_168[pp] * scratch_71[pp];
            double _tmp_24;
            _tmp_24 = 2 * scratch_191[pp];
            double _tmp_25;
            _tmp_25 = -_tmp_1;
            _tmp_9  = -_tmp_9 * scratch_201[pp];
            _tmp_10 = -_tmp_10 * scratch_174[pp];
            _tmp_2  = -_tmp_2 * scratch_172[pp];
            _tmp_11 = -_tmp_11 * scratch_172[pp];
            double _tmp_26;
            _tmp_26 = scratch_321[pp] + scratch_360[pp] + scratch_392[pp];
            _tmp_12 = _tmp_12 + scratch_150[pp];
            _tmp_13 = _tmp_13 + scratch_149[pp];
            double _tmp_27;
            _tmp_27 = scratch_274[pp] + scratch_338[pp] + scratch_382[pp];
            double _tmp_28;
            _tmp_28 = scratch_310[pp] + scratch_323[pp];
            _tmp_14 = _tmp_14 + scratch_315[pp];
            double _tmp_29;
            _tmp_29 = scratch_209[pp] + scratch_306[pp] + scratch_88[pp];
            double _tmp_30;
            _tmp_30 = scratch_365[pp] + scratch_397[pp];
            double _tmp_31;
            _tmp_31 = scratch_325[pp] + scratch_395[pp];
            double _tmp_32;
            _tmp_32 = scratch_385[pp] + scratch_394[pp] + scratch_435[pp];
            _tmp_15 = _tmp_15 + scratch_431[pp];
            double _tmp_33;
            _tmp_33 = scratch_290[pp] + scratch_391[pp];
            _tmp_0  = _tmp_0 + scratch_373[pp];
            double _tmp_34;
            _tmp_34 = scratch_334[pp] + scratch_388[pp];
            double _tmp_35;
            _tmp_35 = scratch_241[pp] + scratch_312[pp];
            double _tmp_36;
            _tmp_36 = scratch_180[pp] + scratch_403[pp] + scratch_75[pp];
            double _tmp_37;
            _tmp_37 = _tmp_3 + scratch_159[pp] + scratch_393[pp];
            _tmp_17 = _tmp_16 + _tmp_17;
            _tmp_16 = _tmp_4 + scratch_364[pp];
            double _tmp_38;
            _tmp_38 = scratch_258[pp] + scratch_298[pp];
            double _tmp_39;
            _tmp_39 = scratch_195[pp] + scratch_295[pp];
            _tmp_18 = _tmp_18 + scratch_44[pp] + scratch_72[pp];
            double _tmp_40;
            _tmp_40 = scratch_378[pp] + scratch_380[pp] + scratch_402[pp];
            _tmp_19 = _tmp_19 + scratch_314[pp];
            double _tmp_41;
            _tmp_41 = scratch_363[pp] + scratch_57[pp];
            _tmp_20 = _tmp_20 + scratch_400[pp];
            double _tmp_42;
            _tmp_42 = scratch_19[pp] + scratch_402[pp];
            _tmp_21 = _tmp_21 + scratch_251[pp];
            double _tmp_43;
            _tmp_43 = scratch_284[pp] + scratch_86[pp];
            double _tmp_44;
            _tmp_44 = scratch_239[pp] + scratch_265[pp] + scratch_297[pp];
            double _tmp_45;
            _tmp_45 = scratch_330[pp] + scratch_358[pp];
            double _tmp_46;
            _tmp_46 = _tmp_5 + scratch_231[pp];
            _tmp_22 = _tmp_22 + scratch_272[pp];
            double _tmp_47;
            _tmp_47 = scratch_312[pp] + scratch_327[pp];
            double _tmp_48;
            _tmp_48 = scratch_163[pp] + scratch_453[pp];
            double _tmp_49;
            _tmp_49 = _tmp_6 + scratch_324[pp];
            _tmp_6  = _tmp_6 + scratch_164[pp];
            double _tmp_50;
            _tmp_50 = scratch_137[pp] + scratch_344[pp];
            double _tmp_51;
            _tmp_51 = _tmp_7 + scratch_228[pp];
            _tmp_23 = _tmp_23 + scratch_138[pp];
            _tmp_24 = _tmp_24 + scratch_285[pp];
            _tmp_25 = _tmp_25 + scratch_152[pp];
            double _tmp_52;
            _tmp_52 = scratch_56[pp] + scratch_77[pp];
            _tmp_7  = _tmp_7 + scratch_67[pp];
            double _tmp_53;
            _tmp_53 = _tmp_8 + scratch_75[pp];
            double _tmp_54;
            _tmp_54 = scratch_167[pp] + scratch_298[pp];
            _tmp_3  = _tmp_3 + scratch_155[pp];
            double _tmp_55;
            _tmp_55 = scratch_161[pp] + scratch_301[pp];
            double _tmp_56;
            _tmp_56        = scratch_148[pp] + scratch_300[pp];
            _tmp_8         = _tmp_8 + scratch_171[pp];
            _tmp_11        = _tmp_10 + _tmp_11 + _tmp_2 + _tmp_9;
            _tmp_26        = -_tmp_26 * scratch_201[pp];
            _tmp_12        = -_tmp_12 * scratch_201[pp];
            _tmp_13        = -_tmp_13 * scratch_201[pp];
            _tmp_27        = -_tmp_27 * scratch_211[pp];
            _tmp_28        = -_tmp_28 * scratch_211[pp];
            _tmp_14        = -_tmp_14 * scratch_211[pp];
            _tmp_29        = -_tmp_29 * scratch_174[pp];
            _tmp_30        = -_tmp_30 * scratch_174[pp];
            _tmp_31        = -_tmp_31 * scratch_174[pp];
            _tmp_32        = -_tmp_32 * scratch_172[pp];
            _tmp_15        = -_tmp_15 * scratch_172[pp];
            _tmp_33        = -_tmp_33 * scratch_172[pp];
            _tmp_0         = -_tmp_0 * scratch_172[pp];
            _tmp_34        = -_tmp_34 * scratch_172[pp];
            _tmp_35        = -_tmp_35 * scratch_172[pp];
            _tmp_36        = _tmp_36 * scratch_200[pp];
            _tmp_37        = _tmp_37 * scratch_200[pp];
            _tmp_17        = _tmp_17 * scratch_200[pp];
            _tmp_16        = _tmp_16 * scratch_200[pp];
            _tmp_38        = _tmp_38 * scratch_200[pp];
            _tmp_39        = _tmp_39 * scratch_200[pp];
            _tmp_18        = _tmp_18 * scratch_165[pp];
            _tmp_40        = _tmp_40 * scratch_165[pp];
            _tmp_19        = _tmp_19 * scratch_165[pp];
            _tmp_41        = _tmp_41 * scratch_165[pp];
            _tmp_20        = _tmp_20 * scratch_165[pp];
            _tmp_42        = _tmp_42 * scratch_165[pp];
            _tmp_21        = -_tmp_21 * scratch_201[pp];
            _tmp_43        = -_tmp_43 * scratch_201[pp];
            _tmp_44        = -_tmp_44 * scratch_211[pp];
            _tmp_45        = -_tmp_45 * scratch_211[pp];
            _tmp_46        = -_tmp_46 * scratch_211[pp];
            _tmp_22        = -_tmp_22 * scratch_174[pp];
            _tmp_47        = -_tmp_47 * scratch_174[pp];
            _tmp_48        = -_tmp_48 * scratch_172[pp];
            _tmp_49        = -_tmp_49 * scratch_172[pp];
            _tmp_6         = -_tmp_6 * scratch_172[pp];
            _tmp_50        = -_tmp_50 * scratch_172[pp];
            _tmp_51        = _tmp_51 * scratch_200[pp];
            _tmp_23        = _tmp_23 * scratch_200[pp];
            _tmp_24        = _tmp_24 * scratch_200[pp];
            _tmp_25        = _tmp_25 * scratch_200[pp];
            _tmp_52        = _tmp_52 * scratch_200[pp];
            _tmp_7         = _tmp_7 * scratch_200[pp];
            _tmp_53        = _tmp_53 * scratch_165[pp];
            _tmp_54        = _tmp_54 * scratch_165[pp];
            _tmp_3         = _tmp_3 * scratch_165[pp];
            _tmp_55        = _tmp_55 * scratch_165[pp];
            _tmp_56        = _tmp_56 * scratch_165[pp];
            _tmp_8         = _tmp_8 * scratch_165[pp];
            scratch_74[pp] = _tmp_11;
            _tmp_9         = -scratch_172[pp] * scratch_278[pp];
            _tmp_42 = _tmp_0 + _tmp_12 + _tmp_13 + _tmp_14 + _tmp_15 + _tmp_16 +
                      _tmp_17 + _tmp_18 + _tmp_19 + _tmp_20 + _tmp_26 +
                      _tmp_27 + _tmp_28 + _tmp_29 + _tmp_30 + _tmp_31 +
                      _tmp_32 + _tmp_33 + _tmp_34 + _tmp_35 + _tmp_36 +
                      _tmp_37 + _tmp_38 + _tmp_39 + _tmp_40 + _tmp_41 +
                      _tmp_42 + scratch_158[pp];
            _tmp_8 = _tmp_11 + _tmp_21 + _tmp_22 + _tmp_23 + _tmp_24 + _tmp_25 +
                     _tmp_3 + _tmp_43 + _tmp_44 + _tmp_45 + _tmp_46 + _tmp_47 +
                     _tmp_48 + _tmp_49 + _tmp_50 + _tmp_51 + _tmp_52 + _tmp_53 +
                     _tmp_54 + _tmp_55 + _tmp_56 + _tmp_6 + _tmp_7 + _tmp_8 +
                     scratch_220[pp];
            _tmp_9 = _tmp_9 + scratch_100[pp] + scratch_15[pp] +
                     scratch_182[pp] + scratch_218[pp] + scratch_233[pp] +
                     scratch_24[pp] + scratch_254[pp] + scratch_281[pp] +
                     scratch_282[pp] + scratch_316[pp] + scratch_318[pp] +
                     scratch_337[pp] + scratch_340[pp] + scratch_342[pp] +
                     scratch_369[pp] + scratch_387[pp] + scratch_401[pp] +
                     scratch_440[pp] + scratch_445[pp] + scratch_449[pp] +
                     scratch_450[pp] + scratch_451[pp] + scratch_454[pp] +
                     scratch_455[pp] + scratch_81[pp] + scratch_84[pp] +
                     scratch_97[pp];
            scratch_170[pp] = _tmp_42;
            scratch_189[pp] = _tmp_8;
            scratch_146[pp] = _tmp_9;
            _tmp_21         = 0.66666666666666663 * gt0[pp];
            _tmp_43         = 2 * alpha[pp];
            _tmp_44         = 1.3333333333333333 * grad_0_beta0[pp];
            _tmp_45         = 0.66666666666666663 * grad_0_beta0[pp];
            _tmp_46         = 0.66666666666666663 * grad_1_beta1[pp];
            _tmp_22         = 1.3333333333333333 * grad_2_beta2[pp];
            _tmp_47         = -_tmp_42 * scratch_355[pp];
            _tmp_48         = -_tmp_8 * scratch_328[pp];
            _tmp_49         = _tmp_9 * scratch_423[pp];
            _tmp_6          = -8 * scratch_94[pp];
            scratch_45[pp]  = _tmp_43;
            scratch_96[pp]  = _tmp_44;
            scratch_197[pp] = _tmp_45;
            scratch_136[pp] = _tmp_46;
            scratch_40[pp]  = _tmp_22;
            _tmp_6 = _tmp_47 + _tmp_48 + _tmp_49 + _tmp_6 + scratch_127[pp] +
                     scratch_184[pp] + scratch_196[pp] + scratch_266[pp] +
                     scratch_303[pp] + scratch_317[pp] + scratch_329[pp] +
                     scratch_347[pp] + scratch_351[pp] + scratch_412[pp] +
                     scratch_424[pp] + scratch_93[pp];
            _tmp_47 = dx_i * dx_i;
            _tmp_48 = -_tmp_21 * grad_2_beta2[pp];
            _tmp_21 = -_tmp_21 * grad_1_beta1[pp];
            _tmp_49 = -At0[pp] * _tmp_43;
            _tmp_50 = beta2[pp] * grad_2_gt0[pp];
            _tmp_51 = beta1[pp] * grad_1_gt0[pp];
            _tmp_23 = beta0[pp] * grad_0_gt0[pp];
            _tmp_24 = grad_0_beta2[pp] * scratch_151[pp];
            _tmp_25 = grad_0_beta1[pp] * scratch_47[pp];
            _tmp_52 = _tmp_44 * gt0[pp];
            _tmp_7  = -_tmp_45 * gt5[pp];
            _tmp_53 = -_tmp_46 * gt5[pp];
            _tmp_54 = -At5[pp] * _tmp_43;
            _tmp_3  = beta2[pp] * grad_2_gt5[pp];
            _tmp_55 = beta1[pp] * grad_1_gt5[pp];
            _tmp_56 = beta0[pp] * grad_0_gt5[pp];
            _tmp_26 = _tmp_22 * gt5[pp];
            _tmp_12 = grad_2_beta1[pp] * scratch_234[pp];
            _tmp_13 = grad_2_beta0[pp] * scratch_151[pp];
            _tmp_47 = -BSSN_CAHD_C * _tmp_47 * _tmp_6 * scratch_111[pp] *
                      scratch_128[pp];
            _tmp_6  = beta2[pp] * grad_2_chi[pp];
            _tmp_52 = _tmp_21 + _tmp_23 + _tmp_24 + _tmp_25 + _tmp_48 +
                      _tmp_49 + _tmp_50 + _tmp_51 + _tmp_52;
            gt_rhs00[pp]    = _tmp_52;
            _tmp_48         = beta0[pp] * grad_0_Gt0[pp];
            scratch_202[pp] = _tmp_48;
            _tmp_21         = beta1[pp] * grad_1_Gt0[pp];
            scratch_41[pp]  = _tmp_21;
            _tmp_13 = _tmp_12 + _tmp_13 + _tmp_26 + _tmp_3 + _tmp_53 + _tmp_54 +
                      _tmp_55 + _tmp_56 + _tmp_7;
            gt_rhs22[pp] = _tmp_13;
            _tmp_6 = _tmp_47 + _tmp_6 + scratch_102[pp] + scratch_119[pp] +
                     scratch_129[pp] + scratch_99[pp];
            chi_rhs[pp]     = _tmp_6;
            _tmp_47         = beta2[pp] * grad_2_Gt0[pp];
            scratch_229[pp] = _tmp_47;
        }
    }
}

// --- Execution Unit 11 (ID: Comp0_Slice11) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0          = 9 * scratch_10[pp];
            scratch_151[pp] = _tmp_0;
            double _tmp_1;
            _tmp_1 = 4 * grad_0_K[pp];
            double _tmp_2;
            _tmp_2 = 4 * grad_2_K[pp];
            double _tmp_3;
            _tmp_3 = _tmp_0 * scratch_28[pp];
            double _tmp_4;
            _tmp_4 = 4 * grad_1_K[pp];
            double _tmp_5;
            _tmp_5 = 2 * grad_1_alpha[pp];
            double _tmp_6;
            _tmp_6 = 2 * grad_2_alpha[pp];
            double _tmp_7;
            _tmp_7          = 2 * grad_0_alpha[pp];
            scratch_94[pp]  = _tmp_1;
            scratch_159[pp] = _tmp_2;
            scratch_73[pp]  = _tmp_3;
            scratch_56[pp]  = _tmp_4;
            scratch_84[pp]  = _tmp_5;
            scratch_152[pp] = _tmp_6;
            scratch_175[pp] = _tmp_7;
            double _tmp_8;
            _tmp_8 = 2 * At2[pp];
            double _tmp_9;
            _tmp_9 = 2 * scratch_2[pp];
            double _tmp_10;
            _tmp_10 = 2 * At1[pp];
            double _tmp_11;
            _tmp_11 = 1.0 / (scratch_5[pp] * scratch_5[pp] * scratch_5[pp]);
            double _tmp_12;
            _tmp_12 = 0.5 * scratch_248[pp];
            double _tmp_13;
            _tmp_13 = 0.5 * scratch_255[pp];
            double _tmp_14;
            _tmp_14 = 0.5 * scratch_135[pp];
            double _tmp_15;
            _tmp_15 = 9 * grad_0_chi[pp] * scratch_103[pp] * scratch_10[pp] *
                      scratch_2[pp];
            double _tmp_16;
            _tmp_16 = -_tmp_1 * scratch_13[pp];
            double _tmp_17;
            _tmp_17 = scratch_125[pp] * scratch_2[pp];
            double _tmp_18;
            _tmp_18 = 9 * grad_2_chi[pp] * scratch_10[pp] * scratch_17[pp] *
                      scratch_2[pp];
            double _tmp_19;
            _tmp_19 = -_tmp_2 * scratch_7[pp];
            double _tmp_20;
            _tmp_20 = _tmp_3 * scratch_101[pp];
            double _tmp_21;
            _tmp_21 = _tmp_4 * scratch_16[pp];
            double _tmp_22;
            _tmp_22 = 0.33333333333333331 * scratch_58[pp];
            double _tmp_23;
            _tmp_23 = 0.33333333333333331 * scratch_65[pp];
            double _tmp_24;
            _tmp_24 = 2.3333333333333335 * scratch_65[pp];
            double _tmp_25;
            _tmp_25 = _tmp_5 * scratch_30[pp];
            double _tmp_26;
            _tmp_26 = _tmp_6 * scratch_30[pp];
            double _tmp_27;
            _tmp_27 = _tmp_7 * scratch_30[pp];
            double _tmp_28;
            _tmp_28 = -At5[pp] * scratch_34[pp];
            double _tmp_29;
            _tmp_29         = -scratch_124[pp];
            scratch_181[pp] = _tmp_29;
            scratch_93[pp]  = _tmp_8;
            double _tmp_30;
            _tmp_30 = -At2[pp] * scratch_13[pp];
            double _tmp_31;
            _tmp_31 = At4[pp] * scratch_16[pp];
            double _tmp_32;
            _tmp_32        = -scratch_117[pp];
            scratch_67[pp] = _tmp_9;
            double _tmp_33;
            _tmp_33 = -At4[pp] * scratch_31[pp];
            double _tmp_34;
            _tmp_34         = At2[pp] * scratch_16[pp];
            scratch_75[pp]  = _tmp_10;
            scratch_158[pp] = _tmp_11;
            scratch_119[pp] = _tmp_12;
            scratch_171[pp] = _tmp_13;
            scratch_72[pp]  = _tmp_14;
            _tmp_16         = _tmp_15 + _tmp_16;
            scratch_81[pp]  = _tmp_17;
            _tmp_19         = _tmp_18 + _tmp_19;
            _tmp_21         = _tmp_20 + _tmp_21;
            scratch_19[pp]  = _tmp_23;
            scratch_57[pp]  = _tmp_24;
            scratch_180[pp] = _tmp_25;
            scratch_148[pp] = _tmp_26;
            scratch_24[pp]  = _tmp_27;
            _tmp_20         = -grad_1_chi[pp] * scratch_26[pp];
            _tmp_18         = grad_2_chi[pp] * scratch_34[pp];
            _tmp_15         = grad_0_chi[pp] * scratch_7[pp];
            _tmp_28         = _tmp_28 + _tmp_29 + scratch_109[pp];
            double _tmp_35;
            _tmp_35 = _tmp_8 * scratch_2[pp];
            _tmp_32 = _tmp_30 + _tmp_31 + _tmp_32;
            _tmp_30 = At0[pp] * _tmp_9;
            _tmp_34 = _tmp_33 + _tmp_34 + scratch_23[pp];
            _tmp_33 = _tmp_10 * scratch_2[pp];
            _tmp_31 =
                -2 * _tmp_11 * alpha[pp] * scratch_187[pp] * scratch_25[pp];
            double _tmp_36;
            _tmp_36 =
                -2 * _tmp_11 * alpha[pp] * scratch_101[pp] * scratch_106[pp];
            double _tmp_37;
            _tmp_37 =
                -2 * _tmp_11 * alpha[pp] * scratch_115[pp] * scratch_17[pp];
            double _tmp_38;
            _tmp_38 = -_tmp_11 * alpha[pp] * scratch_3[pp] * scratch_91[pp];
            double _tmp_39;
            _tmp_39 = -_tmp_11 * alpha[pp] * scratch_224[pp] * scratch_8[pp];
            double _tmp_40;
            _tmp_40 = -_tmp_11 * alpha[pp] * scratch_103[pp] * scratch_1[pp];
            double _tmp_41;
            _tmp_41 = -0.33333333333333331 * grad2_1_2_beta2[pp] *
                      scratch_16[pp] * scratch_2[pp];
            double _tmp_42;
            _tmp_42 = -0.33333333333333331 * grad2_1_1_beta1[pp] *
                      scratch_16[pp] * scratch_2[pp];
            double _tmp_43;
            _tmp_43 = -0.33333333333333331 * scratch_126[pp] * scratch_215[pp] *
                      scratch_30[pp];
            double _tmp_44;
            _tmp_44 = -2.3333333333333335 * grad2_0_1_beta0[pp] *
                      scratch_16[pp] * scratch_2[pp];
            double _tmp_45;
            _tmp_45 = -2 * grad2_1_2_beta0[pp] * scratch_26[pp] * scratch_2[pp];
            double _tmp_46;
            _tmp_46 = 1.3333333333333333 * grad2_0_0_beta0[pp] * scratch_58[pp];
            double _tmp_47;
            _tmp_47 = -beta2[pp] * grad_2_Gt0[pp];
            double _tmp_48;
            _tmp_48 = -beta1[pp] * grad_1_Gt0[pp];
            double _tmp_49;
            _tmp_49 = -beta0[pp] * grad_0_Gt0[pp];
            double _tmp_50;
            _tmp_50 = _tmp_12 * grad_2_beta0[pp];
            double _tmp_51;
            _tmp_51 = _tmp_13 * grad_0_beta0[pp];
            double _tmp_52;
            _tmp_52 = _tmp_14 * grad_1_beta0[pp];
            _tmp_16 = _tmp_16 * _tmp_17;
            _tmp_19 = _tmp_17 * _tmp_19;
            _tmp_21 = _tmp_17 * _tmp_21;
            double _tmp_53;
            _tmp_53 = _tmp_22 * grad2_0_2_beta2[pp];
            _tmp_22 = _tmp_22 * grad2_0_1_beta1[pp];
            double _tmp_54;
            _tmp_54 = _tmp_23 * grad2_2_2_beta2[pp];
            double _tmp_55;
            _tmp_55 = _tmp_23 * grad2_1_2_beta1[pp];
            double _tmp_56;
            _tmp_56 = _tmp_24 * grad2_0_2_beta0[pp];
            double _tmp_57;
            _tmp_57 = grad2_2_2_beta0[pp] * scratch_55[pp];
            double _tmp_58;
            _tmp_58 = grad2_1_1_beta0[pp] * scratch_64[pp];
            double _tmp_59;
            _tmp_59 = _tmp_25 * scratch_101[pp];
            double _tmp_60;
            _tmp_60 = _tmp_26 * scratch_17[pp];
            double _tmp_61;
            _tmp_61         = _tmp_27 * scratch_103[pp];
            _tmp_15         = _tmp_15 + _tmp_18 + _tmp_20;
            _tmp_20         = 0.33333333333333331 * gt4[pp];
            _tmp_18         = 0.33333333333333331 * gt2[pp];
            scratch_127[pp] = _tmp_28;
            scratch_77[pp]  = _tmp_35;
            scratch_167[pp] = _tmp_32;
            scratch_53[pp]  = _tmp_30;
            scratch_164[pp] = _tmp_34;
            scratch_128[pp] = _tmp_33;
            double _tmp_62;
            _tmp_62 = beta2[pp] * grad_2_B0[pp];
            double _tmp_63;
            _tmp_63 = beta1[pp] * grad_1_B0[pp];
            double _tmp_64;
            _tmp_64 = beta0[pp] * grad_0_B0[pp];
            _tmp_61 = _tmp_16 + _tmp_19 + _tmp_21 + _tmp_22 + _tmp_31 +
                      _tmp_36 + _tmp_37 + _tmp_38 + _tmp_39 + _tmp_40 +
                      _tmp_41 + _tmp_42 + _tmp_43 + _tmp_44 + _tmp_45 +
                      _tmp_46 + _tmp_47 + _tmp_48 + _tmp_49 + _tmp_50 +
                      _tmp_51 + _tmp_52 + _tmp_53 + _tmp_54 + _tmp_55 +
                      _tmp_56 + _tmp_57 + _tmp_58 + _tmp_59 + _tmp_60 + _tmp_61;
            scratch_129[pp] = _tmp_15;
            _tmp_31         = 0.33333333333333331 * At2[pp];
            _tmp_36         = -At2[pp] * K[pp];
            _tmp_37         = _tmp_28 * _tmp_35;
            _tmp_38         = _tmp_30 * _tmp_32;
            _tmp_39         = _tmp_33 * _tmp_34;
            _tmp_40        = scratch_202[pp] + scratch_229[pp] + scratch_41[pp];
            _tmp_64        = _tmp_62 + _tmp_63 + _tmp_64;
            _tmp_62        = -_tmp_15;
            _tmp_63        = -gt4[pp] * scratch_197[pp];
            _tmp_41        = -At4[pp] * scratch_45[pp];
            _tmp_42        = grad_2_beta1[pp] * gt3[pp];
            _tmp_43        = grad_2_beta0[pp] * gt1[pp];
            _tmp_44        = grad_1_beta2[pp] * gt5[pp];
            _tmp_45        = grad_1_beta0[pp] * gt2[pp];
            _tmp_46        = beta2[pp] * grad_2_gt4[pp];
            _tmp_47        = beta1[pp] * grad_1_gt4[pp];
            _tmp_48        = beta0[pp] * grad_0_gt4[pp];
            _tmp_49        = _tmp_20 * grad_2_beta2[pp];
            _tmp_20        = _tmp_20 * grad_1_beta1[pp];
            _tmp_50        = -gt2[pp] * scratch_136[pp];
            _tmp_51        = -At2[pp] * scratch_45[pp];
            _tmp_52        = grad_2_beta1[pp] * gt1[pp];
            _tmp_16        = grad_2_beta0[pp] * gt0[pp];
            _tmp_19        = grad_0_beta2[pp] * gt5[pp];
            _tmp_21        = grad_0_beta1[pp] * gt4[pp];
            _tmp_53        = beta2[pp] * grad_2_gt2[pp];
            _tmp_22        = beta1[pp] * grad_1_gt2[pp];
            _tmp_54        = beta0[pp] * grad_0_gt2[pp];
            _tmp_55        = _tmp_18 * grad_2_beta2[pp];
            _tmp_18        = _tmp_18 * grad_0_beta0[pp];
            _tmp_39        = _tmp_36 + _tmp_37 + _tmp_38 + _tmp_39;
            _tmp_40        = -_tmp_40 * lambda[3];
            _tmp_36        = -B0[pp] * eta[pp];
            _tmp_64        = _tmp_64 * lambda[2];
            _tmp_61        = -_tmp_61;
            Gt_rhs0[pp]    = _tmp_61;
            scratch_97[pp] = _tmp_62;
            _tmp_20        = _tmp_20 + _tmp_41 + _tmp_42 + _tmp_43 + _tmp_44 +
                      _tmp_45 + _tmp_46 + _tmp_47 + _tmp_48 + _tmp_49 + _tmp_63;
            gt_rhs12[pp]    = _tmp_20;
            _tmp_63         = _tmp_31 * grad_2_beta2[pp];
            scratch_149[pp] = _tmp_63;
            _tmp_41         = beta0[pp] * grad_0_At2[pp];
            scratch_145[pp] = _tmp_41;
            _tmp_42         = At0[pp] * grad_2_beta0[pp];
            scratch_86[pp]  = _tmp_42;
            _tmp_43         = beta2[pp] * grad_2_At2[pp];
            scratch_15[pp]  = _tmp_43;
            _tmp_18         = _tmp_16 + _tmp_18 + _tmp_19 + _tmp_21 + _tmp_22 +
                      _tmp_50 + _tmp_51 + _tmp_52 + _tmp_53 + _tmp_54 + _tmp_55;
            gt_rhs02[pp]    = _tmp_18;
            _tmp_39         = -_tmp_39 * alpha[pp];
            scratch_130[pp] = _tmp_39;
            _tmp_50         = -scratch_26[pp] * scratch_2[pp] * scratch_69[pp];
            scratch_88[pp]  = _tmp_50;
            _tmp_61         = _tmp_36 + _tmp_40 + _tmp_61 + _tmp_64;
            B_rhs0[pp]      = _tmp_61;
            _tmp_40         = beta1[pp] * grad_1_At2[pp];
            scratch_163[pp] = _tmp_40;
            _tmp_36         = At4[pp] * grad_0_beta1[pp];
            scratch_162[pp] = _tmp_36;
            _tmp_64         = -At2[pp] * scratch_136[pp];
            scratch_137[pp] = _tmp_64;
            _tmp_51         = _tmp_62 * scratch_2[pp];
            scratch_102[pp] = _tmp_51;
            _tmp_52         = scratch_198[pp] * scratch_2[pp];
            scratch_44[pp]  = _tmp_52;
            _tmp_16         = scratch_206[pp] * scratch_2[pp];
            scratch_161[pp] = _tmp_16;
            _tmp_31         = _tmp_31 * grad_0_beta0[pp];
            scratch_150[pp] = _tmp_31;
            _tmp_19         = At5[pp] * grad_0_beta2[pp];
            scratch_99[pp]  = _tmp_19;
        }
    }
}

// --- Execution Unit 12 (ID: Comp0_Slice12) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = -grad_1_chi[pp] * scratch_16[pp];
            double _tmp_1;
            _tmp_1 = grad_0_chi[pp] * scratch_13[pp];
            double _tmp_2;
            _tmp_2          = grad_2_chi[pp] * scratch_7[pp];
            _tmp_2          = _tmp_0 + _tmp_1 + _tmp_2;
            _tmp_0          = -grad_1_chi[pp] * scratch_31[pp];
            scratch_206[pp] = _tmp_2;
            _tmp_0          = _tmp_0 + scratch_4[pp];
            _tmp_1          = -_tmp_2;
            double _tmp_3;
            _tmp_3 = _tmp_0 * scratch_2[pp];
            double _tmp_4;
            _tmp_4 = _tmp_1 * scratch_2[pp];
            double _tmp_5;
            _tmp_5 = -gt4[pp] * scratch_102[pp];
            double _tmp_6;
            _tmp_6 = -_tmp_3 * gt4[pp];
            double _tmp_7;
            _tmp_7 = -_tmp_4 * gt1[pp];
            double _tmp_8;
            _tmp_8 = -_tmp_3 * gt1[pp];
            double _tmp_9;
            _tmp_9 = -gt2[pp] * scratch_102[pp];
            double _tmp_10;
            _tmp_10 = -_tmp_4 * gt2[pp];
            _tmp_5  = _tmp_5 + grad_1_chi[pp];
            _tmp_6  = _tmp_6 + grad_2_chi[pp];
            _tmp_7  = _tmp_7 + grad_1_chi[pp];
            _tmp_8  = _tmp_8 + grad_0_chi[pp];
            _tmp_9  = _tmp_9 + grad_0_chi[pp];
            _tmp_10 = _tmp_10 + grad_2_chi[pp];
            double _tmp_11;
            _tmp_11 = -grad_2_gt3[pp] * scratch_26[pp] * scratch_2[pp];
            _tmp_5  = _tmp_5 * scratch_10[pp];
            double _tmp_12;
            _tmp_12 = scratch_156[pp] * scratch_2[pp];
            double _tmp_13;
            _tmp_13 = scratch_169[pp] * scratch_2[pp];
            double _tmp_14;
            _tmp_14 = -_tmp_1 * gt4[pp] * scratch_10[pp];
            _tmp_6  = -_tmp_6 * scratch_10[pp];
            double _tmp_15;
            _tmp_15 = -scratch_133[pp] * scratch_2[pp];
            double _tmp_16;
            _tmp_16 = -grad_0_gt3[pp] * scratch_16[pp] * scratch_2[pp];
            _tmp_7  = _tmp_7 * scratch_10[pp];
            double _tmp_17;
            _tmp_17 = scratch_105[pp] * scratch_2[pp];
            double _tmp_18;
            _tmp_18 = scratch_123[pp] * scratch_2[pp];
            double _tmp_19;
            _tmp_19 = -scratch_26[pp] * scratch_2[pp] * scratch_9[pp];
            double _tmp_20;
            _tmp_20 = -grad_1_gt0[pp] * scratch_16[pp] * scratch_2[pp];
            _tmp_8  = _tmp_8 * scratch_10[pp];
            double _tmp_21;
            _tmp_21         = scratch_154[pp] * scratch_2[pp];
            scratch_102[pp] = -gt5[pp] * scratch_102[pp];
            _tmp_3          = -_tmp_3 * gt3[pp];
            _tmp_4          = -_tmp_4 * gt0[pp];
            _tmp_9          = _tmp_9 * scratch_10[pp];
            double _tmp_22;
            _tmp_22 = -scratch_16[pp] * scratch_2[pp] * scratch_69[pp];
            _tmp_10 = _tmp_10 * scratch_10[pp];
            double _tmp_23;
            _tmp_23 = scratch_107[pp] * scratch_2[pp];
            double _tmp_24;
            _tmp_24 = scratch_114[pp] * scratch_2[pp];
            double _tmp_25;
            _tmp_25         = _tmp_0 * scratch_89[pp];
            _tmp_13         = _tmp_11 + _tmp_12 + _tmp_13 + _tmp_5;
            _tmp_14         = _tmp_14 + scratch_190[pp];
            _tmp_11         = scratch_175[pp] * scratch_2[pp];
            _tmp_15         = _tmp_15 + _tmp_6 + scratch_20[pp];
            _tmp_18         = _tmp_16 + _tmp_17 + _tmp_18 + _tmp_7;
            _tmp_21         = _tmp_19 + _tmp_20 + _tmp_21 + _tmp_8;
            _tmp_19         = scratch_27[pp] * scratch_97[pp];
            _tmp_20         = -scratch_208[pp];
            _tmp_8          = -scratch_216[pp];
            _tmp_16         = scratch_152[pp] * scratch_2[pp];
            scratch_102[pp] = scratch_102[pp] + scratch_63[pp];
            _tmp_3          = _tmp_3 + scratch_60[pp];
            _tmp_4          = _tmp_4 + scratch_62[pp];
            _tmp_9 = _tmp_9 + scratch_161[pp] + scratch_44[pp] + scratch_88[pp];
            _tmp_24         = _tmp_10 + _tmp_22 + _tmp_23 + _tmp_24;
            _tmp_25         = _tmp_25 + scratch_0[pp];
            _tmp_22         = scratch_2[pp] * scratch_84[pp];
            scratch_1[pp]   = _tmp_13;
            scratch_228[pp] = _tmp_14;
            scratch_191[pp] = _tmp_15;
            scratch_182[pp] = _tmp_18;
            scratch_109[pp] = _tmp_21;
            _tmp_8          = _tmp_19 + _tmp_20 + _tmp_8 + scratch_21[pp];
            _tmp_19         = -scratch_2[pp] * scratch_7[pp] * scratch_85[pp];
            scratch_102[pp] = scratch_102[pp] * scratch_10[pp];
            _tmp_20         = scratch_183[pp] * scratch_2[pp];
            _tmp_10         = scratch_153[pp] * scratch_2[pp];
            _tmp_23         = -_tmp_1 * gt5[pp] * scratch_10[pp];
            _tmp_7          = _tmp_0 * scratch_82[pp];
            _tmp_17         = -scratch_26[pp] * scratch_2[pp] * scratch_76[pp];
            _tmp_3          = _tmp_3 * scratch_10[pp];
            _tmp_6          = scratch_14[pp] * scratch_2[pp];
            _tmp_5          = scratch_131[pp] * scratch_2[pp];
            _tmp_4          = _tmp_4 * scratch_10[pp];
            _tmp_12         = scratch_212[pp] * scratch_2[pp];
            double _tmp_26;
            _tmp_26 = scratch_219[pp] * scratch_2[pp];
            double _tmp_27;
            _tmp_27 = -scratch_68[pp];
            double _tmp_28;
            _tmp_28         = -gt0[pp] * scratch_10[pp] * scratch_97[pp];
            _tmp_0          = _tmp_0 * scratch_61[pp];
            scratch_117[pp] = _tmp_24;
            double _tmp_29;
            _tmp_29 = -_tmp_13 * scratch_152[pp];
            double _tmp_30;
            _tmp_30 = -_tmp_11 * _tmp_14;
            double _tmp_31;
            _tmp_31 = _tmp_15 * scratch_84[pp];
            double _tmp_32;
            _tmp_32 = -4 * grad2_1_2_alpha[pp];
            double _tmp_33;
            _tmp_33 = -_tmp_18 * scratch_175[pp];
            double _tmp_34;
            _tmp_34 = -_tmp_21 * scratch_84[pp];
            _tmp_8  = _tmp_16 * _tmp_8;
            double _tmp_35;
            _tmp_35         = -4 * grad2_0_1_alpha[pp];
            _tmp_10         = _tmp_10 + _tmp_19 + _tmp_20 + scratch_102[pp];
            _tmp_23         = _tmp_23 + scratch_112[pp];
            _tmp_7          = _tmp_7 + scratch_66[pp];
            _tmp_5          = _tmp_17 + _tmp_3 + _tmp_5 + _tmp_6;
            _tmp_17         = scratch_87[pp] * scratch_97[pp];
            _tmp_1          = _tmp_1 * scratch_87[pp];
            _tmp_27         = _tmp_12 + _tmp_26 + _tmp_27 + _tmp_4;
            _tmp_28         = _tmp_28 + scratch_259[pp];
            _tmp_0          = _tmp_0 + scratch_141[pp];
            _tmp_4          = -_tmp_9 * scratch_152[pp];
            _tmp_12         = -_tmp_24 * scratch_175[pp];
            _tmp_26         = _tmp_22 * _tmp_25;
            _tmp_3          = -4 * grad2_0_2_alpha[pp];
            _tmp_32         = _tmp_29 + _tmp_30 + _tmp_31 + _tmp_32;
            _tmp_35         = _tmp_33 + _tmp_34 + _tmp_35 + _tmp_8;
            scratch_218[pp] = _tmp_10;
            scratch_106[pp] = _tmp_23;
            scratch_215[pp] = _tmp_7;
            scratch_3[pp]   = _tmp_5;
            _tmp_17         = _tmp_17 + scratch_157[pp];
            _tmp_1          = _tmp_1 + scratch_224[pp];
            scratch_198[pp] = _tmp_27;
            scratch_196[pp] = _tmp_28;
            scratch_209[pp] = _tmp_0;
            _tmp_3          = _tmp_12 + _tmp_26 + _tmp_3 + _tmp_4;
            _tmp_4          = alpha[pp] * scratch_189[pp];
            _tmp_12         = alpha[pp] * scratch_322[pp];
            _tmp_26         = alpha[pp] * scratch_404[pp];
            _tmp_33         = alpha[pp] * scratch_170[pp];
            _tmp_34         = -_tmp_10 * scratch_152[pp];
            _tmp_8          = -_tmp_11 * _tmp_23;
            _tmp_29         = _tmp_22 * _tmp_7;
            _tmp_30         = alpha[pp] * scratch_42[pp];
            _tmp_31         = -4 * grad2_2_2_alpha[pp];
            _tmp_6          = -_tmp_5 * scratch_84[pp];
            _tmp_17         = _tmp_16 * _tmp_17;
            _tmp_11         = _tmp_1 * _tmp_11;
            _tmp_1          = alpha[pp] * scratch_176[pp];
            _tmp_19         = -4 * grad2_1_1_alpha[pp];
            scratch_102[pp] = -_tmp_27 * scratch_175[pp];
            _tmp_16         = -_tmp_16 * _tmp_28;
            _tmp_22         = _tmp_0 * _tmp_22;
            _tmp_20         = alpha[pp] * scratch_304[pp];
            double _tmp_36;
            _tmp_36 = -4 * grad2_0_0_alpha[pp];
            double _tmp_37;
            _tmp_37 = alpha[pp] * scratch_146[pp];
            double _tmp_38;
            _tmp_38 = alpha[pp] * scratch_287[pp];
            _tmp_4  = _tmp_32 + _tmp_4;
            _tmp_32 = _tmp_12 + _tmp_32;
            _tmp_26 = _tmp_26 + _tmp_35;
            _tmp_35 = _tmp_33 + _tmp_35;
            _tmp_31 = _tmp_29 + _tmp_30 + _tmp_31 + _tmp_34 + _tmp_8;
            _tmp_19 = _tmp_1 + _tmp_11 + _tmp_17 + _tmp_19 + _tmp_6;
            _tmp_36 = _tmp_16 + _tmp_20 + _tmp_22 + _tmp_36 + scratch_102[pp];
            _tmp_37 = _tmp_3 + _tmp_37;
            _tmp_3  = _tmp_3 + _tmp_38;
            _tmp_38 = -scratch_46[pp] * scratch_85[pp];
            scratch_102[pp] = grad_2_gt0[pp] * scratch_112[pp];
            _tmp_16         = grad_0_gt5[pp] * scratch_46[pp];
            _tmp_22         = 6 * grad_1_alpha[pp];
            _tmp_4          = -_tmp_4 * scratch_26[pp];
            _tmp_32         = -_tmp_32 * scratch_26[pp];
            _tmp_26         = -_tmp_26 * scratch_16[pp];
            _tmp_35         = -_tmp_35 * scratch_16[pp];
            _tmp_31         = _tmp_31 * scratch_34[pp];
            _tmp_19         = _tmp_19 * scratch_31[pp];
            _tmp_36         = _tmp_36 * scratch_13[pp];
            _tmp_37         = _tmp_37 * scratch_7[pp];
            _tmp_3          = _tmp_3 * scratch_7[pp];
            scratch_229[pp] = scratch_102[pp];
            scratch_205[pp] = _tmp_16;
            scratch_23[pp]  = _tmp_22;
            _tmp_3 = _tmp_19 + _tmp_26 + _tmp_3 + _tmp_31 + _tmp_32 + _tmp_35 +
                     _tmp_36 + _tmp_37 + _tmp_4;
            _tmp_4          = 6 * grad_2_alpha[pp];
            _tmp_38         = -_tmp_38;
            scratch_195[pp] = _tmp_38;
            _tmp_32         = -scratch_102[pp];
            _tmp_26         = -_tmp_16;
            _tmp_35         = _tmp_22 * scratch_2[pp];
            _tmp_3          = _tmp_3 * scratch_2[pp];
            scratch_187[pp] = _tmp_4;
            _tmp_26         = _tmp_26 + _tmp_32 + _tmp_38;
            scratch_115[pp] = _tmp_35;
            scratch_5[pp]   = _tmp_3;
            _tmp_32         = -12 * grad2_0_2_alpha[pp];
            scratch_202[pp] = _tmp_32;
            _tmp_31         = -grad_1_gt0[pp] * scratch_112[pp];
            scratch_135[pp] = _tmp_31;
            _tmp_19         = 2 * grad_0_Gt1[pp] * gt4[pp];
            scratch_65[pp]  = _tmp_19;
            _tmp_36         = 2 * grad_2_Gt1[pp] * gt1[pp];
            scratch_220[pp] = _tmp_36;
            _tmp_9          = -_tmp_4 * _tmp_9;
            scratch_184[pp] = _tmp_9;
            _tmp_26         = -_tmp_26 * scratch_201[pp];
            scratch_125[pp] = _tmp_26;
            _tmp_25         = _tmp_25 * _tmp_35;
            scratch_124[pp] = _tmp_25;
            _tmp_37         = scratch_46[pp] * scratch_9[pp];
            scratch_41[pp]  = _tmp_37;
            _tmp_20         = _tmp_3 * gt2[pp];
            scratch_28[pp]  = _tmp_20;
        }
    }
}

// --- Execution Unit 13 (ID: Comp0_Slice13) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt5[pp] * scratch_217[pp];
            double _tmp_1;
            _tmp_1 = grad_1_gt5[pp] * scratch_188[pp];
            double _tmp_2;
            _tmp_2 = grad_2_gt5[pp] * scratch_188[pp];
            double _tmp_3;
            _tmp_3 = grad_0_gt5[pp] * scratch_188[pp];
            double _tmp_4;
            _tmp_4 = scratch_18[pp] * scratch_43[pp];
            double _tmp_5;
            _tmp_5          = grad_1_gt0[pp] * scratch_190[pp];
            scratch_68[pp]  = _tmp_0;
            scratch_219[pp] = _tmp_1;
            scratch_258[pp] = _tmp_2;
            double _tmp_6;
            _tmp_6          = grad_2_gt5[pp] * scratch_259[pp];
            scratch_271[pp] = _tmp_3;
            double _tmp_7;
            _tmp_7 = scratch_18[pp] * scratch_46[pp];
            double _tmp_8;
            _tmp_8 = grad_2_gt0[pp] * scratch_190[pp];
            double _tmp_9;
            _tmp_9 = grad_2_gt0[pp] * scratch_43[pp];
            double _tmp_10;
            _tmp_10 = grad_1_gt0[pp] * scratch_46[pp];
            double _tmp_11;
            _tmp_11 = grad_1_gt5[pp] * scratch_259[pp];
            double _tmp_12;
            _tmp_12         = grad_1_gt5[pp] * scratch_217[pp];
            scratch_241[pp] = _tmp_4;
            scratch_123[pp] = _tmp_5;
            double _tmp_13;
            _tmp_13 = -scratch_43[pp] * scratch_85[pp];
            double _tmp_14;
            _tmp_14 = _tmp_0 + _tmp_1;
            double _tmp_15;
            _tmp_15 = grad_0_gt5[pp] * scratch_259[pp];
            double _tmp_16;
            _tmp_16         = 2 * _tmp_2;
            _tmp_6          = _tmp_3 + _tmp_6;
            scratch_232[pp] = _tmp_7;
            scratch_114[pp] = _tmp_8;
            scratch_266[pp] = _tmp_9;
            double _tmp_17;
            _tmp_17 = grad_0_gt0[pp] * scratch_190[pp];
            double _tmp_18;
            _tmp_18 = scratch_18[pp] * scratch_22[pp];
            double _tmp_19;
            _tmp_19        = grad_2_gt0[pp] * scratch_59[pp];
            scratch_84[pp] = _tmp_12;
            double _tmp_20;
            _tmp_20 = scratch_18[pp] * scratch_59[pp];
            double _tmp_21;
            _tmp_21 = scratch_43[pp] * scratch_9[pp];
            double _tmp_22;
            _tmp_22         = _tmp_4 + _tmp_5;
            scratch_154[pp] = scratch_41[pp];
            double _tmp_23;
            _tmp_23 = grad_2_gt0[pp] * scratch_22[pp];
            double _tmp_24;
            _tmp_24         = grad_0_gt0[pp] * scratch_46[pp];
            scratch_183[pp] = _tmp_15;
            double _tmp_25;
            _tmp_25         = grad_2_gt0[pp] * scratch_188[pp];
            scratch_212[pp] = _tmp_16;
            double _tmp_26;
            _tmp_26 = grad_0_gt5[pp] * scratch_43[pp];
            double _tmp_27;
            _tmp_27 = _tmp_7 + _tmp_8;
            double _tmp_28;
            _tmp_28 = scratch_188[pp] * scratch_18[pp];
            double _tmp_29;
            _tmp_29 = grad_0_gt5[pp] * scratch_217[pp];
            double _tmp_30;
            _tmp_30 = _tmp_10 + _tmp_9;
            double _tmp_31;
            _tmp_31         = scratch_43[pp] * scratch_49[pp];
            _tmp_18         = _tmp_17 + _tmp_18;
            _tmp_19         = _tmp_11 + _tmp_19;
            _tmp_17         = 2 * _tmp_12;
            scratch_247[pp] = _tmp_20;
            scratch_260[pp] = _tmp_21;
            scratch_97[pp]  = _tmp_22;
            double _tmp_32;
            _tmp_32         = -scratch_41[pp];
            _tmp_13         = -_tmp_13;
            scratch_107[pp] = _tmp_13;
            double _tmp_33;
            _tmp_33 = scratch_59[pp] * scratch_85[pp];
            double _tmp_34;
            _tmp_34 = -_tmp_14;
            double _tmp_35;
            _tmp_35         = scratch_22[pp] * scratch_49[pp];
            scratch_216[pp] = _tmp_23;
            scratch_161[pp] = _tmp_24;
            double _tmp_36;
            _tmp_36         = 2 * _tmp_15;
            scratch_156[pp] = _tmp_25;
            double _tmp_37;
            _tmp_37 = 2 * grad_2_gt0[pp] * scratch_46[pp];
            double _tmp_38;
            _tmp_38 = grad_0_gt5[pp] * scratch_22[pp];
            double _tmp_39;
            _tmp_39 = grad_2_gt0[pp] * scratch_186[pp];
            double _tmp_40;
            _tmp_40 = scratch_30[pp] * scratch_48[pp];
            double _tmp_41;
            _tmp_41 = scratch_30[pp] * scratch_92[pp];
            double _tmp_42;
            _tmp_42 = scratch_199[pp] * scratch_30[pp];
            double _tmp_43;
            _tmp_43 = scratch_242[pp] * scratch_2[pp];
            double _tmp_44;
            _tmp_44 = scratch_186[pp] * scratch_85[pp];
            double _tmp_45;
            _tmp_45 = -_tmp_16;
            double _tmp_46;
            _tmp_46 = -grad_0_gt0[pp] * scratch_112[pp];
            double _tmp_47;
            _tmp_47 = -scratch_46[pp] * scratch_49[pp];
            double _tmp_48;
            _tmp_48 = scratch_22[pp] * scratch_85[pp];
            double _tmp_49;
            _tmp_49 = scratch_188[pp] * scratch_85[pp];
            double _tmp_50;
            _tmp_50 = -_tmp_6;
            double _tmp_51;
            _tmp_51         = scratch_186[pp] * scratch_18[pp];
            scratch_255[pp] = _tmp_26;
            scratch_208[pp] = _tmp_27;
            scratch_233[pp] = _tmp_29;
            double _tmp_52;
            _tmp_52         = scratch_22[pp] * scratch_9[pp];
            scratch_102[pp] = _tmp_30;
            scratch_14[pp]  = _tmp_31;
            scratch_189[pp] = _tmp_18;
            scratch_231[pp] = _tmp_19;
            _tmp_17         = _tmp_17 + _tmp_20;
            double _tmp_53;
            _tmp_53         = _tmp_21 + _tmp_22;
            _tmp_32         = _tmp_13 + _tmp_32 + scratch_135[pp];
            _tmp_34         = _tmp_33 + _tmp_34;
            _tmp_35         = _tmp_23 + _tmp_24 + _tmp_35;
            _tmp_36         = _tmp_25 + _tmp_36;
            _tmp_38         = _tmp_37 + _tmp_38;
            _tmp_6          = _tmp_39 + _tmp_6;
            scratch_63[pp]  = _tmp_40;
            scratch_169[pp] = _tmp_41;
            scratch_146[pp] = _tmp_42;
            scratch_153[pp] = _tmp_43;
            _tmp_45         = _tmp_44 + _tmp_45;
            _tmp_48         = _tmp_46 + _tmp_47 + _tmp_48;
            _tmp_50         = _tmp_49 + _tmp_50;
            _tmp_14         = _tmp_14 + _tmp_51;
            _tmp_51         = _tmp_26 + _tmp_27;
            _tmp_11         = _tmp_11 + _tmp_28 + _tmp_29;
            _tmp_52         = _tmp_30 + _tmp_52;
            _tmp_49         = _tmp_18 + _tmp_31;
            _tmp_46         = _tmp_19 + _tmp_29;
            _tmp_47         = 6 * grad_0_alpha[pp];
            _tmp_44 = 4 * grad2_0_2_gt2[pp] * scratch_2[pp] * scratch_7[pp];
            _tmp_39 = 2 * grad2_2_2_gt2[pp] * scratch_2[pp] * scratch_34[pp];
            _tmp_37 = 2 * grad2_1_1_gt2[pp] * scratch_2[pp] * scratch_31[pp];
            _tmp_33 = 2 * grad2_0_0_gt2[pp] * scratch_13[pp] * scratch_2[pp];
            _tmp_17 = _tmp_17 * scratch_30[pp] * scratch_31[pp];
            _tmp_53 = _tmp_53 * scratch_30[pp] * scratch_31[pp];
            _tmp_32 = _tmp_32 * scratch_26[pp] * scratch_30[pp];
            _tmp_34 = _tmp_34 * scratch_26[pp] * scratch_30[pp];
            double _tmp_54;
            _tmp_54 = scratch_26[pp] * scratch_30[pp] * scratch_354[pp];
            _tmp_35 = _tmp_35 * scratch_13[pp] * scratch_30[pp];
            _tmp_36 = _tmp_36 * scratch_13[pp] * scratch_30[pp];
            _tmp_38 = _tmp_38 * scratch_30[pp] * scratch_7[pp];
            _tmp_6  = _tmp_6 * scratch_30[pp] * scratch_7[pp];
            double _tmp_55;
            _tmp_55 = scratch_16[pp] * scratch_173[pp] * scratch_30[pp];
            double _tmp_56;
            _tmp_56 = scratch_16[pp] * scratch_30[pp] * scratch_381[pp];
            double _tmp_57;
            _tmp_57 = 2 * grad_2_Gt2[pp] * gt2[pp];
            double _tmp_58;
            _tmp_58 = 2 * grad_2_Gt0[pp] * gt0[pp];
            double _tmp_59;
            _tmp_59 = 2 * grad_0_Gt2[pp] * gt5[pp];
            double _tmp_60;
            _tmp_60 = 2 * grad_0_Gt0[pp] * gt2[pp];
            double _tmp_61;
            _tmp_61 = -_tmp_40 * grad_2_gt2[pp];
            double _tmp_62;
            _tmp_62 = -_tmp_41 * grad_0_gt2[pp];
            double _tmp_63;
            _tmp_63 = -_tmp_42 * grad_1_gt2[pp];
            double _tmp_64;
            _tmp_64 = -_tmp_43 * scratch_89[pp];
            _tmp_45 = -_tmp_45 * scratch_201[pp];
            _tmp_48 = -_tmp_48 * scratch_172[pp];
            _tmp_50 = -_tmp_50 * scratch_172[pp];
            _tmp_14 = -_tmp_14 * scratch_200[pp];
            _tmp_51 = -_tmp_51 * scratch_200[pp];
            _tmp_11 = -_tmp_11 * scratch_165[pp];
            _tmp_52 = -_tmp_52 * scratch_165[pp];
            _tmp_49 = -_tmp_49 * scratch_165[pp];
            _tmp_46 = -_tmp_46 * scratch_165[pp];
            double _tmp_65;
            _tmp_65         = 3 * alpha[pp];
            scratch_248[pp] = _tmp_47;
            _tmp_46         = _tmp_11 + _tmp_14 + _tmp_17 + _tmp_32 + _tmp_33 +
                      _tmp_34 + _tmp_35 + _tmp_36 + _tmp_37 + _tmp_38 +
                      _tmp_39 + _tmp_44 + _tmp_45 + _tmp_46 + _tmp_48 +
                      _tmp_49 + _tmp_50 + _tmp_51 + _tmp_52 + _tmp_53 +
                      _tmp_54 + _tmp_55 + _tmp_56 + _tmp_57 + _tmp_58 +
                      _tmp_59 + _tmp_6 + _tmp_60 + _tmp_61 + _tmp_62 + _tmp_63 +
                      _tmp_64 + scratch_100[pp] + scratch_125[pp] +
                      scratch_220[pp] + scratch_281[pp] + scratch_316[pp] +
                      scratch_387[pp] + scratch_411[pp] + scratch_421[pp] +
                      scratch_451[pp] + scratch_454[pp] + scratch_65[pp];
            scratch_263[pp] = _tmp_65;
            _tmp_44         = grad_0_gt0[pp] * scratch_43[pp];
            _tmp_39         = grad_1_gt0[pp] * scratch_22[pp];
            _tmp_37         = -_tmp_47 * scratch_117[pp];
            _tmp_46         = _tmp_46 * _tmp_65;
            scratch_272[pp] = _tmp_44;
            scratch_262[pp] = _tmp_39;
            _tmp_33         = 2 * scratch_18[pp] * scratch_259[pp];
            _tmp_17         = scratch_217[pp] * scratch_49[pp];
            _tmp_46 = _tmp_37 + _tmp_46 + scratch_124[pp] + scratch_184[pp] +
                      scratch_202[pp] + scratch_28[pp];
            _tmp_37         = 2 * _tmp_9;
            _tmp_53         = 2 * _tmp_44;
            _tmp_32         = 2 * _tmp_23;
            _tmp_34         = 2 * _tmp_10;
            _tmp_54         = scratch_187[pp] * scratch_2[pp];
            _tmp_35         = 2 * _tmp_39;
            _tmp_36         = 2 * scratch_259[pp] * scratch_85[pp];
            _tmp_38         = -scratch_188[pp] * scratch_49[pp];
            _tmp_17         = _tmp_17 + _tmp_33;
            _tmp_46         = _tmp_46 * scratch_111[pp];
            _tmp_33         = At1[pp] * grad_2_beta1[pp];
            _tmp_10         = _tmp_10 + _tmp_37;
            _tmp_53         = _tmp_39 + _tmp_53;
            _tmp_32         = _tmp_24 + _tmp_32;
            _tmp_34         = _tmp_34 + _tmp_9;
            scratch_267[pp] = _tmp_54;
            _tmp_35         = _tmp_35 + _tmp_44;
            _tmp_38         = _tmp_36 + _tmp_38;
            _tmp_36 = 4 * grad2_0_2_gt0[pp] * scratch_2[pp] * scratch_7[pp];
            scratch_250[pp] = _tmp_36;
            _tmp_28         = 2 * _tmp_28;
            scratch_105[pp] = _tmp_28;
            _tmp_37 = 2 * grad2_1_1_gt0[pp] * scratch_2[pp] * scratch_31[pp];
            scratch_256[pp] = _tmp_37;
            _tmp_6 = 3 * grad_1_gt0[pp] * scratch_30[pp] * scratch_31[pp] *
                     scratch_43[pp];
            scratch_236[pp] = _tmp_6;
            _tmp_55         = -_tmp_40 * grad_2_gt0[pp];
            scratch_237[pp] = _tmp_55;
            _tmp_56         = -_tmp_42 * grad_1_gt0[pp];
            scratch_176[pp] = _tmp_56;
            _tmp_17         = -_tmp_17 * scratch_165[pp];
            scratch_44[pp]  = _tmp_17;
            _tmp_57         = grad_0_beta1[pp] * scratch_75[pp];
            scratch_42[pp]  = _tmp_57;
            _tmp_33 = _tmp_33 + _tmp_46 + scratch_130[pp] + scratch_137[pp] +
                      scratch_145[pp] + scratch_149[pp] + scratch_150[pp] +
                      scratch_15[pp] + scratch_162[pp] + scratch_163[pp] +
                      scratch_86[pp] + scratch_99[pp];
            At_rhs02[pp]    = _tmp_33;
            _tmp_10         = -_tmp_10 * scratch_200[pp];
            scratch_4[pp]   = _tmp_10;
            _tmp_46         = -_tmp_47 * scratch_198[pp];
            scratch_269[pp] = _tmp_46;
            _tmp_58         = 4 * grad_0_Gt2[pp] * gt2[pp];
            scratch_261[pp] = _tmp_58;
            _tmp_59         = -_tmp_41 * grad_0_gt0[pp];
            scratch_251[pp] = _tmp_59;
            _tmp_53         = -_tmp_53 * scratch_165[pp];
            scratch_170[pp] = _tmp_53;
            _tmp_32         = _tmp_32 * scratch_30[pp] * scratch_7[pp];
            scratch_152[pp] = _tmp_32;
            _tmp_34         = -_tmp_34 * scratch_200[pp];
            scratch_131[pp] = _tmp_34;
            _tmp_60         = scratch_16[pp] * scratch_30[pp] * scratch_452[pp];
            scratch_62[pp]  = _tmp_60;
            _tmp_61         = scratch_115[pp] * scratch_209[pp];
            scratch_60[pp]  = _tmp_61;
            _tmp_62 = scratch_217[pp] * scratch_30[pp] * scratch_31[pp] *
                      scratch_52[pp];
            scratch_20[pp]  = _tmp_62;
            _tmp_63         = -_tmp_54 * scratch_196[pp];
            scratch_265[pp] = _tmp_63;
            _tmp_35         = -_tmp_35 * scratch_165[pp];
            scratch_254[pp] = _tmp_35;
            _tmp_64 = 2 * grad2_2_2_gt0[pp] * scratch_2[pp] * scratch_34[pp];
            scratch_175[pp] = _tmp_64;
            _tmp_38         = -_tmp_38 * scratch_172[pp];
            scratch_133[pp] = _tmp_38;
            _tmp_45         = scratch_26[pp] * scratch_288[pp] * scratch_30[pp];
            scratch_88[pp]  = _tmp_45;
            _tmp_48 = -scratch_188[pp] * scratch_201[pp] * scratch_415[pp];
            scratch_21[pp] = _tmp_48;
        }
    }
}

// --- Execution Unit 14 (ID: Comp0_Slice14) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_2_gt0[pp] * scratch_217[pp];
            double _tmp_1;
            _tmp_1 = grad_2_gt5[pp] * scratch_59[pp];
            double _tmp_2;
            _tmp_2          = grad_0_gt5[pp] * scratch_59[pp];
            scratch_274[pp] = _tmp_0;
            double _tmp_3;
            _tmp_3          = scratch_259[pp] * scratch_9[pp];
            scratch_220[pp] = _tmp_1;
            scratch_48[pp]  = _tmp_2;
            double _tmp_4;
            _tmp_4 = grad_2_gt3[pp] * scratch_188[pp];
            double _tmp_5;
            _tmp_5 = 2 * scratch_156[pp];
            double _tmp_6;
            _tmp_6 = 2 * scratch_161[pp];
            double _tmp_7;
            _tmp_7          = 2 * _tmp_0;
            scratch_145[pp] = _tmp_3;
            double _tmp_8;
            _tmp_8 = grad_0_gt5[pp] * scratch_190[pp];
            double _tmp_9;
            _tmp_9 = 2 * _tmp_1;
            double _tmp_10;
            _tmp_10 = grad_2_gt3[pp] * scratch_204[pp];
            double _tmp_11;
            _tmp_11 = grad_0_gt3[pp] * scratch_190[pp];
            double _tmp_12;
            _tmp_12 = grad_2_gt3[pp] * scratch_59[pp];
            double _tmp_13;
            _tmp_13 = scratch_190[pp] * scratch_49[pp];
            double _tmp_14;
            _tmp_14 = _tmp_2 + scratch_68[pp];
            double _tmp_15;
            _tmp_15 = grad_1_gt5[pp] * scratch_59[pp];
            double _tmp_16;
            _tmp_16 = -grad_0_gt5[pp] * scratch_157[pp];
            double _tmp_17;
            _tmp_17 = scratch_59[pp] * scratch_69[pp];
            double _tmp_18;
            _tmp_18 = scratch_190[pp] * scratch_54[pp];
            double _tmp_19;
            _tmp_19 = grad_0_gt3[pp] * scratch_46[pp];
            _tmp_4  = _tmp_4 + scratch_84[pp];
            double _tmp_20;
            _tmp_20 = 2 * At4[pp];
            _tmp_5  = _tmp_5 + scratch_183[pp];
            _tmp_6  = _tmp_6 + scratch_216[pp];
            double _tmp_21;
            _tmp_21         = scratch_105[pp] + scratch_233[pp];
            _tmp_7          = _tmp_3 + _tmp_7;
            scratch_150[pp] = _tmp_8;
            scratch_163[pp] = _tmp_9;
            scratch_100[pp] = _tmp_10;
            scratch_92[pp]  = _tmp_11;
            scratch_162[pp] = _tmp_12;
            scratch_41[pp]  = _tmp_13;
            double _tmp_22;
            _tmp_22 = scratch_46[pp] * scratch_54[pp];
            double _tmp_23;
            _tmp_23 = scratch_188[pp] * scratch_69[pp];
            double _tmp_24;
            _tmp_24         = scratch_46[pp] * scratch_69[pp];
            scratch_196[pp] = _tmp_15;
            scratch_117[pp] = _tmp_17;
            scratch_202[pp] = _tmp_18;
            scratch_99[pp]  = _tmp_19;
            scratch_86[pp]  = _tmp_4;
            scratch_198[pp] = _tmp_20;
            double _tmp_25;
            _tmp_25 = -At0[pp] * scratch_7[pp];
            double _tmp_26;
            _tmp_26 = -scratch_121[pp];
            double _tmp_27;
            _tmp_27 = -scratch_6[pp];
            double _tmp_28;
            _tmp_28 = -At1[pp] * scratch_31[pp];
            double _tmp_29;
            _tmp_29 = 3 * grad_2_gt0[pp] * scratch_30[pp] * scratch_34[pp] *
                      scratch_46[pp];
            double _tmp_30;
            _tmp_30 = 3 * grad_0_gt0[pp] * scratch_13[pp] * scratch_22[pp] *
                      scratch_30[pp];
            double _tmp_31;
            _tmp_31 = scratch_13[pp] * scratch_259[pp] * scratch_30[pp] *
                      scratch_433[pp];
            double _tmp_32;
            _tmp_32 = 2 * grad2_0_0_gt0[pp] * scratch_13[pp] * scratch_2[pp];
            _tmp_5  = _tmp_5 * scratch_30[pp] * scratch_7[pp];
            _tmp_6  = _tmp_6 * scratch_30[pp] * scratch_7[pp];
            double _tmp_33;
            _tmp_33 = scratch_147[pp] * scratch_16[pp] * scratch_30[pp];
            double _tmp_34;
            _tmp_34 = 4 * grad_0_Gt1[pp] * gt1[pp];
            double _tmp_35;
            _tmp_35 = -scratch_153[pp] * scratch_61[pp];
            _tmp_21 = -_tmp_21 * scratch_200[pp];
            _tmp_7  = -_tmp_7 * scratch_165[pp];
            double _tmp_36;
            _tmp_36 = -scratch_112[pp] * scratch_69[pp];
            double _tmp_37;
            _tmp_37 = scratch_190[pp] * scratch_85[pp];
            double _tmp_38;
            _tmp_38 = -_tmp_8;
            double _tmp_39;
            _tmp_39 = scratch_186[pp] * scratch_71[pp];
            double _tmp_40;
            _tmp_40 = -_tmp_9;
            double _tmp_41;
            _tmp_41 = -scratch_204[pp] * scratch_76[pp];
            double _tmp_42;
            _tmp_42         = -_tmp_10;
            scratch_277[pp] = _tmp_42;
            double _tmp_43;
            _tmp_43 = -_tmp_11;
            double _tmp_44;
            _tmp_44 = -_tmp_12;
            double _tmp_45;
            _tmp_45 = -scratch_112[pp] * scratch_54[pp];
            double _tmp_46;
            _tmp_46 = -_tmp_13;
            double _tmp_47;
            _tmp_47 = scratch_188[pp] * scratch_71[pp];
            double _tmp_48;
            _tmp_48 = -_tmp_14;
            double _tmp_49;
            _tmp_49 = grad_0_gt3[pp] * scratch_112[pp];
            double _tmp_50;
            _tmp_50         = scratch_190[pp] * scratch_9[pp];
            scratch_184[pp] = _tmp_22;
            double _tmp_51;
            _tmp_51         = 2 * scratch_233[pp];
            scratch_130[pp] = _tmp_23;
            scratch_242[pp] = _tmp_24;
            double _tmp_52;
            _tmp_52 = scratch_186[pp] * scratch_69[pp];
            double _tmp_53;
            _tmp_53 = -scratch_190[pp] * scratch_69[pp];
            double _tmp_54;
            _tmp_54 = -scratch_18[pp] * scratch_190[pp];
            double _tmp_55;
            _tmp_55 = -grad_2_gt3[pp] * scratch_186[pp];
            double _tmp_56;
            _tmp_56 = -_tmp_15;
            double _tmp_57;
            _tmp_57 = scratch_59[pp] * scratch_71[pp];
            double _tmp_58;
            _tmp_58 = 2 * grad_2_gt3[pp] * scratch_177[pp];
            double _tmp_59;
            _tmp_59 = -grad_1_gt5[pp] * scratch_204[pp];
            double _tmp_60;
            _tmp_60 = scratch_204[pp] * scratch_71[pp];
            _tmp_16 = -_tmp_16;
            double _tmp_61;
            _tmp_61 = -_tmp_17;
            double _tmp_62;
            _tmp_62 = -scratch_84[pp];
            double _tmp_63;
            _tmp_63 = -_tmp_18;
            double _tmp_64;
            _tmp_64 = -scratch_241[pp];
            double _tmp_65;
            _tmp_65 = -scratch_260[pp];
            double _tmp_66;
            _tmp_66 = -_tmp_19;
            double _tmp_67;
            _tmp_67 = -_tmp_4;
            double _tmp_68;
            _tmp_68 = -scratch_204[pp] * scratch_9[pp];
            double _tmp_69;
            _tmp_69 = -scratch_204[pp] * scratch_69[pp];
            double _tmp_70;
            _tmp_70 = _tmp_20 * scratch_2[pp];
            double _tmp_71;
            _tmp_71 = At3[pp] * scratch_67[pp];
            _tmp_26 = _tmp_25 + _tmp_26 + scratch_39[pp];
            _tmp_27 = _tmp_27 + scratch_181[pp] + scratch_90[pp];
            _tmp_28 = _tmp_28 + scratch_104[pp] + scratch_122[pp];
            _tmp_7 = _tmp_21 + _tmp_29 + _tmp_30 + _tmp_31 + _tmp_32 + _tmp_33 +
                     _tmp_34 + _tmp_35 + _tmp_5 + _tmp_6 + _tmp_7 +
                     scratch_131[pp] + scratch_133[pp] + scratch_152[pp] +
                     scratch_170[pp] + scratch_175[pp] + scratch_176[pp] +
                     scratch_20[pp] + scratch_214[pp] + scratch_21[pp] +
                     scratch_236[pp] + scratch_237[pp] + scratch_250[pp] +
                     scratch_251[pp] + scratch_254[pp] + scratch_256[pp] +
                     scratch_261[pp] + scratch_280[pp] + scratch_311[pp] +
                     scratch_353[pp] + scratch_377[pp] + scratch_379[pp] +
                     scratch_446[pp] + scratch_447[pp] + scratch_448[pp] +
                     scratch_44[pp] + scratch_4[pp] + scratch_62[pp] +
                     scratch_88[pp] + scratch_95[pp];
            _tmp_38         = _tmp_36 + _tmp_37 + _tmp_38;
            _tmp_40         = _tmp_39 + _tmp_40;
            _tmp_41         = _tmp_41 + _tmp_42 + scratch_244[pp];
            _tmp_43         = _tmp_43 + scratch_313[pp] + scratch_358[pp];
            _tmp_44         = _tmp_44 + scratch_113[pp];
            _tmp_46         = _tmp_45 + _tmp_46 + scratch_107[pp];
            _tmp_48         = _tmp_47 + _tmp_48;
            _tmp_50         = _tmp_49 + _tmp_50 + scratch_166[pp];
            _tmp_49         = _tmp_22 + scratch_14[pp] + scratch_266[pp];
            _tmp_51         = _tmp_23 + _tmp_51;
            _tmp_47         = _tmp_24 + scratch_114[pp] + scratch_255[pp];
            _tmp_14         = _tmp_14 + _tmp_52;
            _tmp_54         = _tmp_53 + _tmp_54 + scratch_289[pp];
            _tmp_55         = _tmp_55 + _tmp_56 + scratch_222[pp];
            _tmp_56         = _tmp_56 + _tmp_57 + scratch_33[pp];
            _tmp_59         = _tmp_58 + _tmp_59;
            _tmp_60         = _tmp_60 + scratch_138[pp];
            _tmp_62         = _tmp_16 + _tmp_61 + _tmp_62;
            _tmp_64         = _tmp_63 + _tmp_64 + scratch_291[pp];
            _tmp_66         = _tmp_65 + _tmp_66 + scratch_226[pp];
            _tmp_67         = _tmp_16 + _tmp_67;
            _tmp_68         = _tmp_68 + scratch_134[pp];
            _tmp_69         = _tmp_69 + scratch_155[pp];
            scratch_137[pp] = _tmp_70;
            scratch_209[pp] = _tmp_71;
            _tmp_16         = -At0[pp] * K[pp];
            _tmp_26         = _tmp_26 * scratch_77[pp];
            _tmp_27         = _tmp_27 * scratch_53[pp];
            _tmp_28         = _tmp_28 * scratch_128[pp];
            _tmp_65         = 0.66666666666666663 * grad_2_beta2[pp];
            _tmp_63         = gt0[pp] * scratch_5[pp];
            _tmp_7          = _tmp_7 * scratch_263[pp];
            _tmp_61         = -12 * grad2_0_0_alpha[pp];
            _tmp_58         = -grad_2_gt4[pp] * scratch_63[pp];
            _tmp_57         = -grad_0_gt4[pp] * scratch_169[pp];
            _tmp_53         = -grad_1_gt4[pp] * scratch_146[pp];
            _tmp_52         = -scratch_153[pp] * scratch_38[pp];
            _tmp_38         = -_tmp_38 * scratch_201[pp];
            _tmp_40         = -_tmp_40 * scratch_201[pp];
            _tmp_41         = -_tmp_41 * scratch_211[pp];
            _tmp_43         = -_tmp_43 * scratch_211[pp];
            _tmp_44         = -_tmp_44 * scratch_211[pp];
            _tmp_46         = -_tmp_46 * scratch_172[pp];
            _tmp_48         = -_tmp_48 * scratch_172[pp];
            _tmp_50         = -_tmp_50 * scratch_200[pp];
            _tmp_49         = _tmp_49 * scratch_174[pp];
            _tmp_51         = _tmp_51 * scratch_174[pp];
            _tmp_47         = _tmp_47 * scratch_172[pp];
            _tmp_14         = _tmp_14 * scratch_172[pp];
            _tmp_54         = _tmp_54 * scratch_200[pp];
            _tmp_55         = _tmp_55 * scratch_200[pp];
            _tmp_56         = _tmp_56 * scratch_200[pp];
            _tmp_59         = _tmp_59 * scratch_200[pp];
            _tmp_60         = _tmp_60 * scratch_200[pp];
            _tmp_62         = _tmp_62 * scratch_165[pp];
            _tmp_64         = _tmp_64 * scratch_165[pp];
            _tmp_66         = _tmp_66 * scratch_165[pp];
            _tmp_67         = _tmp_67 * scratch_165[pp];
            _tmp_68         = _tmp_68 * scratch_165[pp];
            _tmp_69         = _tmp_69 * scratch_165[pp];
            _tmp_45         = -At4[pp] * K[pp];
            _tmp_39         = _tmp_70 * scratch_127[pp];
            _tmp_36         = _tmp_71 * scratch_164[pp];
            _tmp_37         = scratch_128[pp] * scratch_167[pp];
            _tmp_29         = 0.33333333333333331 * At4[pp];
            _tmp_28         = _tmp_16 + _tmp_26 + _tmp_27 + _tmp_28;
            scratch_135[pp] = _tmp_65;
            _tmp_61         = _tmp_61 + _tmp_63 + _tmp_7 + scratch_265[pp] +
                      scratch_269[pp] + scratch_60[pp];
            _tmp_69 = _tmp_14 + _tmp_38 + _tmp_40 + _tmp_41 + _tmp_43 +
                      _tmp_44 + _tmp_46 + _tmp_47 + _tmp_48 + _tmp_49 +
                      _tmp_50 + _tmp_51 + _tmp_52 + _tmp_53 + _tmp_54 +
                      _tmp_55 + _tmp_56 + _tmp_57 + _tmp_58 + _tmp_59 +
                      _tmp_60 + _tmp_62 + _tmp_64 + _tmp_66 + _tmp_67 +
                      _tmp_68 + _tmp_69 + scratch_160[pp] + scratch_203[pp] +
                      scratch_225[pp] + scratch_227[pp] + scratch_230[pp] +
                      scratch_235[pp] + scratch_238[pp] + scratch_243[pp] +
                      scratch_245[pp] + scratch_246[pp] + scratch_249[pp] +
                      scratch_257[pp] + scratch_74[pp];
            _tmp_37         = _tmp_36 + _tmp_37 + _tmp_39 + _tmp_45;
            scratch_124[pp] = _tmp_29;
            _tmp_28         = -_tmp_28 * alpha[pp];
            _tmp_45         = -At0[pp] * scratch_136[pp];
            _tmp_39         = -At0[pp] * _tmp_65;
            _tmp_36         = beta2[pp] * grad_2_At0[pp];
            _tmp_58         = beta1[pp] * grad_1_At0[pp];
            _tmp_57         = beta0[pp] * grad_0_At0[pp];
            _tmp_53         = grad_0_beta2[pp] * scratch_93[pp];
            _tmp_61         = _tmp_61 * scratch_111[pp];
            _tmp_52         = At0[pp] * scratch_96[pp];
            _tmp_38         = -12 * grad2_1_2_alpha[pp];
            scratch_28[pp]  = _tmp_38;
            _tmp_40         = At3[pp] * grad_2_beta1[pp];
            scratch_15[pp]  = _tmp_40;
            _tmp_41         = beta1[pp] * grad_1_At4[pp];
            scratch_149[pp] = _tmp_41;
            _tmp_43         = -scratch_187[pp] * scratch_1[pp];
            scratch_199[pp] = _tmp_43;
            _tmp_69         = _tmp_69 * scratch_263[pp];
            scratch_173[pp] = _tmp_69;
            _tmp_44         = At1[pp] * grad_2_beta0[pp];
            scratch_125[pp] = _tmp_44;
            _tmp_37         = -_tmp_37 * alpha[pp];
            scratch_89[pp]  = _tmp_37;
            _tmp_46         = At5[pp] * grad_1_beta2[pp];
            scratch_65[pp]  = _tmp_46;
            _tmp_48         = _tmp_29 * grad_2_beta2[pp];
            scratch_52[pp]  = _tmp_48;
            _tmp_52         = _tmp_28 + _tmp_36 + _tmp_39 + _tmp_45 + _tmp_52 +
                      _tmp_53 + _tmp_57 + _tmp_58 + _tmp_61 + scratch_42[pp];
            At_rhs00[pp] = _tmp_52;
        }
    }
}

// --- Execution Unit 15 (ID: Comp0_Slice15) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = sqrt(chi[pp]);
            double _tmp_1;
            _tmp_1 = scratch_248[pp] * scratch_2[pp];
            double _tmp_2;
            _tmp_2 = -At1[pp] * scratch_7[pp];
            double _tmp_3;
            _tmp_3 = At3[pp] * scratch_26[pp];
            double _tmp_4;
            _tmp_4 = -scratch_98[pp];
            double _tmp_5;
            _tmp_5 = -At1[pp] * scratch_13[pp];
            double _tmp_6;
            _tmp_6 = -scratch_120[pp];
            double _tmp_7;
            _tmp_7 = -scratch_110[pp];
            double _tmp_8;
            _tmp_8 = scratch_151[pp] * scratch_210[pp];
            double _tmp_9;
            _tmp_9 = scratch_151[pp] * scratch_70[pp];
            double _tmp_10;
            _tmp_10 = 0.33333333333333331 * scratch_64[pp];
            double _tmp_11;
            _tmp_11 = t * t;
            double _tmp_12;
            _tmp_12         = 1.0 / (sig_ssl * sig_ssl);
            scratch_175[pp] = _tmp_1;
            _tmp_4          = _tmp_2 + _tmp_3 + _tmp_4;
            _tmp_6          = _tmp_5 + _tmp_6 + scratch_108[pp];
            _tmp_7          = _tmp_7 + scratch_12[pp] + scratch_36[pp];
            _tmp_5          = scratch_217[pp] * scratch_76[pp];
            _tmp_2          = grad_2_gt3[pp] * scratch_217[pp];
            _tmp_3          = 0.75 * alpha[pp] * lambda_f[1];
            double _tmp_13;
            _tmp_13         = 0.75 * lambda_f[0];
            scratch_160[pp] = _tmp_8;
            double _tmp_14;
            _tmp_14        = scratch_159[pp] * scratch_26[pp];
            scratch_68[pp] = _tmp_9;
            double _tmp_15;
            _tmp_15 = scratch_16[pp] * scratch_94[pp];
            double _tmp_16;
            _tmp_16 = -scratch_73[pp] * scratch_8[pp];
            double _tmp_17;
            _tmp_17 = scratch_31[pp] * scratch_56[pp];
            _tmp_12 = -0.5 * _tmp_11 * _tmp_12;
            _tmp_11 = -_tmp_0;
            double _tmp_18;
            _tmp_18 = beta2[pp] * grad_2_alpha[pp];
            double _tmp_19;
            _tmp_19 = beta1[pp] * grad_1_alpha[pp];
            double _tmp_20;
            _tmp_20 = beta0[pp] * grad_0_alpha[pp];
            double _tmp_21;
            _tmp_21 = -_tmp_1 * scratch_228[pp];
            double _tmp_22;
            _tmp_22 = gt4[pp] * scratch_5[pp];
            double _tmp_23;
            _tmp_23         = scratch_191[pp] * scratch_23[pp];
            scratch_4[pp]   = _tmp_4;
            scratch_90[pp]  = _tmp_6;
            scratch_33[pp]  = _tmp_7;
            scratch_121[pp] = _tmp_2;
            double _tmp_24;
            _tmp_24 = beta2[pp] * grad_2_beta1[pp];
            double _tmp_25;
            _tmp_25 = beta1[pp] * grad_1_beta1[pp];
            double _tmp_26;
            _tmp_26 = beta0[pp] * grad_0_beta1[pp];
            _tmp_13 = _tmp_13 + _tmp_3;
            _tmp_3  = scratch_158[pp] * scratch_45[pp];
            double _tmp_27;
            _tmp_27 = alpha[pp] * scratch_158[pp];
            double _tmp_28;
            _tmp_28        = -_tmp_8 * scratch_29[pp];
            scratch_44[pp] = _tmp_14;
            double _tmp_29;
            _tmp_29         = -_tmp_9 * scratch_35[pp];
            scratch_131[pp] = _tmp_15;
            double _tmp_30;
            _tmp_30 = 0.33333333333333331 * scratch_11[pp];
            double _tmp_31;
            _tmp_31 = 0.33333333333333331 * scratch_32[pp];
            _tmp_17 = _tmp_16 + _tmp_17;
            _tmp_16 = _tmp_10 * grad2_1_2_beta2[pp];
            _tmp_10 = _tmp_10 * grad2_0_1_beta0[pp];
            double _tmp_32;
            _tmp_32 = 1.3333333333333333 * grad2_1_1_beta1[pp] * scratch_64[pp];
            double _tmp_33;
            _tmp_33 = scratch_180[pp] * scratch_8[pp];
            double _tmp_34;
            _tmp_34 = grad2_0_2_beta1[pp] * scratch_116[pp] * scratch_2[pp];
            double _tmp_35;
            _tmp_35 = grad2_2_2_beta1[pp] * scratch_55[pp];
            double _tmp_36;
            _tmp_36 = grad2_0_0_beta1[pp] * scratch_58[pp];
            double _tmp_37;
            _tmp_37        = beta2[pp] * grad_2_Gt1[pp];
            scratch_21[pp] = _tmp_37;
            double _tmp_38;
            _tmp_38         = beta1[pp] * grad_1_Gt1[pp];
            scratch_166[pp] = _tmp_38;
            double _tmp_39;
            _tmp_39         = beta0[pp] * grad_0_Gt1[pp];
            scratch_105[pp] = _tmp_39;
            double _tmp_40;
            _tmp_40 = 0.33333333333333331 * gt1[pp];
            _tmp_12 = exp(_tmp_12);
            _tmp_11 = _tmp_11 + alpha[pp];
            _tmp_20 = _tmp_18 + _tmp_19 + _tmp_20;
            _tmp_18 = -grad_1_gt0[pp] * scratch_204[pp];
            _tmp_19 = -scratch_129[pp] * scratch_27[pp];
            double _tmp_41;
            _tmp_41 = scratch_259[pp] * scratch_69[pp];
            _tmp_23 = _tmp_21 + _tmp_22 + _tmp_23 + scratch_173[pp] +
                      scratch_199[pp] + scratch_28[pp];
            _tmp_21 = -At1[pp] * K[pp];
            _tmp_22 = _tmp_4 * scratch_77[pp];
            double _tmp_42;
            _tmp_42 = _tmp_6 * scratch_53[pp];
            double _tmp_43;
            _tmp_43       = _tmp_7 * scratch_128[pp];
            _tmp_5        = -_tmp_5;
            scratch_6[pp] = _tmp_5;
            double _tmp_44;
            _tmp_44         = -_tmp_2;
            _tmp_26         = _tmp_24 + _tmp_25 + _tmp_26;
            scratch_134[pp] = _tmp_13;
            _tmp_28         = _tmp_14 + _tmp_28;
            _tmp_29         = _tmp_15 + _tmp_29;
            _tmp_24         = _tmp_37 + _tmp_38 + _tmp_39;
            _tmp_25         = -scratch_259[pp] * scratch_76[pp];
            double _tmp_45;
            _tmp_45 = -scratch_217[pp] * scratch_69[pp];
            double _tmp_46;
            _tmp_46 = 0.33333333333333331 * At1[pp];
            _tmp_0  = -_tmp_0 * _tmp_11 * _tmp_12 * h_ssl;
            _tmp_12 = -K[pp] * scratch_45[pp];
            _tmp_20 = _tmp_20 * lambda[0];
            _tmp_18 = _tmp_18 + scratch_50[pp];
            _tmp_19 = _tmp_19 + scratch_207[pp];
            _tmp_11 = scratch_204[pp] * scratch_80[pp];
            _tmp_41 = _tmp_41 + scratch_145[pp] + scratch_274[pp];
            double _tmp_47;
            _tmp_47 = scratch_130[pp] + scratch_231[pp];
            double _tmp_48;
            _tmp_48 = -At4[pp] * scratch_197[pp];
            double _tmp_49;
            _tmp_49 = beta2[pp] * grad_2_At4[pp];
            double _tmp_50;
            _tmp_50 = beta0[pp] * grad_0_At4[pp];
            double _tmp_51;
            _tmp_51 = grad_1_beta1[pp] * scratch_124[pp];
            _tmp_23 = _tmp_23 * scratch_111[pp];
            double _tmp_52;
            _tmp_52 = At2[pp] * grad_1_beta0[pp];
            _tmp_43 = _tmp_21 + _tmp_22 + _tmp_42 + _tmp_43;
            _tmp_44 = _tmp_44 + _tmp_5 + scratch_367[pp];
            _tmp_26 = _tmp_26 * lambda[1];
            _tmp_21 = B1[pp] * _tmp_13;
            _tmp_22 = -_tmp_3 * scratch_177[pp] * scratch_29[pp];
            _tmp_42 = -_tmp_3 * scratch_142[pp] * scratch_35[pp];
            double _tmp_53;
            _tmp_53 = -_tmp_27 * scratch_204[pp] * scratch_8[pp];
            _tmp_3  = _tmp_3 * scratch_0[pp] * scratch_17[pp];
            double _tmp_54;
            _tmp_54 = _tmp_27 * scratch_66[pp] * scratch_91[pp];
            _tmp_27 = _tmp_27 * scratch_103[pp] * scratch_141[pp];
            double _tmp_55;
            _tmp_55 = 2.3333333333333335 * grad2_1_2_beta1[pp] * scratch_11[pp];
            double _tmp_56;
            _tmp_56 = 2.3333333333333335 * grad2_0_1_beta1[pp] * scratch_32[pp];
            double _tmp_57;
            _tmp_57 = -0.33333333333333331 * scratch_126[pp] * scratch_146[pp];
            _tmp_28 = -_tmp_28 * scratch_81[pp];
            _tmp_29 = -_tmp_29 * scratch_81[pp];
            double _tmp_58;
            _tmp_58 = 0.5 * grad_2_beta1[pp] * scratch_63[pp];
            double _tmp_59;
            _tmp_59 = 0.5 * grad_0_beta1[pp] * scratch_169[pp];
            double _tmp_60;
            _tmp_60 = 0.5 * grad_1_beta1[pp] * scratch_146[pp];
            double _tmp_61;
            _tmp_61 = _tmp_30 * grad2_2_2_beta2[pp];
            _tmp_30 = _tmp_30 * grad2_0_2_beta0[pp];
            double _tmp_62;
            _tmp_62         = _tmp_31 * grad2_0_2_beta2[pp];
            _tmp_31         = _tmp_31 * grad2_0_0_beta0[pp];
            _tmp_17         = _tmp_17 * scratch_81[pp];
            scratch_170[pp] = _tmp_17;
            double _tmp_63;
            _tmp_63 = scratch_148[pp] * scratch_29[pp];
            double _tmp_64;
            _tmp_64         = scratch_24[pp] * scratch_35[pp];
            _tmp_16         = -_tmp_16;
            scratch_38[pp]  = _tmp_16;
            _tmp_10         = -_tmp_10;
            scratch_1[pp]   = _tmp_10;
            _tmp_32         = -_tmp_32;
            scratch_176[pp] = _tmp_32;
            _tmp_33         = -_tmp_33;
            scratch_113[pp] = _tmp_33;
            _tmp_34         = -_tmp_34;
            scratch_181[pp] = _tmp_34;
            _tmp_35         = -_tmp_35;
            scratch_42[pp]  = _tmp_35;
            _tmp_36         = -_tmp_36;
            scratch_107[pp] = _tmp_36;
            scratch_71[pp]  = _tmp_24;
            _tmp_45         = _tmp_25 + _tmp_45 + scratch_398[pp];
            scratch_133[pp] = _tmp_46;
            _tmp_25         = -gt1[pp] * scratch_135[pp];
            double _tmp_65;
            _tmp_65 = -At1[pp] * scratch_45[pp];
            double _tmp_66;
            _tmp_66 = grad_1_beta2[pp] * gt2[pp];
            double _tmp_67;
            _tmp_67 = grad_1_beta0[pp] * gt0[pp];
            double _tmp_68;
            _tmp_68 = grad_0_beta2[pp] * gt4[pp];
            double _tmp_69;
            _tmp_69 = grad_0_beta1[pp] * gt3[pp];
            double _tmp_70;
            _tmp_70 = beta2[pp] * grad_2_gt1[pp];
            double _tmp_71;
            _tmp_71 = beta1[pp] * grad_1_gt1[pp];
            double _tmp_72;
            _tmp_72 = beta0[pp] * grad_0_gt1[pp];
            double _tmp_73;
            _tmp_73         = _tmp_40 * grad_1_beta1[pp];
            _tmp_40         = _tmp_40 * grad_0_beta0[pp];
            _tmp_20         = _tmp_0 + _tmp_12 + _tmp_20;
            a_rhs[pp]       = _tmp_20;
            _tmp_0          = -At1[pp] * scratch_135[pp];
            scratch_156[pp] = _tmp_0;
            _tmp_12         = At3[pp] * grad_0_beta1[pp];
            scratch_147[pp] = _tmp_12;
            _tmp_18         = _tmp_18 * scratch_165[pp];
            scratch_62[pp]  = _tmp_18;
            double _tmp_74;
            _tmp_74         = beta2[pp] * grad_2_At1[pp];
            scratch_161[pp] = _tmp_74;
            _tmp_19         = _tmp_19 * scratch_267[pp];
            scratch_152[pp] = _tmp_19;
            _tmp_11         = _tmp_11 + scratch_78[pp];
            scratch_138[pp] = _tmp_11;
            double _tmp_75;
            _tmp_75         = -scratch_153[pp] * scratch_27[pp];
            scratch_122[pp] = _tmp_75;
            double _tmp_76;
            _tmp_76        = At4[pp] * grad_0_beta2[pp];
            scratch_96[pp] = _tmp_76;
            _tmp_41        = _tmp_41 * scratch_174[pp];
            scratch_61[pp] = _tmp_41;
            double _tmp_77;
            _tmp_77         = -scratch_182[pp] * scratch_248[pp];
            scratch_20[pp]  = _tmp_77;
            _tmp_47         = _tmp_47 * scratch_172[pp];
            scratch_155[pp] = _tmp_47;
            _tmp_52         = _tmp_23 + _tmp_48 + _tmp_49 + _tmp_50 + _tmp_51 +
                      _tmp_52 + scratch_125[pp] + scratch_149[pp] +
                      scratch_15[pp] + scratch_52[pp] + scratch_65[pp] +
                      scratch_89[pp];
            At_rhs12[pp]   = _tmp_52;
            _tmp_48        = -grad_1_gt1[pp] * scratch_146[pp];
            scratch_88[pp] = _tmp_48;
            _tmp_49        = At2[pp] * grad_1_beta2[pp];
            scratch_74[pp] = _tmp_49;
            _tmp_43        = -_tmp_43 * alpha[pp];
            scratch_85[pp] = _tmp_43;
            _tmp_44        = -_tmp_44 * scratch_211[pp];
            scratch_60[pp] = _tmp_44;
            _tmp_21        = _tmp_21 + _tmp_26;
            b_rhs1[pp]     = _tmp_21;
            _tmp_64        = _tmp_10 + _tmp_16 + _tmp_17 + _tmp_22 + _tmp_24 +
                      _tmp_27 + _tmp_28 + _tmp_29 + _tmp_3 + _tmp_30 + _tmp_31 +
                      _tmp_32 + _tmp_33 + _tmp_34 + _tmp_35 + _tmp_36 +
                      _tmp_42 + _tmp_53 + _tmp_54 + _tmp_55 + _tmp_56 +
                      _tmp_57 + _tmp_58 + _tmp_59 + _tmp_60 + _tmp_61 +
                      _tmp_62 + _tmp_63 + _tmp_64;
            Gt_rhs1[pp]     = _tmp_64;
            _tmp_45         = _tmp_45 * scratch_165[pp];
            scratch_104[pp] = _tmp_45;
            _tmp_22         = _tmp_46 * grad_1_beta1[pp];
            scratch_95[pp]  = _tmp_22;
            _tmp_42         = At0[pp] * grad_1_beta0[pp];
            scratch_39[pp]  = _tmp_42;
            _tmp_40         = _tmp_25 + _tmp_40 + _tmp_65 + _tmp_66 + _tmp_67 +
                      _tmp_68 + _tmp_69 + _tmp_70 + _tmp_71 + _tmp_72 + _tmp_73;
            gt_rhs01[pp]   = _tmp_40;
            _tmp_25        = gt1[pp] * scratch_5[pp];
            scratch_14[pp] = _tmp_25;
        }
    }
}

// --- Execution Unit 16 (ID: Comp0_Slice16) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_0_gt3[pp] * scratch_43[pp];
            double _tmp_1;
            _tmp_1 = scratch_43[pp] * scratch_69[pp];
            double _tmp_2;
            _tmp_2 = grad_0_gt3[pp] * scratch_204[pp];
            double _tmp_3;
            _tmp_3 = scratch_43[pp] * scratch_80[pp];
            double _tmp_4;
            _tmp_4 = -_tmp_0;
            double _tmp_5;
            _tmp_5 = grad_2_gt3[pp] * scratch_259[pp];
            double _tmp_6;
            _tmp_6 = scratch_217[pp] * scratch_9[pp];
            double _tmp_7;
            _tmp_7 = scratch_18[pp] * scratch_217[pp];
            double _tmp_8;
            _tmp_8 = 2 * grad_1_gt0[pp] * scratch_43[pp];
            double _tmp_9;
            _tmp_9 = grad_0_gt3[pp] * scratch_22[pp];
            double _tmp_10;
            _tmp_10 = scratch_22[pp] * scratch_54[pp];
            double _tmp_11;
            _tmp_11 = scratch_22[pp] * scratch_69[pp];
            double _tmp_12;
            _tmp_12 = scratch_46[pp] * scratch_80[pp];
            double _tmp_13;
            _tmp_13 = -_tmp_1;
            double _tmp_14;
            _tmp_14 = -scratch_18[pp] * scratch_204[pp];
            double _tmp_15;
            _tmp_15 = -scratch_43[pp] * scratch_54[pp];
            double _tmp_16;
            _tmp_16 = scratch_22[pp] * scratch_80[pp];
            double _tmp_17;
            _tmp_17 = scratch_59[pp] * scratch_76[pp];
            double _tmp_18;
            _tmp_18 = 2 * scratch_117[pp];
            double _tmp_19;
            _tmp_19 = 2 * scratch_202[pp];
            _tmp_1  = 2 * _tmp_1;
            double _tmp_20;
            _tmp_20 = -2 * scratch_92[pp];
            double _tmp_21;
            _tmp_21 = -2 * scratch_162[pp];
            double _tmp_22;
            _tmp_22 = -2 * scratch_100[pp];
            double _tmp_23;
            _tmp_23 = -2 * _tmp_2;
            double _tmp_24;
            _tmp_24 = -2 * scratch_121[pp];
            _tmp_0  = -2 * _tmp_0;
            double _tmp_25;
            _tmp_25 = 2 * grad_1_gt3[pp] * scratch_142[pp];
            _tmp_2  = -_tmp_2;
            double _tmp_26;
            _tmp_26 = 2 * scratch_157[pp] * scratch_69[pp];
            _tmp_4  = _tmp_3 + _tmp_4 + scratch_293[pp];
            double _tmp_27;
            _tmp_27 = scratch_247[pp] + scratch_86[pp];
            double _tmp_28;
            _tmp_28 = scratch_97[pp] + scratch_99[pp];
            _tmp_7  = _tmp_5 + _tmp_6 + _tmp_7;
            _tmp_9  = _tmp_8 + _tmp_9;
            _tmp_8  = scratch_208[pp] + scratch_242[pp];
            _tmp_10 = _tmp_10 + scratch_262[pp] + scratch_272[pp];
            _tmp_11 = _tmp_11 + scratch_102[pp];
            _tmp_5  = scratch_184[pp] + scratch_189[pp];
            _tmp_13 = _tmp_12 + _tmp_13 + scratch_298[pp];
            _tmp_14 = _tmp_14 + scratch_118[pp];
            _tmp_16 = _tmp_15 + _tmp_16 + scratch_378[pp];
            _tmp_17 = _tmp_17 + scratch_132[pp];
            _tmp_18 = _tmp_18 + scratch_84[pp];
            _tmp_19 = _tmp_19 + scratch_241[pp];
            _tmp_1  = _tmp_1 + scratch_123[pp];
            _tmp_20 = _tmp_20 + scratch_223[pp];
            _tmp_15 = scratch_264[pp] + scratch_277[pp];
            _tmp_21 = _tmp_21 + scratch_252[pp];
            _tmp_22 = _tmp_22 + scratch_239[pp];
            _tmp_23 = _tmp_23 + scratch_270[pp];
            _tmp_24 = _tmp_24 + scratch_339[pp];
            _tmp_0  = _tmp_0 + scratch_273[pp];
            _tmp_2  = _tmp_2 + _tmp_25;
            _tmp_26 = _tmp_26 + scratch_6[pp];
            _tmp_3  = _tmp_3 + scratch_356[pp];
            _tmp_25 = -grad_2_gt1[pp] * scratch_63[pp];
            _tmp_12 = -grad_0_gt1[pp] * scratch_169[pp];
            _tmp_4  = -_tmp_4 * scratch_211[pp];
            _tmp_6  = -scratch_138[pp] * scratch_211[pp];
            _tmp_27 = -_tmp_27 * scratch_200[pp];
            _tmp_28 = -_tmp_28 * scratch_200[pp];
            _tmp_7  = -_tmp_7 * scratch_165[pp];
            _tmp_9  = -_tmp_9 * scratch_165[pp];
            _tmp_8  = _tmp_8 * scratch_201[pp];
            _tmp_10 = _tmp_10 * scratch_174[pp];
            _tmp_11 = _tmp_11 * scratch_172[pp];
            _tmp_5  = _tmp_5 * scratch_172[pp];
            _tmp_13 = _tmp_13 * scratch_200[pp];
            _tmp_14 = _tmp_14 * scratch_200[pp];
            _tmp_16 = _tmp_16 * scratch_165[pp];
            double _tmp_29;
            _tmp_29 = -scratch_206[pp] * scratch_87[pp];
            double _tmp_30;
            _tmp_30 = -scratch_201[pp] * scratch_240[pp] * scratch_59[pp];
            double _tmp_31;
            _tmp_31 = -grad_2_gt3[pp] * scratch_63[pp];
            double _tmp_32;
            _tmp_32 = -grad_0_gt3[pp] * scratch_169[pp];
            double _tmp_33;
            _tmp_33 = -grad_1_gt3[pp] * scratch_146[pp];
            double _tmp_34;
            _tmp_34 = -scratch_153[pp] * scratch_87[pp];
            _tmp_17 = -_tmp_17 * scratch_200[pp];
            _tmp_18 = _tmp_18 * scratch_172[pp];
            _tmp_19 = _tmp_19 * scratch_172[pp];
            _tmp_1  = _tmp_1 * scratch_172[pp];
            _tmp_20 = _tmp_20 * scratch_200[pp];
            _tmp_15 = _tmp_15 * scratch_200[pp];
            _tmp_21 = _tmp_21 * scratch_200[pp];
            _tmp_22 = _tmp_22 * scratch_200[pp];
            _tmp_23 = _tmp_23 * scratch_165[pp];
            _tmp_24 = _tmp_24 * scratch_165[pp];
            _tmp_0  = _tmp_0 * scratch_165[pp];
            _tmp_2  = _tmp_2 * scratch_165[pp];
            _tmp_26 = _tmp_26 * scratch_165[pp];
            _tmp_3  = _tmp_3 * scratch_165[pp];
            double _tmp_35;
            _tmp_35 = scratch_217[pp] * scratch_275[pp];
            double _tmp_36;
            _tmp_36 = scratch_143[pp] * scratch_204[pp];
            double _tmp_37;
            _tmp_37 = scratch_43[pp] * scratch_79[pp];
            double _tmp_38;
            _tmp_38 = scratch_190[pp] * scratch_276[pp];
            double _tmp_39;
            _tmp_39 = -scratch_129[pp] * scratch_87[pp];
            _tmp_16 = _tmp_10 + _tmp_11 + _tmp_12 + _tmp_13 + _tmp_14 +
                      _tmp_16 + _tmp_25 + _tmp_27 + _tmp_28 + _tmp_4 + _tmp_5 +
                      _tmp_6 + _tmp_7 + _tmp_8 + _tmp_9 + scratch_104[pp] +
                      scratch_122[pp] + scratch_139[pp] + scratch_155[pp] +
                      scratch_299[pp] + scratch_331[pp] + scratch_366[pp] +
                      scratch_368[pp] + scratch_371[pp] + scratch_372[pp] +
                      scratch_375[pp] + scratch_376[pp] + scratch_37[pp] +
                      scratch_383[pp] + scratch_386[pp] + scratch_390[pp] +
                      scratch_399[pp] + scratch_410[pp] + scratch_51[pp] +
                      scratch_60[pp] + scratch_61[pp] + scratch_62[pp] +
                      scratch_88[pp];
            _tmp_29 = _tmp_29 + scratch_224[pp];
            _tmp_38 = _tmp_0 + _tmp_1 + _tmp_15 + _tmp_17 + _tmp_18 + _tmp_19 +
                      _tmp_2 + _tmp_20 + _tmp_21 + _tmp_22 + _tmp_23 + _tmp_24 +
                      _tmp_26 + _tmp_3 + _tmp_30 + _tmp_31 + _tmp_32 + _tmp_33 +
                      _tmp_34 + _tmp_35 + _tmp_36 + _tmp_37 + _tmp_38 +
                      scratch_178[pp] + scratch_268[pp] + scratch_319[pp];
            _tmp_39 = _tmp_39 + scratch_157[pp];
            _tmp_30 = beta2[pp] * grad_2_beta0[pp];
            _tmp_31 = beta1[pp] * grad_1_beta0[pp];
            _tmp_32 = beta0[pp] * grad_0_beta0[pp];
            _tmp_33 = -scratch_109[pp] * scratch_23[pp];
            _tmp_16 = _tmp_16 * scratch_263[pp];
            _tmp_34 = -12 * grad2_0_1_alpha[pp];
            _tmp_17 = scratch_160[pp] * scratch_25[pp];
            _tmp_18 = scratch_101[pp] * scratch_68[pp];
            _tmp_19 = beta2[pp] * grad_2_B1[pp];
            _tmp_1  = beta1[pp] * grad_1_B1[pp];
            _tmp_20 = beta0[pp] * grad_0_B1[pp];
            _tmp_15 = -At3[pp] * K[pp];
            _tmp_21 = scratch_137[pp] * scratch_4[pp];
            _tmp_22 = scratch_209[pp] * scratch_33[pp];
            _tmp_23 = scratch_128[pp] * scratch_90[pp];
            _tmp_24 = -scratch_23[pp] * scratch_3[pp];
            _tmp_29 = _tmp_29 * scratch_175[pp];
            _tmp_0  = gt3[pp] * scratch_5[pp];
            _tmp_38 = _tmp_38 * scratch_263[pp];
            _tmp_39 = _tmp_39 * scratch_267[pp];
            _tmp_2  = -12 * grad2_1_1_alpha[pp];
            _tmp_26 = 1.3333333333333333 * grad_1_beta1[pp];
            _tmp_3  = 0.33333333333333331 * scratch_55[pp];
            _tmp_32 = _tmp_30 + _tmp_31 + _tmp_32;
            _tmp_34 = _tmp_16 + _tmp_33 + _tmp_34 + scratch_14[pp] +
                      scratch_152[pp] + scratch_20[pp];
            _tmp_33 = beta2[pp] * grad_2_B2[pp];
            _tmp_16 = beta1[pp] * grad_1_B2[pp];
            _tmp_30 = beta0[pp] * grad_0_B2[pp];
            _tmp_17 = _tmp_17 + scratch_44[pp];
            _tmp_18 = _tmp_18 + scratch_131[pp];
            _tmp_20 = _tmp_1 + _tmp_19 + _tmp_20;
            _tmp_23 = _tmp_15 + _tmp_21 + _tmp_22 + _tmp_23;
            _tmp_2  = _tmp_0 + _tmp_2 + _tmp_24 + _tmp_29 + _tmp_38 + _tmp_39;
            scratch_12[pp] = _tmp_26;
            scratch_28[pp] = _tmp_3;
            _tmp_32        = _tmp_32 * lambda[1];
            _tmp_24        = B0[pp] * scratch_134[pp];
            _tmp_29        = beta1[pp] * grad_1_At1[pp];
            _tmp_0         = beta0[pp] * grad_0_At1[pp];
            _tmp_38        = grad_0_beta0[pp] * scratch_133[pp];
            _tmp_34        = _tmp_34 * scratch_111[pp];
            _tmp_30        = _tmp_16 + _tmp_30 + _tmp_33;
            _tmp_33        = 2 * alpha[pp] * scratch_158[pp] * scratch_177[pp] *
                      scratch_25[pp];
            _tmp_16 = 2 * alpha[pp] * scratch_101[pp] * scratch_142[pp] *
                      scratch_158[pp];
            _tmp_39 = 2 * alpha[pp] * scratch_0[pp] * scratch_158[pp] *
                      scratch_17[pp];
            _tmp_15 =
                alpha[pp] * scratch_158[pp] * scratch_66[pp] * scratch_91[pp];
            _tmp_21 =
                alpha[pp] * scratch_158[pp] * scratch_168[pp] * scratch_8[pp];
            _tmp_22 =
                alpha[pp] * scratch_103[pp] * scratch_141[pp] * scratch_158[pp];
            _tmp_19 = 2.3333333333333335 * grad2_1_2_beta1[pp] *
                      scratch_26[pp] * scratch_2[pp];
            _tmp_1 = 2.3333333333333335 * grad2_0_1_beta1[pp] * scratch_16[pp] *
                     scratch_2[pp];
            _tmp_31 = 0.33333333333333331 * grad2_2_2_beta2[pp] *
                      scratch_26[pp] * scratch_2[pp];
            _tmp_35 = 0.33333333333333331 * grad2_0_2_beta0[pp] *
                      scratch_26[pp] * scratch_2[pp];
            _tmp_36 = 0.33333333333333331 * grad2_0_2_beta2[pp] *
                      scratch_16[pp] * scratch_2[pp];
            _tmp_37 = 0.33333333333333331 * grad2_0_0_beta0[pp] *
                      scratch_16[pp] * scratch_2[pp];
            _tmp_25 = 0.33333333333333331 * scratch_126[pp] * scratch_193[pp] *
                      scratch_30[pp];
            _tmp_12 = -lambda[3] * scratch_71[pp];
            _tmp_4  = -grad_2_beta1[pp] * scratch_119[pp];
            _tmp_6  = -grad_0_beta1[pp] * scratch_171[pp];
            _tmp_27 = -grad_1_beta1[pp] * scratch_72[pp];
            _tmp_17 = -_tmp_17 * scratch_81[pp];
            _tmp_18 = -_tmp_18 * scratch_81[pp];
            _tmp_28 = -scratch_148[pp] * scratch_25[pp];
            _tmp_7  = -scratch_101[pp] * scratch_24[pp];
            _tmp_9  = -B1[pp] * eta[pp];
            _tmp_20 = _tmp_20 * lambda[2];
            _tmp_23 = -_tmp_23 * alpha[pp];
            _tmp_8  = -At3[pp] * scratch_197[pp];
            _tmp_10 = -At3[pp] * scratch_135[pp];
            _tmp_11 = beta2[pp] * grad_2_At3[pp];
            _tmp_5  = beta1[pp] * grad_1_At3[pp];
            _tmp_13 = beta0[pp] * grad_0_At3[pp];
            _tmp_14 = grad_1_beta2[pp] * scratch_198[pp];
            double _tmp_40;
            _tmp_40 = grad_1_beta0[pp] * scratch_75[pp];
            _tmp_2  = _tmp_2 * scratch_111[pp];
            double _tmp_41;
            _tmp_41 = At3[pp] * _tmp_26;
            double _tmp_42;
            _tmp_42        = grad_1_beta2[pp] * scratch_72[pp];
            scratch_29[pp] = _tmp_42;
            double _tmp_43;
            _tmp_43        = _tmp_3 * grad2_1_2_beta1[pp];
            scratch_11[pp] = _tmp_43;
            _tmp_24        = _tmp_24 + _tmp_32;
            b_rhs0[pp]     = _tmp_24;
            _tmp_32        = grad_0_beta2[pp] * scratch_171[pp];
            scratch_15[pp] = _tmp_32;
            _tmp_34 = _tmp_0 + _tmp_29 + _tmp_34 + _tmp_38 + scratch_147[pp] +
                      scratch_156[pp] + scratch_161[pp] + scratch_39[pp] +
                      scratch_74[pp] + scratch_85[pp] + scratch_95[pp] +
                      scratch_96[pp];
            At_rhs01[pp]   = _tmp_34;
            _tmp_29        = grad2_1_1_beta2[pp] * scratch_64[pp];
            scratch_27[pp] = _tmp_29;
            _tmp_30        = _tmp_30 * lambda[2];
            scratch_13[pp] = _tmp_30;
            _tmp_20 = _tmp_1 + _tmp_12 + _tmp_15 + _tmp_16 + _tmp_17 + _tmp_18 +
                      _tmp_19 + _tmp_20 + _tmp_21 + _tmp_22 + _tmp_25 +
                      _tmp_27 + _tmp_28 + _tmp_31 + _tmp_33 + _tmp_35 +
                      _tmp_36 + _tmp_37 + _tmp_39 + _tmp_4 + _tmp_6 + _tmp_7 +
                      _tmp_9 + scratch_105[pp] + scratch_107[pp] +
                      scratch_113[pp] + scratch_166[pp] + scratch_170[pp] +
                      scratch_176[pp] + scratch_181[pp] + scratch_1[pp] +
                      scratch_21[pp] + scratch_38[pp] + scratch_42[pp];
            B_rhs1[pp] = _tmp_20;
            _tmp_41 = _tmp_10 + _tmp_11 + _tmp_13 + _tmp_14 + _tmp_2 + _tmp_23 +
                      _tmp_40 + _tmp_41 + _tmp_5 + _tmp_8;
            At_rhs11[pp] = _tmp_41;
        }
    }
}

// --- Execution Unit 17 (ID: Comp0_Slice17) ---
for (unsigned int k = bssnrhstests::pw; k < nz - bssnrhstests::pw; k++) {
    unsigned int k_offset = k * ny * nx;
    for (unsigned int j = bssnrhstests::pw; j < ny - bssnrhstests::pw; j++) {
        unsigned int j_offset = k_offset + j * nx;
#pragma omp simd
        for (unsigned int i = bssnrhstests::pw; i < nx - bssnrhstests::pw;
             i++) {
            unsigned int pp = j_offset + i;
            double _tmp_0;
            _tmp_0 = grad_1_gt5[pp] * scratch_186[pp];
            double _tmp_1;
            _tmp_1 = grad_0_gt5[pp] * scratch_186[pp];
            double _tmp_2;
            _tmp_2 = -2 * scratch_112[pp] * scratch_49[pp];
            double _tmp_3;
            _tmp_3 = scratch_112[pp] * scratch_18[pp];
            double _tmp_4;
            _tmp_4 = 2 * scratch_150[pp];
            double _tmp_5;
            _tmp_5 = 2 * _tmp_0;
            double _tmp_6;
            _tmp_6 = 2 * scratch_219[pp];
            double _tmp_7;
            _tmp_7 = 2 * scratch_48[pp];
            double _tmp_8;
            _tmp_8 = 2 * scratch_41[pp];
            double _tmp_9;
            _tmp_9 = 2 * scratch_154[pp];
            double _tmp_10;
            _tmp_10 = 2 * scratch_205[pp];
            double _tmp_11;
            _tmp_11 = 2 * _tmp_1;
            _tmp_2  = _tmp_2 + scratch_195[pp];
            _tmp_4  = _tmp_3 + _tmp_4;
            _tmp_0  = _tmp_0 + scratch_163[pp];
            _tmp_5  = _tmp_5 + scratch_220[pp];
            _tmp_6  = _tmp_6 + scratch_48[pp];
            _tmp_7  = _tmp_7 + scratch_219[pp];
            _tmp_8  = _tmp_8 + scratch_232[pp];
            _tmp_9  = _tmp_9 + scratch_114[pp];
            _tmp_10 = _tmp_10 + scratch_229[pp];
            _tmp_1  = _tmp_1 + scratch_212[pp];
            _tmp_11 = _tmp_11 + scratch_258[pp];
            _tmp_3  = 9 * grad_2_chi[pp] * scratch_10[pp] * scratch_2[pp] *
                     scratch_91[pp];
            double _tmp_12;
            _tmp_12 = -scratch_159[pp] * scratch_34[pp];
            double _tmp_13;
            _tmp_13 = 9 * grad_0_chi[pp] * scratch_10[pp] * scratch_17[pp] *
                      scratch_2[pp];
            double _tmp_14;
            _tmp_14 = -scratch_7[pp] * scratch_94[pp];
            double _tmp_15;
            _tmp_15 = scratch_25[pp] * scratch_73[pp];
            double _tmp_16;
            _tmp_16 = scratch_26[pp] * scratch_56[pp];
            double _tmp_17;
            _tmp_17 = scratch_112[pp] * scratch_201[pp] * scratch_345[pp];
            double _tmp_18;
            _tmp_18 = -grad_2_gt5[pp] * scratch_63[pp];
            double _tmp_19;
            _tmp_19 = -grad_0_gt5[pp] * scratch_169[pp];
            double _tmp_20;
            _tmp_20 = -grad_1_gt5[pp] * scratch_146[pp];
            double _tmp_21;
            _tmp_21 = -scratch_153[pp] * scratch_82[pp];
            _tmp_2  = -_tmp_2 * scratch_172[pp];
            _tmp_4  = -_tmp_4 * scratch_200[pp];
            _tmp_0  = -_tmp_0 * scratch_200[pp];
            _tmp_5  = -_tmp_5 * scratch_200[pp];
            _tmp_6  = -_tmp_6 * scratch_165[pp];
            _tmp_7  = -_tmp_7 * scratch_165[pp];
            _tmp_8  = -_tmp_8 * scratch_165[pp];
            _tmp_9  = -_tmp_9 * scratch_165[pp];
            double _tmp_22;
            _tmp_22 = scratch_140[pp] * scratch_196[pp];
            double _tmp_23;
            _tmp_23 = scratch_271[pp] * scratch_283[pp];
            _tmp_10 = _tmp_10 * scratch_172[pp];
            _tmp_1  = _tmp_1 * scratch_172[pp];
            _tmp_11 = _tmp_11 * scratch_172[pp];
            double _tmp_24;
            _tmp_24 = scratch_186[pp] * scratch_192[pp];
            double _tmp_25;
            _tmp_25 = scratch_185[pp] * scratch_46[pp];
            double _tmp_26;
            _tmp_26 = scratch_190[pp] * scratch_349[pp];
            _tmp_12 = _tmp_12 + _tmp_3;
            _tmp_14 = _tmp_13 + _tmp_14;
            _tmp_16 = _tmp_15 + _tmp_16;
            _tmp_26 = _tmp_0 + _tmp_1 + _tmp_10 + _tmp_11 + _tmp_17 + _tmp_18 +
                      _tmp_19 + _tmp_2 + _tmp_20 + _tmp_21 + _tmp_22 + _tmp_23 +
                      _tmp_24 + _tmp_25 + _tmp_26 + _tmp_4 + _tmp_5 + _tmp_6 +
                      _tmp_7 + _tmp_8 + _tmp_9 + scratch_346[pp] +
                      scratch_357[pp] + scratch_83[pp];
            _tmp_17 = -2 * alpha[pp] * scratch_158[pp] * scratch_194[pp] *
                      scratch_25[pp];
            _tmp_18 = -2 * alpha[pp] * scratch_101[pp] * scratch_158[pp] *
                      scratch_253[pp];
            _tmp_19 = -2 * alpha[pp] * scratch_158[pp] * scratch_179[pp] *
                      scratch_17[pp];
            _tmp_20 =
                -alpha[pp] * scratch_144[pp] * scratch_158[pp] * scratch_91[pp];
            _tmp_21 =
                -alpha[pp] * scratch_157[pp] * scratch_158[pp] * scratch_8[pp];
            _tmp_2 = -alpha[pp] * scratch_103[pp] * scratch_158[pp] *
                     scratch_213[pp];
            _tmp_4 = -0.33333333333333331 * grad2_1_1_beta1[pp] *
                     scratch_26[pp] * scratch_2[pp];
            _tmp_0 = -0.33333333333333331 * grad2_0_1_beta0[pp] *
                     scratch_26[pp] * scratch_2[pp];
            _tmp_5 = -0.33333333333333331 * scratch_126[pp] * scratch_221[pp] *
                     scratch_30[pp];
            _tmp_6 = -2.3333333333333335 * grad2_1_2_beta2[pp] *
                     scratch_26[pp] * scratch_2[pp];
            _tmp_7  = -2 * grad2_0_1_beta2[pp] * scratch_16[pp] * scratch_2[pp];
            _tmp_8  = 1.3333333333333333 * grad2_2_2_beta2[pp] * scratch_55[pp];
            _tmp_9  = -beta2[pp] * grad_2_Gt2[pp];
            _tmp_22 = -beta1[pp] * grad_1_Gt2[pp];
            _tmp_23 = -beta0[pp] * grad_0_Gt2[pp];
            _tmp_10 = grad2_0_2_beta0[pp] * scratch_28[pp];
            _tmp_1  = grad_2_beta2[pp] * scratch_119[pp];
            _tmp_12 = _tmp_12 * scratch_81[pp];
            _tmp_14 = _tmp_14 * scratch_81[pp];
            _tmp_16 = _tmp_16 * scratch_81[pp];
            _tmp_11 = grad2_0_1_beta1[pp] * scratch_19[pp];
            _tmp_24 = grad2_0_0_beta0[pp] * scratch_19[pp];
            _tmp_25 = grad2_0_2_beta2[pp] * scratch_57[pp];
            _tmp_15 = grad2_0_0_beta2[pp] * scratch_58[pp];
            _tmp_13 = scratch_180[pp] * scratch_25[pp];
            _tmp_3  = scratch_17[pp] * scratch_24[pp];
            double _tmp_27;
            _tmp_27 = scratch_148[pp] * scratch_91[pp];
            double _tmp_28;
            _tmp_28 = At5[pp] * scratch_127[pp] * scratch_67[pp];
            double _tmp_29;
            _tmp_29 = -At5[pp] * K[pp];
            double _tmp_30;
            _tmp_30 = scratch_137[pp] * scratch_164[pp];
            double _tmp_31;
            _tmp_31 = scratch_167[pp] * scratch_77[pp];
            double _tmp_32;
            _tmp_32 = -scratch_106[pp] * scratch_175[pp];
            double _tmp_33;
            _tmp_33 = -scratch_187[pp] * scratch_218[pp];
            double _tmp_34;
            _tmp_34 = gt5[pp] * scratch_5[pp];
            _tmp_26 = _tmp_26 * scratch_263[pp];
            double _tmp_35;
            _tmp_35 = scratch_115[pp] * scratch_215[pp];
            double _tmp_36;
            _tmp_36 = -12 * grad2_2_2_alpha[pp];
            double _tmp_37;
            _tmp_37 = beta2[pp] * grad_2_Gt2[pp];
            double _tmp_38;
            _tmp_38 = beta1[pp] * grad_1_Gt2[pp];
            double _tmp_39;
            _tmp_39 = beta0[pp] * grad_0_Gt2[pp];
            _tmp_27 = _tmp_0 + _tmp_1 + _tmp_10 + _tmp_11 + _tmp_12 + _tmp_13 +
                      _tmp_14 + _tmp_15 + _tmp_16 + _tmp_17 + _tmp_18 +
                      _tmp_19 + _tmp_2 + _tmp_20 + _tmp_21 + _tmp_22 + _tmp_23 +
                      _tmp_24 + _tmp_25 + _tmp_27 + _tmp_3 + _tmp_4 + _tmp_5 +
                      _tmp_6 + _tmp_7 + _tmp_8 + _tmp_9 + scratch_11[pp] +
                      scratch_15[pp] + scratch_27[pp] + scratch_29[pp];
            _tmp_17 = beta2[pp] * grad_2_beta2[pp];
            _tmp_18 = beta1[pp] * grad_1_beta2[pp];
            _tmp_19 = beta0[pp] * grad_0_beta2[pp];
            _tmp_31 = _tmp_28 + _tmp_29 + _tmp_30 + _tmp_31;
            _tmp_36 = _tmp_26 + _tmp_32 + _tmp_33 + _tmp_34 + _tmp_35 + _tmp_36;
            _tmp_39 = _tmp_37 + _tmp_38 + _tmp_39;
            _tmp_19 = _tmp_17 + _tmp_18 + _tmp_19;
            _tmp_31 = -_tmp_31 * alpha[pp];
            _tmp_17 = -At5[pp] * scratch_197[pp];
            _tmp_18 = -At5[pp] * scratch_136[pp];
            _tmp_37 = beta2[pp] * grad_2_At5[pp];
            _tmp_38 = beta1[pp] * grad_1_At5[pp];
            _tmp_32 = beta0[pp] * grad_0_At5[pp];
            _tmp_33 = grad_2_beta1[pp] * scratch_198[pp];
            _tmp_34 = grad_2_beta0[pp] * scratch_93[pp];
            _tmp_36 = _tmp_36 * scratch_111[pp];
            _tmp_26 = At5[pp] * scratch_40[pp];
            _tmp_35 = -gt3[pp] * scratch_197[pp];
            _tmp_28 = -gt3[pp] * scratch_135[pp];
            _tmp_29 = -At3[pp] * scratch_45[pp];
            _tmp_30 = beta2[pp] * grad_2_gt3[pp];
            _tmp_20 = beta1[pp] * grad_1_gt3[pp];
            _tmp_21 = beta0[pp] * grad_0_gt3[pp];
            _tmp_2  = grad_1_beta2[pp] * scratch_234[pp];
            _tmp_4  = gt3[pp] * scratch_12[pp];
            _tmp_0  = grad_1_beta0[pp] * scratch_47[pp];
            _tmp_39 = -_tmp_39 * lambda[3];
            _tmp_5  = -B2[pp] * eta[pp];
            _tmp_27 = -_tmp_27;
            Gt_rhs2[pp] = _tmp_27;
            _tmp_19     = _tmp_19 * lambda[1];
            _tmp_6      = B2[pp] * scratch_134[pp];
            _tmp_26     = _tmp_17 + _tmp_18 + _tmp_26 + _tmp_31 + _tmp_32 +
                      _tmp_33 + _tmp_34 + _tmp_36 + _tmp_37 + _tmp_38;
            At_rhs22[pp] = _tmp_26;
            _tmp_0 = _tmp_0 + _tmp_2 + _tmp_20 + _tmp_21 + _tmp_28 + _tmp_29 +
                     _tmp_30 + _tmp_35 + _tmp_4;
            gt_rhs11[pp] = _tmp_0;
            _tmp_27      = _tmp_27 + _tmp_39 + _tmp_5 + scratch_13[pp];
            B_rhs2[pp]   = _tmp_27;
            _tmp_6       = _tmp_19 + _tmp_6;
            b_rhs2[pp]   = _tmp_6;
        }
    }
}
// DENDRO: END GENERATION

/**
-------------------------
  DENDRO CODE GENERATION STATS
-------------------------

  Total Blocks (Kernels) : 89
  Global Scratchpads     : 456

  [OPS]
  Add/Sub                : 1663
  Mul/Div                : 2687
  Pow                    : 22
  Special Funcs          : 0
  ----------
  Total FLOPs (Approx)   : 4372

  [MEMORY TRAFFIC]
  Local Register Writes  : 2632
  Global Mem Writes      : 866

-------------------------
*/

