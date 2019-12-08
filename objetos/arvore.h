const int arvore_num_vertices = 66;
const int arvore_num_faces = 124;

float arvore_vertices[] = { 
3.001924, 1.469668, -4.877467,
3.060451, 1.469668, -4.871703,
3.116729, 1.469668, -4.854631,
3.168595, 1.469668, -4.826908,
3.214056, 1.469668, -4.789599,
3.251365, 1.469668, -4.744138,
3.279088, 1.469668, -4.692272,
3.296160, 1.469668, -4.635994,
3.301924, 1.469668, -4.577467,
3.296160, 1.469668, -4.518940,
3.279088, 1.469668, -4.462662,
3.251365, 1.469668, -4.410796,
3.214056, 1.469668, -4.365335,
3.168595, 1.469668, -4.328026,
3.116729, 1.469668, -4.300303,
3.060451, 1.469668, -4.283231,
3.001924, 1.469668, -4.277467,
2.943397, 1.469668, -4.283231,
2.887119, 1.469668, -4.300303,
2.835253, 1.469668, -4.328026,
2.789792, 1.469668, -4.365335,
2.752483, 1.469668, -4.410796,
2.724760, 1.469668, -4.462662,
3.001924, 1.869668, -4.577467,
2.707688, 1.469668, -4.518940,
2.701924, 1.469668, -4.577467,
2.707689, 1.469668, -4.635994,
2.724760, 1.469668, -4.692272,
2.752483, 1.469668, -4.744138,
2.789792, 1.469668, -4.789599,
2.835253, 1.469668, -4.826908,
2.887119, 1.469668, -4.854631,
2.943397, 1.469668, -4.871703,
3.001924, 1.632706, -4.827467,
3.050697, 1.632706, -4.822663,
3.097595, 1.632706, -4.808437,
3.140817, 1.632706, -4.785335,
3.178701, 1.632706, -4.754244,
3.209792, 1.632706, -4.716360,
3.232894, 1.632706, -4.673138,
3.247121, 1.632706, -4.626240,
3.251924, 1.632706, -4.577467,
3.247121, 1.632706, -4.528695,
3.232894, 1.632706, -4.481796,
3.209792, 1.632706, -4.438574,
3.178701, 1.632706, -4.400690,
3.140817, 1.632706, -4.369599,
3.097595, 1.632706, -4.346497,
3.050697, 1.632706, -4.332271,
3.001924, 1.632706, -4.327467,
2.953152, 1.632706, -4.332271,
2.906253, 1.632706, -4.346497,
2.863032, 1.632706, -4.369600,
2.825148, 1.632706, -4.400691,
2.794057, 1.632706, -4.438575,
2.770954, 1.632706, -4.481796,
3.001924, 2.032706, -4.577467,
2.756728, 1.632706, -4.528695,
2.751924, 1.632706, -4.577467,
2.756728, 1.632706, -4.626240,
2.770955, 1.632706, -4.673138,
2.794057, 1.632706, -4.716360,
2.825148, 1.632706, -4.754244,
2.863032, 1.632706, -4.785335,
2.906254, 1.632706, -4.808437,
2.953152, 1.632706, -4.822663,

};

