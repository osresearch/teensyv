#include "coords.h"
static const vertex_t vertices[] = {
{ {      1,    -49,      0 } }, // 1
{ {      2,    -49,      4 } }, // 2
{ {      2,    -49,     -3 } }, // 3
{ {     -7,    -48,      0 } }, // 4
{ {      4,    -48,      6 } }, // 5
{ {      4,    -48,     -5 } }, // 6
{ {      8,    -47,      0 } }, // 7
{ {      7,    -47,      4 } }, // 8
{ {      7,    -47,     -3 } }, // 9
{ {      1,    -45,     19 } }, // 10
{ {      1,    -45,    -18 } }, // 11
{ {    -16,    -45,      0 } }, // 12
{ {     -7,    -44,     19 } }, // 13
{ {     -7,    -44,    -18 } }, // 14
{ {      8,    -43,     19 } }, // 15
{ {      8,    -43,    -18 } }, // 16
{ {     13,    -43,      0 } }, // 17
{ {    -16,    -42,     18 } }, // 18
{ {    -16,    -42,    -17 } }, // 19
{ {    -26,    -41,      0 } }, // 20
{ {     13,    -39,     17 } }, // 21
{ {     13,    -39,    -16 } }, // 22
{ {    -26,    -39,      0 } }, // 23
{ {    -27,    -39,      4 } }, // 24
{ {    -27,    -39,     -3 } }, // 25
{ {     17,    -39,      0 } }, // 26
{ {    -26,    -38,     16 } }, // 27
{ {    -26,    -38,    -15 } }, // 28
{ {    -29,    -38,      6 } }, // 29
{ {    -29,    -38,     -5 } }, // 30
{ {    -31,    -37,      4 } }, // 31
{ {    -31,    -37,     -3 } }, // 32
{ {     19,    -37,      0 } }, // 33
{ {    -32,    -37,      0 } }, // 34
{ {    -35,    -37,      0 } }, // 35
{ {     17,    -36,     15 } }, // 36
{ {     17,    -36,    -14 } }, // 37
{ {    -37,    -35,      0 } }, // 38
{ {      1,    -35,     35 } }, // 39
{ {      1,    -35,    -34 } }, // 40
{ {    -38,    -34,      0 } }, // 41
{ {    -35,    -34,      0 } }, // 42
{ {     -7,    -34,     34 } }, // 43
{ {     -7,    -34,    -33 } }, // 44
{ {     19,    -34,     15 } }, // 45
{ {    -35,    -34,     15 } }, // 46
{ {     19,    -34,    -14 } }, // 47
{ {    -35,    -34,    -14 } }, // 48
{ {    -37,    -34,      0 } }, // 49
{ {      8,    -33,     34 } }, // 50
{ {      8,    -33,    -33 } }, // 51
{ {    -37,    -33,     14 } }, // 52
{ {    -37,    -33,    -13 } }, // 53
{ {    -16,    -32,     32 } }, // 54
{ {    -16,    -32,    -31 } }, // 55
{ {    -35,    -32,      0 } }, // 56
{ {    -38,    -32,     14 } }, // 57
{ {    -38,    -32,    -13 } }, // 58
{ {    -35,    -31,     14 } }, // 59
{ {    -35,    -31,    -13 } }, // 60
{ {    -37,    -31,     13 } }, // 61
{ {    -37,    -31,    -12 } }, // 62
{ {     13,    -30,     31 } }, // 63
{ {     13,    -30,    -30 } }, // 64
{ {    -35,    -29,     13 } }, // 65
{ {    -35,    -29,    -12 } }, // 66
{ {    -26,    -29,     30 } }, // 67
{ {    -26,    -29,    -29 } }, // 68
{ {    -38,    -28,      0 } }, // 69
{ {     17,    -27,     28 } }, // 70
{ {     17,    -27,    -27 } }, // 71
{ {    -38,    -26,     11 } }, // 72
{ {    -38,    -26,    -10 } }, // 73
{ {     19,    -26,     26 } }, // 74
{ {    -35,    -26,     26 } }, // 75
{ {     19,    -26,    -25 } }, // 76
{ {    -35,    -26,    -25 } }, // 77
{ {    -37,    -25,     25 } }, // 78
{ {    -37,    -25,    -24 } }, // 79
{ {    -38,    -24,     25 } }, // 80
{ {    -38,    -24,    -24 } }, // 81
{ {    -35,    -24,     25 } }, // 82
{ {    -35,    -24,    -24 } }, // 83
{ {    -37,    -24,     24 } }, // 84
{ {    -37,    -24,    -23 } }, // 85
{ {    -35,    -22,     23 } }, // 86
{ {    -35,    -22,    -22 } }, // 87
{ {    -39,    -20,      0 } }, // 88
{ {    -38,    -20,     20 } }, // 89
{ {    -38,    -20,    -19 } }, // 90
{ {      1,    -19,     46 } }, // 91
{ {      1,    -19,    -45 } }, // 92
{ {     -7,    -19,     45 } }, // 93
{ {     -7,    -19,    -44 } }, // 94
{ {    -39,    -18,      8 } }, // 95
{ {    -39,    -18,     -7 } }, // 96
{ {      8,    -18,     44 } }, // 97
{ {      8,    -18,    -43 } }, // 98
{ {    -16,    -17,     42 } }, // 99
{ {    -16,    -17,    -41 } }, // 100
{ {     13,    -17,     40 } }, // 101
{ {     13,    -17,    -39 } }, // 102
{ {    -26,    -16,     38 } }, // 103
{ {    -26,    -16,    -37 } }, // 104
{ {     17,    -15,     36 } }, // 105
{ {     17,    -15,    -35 } }, // 106
{ {     19,    -14,     34 } }, // 107
{ {    -35,    -14,     34 } }, // 108
{ {     19,    -14,    -33 } }, // 109
{ {    -35,    -14,    -33 } }, // 110
{ {    -39,    -14,     14 } }, // 111
{ {    -39,    -14,    -13 } }, // 112
{ {    -37,    -14,     33 } }, // 113
{ {    -37,    -14,    -32 } }, // 114
{ {    -38,    -13,     32 } }, // 115
{ {    -38,    -13,    -31 } }, // 116
{ {    -35,    -13,     32 } }, // 117
{ {    -35,    -13,    -31 } }, // 118
{ {    -37,    -13,     32 } }, // 119
{ {    -37,    -13,    -31 } }, // 120
{ {    -35,    -12,     30 } }, // 121
{ {    -35,    -12,    -29 } }, // 122
{ {    -41,    -11,      0 } }, // 123
{ {    -38,    -11,     26 } }, // 124
{ {    -38,    -11,    -25 } }, // 125
{ {    -41,    -10,      4 } }, // 126
{ {    -41,    -10,     -3 } }, // 127
{ {    -53,     -8,      0 } }, // 128
{ {    -50,     -8,      0 } }, // 129
{ {    -41,     -8,      8 } }, // 130
{ {    -41,     -8,     -7 } }, // 131
{ {    -39,     -8,     19 } }, // 132
{ {    -39,     -8,    -18 } }, // 133
{ {    -53,     -7,      3 } }, // 134
{ {    -53,     -7,     -2 } }, // 135
{ {    -50,     -7,      3 } }, // 136
{ {    -50,     -7,     -2 } }, // 137
{ {    -53,     -5,      6 } }, // 138
{ {    -53,     -5,     -5 } }, // 139
{ {    -50,     -5,      6 } }, // 140
{ {    -50,     -5,     -5 } }, // 141
{ {    -43,     -4,      0 } }, // 142
{ {    -46,     -4,      0 } }, // 143
{ {    -43,     -4,      2 } }, // 144
{ {    -43,     -4,     -1 } }, // 145
{ {    -46,     -4,      2 } }, // 146
{ {    -46,     -4,     -1 } }, // 147
{ {    -41,     -4,     10 } }, // 148
{ {    -41,     -4,     -9 } }, // 149
{ {    -43,     -3,      4 } }, // 150
{ {    -43,     -3,     -3 } }, // 151
{ {    -46,     -3,      3 } }, // 152
{ {    -46,     -3,     -2 } }, // 153
{ {    -53,     -3,      8 } }, // 154
{ {    -53,     -3,     -7 } }, // 155
{ {    -50,     -3,      7 } }, // 156
{ {    -50,     -3,     -6 } }, // 157
{ {    -43,     -1,      5 } }, // 158
{ {    -43,     -1,     -4 } }, // 159
{ {    -46,     -1,      4 } }, // 160
{ {    -46,     -1,     -3 } }, // 161
{ {    -54,      0,      0 } }, // 162
{ {    -46,      0,      5 } }, // 163
{ {    -43,      0,      5 } }, // 164
{ {    -50,      0,      8 } }, // 165
{ {    -53,      0,      8 } }, // 166
{ {    -41,      0,     11 } }, // 167
{ {    -39,      0,     20 } }, // 168
{ {    -38,      0,     29 } }, // 169
{ {    -35,      0,     32 } }, // 170
{ {    -37,      0,     34 } }, // 171
{ {    -35,      0,     35 } }, // 172
{ {    -38,      0,     35 } }, // 173
{ {    -37,      0,     36 } }, // 174
{ {     19,      0,     37 } }, // 175
{ {    -35,      0,     37 } }, // 176
{ {     17,      0,     39 } }, // 177
{ {    -26,      0,     42 } }, // 178
{ {     13,      0,     43 } }, // 179
{ {    -16,      0,     46 } }, // 180
{ {      8,      0,     48 } }, // 181
{ {     -7,      0,     48 } }, // 182
{ {      1,      0,     50 } }, // 183
{ {    -46,      0,     -4 } }, // 184
{ {    -43,      0,     -4 } }, // 185
{ {    -50,      0,     -7 } }, // 186
{ {    -53,      0,     -7 } }, // 187
{ {    -41,      0,    -10 } }, // 188
{ {    -39,      0,    -19 } }, // 189
{ {    -38,      0,    -28 } }, // 190
{ {    -35,      0,    -31 } }, // 191
{ {    -37,      0,    -33 } }, // 192
{ {    -35,      0,    -34 } }, // 193
{ {    -38,      0,    -34 } }, // 194
{ {    -37,      0,    -35 } }, // 195
{ {     19,      0,    -36 } }, // 196
{ {    -35,      0,    -36 } }, // 197
{ {     17,      0,    -38 } }, // 198
{ {    -26,      0,    -41 } }, // 199
{ {     13,      0,    -42 } }, // 200
{ {    -16,      0,    -45 } }, // 201
{ {      8,      0,    -47 } }, // 202
{ {     -7,      0,    -47 } }, // 203
{ {      1,      0,    -49 } }, // 204
{ {    -46,      1,      4 } }, // 205
{ {    -46,      1,     -3 } }, // 206
{ {    -43,      1,      5 } }, // 207
{ {    -43,      1,     -4 } }, // 208
{ {    -50,      3,      7 } }, // 209
{ {    -50,      3,     -6 } }, // 210
{ {    -53,      3,      8 } }, // 211
{ {    -53,      3,     -7 } }, // 212
{ {    -46,      3,      3 } }, // 213
{ {    -46,      3,     -2 } }, // 214
{ {    -43,      3,      4 } }, // 215
{ {    -43,      3,     -3 } }, // 216
{ {    -41,      4,     10 } }, // 217
{ {    -41,      4,     -9 } }, // 218
{ {    -46,      4,      2 } }, // 219
{ {    -46,      4,     -1 } }, // 220
{ {    -43,      4,      2 } }, // 221
{ {    -43,      4,     -1 } }, // 222
{ {    -46,      4,      0 } }, // 223
{ {    -43,      4,      0 } }, // 224
{ {    -50,      5,      6 } }, // 225
{ {    -50,      5,     -5 } }, // 226
{ {    -53,      5,      6 } }, // 227
{ {    -53,      5,     -5 } }, // 228
{ {    -50,      7,      3 } }, // 229
{ {    -50,      7,     -2 } }, // 230
{ {    -53,      7,      3 } }, // 231
{ {    -53,      7,     -2 } }, // 232
{ {    -39,      8,     19 } }, // 233
{ {    -39,      8,    -18 } }, // 234
{ {    -41,      8,      8 } }, // 235
{ {    -41,      8,     -7 } }, // 236
{ {    -50,      8,      0 } }, // 237
{ {    -53,      8,      0 } }, // 238
{ {    -41,     10,      4 } }, // 239
{ {    -41,     10,     -3 } }, // 240
{ {    -38,     11,     26 } }, // 241
{ {    -38,     11,    -25 } }, // 242
{ {    -41,     11,      0 } }, // 243
{ {    -35,     12,     30 } }, // 244
{ {    -35,     12,    -29 } }, // 245
{ {    -37,     13,     32 } }, // 246
{ {    -37,     13,    -31 } }, // 247
{ {    -35,     13,     32 } }, // 248
{ {    -35,     13,    -31 } }, // 249
{ {    -38,     13,     32 } }, // 250
{ {    -38,     13,    -31 } }, // 251
{ {    -37,     14,     33 } }, // 252
{ {    -37,     14,    -32 } }, // 253
{ {    -39,     14,     14 } }, // 254
{ {    -39,     14,    -13 } }, // 255
{ {     19,     14,     34 } }, // 256
{ {    -35,     14,     34 } }, // 257
{ {     19,     14,    -33 } }, // 258
{ {    -35,     14,    -33 } }, // 259
{ {     17,     15,     36 } }, // 260
{ {     17,     15,    -35 } }, // 261
{ {    -26,     16,     38 } }, // 262
{ {    -26,     16,    -37 } }, // 263
{ {     13,     17,     40 } }, // 264
{ {     13,     17,    -39 } }, // 265
{ {    -16,     17,     42 } }, // 266
{ {    -16,     17,    -41 } }, // 267
{ {      8,     18,     44 } }, // 268
{ {      8,     18,    -43 } }, // 269
{ {    -39,     18,      8 } }, // 270
{ {    -39,     18,     -7 } }, // 271
{ {     -7,     19,     45 } }, // 272
{ {     -7,     19,    -44 } }, // 273
{ {      1,     19,     46 } }, // 274
{ {      1,     19,    -45 } }, // 275
{ {    -38,     20,     20 } }, // 276
{ {    -38,     20,    -19 } }, // 277
{ {    -39,     20,      0 } }, // 278
{ {    -35,     22,     23 } }, // 279
{ {    -35,     22,    -22 } }, // 280
{ {    -37,     24,     24 } }, // 281
{ {    -37,     24,    -23 } }, // 282
{ {    -35,     24,     25 } }, // 283
{ {    -35,     24,    -24 } }, // 284
{ {    -38,     24,     25 } }, // 285
{ {    -38,     24,    -24 } }, // 286
{ {    -37,     25,     25 } }, // 287
{ {    -37,     25,    -24 } }, // 288
{ {     19,     26,     26 } }, // 289
{ {    -35,     26,     26 } }, // 290
{ {     19,     26,    -25 } }, // 291
{ {    -35,     26,    -25 } }, // 292
{ {    -38,     26,     11 } }, // 293
{ {    -38,     26,    -10 } }, // 294
{ {     17,     27,     28 } }, // 295
{ {     17,     27,    -27 } }, // 296
{ {    -38,     28,      0 } }, // 297
{ {    -26,     29,     30 } }, // 298
{ {    -26,     29,    -29 } }, // 299
{ {    -35,     29,     13 } }, // 300
{ {    -35,     29,    -12 } }, // 301
{ {     13,     30,     31 } }, // 302
{ {     13,     30,    -30 } }, // 303
{ {    -37,     31,     13 } }, // 304
{ {    -37,     31,    -12 } }, // 305
{ {    -35,     31,     14 } }, // 306
{ {    -35,     31,    -13 } }, // 307
{ {    -38,     32,     14 } }, // 308
{ {    -38,     32,    -13 } }, // 309
{ {    -35,     32,      0 } }, // 310
{ {    -16,     32,     32 } }, // 311
{ {    -16,     32,    -31 } }, // 312
{ {    -37,     33,     14 } }, // 313
{ {    -37,     33,    -13 } }, // 314
{ {      8,     33,     34 } }, // 315
{ {      8,     33,    -33 } }, // 316
{ {    -37,     34,      0 } }, // 317
{ {     19,     34,     15 } }, // 318
{ {    -35,     34,     15 } }, // 319
{ {     19,     34,    -14 } }, // 320
{ {    -35,     34,    -14 } }, // 321
{ {     -7,     34,     34 } }, // 322
{ {     -7,     34,    -33 } }, // 323
{ {    -35,     34,      0 } }, // 324
{ {    -38,     34,      0 } }, // 325
{ {      1,     35,     35 } }, // 326
{ {      1,     35,    -34 } }, // 327
{ {    -37,     35,      0 } }, // 328
{ {     17,     36,     15 } }, // 329
{ {     17,     36,    -14 } }, // 330
{ {     19,     37,      0 } }, // 331
{ {    -35,     37,      0 } }, // 332
{ {    -26,     38,     16 } }, // 333
{ {    -26,     38,    -15 } }, // 334
{ {     17,     39,      0 } }, // 335
{ {     13,     39,     17 } }, // 336
{ {     13,     39,    -16 } }, // 337
{ {    -26,     41,      0 } }, // 338
{ {      8,     42,      0 } }, // 339
{ {    -11,     42,      0 } }, // 340
{ {      5,     42,      9 } }, // 341
{ {     -8,     42,      9 } }, // 342
{ {     -1,     42,     12 } }, // 343
{ {      5,     42,     -8 } }, // 344
{ {     -8,     42,     -8 } }, // 345
{ {     -1,     42,    -11 } }, // 346
{ {    -16,     42,     18 } }, // 347
{ {    -16,     42,    -17 } }, // 348
{ {     13,     43,      0 } }, // 349
{ {      8,     43,     19 } }, // 350
{ {      8,     43,    -18 } }, // 351
{ {     -7,     44,     19 } }, // 352
{ {     -7,     44,    -18 } }, // 353
{ {    -16,     45,      0 } }, // 354
{ {      1,     45,     19 } }, // 355
{ {      1,     45,    -18 } }, // 356
{ {      8,     47,      0 } }, // 357
{ {     -7,     48,      0 } }, // 358
{ {      1,     49,      0 } }, // 359
{ {    -14,     53,      0 } }, // 360
{ {    -12,     54,      8 } }, // 361
{ {    -12,     54,     -7 } }, // 362
{ {     -6,     56,     11 } }, // 363
{ {     -6,     56,    -10 } }, // 364
{ {     -1,     58,      8 } }, // 365
{ {     -1,     58,     -7 } }, // 366
{ {    -21,     59,      0 } }, // 367
{ {      0,     59,      0 } }, // 368
{ {    -19,     60,      6 } }, // 369
{ {    -19,     60,     -5 } }, // 370
{ {    -29,     61,      0 } }, // 371
{ {    -16,     62,      8 } }, // 372
{ {    -16,     62,     -7 } }, // 373
{ {    -28,     63,      4 } }, // 374
{ {    -28,     63,     -3 } }, // 375
{ {    -13,     65,      6 } }, // 376
{ {    -13,     65,     -5 } }, // 377
{ {    -27,     66,      6 } }, // 378
{ {    -27,     66,     -5 } }, // 379
{ {    -12,     66,      0 } }, // 380
{ {    -35,     66,      0 } }, // 381
{ {    -36,     68,      0 } }, // 382
{ {    -35,     69,      3 } }, // 383
{ {    -35,     69,     -2 } }, // 384
{ {    -35,     69,      0 } }, // 385
{ {    -26,     69,      4 } }, // 386
{ {    -26,     69,     -3 } }, // 387
{ {    -37,     69,      0 } }, // 388
{ {    -36,     70,      0 } }, // 389
{ {    -35,     70,      2 } }, // 390
{ {    -35,     70,     -1 } }, // 391
{ {    -25,     70,      0 } }, // 392
{ {    -37,     71,      3 } }, // 393
{ {    -37,     71,     -2 } }, // 394
{ {    -37,     72,      3 } }, // 395
{ {    -37,     72,     -2 } }, // 396
{ {    -37,     72,      2 } }, // 397
{ {    -37,     72,     -1 } }, // 398
{ {    -35,     74,      3 } }, // 399
{ {    -35,     74,      5 } }, // 400
{ {    -35,     74,     -2 } }, // 401
{ {    -35,     74,     -4 } }, // 402
{ {    -37,     76,      4 } }, // 403
{ {    -37,     76,     -3 } }, // 404
{ {    -37,     76,      3 } }, // 405
{ {    -37,     76,     -2 } }, // 406
{ {    -37,     77,      4 } }, // 407
{ {    -37,     77,     -3 } }, // 408
{ {    -35,     77,      2 } }, // 409
{ {    -35,     77,     -1 } }, // 410
{ {    -35,     77,      0 } }, // 411
{ {    -35,     77,      3 } }, // 412
{ {    -35,     77,     -2 } }, // 413
{ {    -37,     77,      2 } }, // 414
{ {    -37,     77,     -1 } }, // 415
{ {    -37,     77,      3 } }, // 416
{ {    -37,     77,     -2 } }, // 417
{ {    -37,     77,      0 } }, // 418
{ {    -26,    -50,      0 } }, // 419
{ {    -27,    -50,      4 } }, // 420
{ {    -27,    -50,     -3 } }, // 421
{ {    -29,    -51,      6 } }, // 422
{ {    -29,    -51,     -5 } }, // 423
{ {    -31,    -52,      4 } }, // 424
{ {    -31,    -52,     -3 } }, // 425
{ {    -31,    -52,      0 } }, // 426
{ {     -3,    -56,      0 } }, // 427
{ {     -2,    -56,      4 } }, // 428
{ {     -2,    -56,     -3 } }, // 429
{ {      0,    -57,      6 } }, // 430
{ {      0,    -57,     -5 } }, // 431
{ {      1,    -57,      4 } }, // 432
{ {      1,    -57,     -3 } }, // 433
{ {      2,    -58,      0 } }, // 434
{ {    -25,    -58,      0 } }, // 435
{ {    -26,    -59,      4 } }, // 436
{ {    -26,    -59,     -3 } }, // 437
{ {    -28,    -61,      6 } }, // 438
{ {    -28,    -61,     -5 } }, // 439
{ {     -9,    -61,      0 } }, // 440
{ {     -9,    -62,      4 } }, // 441
{ {     -9,    -62,     -3 } }, // 442
{ {    -30,    -63,      4 } }, // 443
{ {    -30,    -63,     -3 } }, // 444
{ {    -30,    -63,      0 } }, // 445
{ {    -24,    -64,      0 } }, // 446
{ {     -7,    -64,      6 } }, // 447
{ {     -7,    -64,     -5 } }, // 448
{ {    -16,    -64,      0 } }, // 449
{ {    -24,    -65,      4 } }, // 450
{ {    -24,    -65,     -3 } }, // 451
{ {    -21,    -65,      0 } }, // 452
{ {     -5,    -65,      4 } }, // 453
{ {     -5,    -65,     -3 } }, // 454
{ {    -15,    -65,      4 } }, // 455
{ {    -15,    -65,     -3 } }, // 456
{ {     -5,    -66,      0 } }, // 457
{ {    -21,    -66,      4 } }, // 458
{ {    -21,    -66,     -3 } }, // 459
{ {    -25,    -67,      6 } }, // 460
{ {    -25,    -67,     -5 } }, // 461
{ {    -14,    -68,      6 } }, // 462
{ {    -14,    -68,     -5 } }, // 463
{ {    -21,    -69,      6 } }, // 464
{ {    -21,    -69,     -5 } }, // 465
{ {    -26,    -69,      4 } }, // 466
{ {    -26,    -69,     -3 } }, // 467
{ {    -13,    -70,      4 } }, // 468
{ {    -13,    -70,     -3 } }, // 469
{ {    -27,    -70,      0 } }, // 470
{ {    -12,    -71,      0 } }, // 471
{ {    -21,    -72,      4 } }, // 472
{ {    -21,    -72,     -3 } }, // 473
{ {    -21,    -73,      0 } }, // 474
};
static const edge_t edges[] = {
{  305,  323 },
{  303,  305 },
{  303,  316 },
{  282,  305 },
{  280,  282 },
{  280,  303 },
{  247,  282 },
{  245,  247 },
{  245,  280 },
{  171,  247 },
{  170,  171 },
{  170,  245 },
{  307,  316 },
{  307,  324 },
{  284,  303 },
{  284,  307 },
{  249,  280 },
{  249,  284 },
{  172,  245 },
{  172,  249 },
{  312,  324 },
{  312,  327 },
{  286,  307 },
{  286,  312 },
{  251,  284 },
{  251,  286 },
{  173,  249 },
{  173,  251 },
{  318,  327 },
{  318,  331 },
{  289,  312 },
{  289,  318 },
{  256,  286 },
{  256,  289 },
{  175,  251 },
{  175,  256 },
{  116,  171 },
{  116,  118 },
{  118,  170 },
{   81,  116 },
{   81,   83 },
{   83,  118 },
{   58,   81 },
{   58,   60 },
{   60,   83 },
{   41,   58 },
{   41,   48 },
{   48,   60 },
{  114,  170 },
{  114,  172 },
{   79,  118 },
{   79,  114 },
{   56,   83 },
{   56,   79 },
{   40,   60 },
{   40,   56 },
{  112,  172 },
{  112,  173 },
{   77,  114 },
{   77,  112 },
{   51,   79 },
{   51,   77 },
{   37,   56 },
{   37,   51 },
{  107,  173 },
{  107,  175 },
{   74,  112 },
{   74,  107 },
{   45,   77 },
{   45,   74 },
{   34,   51 },
{   34,   45 },
{   41,   59 },
{   59,   61 },
{   48,   61 },
{   59,   82 },
{   82,   84 },
{   61,   84 },
{   82,  117 },
{  117,  119 },
{   84,  119 },
{  117,  192 },
{  191,  192 },
{  119,  191 },
{   48,   57 },
{   40,   57 },
{   61,   80 },
{   57,   80 },
{   84,  115 },
{   80,  115 },
{  119,  193 },
{  115,  193 },
{   40,   52 },
{   37,   52 },
{   57,   78 },
{   52,   78 },
{   80,  113 },
{   78,  113 },
{  115,  194 },
{  113,  194 },
{   37,   47 },
{   34,   47 },
{   52,   76 },
{   47,   76 },
{   78,  109 },
{   76,  109 },
{  113,  196 },
{  109,  196 },
{  192,  248 },
{  246,  248 },
{  191,  246 },
{  248,  283 },
{  281,  283 },
{  246,  281 },
{  283,  306 },
{  304,  306 },
{  281,  304 },
{  306,  323 },
{  316,  323 },
{  304,  316 },
{  191,  250 },
{  193,  250 },
{  246,  285 },
{  250,  285 },
{  281,  308 },
{  285,  308 },
{  304,  324 },
{  308,  324 },
{  193,  252 },
{  194,  252 },
{  250,  287 },
{  252,  287 },
{  285,  313 },
{  287,  313 },
{  308,  327 },
{  313,  327 },
{  194,  258 },
{  196,  258 },
{  252,  291 },
{  258,  291 },
{  287,  320 },
{  291,  320 },
{  313,  331 },
{  320,  331 },
{  331,  332 },
{  332,  337 },
{  297,  318 },
{  297,  332 },
{  261,  289 },
{  261,  297 },
{  177,  256 },
{  177,  261 },
{  337,  346 },
{  346,  353 },
{  310,  332 },
{  310,  346 },
{  265,  297 },
{  265,  310 },
{  179,  261 },
{  179,  265 },
{  351,  353 },
{  351,  357 },
{  321,  346 },
{  321,  351 },
{  271,  310 },
{  271,  321 },
{  181,  265 },
{  181,  271 },
{  354,  357 },
{  354,  358 },
{  325,  351 },
{  325,  354 },
{  273,  321 },
{  273,  325 },
{  182,  271 },
{  182,  273 },
{  102,  175 },
{  102,  177 },
{   66,  107 },
{   66,  102 },
{   26,   74 },
{   26,   66 },
{   19,   45 },
{   19,   26 },
{   98,  177 },
{   98,  179 },
{   53,  102 },
{   53,   98 },
{   17,   66 },
{   17,   53 },
{   11,   26 },
{   11,   17 },
{   92,  179 },
{   92,  181 },
{   42,   98 },
{   42,   92 },
{   12,   53 },
{   12,   42 },
{    3,   17 },
{    3,   12 },
{   90,  181 },
{   90,  182 },
{   38,   92 },
{   38,   90 },
{    9,   42 },
{    9,   38 },
{    0,   12 },
{    0,    9 },
{   27,   34 },
{   19,   27 },
{   47,   67 },
{   27,   67 },
{   76,  103 },
{   67,  103 },
{  109,  198 },
{  103,  198 },
{   18,   19 },
{   11,   18 },
{   27,   54 },
{   18,   54 },
{   67,   99 },
{   54,   99 },
{  103,  200 },
{   99,  200 },
{   11,   13 },
{    3,   13 },
{   18,   43 },
{   13,   43 },
{   54,   93 },
{   43,   93 },
{   99,  202 },
{   93,  202 },
{    3,   10 },
{    0,   10 },
{   13,   39 },
{   10,   39 },
{   43,   91 },
{   39,   91 },
{   93,  203 },
{   91,  203 },
{  196,  262 },
{  198,  262 },
{  258,  298 },
{  262,  298 },
{  291,  333 },
{  298,  333 },
{  320,  337 },
{  333,  337 },
{  198,  266 },
{  200,  266 },
{  262,  311 },
{  266,  311 },
{  298,  347 },
{  311,  347 },
{  333,  353 },
{  347,  353 },
{  200,  272 },
{  202,  272 },
{  266,  322 },
{  272,  322 },
{  311,  352 },
{  322,  352 },
{  347,  357 },
{  352,  357 },
{  202,  274 },
{  203,  274 },
{  272,  326 },
{  274,  326 },
{  322,  355 },
{  326,  355 },
{  352,  358 },
{  355,  358 },
{  349,  358 },
{  349,  356 },
{  314,  354 },
{  314,  349 },
{  267,  325 },
{  267,  314 },
{  180,  273 },
{  180,  267 },
{  335,  356 },
{  335,  348 },
{  301,  349 },
{  301,  335 },
{  263,  314 },
{  263,  301 },
{  178,  267 },
{  178,  263 },
{  328,  348 },
{  328,  334 },
{  294,  335 },
{  294,  328 },
{  259,  301 },
{  259,  294 },
{  176,  263 },
{  176,  259 },
{  317,  334 },
{  317,  330 },
{  288,  328 },
{  288,  317 },
{  255,  294 },
{  255,  288 },
{  174,  259 },
{  174,  255 },
{   96,  182 },
{   96,  180 },
{   49,   90 },
{   49,   96 },
{   14,   38 },
{   14,   49 },
{    6,    9 },
{    6,   14 },
{  100,  180 },
{  100,  178 },
{   62,   96 },
{   62,  100 },
{   20,   49 },
{   20,   62 },
{   14,   16 },
{   16,   20 },
{  104,  178 },
{  104,  176 },
{   69,  100 },
{   69,  104 },
{   35,   62 },
{   35,   69 },
{   20,   25 },
{   25,   35 },
{  106,  176 },
{  106,  174 },
{   73,  104 },
{   73,  106 },
{   44,   69 },
{   44,   73 },
{   32,   35 },
{   32,   44 },
{    0,   15 },
{    6,   15 },
{   10,   50 },
{   15,   50 },
{   39,   97 },
{   50,   97 },
{   91,  201 },
{   97,  201 },
{    6,   21 },
{   16,   21 },
{   15,   63 },
{   21,   63 },
{   50,  101 },
{   63,  101 },
{   97,  199 },
{  101,  199 },
{   16,   36 },
{   25,   36 },
{   21,   70 },
{   36,   70 },
{   63,  105 },
{   70,  105 },
{  101,  197 },
{  105,  197 },
{   25,   46 },
{   32,   46 },
{   36,   75 },
{   46,   75 },
{   70,  108 },
{   75,  108 },
{  105,  195 },
{  108,  195 },
{  203,  268 },
{  201,  268 },
{  274,  315 },
{  268,  315 },
{  326,  350 },
{  315,  350 },
{  355,  356 },
{  350,  356 },
{  201,  264 },
{  199,  264 },
{  268,  302 },
{  264,  302 },
{  315,  336 },
{  302,  336 },
{  348,  350 },
{  336,  348 },
{  199,  260 },
{  197,  260 },
{  264,  295 },
{  260,  295 },
{  302,  329 },
{  295,  329 },
{  334,  336 },
{  329,  334 },
{  197,  257 },
{  195,  257 },
{  260,  290 },
{  257,  290 },
{  295,  319 },
{  290,  319 },
{  329,  330 },
{  319,  330 },
{   22,   23 },
{   23,  419 },
{  418,  419 },
{   23,   28 },
{   28,  421 },
{  419,  421 },
{   28,   30 },
{   30,  423 },
{  421,  423 },
{   30,   33 },
{   33,  425 },
{  423,  425 },
{  418,  435 },
{  434,  435 },
{  419,  437 },
{  435,  437 },
{  421,  442 },
{  437,  442 },
{  423,  444 },
{  442,  444 },
{  434,  449 },
{  445,  449 },
{  435,  459 },
{  449,  459 },
{  437,  465 },
{  459,  465 },
{  442,  469 },
{  465,  469 },
{  445,  457 },
{  451,  457 },
{  449,  463 },
{  457,  463 },
{  459,  471 },
{  463,  471 },
{  465,  473 },
{  471,  473 },
{   31,   33 },
{   31,  424 },
{  424,  425 },
{   29,   31 },
{   29,  422 },
{  422,  424 },
{   24,   29 },
{   24,  420 },
{  420,  422 },
{   22,   24 },
{   22,  418 },
{  418,  420 },
{  425,  443 },
{  443,  444 },
{  424,  438 },
{  438,  443 },
{  422,  436 },
{  436,  438 },
{  420,  434 },
{  434,  436 },
{  444,  466 },
{  466,  469 },
{  443,  460 },
{  460,  466 },
{  438,  450 },
{  450,  460 },
{  436,  445 },
{  445,  450 },
{  469,  472 },
{  472,  473 },
{  464,  466 },
{  464,  472 },
{  458,  460 },
{  458,  464 },
{  450,  451 },
{  451,  458 },
{  451,  454 },
{  448,  454 },
{  457,  461 },
{  454,  461 },
{  463,  467 },
{  461,  467 },
{  470,  471 },
{  467,  470 },
{  440,  448 },
{  439,  440 },
{  446,  454 },
{  440,  446 },
{  452,  461 },
{  446,  452 },
{  456,  467 },
{  452,  456 },
{  427,  439 },
{  426,  427 },
{  429,  440 },
{  427,  429 },
{  431,  446 },
{  429,  431 },
{  433,  452 },
{  431,  433 },
{    1,  426 },
{    0,    1 },
{    4,  427 },
{    1,    4 },
{    7,  429 },
{    4,    7 },
{    6,  431 },
{    6,    7 },
{  468,  473 },
{  468,  470 },
{  462,  472 },
{  462,  468 },
{  455,  464 },
{  455,  462 },
{  448,  458 },
{  448,  455 },
{  453,  470 },
{  453,  456 },
{  447,  468 },
{  447,  453 },
{  441,  462 },
{  441,  447 },
{  439,  455 },
{  439,  441 },
{  432,  456 },
{  432,  433 },
{  430,  453 },
{  430,  432 },
{  428,  447 },
{  428,  430 },
{  426,  441 },
{  426,  428 },
{    8,  433 },
{    6,    8 },
{    5,  432 },
{    5,    8 },
{    2,  430 },
{    2,    5 },
{    0,  428 },
{    0,    2 },
{  339,  341 },
{  341,  360 },
{  359,  360 },
{  341,  342 },
{  342,  362 },
{  360,  362 },
{  340,  342 },
{  340,  364 },
{  362,  364 },
{  338,  340 },
{  338,  367 },
{  364,  367 },
{  359,  368 },
{  366,  368 },
{  360,  371 },
{  368,  371 },
{  362,  375 },
{  371,  375 },
{  364,  379 },
{  375,  379 },
{  366,  373 },
{  370,  373 },
{  368,  377 },
{  373,  377 },
{  371,  385 },
{  377,  385 },
{  375,  391 },
{  385,  391 },
{  370,  382 },
{  380,  382 },
{  373,  399 },
{  382,  399 },
{  377,  411 },
{  399,  411 },
{  385,  410 },
{  410,  411 },
{  338,  343 },
{  343,  365 },
{  365,  367 },
{  343,  345 },
{  345,  363 },
{  363,  365 },
{  344,  345 },
{  344,  361 },
{  361,  363 },
{  339,  344 },
{  339,  359 },
{  359,  361 },
{  367,  376 },
{  376,  379 },
{  365,  372 },
{  372,  376 },
{  363,  369 },
{  369,  372 },
{  361,  366 },
{  366,  369 },
{  379,  386 },
{  386,  391 },
{  376,  378 },
{  378,  386 },
{  372,  374 },
{  374,  378 },
{  369,  370 },
{  370,  374 },
{  391,  412 },
{  410,  412 },
{  386,  401 },
{  401,  412 },
{  378,  383 },
{  383,  401 },
{  374,  380 },
{  380,  383 },
{  380,  392 },
{  381,  392 },
{  382,  402 },
{  392,  402 },
{  399,  415 },
{  402,  415 },
{  411,  417 },
{  415,  417 },
{  381,  394 },
{  387,  394 },
{  392,  406 },
{  394,  406 },
{  402,  406 },
{  387,  396 },
{  388,  396 },
{  394,  404 },
{  396,  404 },
{  406,  415 },
{  413,  415 },
{  404,  413 },
{  388,  389 },
{  384,  389 },
{  396,  398 },
{  389,  398 },
{  404,  408 },
{  398,  408 },
{  413,  417 },
{  410,  417 },
{  408,  410 },
{  410,  416 },
{  416,  417 },
{  403,  412 },
{  403,  416 },
{  393,  401 },
{  393,  403 },
{  381,  383 },
{  381,  393 },
{  407,  416 },
{  395,  403 },
{  395,  407 },
{  387,  393 },
{  387,  395 },
{  414,  417 },
{  405,  416 },
{  405,  414 },
{  397,  407 },
{  397,  405 },
{  388,  395 },
{  388,  397 },
{  409,  417 },
{  409,  410 },
{  400,  414 },
{  400,  409 },
{  390,  405 },
{  390,  400 },
{  384,  397 },
{  384,  390 },
{  161,  230 },
{  230,  237 },
{  161,  226 },
{  226,  230 },
{  161,  210 },
{  210,  226 },
{  161,  165 },
{  165,  210 },
{  228,  237 },
{  228,  236 },
{  224,  230 },
{  224,  228 },
{  208,  226 },
{  208,  224 },
{  164,  210 },
{  164,  208 },
{  218,  236 },
{  218,  222 },
{  212,  228 },
{  212,  218 },
{  204,  224 },
{  204,  212 },
{  162,  208 },
{  162,  204 },
{  220,  222 },
{  220,  223 },
{  214,  218 },
{  214,  220 },
{  206,  212 },
{  206,  214 },
{  163,  204 },
{  163,  206 },
{  153,  161 },
{  153,  165 },
{  137,  161 },
{  137,  153 },
{  133,  161 },
{  133,  137 },
{  127,  161 },
{  127,  133 },
{  155,  165 },
{  155,  164 },
{  139,  153 },
{  139,  155 },
{  135,  137 },
{  135,  139 },
{  128,  133 },
{  128,  135 },
{  159,  164 },
{  159,  162 },
{  151,  155 },
{  151,  159 },
{  139,  145 },
{  145,  151 },
{  135,  142 },
{  142,  145 },
{  157,  162 },
{  157,  163 },
{  149,  159 },
{  149,  157 },
{  143,  151 },
{  143,  149 },
{  141,  145 },
{  141,  143 },
{  134,  161 },
{  127,  134 },
{  138,  161 },
{  134,  138 },
{  154,  161 },
{  138,  154 },
{  161,  186 },
{  154,  186 },
{  127,  136 },
{  128,  136 },
{  134,  140 },
{  136,  140 },
{  138,  156 },
{  140,  156 },
{  154,  185 },
{  156,  185 },
{  128,  146 },
{  142,  146 },
{  136,  152 },
{  146,  152 },
{  140,  160 },
{  152,  160 },
{  156,  183 },
{  160,  183 },
{  142,  144 },
{  141,  144 },
{  146,  150 },
{  144,  150 },
{  152,  158 },
{  150,  158 },
{  160,  184 },
{  158,  184 },
{  161,  211 },
{  186,  211 },
{  161,  227 },
{  211,  227 },
{  161,  231 },
{  227,  231 },
{  161,  237 },
{  231,  237 },
{  186,  209 },
{  185,  209 },
{  211,  225 },
{  209,  225 },
{  227,  229 },
{  225,  229 },
{  231,  236 },
{  229,  236 },
{  185,  205 },
{  183,  205 },
{  209,  213 },
{  205,  213 },
{  219,  225 },
{  213,  219 },
{  222,  229 },
{  219,  222 },
{  183,  207 },
{  184,  207 },
{  205,  215 },
{  207,  215 },
{  213,  221 },
{  215,  221 },
{  219,  223 },
{  221,  223 },
{  223,  238 },
{  238,  242 },
{  220,  234 },
{  234,  238 },
{  214,  216 },
{  216,  234 },
{  166,  206 },
{  166,  216 },
{  242,  269 },
{  269,  277 },
{  238,  253 },
{  253,  269 },
{  232,  234 },
{  232,  253 },
{  167,  216 },
{  167,  232 },
{  277,  292 },
{  292,  296 },
{  269,  275 },
{  275,  292 },
{  240,  253 },
{  240,  275 },
{  168,  232 },
{  168,  240 },
{  296,  299 },
{  299,  309 },
{  278,  292 },
{  278,  299 },
{  243,  275 },
{  243,  278 },
{  169,  240 },
{  169,  243 },
{  147,  163 },
{  147,  166 },
{  129,  157 },
{  129,  147 },
{  125,  149 },
{  125,  129 },
{  122,  143 },
{  122,  125 },
{  131,  166 },
{  131,  167 },
{  110,  147 },
{  110,  131 },
{   94,  129 },
{   94,  110 },
{   87,  125 },
{   87,   94 },
{  123,  167 },
{  123,  168 },
{   88,  131 },
{   88,  123 },
{   71,  110 },
{   71,   88 },
{   68,   94 },
{   68,   71 },
{  120,  168 },
{  120,  169 },
{   85,  123 },
{   85,  120 },
{   64,   88 },
{   64,   85 },
{   55,   71 },
{   55,   64 },
{  126,  141 },
{  122,  126 },
{  130,  144 },
{  126,  130 },
{  148,  150 },
{  130,  148 },
{  158,  187 },
{  148,  187 },
{   95,  122 },
{   87,   95 },
{  111,  126 },
{   95,  111 },
{  130,  132 },
{  111,  132 },
{  148,  188 },
{  132,  188 },
{   72,   87 },
{   68,   72 },
{   89,   95 },
{   72,   89 },
{  111,  124 },
{   89,  124 },
{  132,  189 },
{  124,  189 },
{   65,   68 },
{   55,   65 },
{   72,   86 },
{   65,   86 },
{   89,  121 },
{   86,  121 },
{  124,  190 },
{  121,  190 },
{  184,  217 },
{  187,  217 },
{  207,  235 },
{  217,  235 },
{  215,  239 },
{  235,  239 },
{  221,  242 },
{  239,  242 },
{  187,  233 },
{  188,  233 },
{  217,  254 },
{  233,  254 },
{  235,  270 },
{  254,  270 },
{  239,  277 },
{  270,  277 },
{  188,  241 },
{  189,  241 },
{  233,  276 },
{  241,  276 },
{  254,  293 },
{  276,  293 },
{  270,  296 },
{  293,  296 },
{  189,  244 },
{  190,  244 },
{  241,  279 },
{  244,  279 },
{  276,  300 },
{  279,  300 },
{  293,  309 },
{  300,  309 },
};