int arvore_faces[] = { 
 0, 23,  1,
 1, 23,  2,
 2, 23,  3,
 3, 23,  4,
 4, 23,  5,
 5, 23,  6,
 6, 23,  7,
 7, 23,  8,
 8, 23,  9,
 9, 23, 10,
10, 23, 11,
11, 23, 12,
12, 23, 13,
13, 23, 14,
14, 23, 15,
15, 23, 16,
16, 23, 17,
17, 23, 18,
18, 23, 19,
19, 23, 20,
20, 23, 21,
21, 23, 22,
22, 23, 24,
24, 23, 25,
25, 23, 26,
26, 23, 27,
27, 23, 28,
28, 23, 29,
29, 23, 30,
30, 23, 31,
31, 23, 32,
32, 23,  0,
 7, 15, 24,
33, 56, 34,
34, 56, 35,
35, 56, 36,
36, 56, 37,
37, 56, 38,
38, 56, 39,
39, 56, 40,
40, 56, 41,
41, 56, 42,
42, 56, 43,
43, 56, 44,
44, 56, 45,
45, 56, 46,
46, 56, 47,
47, 56, 48,
48, 56, 49,
49, 56, 50,
50, 56, 51,
51, 56, 52,
52, 56, 53,
53, 56, 54,
54, 56, 55,
55, 56, 57,
57, 56, 58,
58, 56, 59,
59, 56, 60,
60, 56, 61,
61, 56, 62,
62, 56, 63,
63, 56, 64,
64, 56, 65,
65, 56, 33,
57, 61, 65,
32,  0,  1,
 1,  2,  3,
 3,  4,  5,
 5,  6,  3,
 6,  7,  3,
 7,  8,  9,
 9, 10,  7,
10, 11,  7,
11, 12, 15,
12, 13, 15,
13, 14, 15,
15, 16, 17,
17, 18, 19,
19, 20, 21,
21, 22, 24,
24, 25, 26,
26, 27, 28,
28, 29, 32,
29, 30, 32,
30, 31, 32,
32,  1,  3,
15, 17, 24,
17, 19, 24,
19, 21, 24,
24, 26, 32,
26, 28, 32,
32,  3,  7,
 7, 11, 15,
32,  7, 24,
65, 33, 34,
34, 35, 36,
36, 37, 38,
38, 39, 36,
39, 40, 36,
40, 41, 42,
42, 43, 40,
43, 44, 40,
44, 45, 46,
46, 47, 48,
48, 49, 50,
50, 51, 48,
51, 52, 48,
52, 53, 54,
54, 55, 52,
55, 57, 52,
57, 58, 59,
59, 60, 57,
60, 61, 57,
61, 62, 65,
62, 63, 65,
63, 64, 65,
65, 34, 36,
44, 46, 40,
46, 48, 40,
65, 36, 48,
36, 40, 48,
48, 52, 65,
52, 57, 65

};

float arvore_normais[] = { 
0.0786, 0.5981, -0.7975,
0.2326, 0.5981, -0.7669,
0.3778, 0.5981, -0.7068,
0.5084, 0.5981, -0.6195,
0.6195, 0.5982, -0.5084,
0.7068, 0.5981, -0.3778,
0.7669, 0.5981, -0.2326,
0.7975, 0.5981, -0.0785,
0.7975, 0.5981, 0.0785,
0.7669, 0.5981, 0.2326,
0.7068, 0.5981, 0.3778,
0.6195, 0.5982, 0.5084,
0.5084, 0.5981, 0.6195,
0.3778, 0.5981, 0.7068,
0.2326, 0.5981, 0.7669,
0.0786, 0.5981, 0.7975,
-0.0786, 0.5981, 0.7975,
-0.2326, 0.5982, 0.7669,
-0.3778, 0.5981, 0.7068,
-0.5084, 0.5981, 0.6195,
-0.6195, 0.5981, 0.5084,
-0.7068, 0.5981, 0.3778,
-0.7669, 0.5981, 0.2326,
-0.7975, 0.5981, 0.0785,
-0.7975, 0.5981, -0.0786,
-0.7669, 0.5981, -0.2326,
-0.7068, 0.5981, -0.3778,
-0.6195, 0.5981, -0.5084,
-0.5084, 0.5981, -0.6195,
-0.3778, 0.5981, -0.7068,
-0.2326, 0.5981, -0.7669,
-0.0786, 0.5981, -0.7975,
0.0000, -1.0000, 0.0000,
0.0832, 0.5282, -0.8451,
0.2465, 0.5282, -0.8126,
0.4003, 0.5282, -0.7489,
0.5387, 0.5282, -0.6564,
0.6564, 0.5282, -0.5387,
0.7489, 0.5282, -0.4003,
0.8126, 0.5282, -0.2465,
0.8451, 0.5282, -0.0832,
0.8451, 0.5282, 0.0832,
0.8126, 0.5282, 0.2465,
0.7489, 0.5282, 0.4003,
0.6564, 0.5282, 0.5387,
0.5387, 0.5282, 0.6564,
0.4003, 0.5282, 0.7489,
0.2465, 0.5282, 0.8126,
0.0832, 0.5282, 0.8451,
-0.0832, 0.5282, 0.8451,
-0.2465, 0.5282, 0.8126,
-0.4003, 0.5282, 0.7489,
-0.5387, 0.5282, 0.6564,
-0.6564, 0.5282, 0.5387,
-0.7489, 0.5282, 0.4003,
-0.8126, 0.5282, 0.2465,
-0.8451, 0.5282, 0.0832,
-0.8451, 0.5282, -0.0832,
-0.8126, 0.5282, -0.2465,
-0.7489, 0.5282, -0.4003,
-0.6564, 0.5282, -0.5387,
-0.5387, 0.5282, -0.6564,
-0.4003, 0.5282, -0.7489,
-0.2465, 0.5282, -0.8126,
-0.0832, 0.5282, -0.8451,

};
