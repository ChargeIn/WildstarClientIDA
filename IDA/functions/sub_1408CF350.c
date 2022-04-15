#include "../winhttp.h"

//----- (00000001408CF350) ----------------------------------------------------
void __fastcall sub_1408CF350(__int64 a1, float* a2, int a3, float a4, float a5, float a6, float* a7)
{
	int v7; // xmm1_4
	float v8; // xmm7_4
	float* v9; // r9
	float v11; // xmm10_4
	float v12; // xmm8_4
	float v13; // xmm12_4
	float v14; // xmm13_4
	float v15; // xmm6_4
	unsigned __int64 v16; // r10
	float v17; // xmm11_4
	bool v18; // bp
	__m128 v19; // xmm1
	int v20; // ecx
	int v21; // eax
	float* v22; // r11
	float v23; // xmm4_4
	float v24; // xmm6_4
	float v25; // xmm7_4
	float v26; // xmm1_4
	float v27; // xmm7_4
	float v28; // xmm3_4
	float v29; // xmm1_4
	float v30; // xmm2_4
	float v31; // xmm0_4
	float v32; // xmm6_4
	float v33; // xmm7_4
	float v34; // xmm0_4
	float v35; // xmm3_4
	float v36; // xmm0_4
	float v37; // xmm1_4
	float v38; // xmm2_4
	float v39; // xmm0_4
	float v40; // xmm6_4
	float v41; // xmm1_4
	float v42; // xmm0_4
	float v43; // xmm0_4
	float v44; // xmm1_4
	float v45; // xmm2_4
	float v46; // xmm1_4
	__m128 v47; // xmm1
	int v48; // ecx
	int v49; // eax
	float* v50; // r11
	float v51; // xmm4_4
	float v52; // xmm6_4
	float v53; // xmm3_4
	float v54; // xmm0_4
	float v55; // xmm2_4
	float v56; // xmm1_4
	float v57; // xmm6_4
	float v58; // xmm0_4
	float v59; // xmm3_4
	float v60; // xmm0_4
	float v61; // xmm1_4
	float v62; // xmm2_4
	float v63; // xmm0_4
	float v64; // xmm6_4
	float v65; // xmm1_4
	float v66; // xmm0_4
	float v67; // xmm0_4
	float v68; // xmm1_4
	float v69; // xmm2_4
	float v70; // xmm1_4
	float v71; // xmm14_4
	__m128 v72; // xmm1
	int v73; // ecx
	int v74; // eax
	float* v75; // r11
	float v76; // xmm4_4
	float v77; // xmm6_4
	float v78; // xmm0_4
	float v79; // xmm1_4
	float v80; // xmm6_4
	float v81; // xmm3_4
	float v82; // xmm0_4
	float v83; // xmm3_4
	float v84; // xmm2_4
	float v85; // xmm0_4
	float v86; // xmm6_4
	float v87; // xmm1_4
	float v88; // xmm0_4
	float v89; // xmm0_4
	float v90; // xmm1_4
	float v91; // xmm2_4
	float v92; // xmm1_4
	__m128 v93; // xmm1
	int v94; // ecx
	int v95; // eax
	float* v96; // r11
	float v97; // xmm5_4
	float v98; // xmm4_4
	float v99; // xmm6_4
	float v100; // xmm1_4
	float v101; // xmm3_4
	float v102; // xmm0_4
	float v103; // xmm6_4
	float v104; // xmm0_4
	float v105; // xmm3_4
	float v106; // xmm2_4
	float v107; // xmm0_4
	float v108; // xmm6_4
	float v109; // xmm1_4
	float v110; // xmm0_4
	float v111; // xmm0_4
	float v112; // xmm1_4
	float v113; // xmm3_4
	float v114; // xmm1_4
	float v115; // xmm14_4
	__m128 v116; // xmm1
	int v117; // ecx
	int v118; // eax
	float* v119; // r11
	float v120; // xmm5_4
	float v121; // xmm6_4
	float v122; // xmm1_4
	float v123; // xmm3_4
	float v124; // xmm0_4
	float v125; // xmm7_4
	float v126; // xmm2_4
	float v127; // xmm1_4
	float v128; // xmm6_4
	float v129; // xmm0_4
	float v130; // xmm3_4
	float v131; // xmm0_4
	float v132; // xmm1_4
	float v133; // xmm2_4
	float v134; // xmm0_4
	float v135; // xmm6_4
	float v136; // xmm1_4
	float v137; // xmm0_4
	float v138; // xmm0_4
	float v139; // xmm1_4
	float v140; // xmm2_4
	float v141; // xmm1_4
	__m128 v142; // xmm1
	int v143; // ecx
	int v144; // eax
	float* v145; // r11
	float v146; // xmm5_4
	float v147; // xmm6_4
	float v148; // xmm7_4
	float v149; // xmm0_4
	float v150; // xmm1_4
	float v151; // xmm7_4
	float v152; // xmm3_4
	float v153; // xmm2_4
	float v154; // xmm1_4
	float v155; // xmm6_4
	float v156; // xmm7_4
	float v157; // xmm0_4
	float v158; // xmm3_4
	float v159; // xmm0_4
	float v160; // xmm1_4
	float v161; // xmm2_4
	float v162; // xmm0_4
	float v163; // xmm6_4
	float v164; // xmm1_4
	float v165; // xmm0_4
	float v166; // xmm0_4
	float v167; // xmm1_4
	float v168; // xmm2_4
	float v169; // xmm1_4
	float v170; // xmm12_4
	__m128 v171; // xmm1
	int v172; // ecx
	int v173; // eax
	float* v174; // r11
	float v175; // xmm7_4
	float v176; // xmm6_4
	float v177; // xmm3_4
	float v178; // xmm0_4
	float v179; // xmm2_4
	float v180; // xmm7_4
	float v181; // xmm2_4
	float v182; // xmm6_4
	float v183; // xmm2_4
	float v184; // xmm3_4
	float v185; // xmm0_4
	float v186; // xmm4_4
	float v187; // xmm2_4
	float v188; // xmm7_4
	float v189; // xmm2_4
	float v190; // xmm6_4
	float v191; // xmm2_4
	float v192; // xmm3_4
	float v193; // xmm0_4
	float v194; // xmm2_4
	float v195; // xmm2_4
	float v196; // xmm3_4
	__m128 v197; // xmm1
	int v198; // ecx
	int v199; // eax
	float* v200; // r11
	float v201; // xmm7_4
	float v202; // xmm4_4
	float v203; // xmm2_4
	float v204; // xmm6_4
	float v205; // xmm7_4
	float v206; // xmm0_4
	float v207; // xmm3_4
	float v208; // xmm2_4
	float v209; // xmm7_4
	float v210; // xmm3_4
	float v211; // xmm6_4
	float v212; // xmm3_4
	float v213; // xmm4_4
	float v214; // xmm5_4
	float v215; // xmm0_4
	float v216; // xmm3_4
	float v217; // xmm2_4
	float v218; // xmm3_4
	float v219; // xmm6_4
	float v220; // xmm0_4
	float v221; // xmm3_4
	float v222; // xmm4_4
	float v223; // xmm4_4
	__m128 v224; // xmm1
	int v225; // ecx
	int v226; // eax
	float* v227; // r11
	float v228; // xmm7_4
	float v229; // xmm4_4
	float v230; // xmm6_4
	float v231; // xmm0_4
	float v232; // xmm1_4
	float v233; // xmm3_4
	float v234; // xmm7_4
	float v235; // xmm2_4
	float v236; // xmm6_4
	float v237; // xmm2_4
	float v238; // xmm4_4
	float v239; // xmm5_4
	float v240; // xmm0_4
	float v241; // xmm2_4
	float v242; // xmm6_4
	float v243; // xmm4_4
	float v244; // xmm4_4
	__m128 v245; // xmm1
	int v246; // ecx
	int v247; // eax
	float* v248; // r11
	float v249; // xmm4_4
	float v250; // xmm7_4
	float v251; // xmm6_4
	float v252; // xmm3_4
	float v253; // xmm7_4
	float v254; // xmm0_4
	float v255; // xmm1_4
	float v256; // xmm3_4
	float v257; // xmm7_4
	float v258; // xmm2_4
	float v259; // xmm6_4
	float v260; // xmm2_4
	float v261; // xmm4_4
	float v262; // xmm5_4
	float v263; // xmm0_4
	float v264; // xmm2_4
	float v265; // xmm6_4
	float v266; // xmm4_4
	float v267; // xmm4_4
	int v268; // xmm1_4
	int v269; // [rsp+34h] [rbp-B4h]
	int v270; // [rsp+100h] [rbp+18h]
	float v271; // [rsp+108h] [rbp+20h]

	v7 = *(_DWORD*)(a1 + 20);
	v8 = *(float*)(a1 + 12);
	v9 = a2;
	v11 = *(float*)(a1 + 16);
	v12 = *(float*)a1;
	v13 = *(float*)(a1 + 8);
	v14 = *(float*)(a1 + 4);
	v15 = a5;
	v271 = v13;
	v270 = v7;
	v16 = (unsigned __int64)&a2[a3];
	v269 = v7;
	v17 = (float)(a4 - a5) / (float)a3;
	v18 = v11 == 0.0;
	if (v11 <= 0.0000000099999999)
		v11 = 0.0000000099999999;
	switch (v7)
	{
	case 0:
		if ((unsigned __int64)a2 >= v16)
			goto LABEL_189;
		v170 = 1.0 / v11;
		do
		{
			v171 = (__m128)0x3FC90FDBu;
			v171.m128_f32[0] = (float)(1.5707964 - v8) * v170;
			v172 = (int)v171.m128_f32[0];
			if ((int)v171.m128_f32[0] != 0x80000000 && (float)v172 != v171.m128_f32[0])
				v171.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v171, v171)) & 1) + v172);
			v173 = (int)v171.m128_f32[0];
			if ((int)v171.m128_f32[0] >= 0)
			{
				if (v173 > a3)
					v173 = a3;
			}
			else
			{
				v173 = -1;
			}
			v174 = &a2[a3];
			if ((unsigned __int64)&v9[v173] < v16)
				v174 = &v9[v173];
			if (v9 < v174)
			{
				if (((char*)v174 - (char*)v9 + 3) / 4 >= 4)
				{
					do
					{
						v175 = v8 + v11;
						v176 = v15 + v17;
						v177 = a7[1] + *a7;
						v178 = 1.0 - v176;
						v179 = (float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v175 * v175) * 0.00018363654))
							* (float)(v175 * v175))
							- 0.16664828)
							* (float)(v175 * v175))
							+ 0.9999966)
							* v175;
						v180 = v175 + v11;
						v181 = (float)((float)(v179 + 1.0) * 0.5) * v176;
						v182 = v176 + v17;
						v183 = (float)(v181 + v178) * v177;
						v184 = v177 + a7[1];
						*v9 = v183 * *v9;
						v185 = 1.0 - v182;
						v186 = a7[1] + v184;
						v187 = (float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v180 * v180) * 0.00018363654))
							* (float)(v180 * v180))
							- 0.16664828)
							* (float)(v180 * v180))
							+ 0.9999966)
							* v180;
						v188 = v180 + v11;
						v189 = (float)((float)(v187 + 1.0) * 0.5) * v182;
						v190 = v182 + v17;
						v191 = (float)((float)(v189 + v185) * v184) * v9[1];
						v192 = a7[1] + v186;
						*a7 = v192;
						v9[1] = v191;
						v193 = 1.0 - v190;
						v194 = (float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v188 * v188) * 0.00018363654))
							* (float)(v188 * v188))
							- 0.16664828)
							* (float)(v188 * v188))
							+ 0.9999966)
							* v188;
						v8 = v188 + v11;
						v195 = (float)((float)(v194 + 1.0) * 0.5) * v190;
						v15 = v190 + v17;
						v9[2] = (float)((float)(v195 + v193) * v186) * v9[2];
						v9 += 4;
						*(v9 - 1) = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v8 * v8) * 0.00018363654)) * (float)(v8 * v8))
							- 0.16664828)
							* (float)(v8 * v8))
							+ 0.9999966)
							* v8)
							+ 1.0)
							* 0.5)
							* v15)
							+ (float)(1.0 - v15))
							* v192)
							* *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v174 - 3));
				}
				for (;
					v9 < v174;
					*(v9 - 1) = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v8 * v8) * 0.00018363654)) * (float)(v8 * v8))
						- 0.16664828)
						* (float)(v8 * v8))
						+ 0.9999966)
						* v8)
						+ 1.0)
						* 0.5)
						* v15)
						+ (float)(1.0 - v15))
						* v196)
					* *(v9 - 1))
				{
					v8 = v8 + v11;
					++v9;
					v196 = a7[1] + *a7;
					v15 = v15 + v17;
					*a7 = v196;
				}
			}
			v197 = (__m128)0x40490FDBu;
			v197.m128_f32[0] = (float)(3.1415927 - v8) * v170;
			v198 = (int)v197.m128_f32[0];
			if ((int)v197.m128_f32[0] != 0x80000000 && (float)v198 != v197.m128_f32[0])
				v197.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v197, v197)) & 1) + v198);
			v199 = (int)v197.m128_f32[0];
			if ((int)v197.m128_f32[0] >= 0)
			{
				if (v199 > a3)
					v199 = a3;
			}
			else
			{
				v199 = -1;
			}
			v200 = &a2[a3];
			if ((unsigned __int64)&v9[v199] < v16)
				v200 = &v9[v199];
			if (v9 < v200)
			{
				if (((char*)v200 - (char*)v9 + 3) / 4 >= 4)
				{
					do
					{
						v201 = v8 + v11;
						v202 = a7[1] + *a7;
						v203 = 3.1415927 - v201;
						v204 = v15 + v17;
						v205 = v201 + v11;
						v206 = 1.0 - v204;
						v207 = (float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v203 * v203) * 0.00018363654))
							* (float)(v203 * v203))
							- 0.16664828)
							* (float)(v203 * v203))
							+ 0.9999966)
							* v203;
						v208 = 3.1415927 - v205;
						v209 = v205 + v11;
						v210 = (float)((float)(v207 + 1.0) * 0.5) * v204;
						v211 = v204 + v17;
						v212 = (float)(v210 + v206) * v202;
						v213 = v202 + a7[1];
						*v9 = v212 * *v9;
						v214 = a7[1] + v213;
						v215 = 1.0 - v211;
						v216 = (float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v208 * v208) * 0.00018363654))
							* (float)(v208 * v208))
							- 0.16664828)
							* (float)(v208 * v208))
							+ 0.9999966)
							* v208;
						v217 = 3.1415927 - v209;
						v8 = v209 + v11;
						v218 = (float)((float)(v216 + 1.0) * 0.5) * v211;
						v219 = v211 + v17;
						v9[1] = (float)((float)(v218 + v215) * v213) * v9[1];
						v220 = 1.0 - v219;
						v221 = (float)((float)((float)((float)((float)((float)((float)((float)(0.0083063254
							- (float)((float)(v217 * v217)
								* 0.00018363654))
							* (float)(v217 * v217))
							- 0.16664828)
							* (float)(v217 * v217))
							+ 0.9999966)
							* v217)
							+ 1.0)
							* 0.5)
							* v219;
						v15 = v219 + v17;
						v9[2] = (float)((float)(v221 + v220) * v214) * v9[2];
						v9 += 4;
						v222 = a7[1] + v214;
						*a7 = v222;
						*(v9 - 1) = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(3.1415927 - v8) * (float)(3.1415927 - v8)) * 0.00018363654)) * (float)((float)(3.1415927 - v8) * (float)(3.1415927 - v8)))
							- 0.16664828)
							* (float)((float)(3.1415927 - v8)
								* (float)(3.1415927 - v8)))
							+ 0.9999966)
							* (float)(3.1415927 - v8))
							+ 1.0)
							* 0.5)
							* v15)
							+ (float)(1.0 - v15))
							* v222)
							* *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v200 - 3));
				}
				for (;
					v9 < v200;
					*(v9 - 1) = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(3.1415927 - v8) * (float)(3.1415927 - v8)) * 0.00018363654)) * (float)((float)(3.1415927 - v8) * (float)(3.1415927 - v8)))
						- 0.16664828)
						* (float)((float)(3.1415927 - v8)
							* (float)(3.1415927 - v8)))
						+ 0.9999966)
						* (float)(3.1415927 - v8))
						+ 1.0)
						* 0.5)
						* v15)
						+ (float)(1.0 - v15))
						* v223)
					* *(v9 - 1))
				{
					v8 = v8 + v11;
					++v9;
					v223 = a7[1] + *a7;
					v15 = v15 + v17;
					*a7 = v223;
				}
			}
			v224 = (__m128)0x4096CBE4u;
			v224.m128_f32[0] = (float)(4.712389 - v8) * v170;
			v225 = (int)v224.m128_f32[0];
			if ((int)v224.m128_f32[0] != 0x80000000 && (float)v225 != v224.m128_f32[0])
				v224.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v224, v224)) & 1) + v225);
			v226 = (int)v224.m128_f32[0];
			if ((int)v224.m128_f32[0] >= 0)
			{
				if (v226 > a3)
					v226 = a3;
			}
			else
			{
				v226 = -1;
			}
			v227 = &a2[a3];
			if ((unsigned __int64)&v9[v226] < v16)
				v227 = &v9[v226];
			if (v9 < v227)
			{
				if (((char*)v227 - (char*)v9 + 3) / 4 >= 4)
				{
					do
					{
						v228 = v8 + v11;
						v229 = a7[1] + *a7;
						v230 = v15 + v17;
						v231 = 1.0 - v230;
						v232 = (float)((float)((float)((float)((float)(0.0083063254
							- (float)((float)((float)(v228 - 3.1415927)
								* (float)(v228 - 3.1415927))
								* 0.00018363654))
							* (float)((float)(v228 - 3.1415927) * (float)(v228 - 3.1415927)))
							- 0.16664828)
							* (float)((float)(v228 - 3.1415927) * (float)(v228 - 3.1415927)))
							+ 0.9999966)
							* (float)(v228 - 3.1415927);
						v233 = v228 + v11;
						v234 = (float)(v228 + v11) + v11;
						v235 = (float)((float)(1.0 - v232) * 0.5) * v230;
						v236 = v230 + v17;
						v237 = (float)(v235 + v231) * v229;
						v238 = v229 + a7[1];
						v239 = a7[1] + v238;
						*v9 = v237 * *v9;
						v240 = 1.0 - v236;
						v241 = (float)((float)(1.0
							- (float)((float)((float)((float)((float)((float)(0.0083063254
								- (float)((float)((float)(v233 - 3.1415927) * (float)(v233 - 3.1415927))
									* 0.00018363654))
								* (float)((float)(v233 - 3.1415927)
									* (float)(v233 - 3.1415927)))
								- 0.16664828)
								* (float)((float)(v233 - 3.1415927)
									* (float)(v233 - 3.1415927)))
								+ 0.9999966)
								* (float)(v233 - 3.1415927)))
							* 0.5)
							* v236;
						v242 = v236 + v17;
						v9[1] = (float)((float)(v241 + v240) * v238) * v9[1];
						v9[2] = (float)((float)((float)((float)((float)(1.0
							- (float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(v234 - 3.1415927) * (float)(v234 - 3.1415927)) * 0.00018363654)) * (float)((float)(v234 - 3.1415927) * (float)(v234 - 3.1415927)))
								- 0.16664828)
								* (float)((float)(v234 - 3.1415927)
									* (float)(v234 - 3.1415927)))
								+ 0.9999966)
								* (float)(v234 - 3.1415927)))
							* 0.5)
							* v242)
							+ (float)(1.0 - v242))
							* v239)
							* v9[2];
						v8 = v234 + v11;
						v15 = v242 + v17;
						v9 += 4;
						v243 = a7[1] + v239;
						*a7 = v243;
						*(v9 - 1) = (float)((float)((float)((float)((float)(1.0
							- (float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(v8 - 3.1415927) * (float)(v8 - 3.1415927)) * 0.00018363654)) * (float)((float)(v8 - 3.1415927) * (float)(v8 - 3.1415927)))
								- 0.16664828)
								* (float)((float)(v8 - 3.1415927)
									* (float)(v8 - 3.1415927)))
								+ 0.9999966)
								* (float)(v8 - 3.1415927)))
							* 0.5)
							* v15)
							+ (float)(1.0 - v15))
							* v243)
							* *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v227 - 3));
				}
				for (;
					v9 < v227;
					*(v9 - 1) = (float)((float)((float)((float)((float)(1.0
						- (float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(v8 - 3.1415927) * (float)(v8 - 3.1415927)) * 0.00018363654)) * (float)((float)(v8 - 3.1415927) * (float)(v8 - 3.1415927)))
							- 0.16664828)
							* (float)((float)(v8 - 3.1415927)
								* (float)(v8 - 3.1415927)))
							+ 0.9999966)
							* (float)(v8 - 3.1415927)))
						* 0.5)
						* v15)
						+ (float)(1.0 - v15))
						* v244)
					* *(v9 - 1))
				{
					v8 = v8 + v11;
					++v9;
					v244 = a7[1] + *a7;
					v15 = v15 + v17;
					*a7 = v244;
				}
			}
			v245 = (__m128)0x40C90FDBu;
			v245.m128_f32[0] = (float)(6.2831855 - v8) * v170;
			v246 = (int)v245.m128_f32[0];
			if ((int)v245.m128_f32[0] != 0x80000000 && (float)v246 != v245.m128_f32[0])
				v245.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v245, v245)) & 1) + v246);
			v247 = (int)v245.m128_f32[0];
			if ((int)v245.m128_f32[0] >= 0)
			{
				if (v247 > a3)
					v247 = a3;
			}
			else
			{
				v247 = -1;
			}
			v248 = &a2[a3];
			if ((unsigned __int64)&v9[v247] < v16)
				v248 = &v9[v247];
			if (v9 < v248)
			{
				if (((char*)v248 - (char*)v9 + 3) / 4 >= 4)
				{
					do
					{
						v249 = a7[1] + *a7;
						v250 = v8 + v11;
						v251 = v15 + v17;
						v252 = 6.2831855 - v250;
						v253 = v250 + v11;
						v254 = 1.0 - v251;
						v255 = (float)((float)((float)((float)((float)(0.0083063254 - (float)((float)(v252 * v252) * 0.00018363654))
							* (float)(v252 * v252))
							- 0.16664828)
							* (float)(v252 * v252))
							+ 0.9999966)
							* v252;
						v256 = 6.2831855 - v253;
						v257 = v253 + v11;
						v258 = (float)((float)(1.0 - v255) * 0.5) * v251;
						v259 = v251 + v17;
						v260 = (float)(v258 + v254) * v249;
						v261 = v249 + a7[1];
						v262 = a7[1] + v261;
						*v9 = v260 * *v9;
						v263 = 1.0 - v259;
						v264 = (float)((float)(1.0
							- (float)((float)((float)((float)((float)((float)(0.0083063254
								- (float)((float)(v256 * v256)
									* 0.00018363654))
								* (float)(v256 * v256))
								- 0.16664828)
								* (float)(v256 * v256))
								+ 0.9999966)
								* v256))
							* 0.5)
							* v259;
						v265 = v259 + v17;
						v9[1] = (float)((float)(v264 + v263) * v261) * v9[1];
						v9[2] = (float)((float)((float)((float)((float)(1.0
							- (float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(6.2831855 - v257) * (float)(6.2831855 - v257)) * 0.00018363654)) * (float)((float)(6.2831855 - v257) * (float)(6.2831855 - v257)))
								- 0.16664828)
								* (float)((float)(6.2831855 - v257)
									* (float)(6.2831855 - v257)))
								+ 0.9999966)
								* (float)(6.2831855 - v257)))
							* 0.5)
							* v265)
							+ (float)(1.0 - v265))
							* v262)
							* v9[2];
						v8 = v257 + v11;
						v9 += 4;
						v266 = a7[1] + v262;
						v15 = v265 + v17;
						*a7 = v266;
						*(v9 - 1) = (float)((float)((float)((float)((float)(1.0
							- (float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(6.2831855 - v8) * (float)(6.2831855 - v8)) * 0.00018363654)) * (float)((float)(6.2831855 - v8) * (float)(6.2831855 - v8)))
								- 0.16664828)
								* (float)((float)(6.2831855 - v8)
									* (float)(6.2831855 - v8)))
								+ 0.9999966)
								* (float)(6.2831855 - v8)))
							* 0.5)
							* v15)
							+ (float)(1.0 - v15))
							* v266)
							* *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v248 - 3));
				}
				for (;
					v9 < v248;
					*(v9 - 1) = (float)((float)((float)((float)((float)(1.0
						- (float)((float)((float)((float)((float)((float)(0.0083063254 - (float)((float)((float)(6.2831855 - v8) * (float)(6.2831855 - v8)) * 0.00018363654)) * (float)((float)(6.2831855 - v8) * (float)(6.2831855 - v8)))
							- 0.16664828)
							* (float)((float)(6.2831855 - v8)
								* (float)(6.2831855 - v8)))
							+ 0.9999966)
							* (float)(6.2831855 - v8)))
						* 0.5)
						* v15)
						+ (float)(1.0 - v15))
						* v267)
					* *(v9 - 1))
				{
					v8 = v8 + v11;
					++v9;
					v267 = a7[1] + *a7;
					v15 = v15 + v17;
					*a7 = v267;
				}
			}
			if (v8 >= 6.2831855)
				v8 = v8 + -6.2831855;
		} while ((unsigned __int64)v9 < v16);
		v13 = v271;
		goto LABEL_188;
	case 1:
		if ((unsigned __int64)a2 >= v16)
			goto LABEL_189;
		v115 = 1.0 / v11;
		do
		{
			v116 = (__m128)0x3F000000u;
			v116.m128_f32[0] = (float)(0.5 - v8) * v115;
			v117 = (int)v116.m128_f32[0];
			if ((int)v116.m128_f32[0] != 0x80000000 && (float)v117 != v116.m128_f32[0])
				v116.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v116, v116)) & 1) + v117);
			v118 = (int)v116.m128_f32[0];
			if ((int)v116.m128_f32[0] >= 0)
			{
				if (v118 > a3)
					v118 = a3;
			}
			else
			{
				v118 = -1;
			}
			v119 = &a2[a3];
			if ((unsigned __int64)&v9[v118] < v16)
				v119 = &v9[v118];
			if (v9 < v119)
			{
				if (((char*)v119 - (char*)v9 + 3) / 4 >= 4)
				{
					v120 = a7[1];
					do
					{
						v121 = v15 + v17;
						v9 += 4;
						v122 = v8 + v11;
						v123 = v120 + *a7;
						v124 = 1.0 - v121;
						v125 = (float)(v8 + v11) + v11;
						v126 = v125 * 2.0;
						v127 = (float)((float)((float)(v122 * 2.0) * v121) * v14) - (float)(v12 * v13);
						v128 = v121 + v17;
						v129 = (float)(v124 + v127) * v123;
						v130 = v123 + v120;
						*(v9 - 4) = v129 * *(v9 - 4);
						v131 = v13 * v127;
						v132 = v125 + v11;
						v8 = (float)(v125 + v11) + v11;
						v133 = (float)((float)(v126 * v128) * v14) - v131;
						v134 = 1.0 - v128;
						v135 = v128 + v17;
						*(v9 - 3) = (float)((float)(v134 + v133) * v130) * *(v9 - 3);
						v136 = (float)((float)((float)(v132 * 2.0) * v135) * v14) - (float)(v13 * v133);
						v137 = 1.0 - v135;
						v15 = v135 + v17;
						*(v9 - 2) = (float)((float)(v137 + v136) * (float)(v120 + v130)) * *(v9 - 2);
						v138 = v13 * v136;
						v139 = v120 + (float)(v120 + v130);
						v12 = (float)((float)((float)(v8 * 2.0) * v15) * v14) - v138;
						*a7 = v139;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v139) * *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v119 - 3));
				}
				if (v9 < v119)
				{
					v140 = a7[1];
					do
					{
						v15 = v15 + v17;
						v8 = v8 + v11;
						++v9;
						v141 = v140 + *a7;
						v12 = (float)((float)((float)(v8 * 2.0) * v15) * v14) - (float)(v12 * v13);
						*a7 = v141;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v141) * *(v9 - 1);
					} while (v9 < v119);
				}
			}
			v142 = (__m128)0x3F800000u;
			v142.m128_f32[0] = (float)(1.0 - v8) * v115;
			v143 = (int)v142.m128_f32[0];
			if ((int)v142.m128_f32[0] != 0x80000000 && (float)v143 != v142.m128_f32[0])
				v142.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v142, v142)) & 1) + v143);
			v144 = (int)v142.m128_f32[0];
			if ((int)v142.m128_f32[0] >= 0)
			{
				if (v144 > a3)
					v144 = a3;
			}
			else
			{
				v144 = -1;
			}
			v145 = &a2[a3];
			if ((unsigned __int64)&v9[v144] < v16)
				v145 = &v9[v144];
			if (v9 < v145)
			{
				if (((char*)v145 - (char*)v9 + 3) / 4 >= 4)
				{
					v146 = a7[1];
					do
					{
						v147 = v15 + v17;
						v148 = v8 + v11;
						v9 += 4;
						v149 = 1.0 - v147;
						v150 = 1.0 - v148;
						v151 = v148 + v11;
						v152 = v146 + *a7;
						v153 = (float)(1.0 - v151) * 2.0;
						v154 = (float)((float)((float)(v150 * 2.0) * v147) * v14) - (float)(v12 * v13);
						v155 = v147 + v17;
						v156 = v151 + v11;
						v157 = (float)(v149 + v154) * v152;
						v158 = v152 + v146;
						*(v9 - 4) = v157 * *(v9 - 4);
						v159 = v13 * v154;
						v160 = 1.0 - v156;
						v8 = v156 + v11;
						v161 = (float)((float)(v153 * v155) * v14) - v159;
						v162 = 1.0 - v155;
						v163 = v155 + v17;
						*(v9 - 3) = (float)((float)(v162 + v161) * v158) * *(v9 - 3);
						v164 = (float)((float)((float)(v160 * 2.0) * v163) * v14) - (float)(v13 * v161);
						v165 = 1.0 - v163;
						v15 = v163 + v17;
						*(v9 - 2) = (float)((float)(v165 + v164) * (float)(v146 + v158)) * *(v9 - 2);
						v166 = v13 * v164;
						v167 = v146 + (float)(v146 + v158);
						v12 = (float)((float)((float)((float)(1.0 - v8) * 2.0) * v15) * v14) - v166;
						*a7 = v167;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v167) * *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v145 - 3));
				}
				if (v9 < v145)
				{
					v168 = a7[1];
					do
					{
						v15 = v15 + v17;
						v8 = v8 + v11;
						++v9;
						v169 = v168 + *a7;
						v12 = (float)((float)((float)((float)(1.0 - v8) * 2.0) * v15) * v14) - (float)(v12 * v13);
						*a7 = v169;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v169) * *(v9 - 1);
					} while (v9 < v145);
				}
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while ((unsigned __int64)v9 < v16);
		goto LABEL_188;
	case 2:
		if ((unsigned __int64)a2 >= v16)
			goto LABEL_189;
		v71 = 1.0 / v11;
		do
		{
			v72 = (__m128)LODWORD(a6);
			v72.m128_f32[0] = (float)(a6 - v8) * v71;
			v73 = (int)v72.m128_f32[0];
			if ((int)v72.m128_f32[0] != 0x80000000 && (float)v73 != v72.m128_f32[0])
				v72.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v72, v72)) & 1) + v73);
			v74 = (int)v72.m128_f32[0];
			if ((int)v72.m128_f32[0] >= 0)
			{
				if (v74 > a3)
					v74 = a3;
			}
			else
			{
				v74 = -1;
			}
			v75 = &a2[a3];
			if ((unsigned __int64)&v9[v74] < v16)
				v75 = &v9[v74];
			if (v9 < v75)
			{
				if (((char*)v75 - (char*)v9 + 3) / 4 >= 4)
				{
					v76 = a7[1];
					do
					{
						v77 = v15 + v17;
						v9 += 4;
						v78 = 1.0 - v77;
						v79 = (float)(v14 * v77) - (float)(v12 * v13);
						v80 = v77 + v17;
						v81 = v76 + *a7;
						v82 = (float)((float)(v78 + v79) * v81) * *(v9 - 4);
						v83 = v81 + v76;
						*(v9 - 4) = v82;
						v8 = (float)((float)((float)(v8 + v11) + v11) + v11) + v11;
						v84 = (float)(v14 * v80) - (float)(v13 * v79);
						v85 = 1.0 - v80;
						v86 = v80 + v17;
						*(v9 - 3) = (float)((float)(v85 + v84) * v83) * *(v9 - 3);
						v87 = (float)(v14 * v86) - (float)(v13 * v84);
						v88 = 1.0 - v86;
						v15 = v86 + v17;
						*(v9 - 2) = (float)((float)(v88 + v87) * (float)(v76 + v83)) * *(v9 - 2);
						v89 = v13 * v87;
						v90 = v76 + (float)(v76 + v83);
						v12 = (float)(v14 * v15) - v89;
						*a7 = v90;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v90) * *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v75 - 3));
				}
				if (v9 < v75)
				{
					v91 = a7[1];
					do
					{
						v15 = v15 + v17;
						++v9;
						v8 = v8 + v11;
						v92 = v91 + *a7;
						v12 = (float)(v14 * v15) - (float)(v12 * v13);
						*a7 = v92;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v92) * *(v9 - 1);
					} while (v9 < v75);
				}
			}
			v93 = (__m128)0x3F800000u;
			v93.m128_f32[0] = (float)(1.0 - v8) * v71;
			v94 = (int)v93.m128_f32[0];
			if ((int)v93.m128_f32[0] != 0x80000000 && (float)v94 != v93.m128_f32[0])
				v93.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v93, v93)) & 1) + v94);
			v95 = (int)v93.m128_f32[0];
			if ((int)v93.m128_f32[0] >= 0)
			{
				if (v95 > a3)
					v95 = a3;
			}
			else
			{
				v95 = -1;
			}
			v96 = &a2[a3];
			if ((unsigned __int64)&v9[v95] < v16)
				v96 = &v9[v95];
			if (v9 < v96)
			{
				if (((char*)v96 - (char*)v9 + 3) / 4 >= 4)
				{
					v97 = a7[1];
					v98 = v14 * 0.0;
					do
					{
						v99 = v15 + v17;
						v100 = v98 - (float)(v12 * v13);
						v9 += 4;
						v101 = v97 + *a7;
						v102 = 1.0 - v99;
						v103 = v99 + v17;
						v104 = (float)((float)(v102 + v100) * v101) * *(v9 - 4);
						v105 = v101 + v97;
						*(v9 - 4) = v104;
						v106 = v98 - (float)(v13 * v100);
						v8 = (float)((float)((float)(v8 + v11) + v11) + v11) + v11;
						v107 = 1.0 - v103;
						v108 = v103 + v17;
						*(v9 - 3) = (float)((float)(v107 + v106) * v105) * *(v9 - 3);
						v109 = v98 - (float)(v13 * v106);
						v110 = 1.0 - v108;
						v15 = v108 + v17;
						*(v9 - 2) = (float)((float)(v110 + v109) * (float)(v97 + v105)) * *(v9 - 2);
						v111 = v13 * v109;
						v112 = v97 + (float)(v97 + v105);
						v12 = v98 - v111;
						*a7 = v112;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + (float)(v98 - v111)) * v112) * *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v96 - 3));
				}
				if (v9 < v96)
				{
					v113 = a7[1];
					do
					{
						v15 = v15 + v17;
						++v9;
						v8 = v8 + v11;
						v114 = v113 + *a7;
						v12 = (float)(v14 * 0.0) - (float)(v12 * v13);
						*a7 = v114;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v114) * *(v9 - 1);
					} while (v9 < v96);
				}
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while ((unsigned __int64)v9 < v16);
		goto LABEL_188;
	case 3:
		if ((unsigned __int64)a2 >= v16)
			goto LABEL_189;
		do
		{
			v47 = (__m128)0x3F800000u;
			v47.m128_f32[0] = (float)(1.0 - v8) * (float)(1.0 / v11);
			v48 = (int)v47.m128_f32[0];
			if ((int)v47.m128_f32[0] != 0x80000000 && (float)v48 != v47.m128_f32[0])
				v47.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v47, v47)) & 1) + v48);
			v49 = (int)v47.m128_f32[0];
			if ((int)v47.m128_f32[0] >= 0)
			{
				if (v49 > a3)
					v49 = a3;
			}
			else
			{
				v49 = -1;
			}
			v50 = &a2[a3];
			if ((unsigned __int64)&v9[v49] < v16)
				v50 = &v9[v49];
			if (v9 < v50)
			{
				if (((char*)v50 - (char*)v9 + 3) / 4 >= 4)
				{
					v51 = a7[1];
					do
					{
						v52 = v15 + v17;
						v9 += 4;
						v53 = v51 + *a7;
						v54 = 1.0 - v52;
						v55 = (float)(v8 + v11) + v11;
						v56 = (float)((float)((float)(v8 + v11) * v52) * v14) - (float)(v12 * v13);
						v57 = v52 + v17;
						v58 = (float)(v54 + v56) * v53;
						v59 = v53 + v51;
						*(v9 - 4) = v58 * *(v9 - 4);
						v60 = v13 * v56;
						v61 = v55 + v11;
						v8 = (float)(v55 + v11) + v11;
						v62 = (float)((float)(v55 * v57) * v14) - v60;
						v63 = 1.0 - v57;
						v64 = v57 + v17;
						*(v9 - 3) = (float)((float)(v63 + v62) * v59) * *(v9 - 3);
						v65 = (float)((float)(v61 * v64) * v14) - (float)(v13 * v62);
						v66 = 1.0 - v64;
						v15 = v64 + v17;
						*(v9 - 2) = (float)((float)(v66 + v65) * (float)(v51 + v59)) * *(v9 - 2);
						v67 = v13 * v65;
						v68 = v51 + (float)(v51 + v59);
						v12 = (float)((float)(v8 * v15) * v14) - v67;
						*a7 = v68;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v68) * *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v50 - 3));
				}
				if (v9 < v50)
				{
					v69 = a7[1];
					do
					{
						v15 = v15 + v17;
						v8 = v8 + v11;
						++v9;
						v70 = v69 + *a7;
						v12 = (float)((float)(v8 * v15) * v14) - (float)(v12 * v13);
						*a7 = v70;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v70) * *(v9 - 1);
					} while (v9 < v50);
				}
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while ((unsigned __int64)v9 < v16);
		goto LABEL_188;
	}
	if (v7 == 4 && (unsigned __int64)a2 < v16)
	{
		do
		{
			v19 = (__m128)0x3F800000u;
			v19.m128_f32[0] = (float)(1.0 - v8) * (float)(1.0 / v11);
			v20 = (int)v19.m128_f32[0];
			if ((int)v19.m128_f32[0] != 0x80000000 && (float)v20 != v19.m128_f32[0])
				v19.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v19, v19)) & 1) + v20);
			v21 = (int)v19.m128_f32[0];
			if ((int)v19.m128_f32[0] >= 0)
			{
				if (v21 > a3)
					v21 = a3;
			}
			else
			{
				v21 = -1;
			}
			v22 = &a2[a3];
			if ((unsigned __int64)&v9[v21] < v16)
				v22 = &v9[v21];
			if (v9 < v22)
			{
				if (((char*)v22 - (char*)v9 + 3) / 4 >= 4)
				{
					v23 = a7[1];
					do
					{
						v24 = v15 + v17;
						v25 = v8 + v11;
						v9 += 4;
						v26 = 1.0 - v25;
						v27 = v25 + v11;
						v28 = v23 + *a7;
						v29 = (float)((float)(v26 * v24) * v14) - (float)(v12 * v13);
						v30 = 1.0 - v27;
						v31 = (float)(1.0 - v24) + v29;
						v32 = v24 + v17;
						v33 = v27 + v11;
						v34 = (float)(v31 * v28) * *(v9 - 4);
						v35 = v28 + v23;
						*(v9 - 4) = v34;
						v36 = v13 * v29;
						v37 = 1.0 - v33;
						v8 = v33 + v11;
						v38 = (float)((float)(v30 * v32) * v14) - v36;
						v39 = 1.0 - v32;
						v40 = v32 + v17;
						*(v9 - 3) = (float)((float)(v39 + v38) * v35) * *(v9 - 3);
						v41 = (float)((float)(v37 * v40) * v14) - (float)(v13 * v38);
						v42 = 1.0 - v40;
						v15 = v40 + v17;
						*(v9 - 2) = (float)((float)(v42 + v41) * (float)(v23 + v35)) * *(v9 - 2);
						v43 = v13 * v41;
						v44 = v23 + (float)(v23 + v35);
						v12 = (float)((float)((float)(1.0 - v8) * v15) * v14) - v43;
						*a7 = v44;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v44) * *(v9 - 1);
					} while ((__int64)v9 < (__int64)(v22 - 3));
				}
				if (v9 < v22)
				{
					v45 = a7[1];
					do
					{
						v15 = v15 + v17;
						v8 = v8 + v11;
						++v9;
						v46 = v45 + *a7;
						v12 = (float)((float)((float)(1.0 - v8) * v15) * v14) - (float)(v12 * v13);
						*a7 = v46;
						*(v9 - 1) = (float)((float)((float)(1.0 - v15) + v12) * v46) * *(v9 - 1);
					} while (v9 < v22);
				}
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while ((unsigned __int64)v9 < v16);
	LABEL_188:
		v7 = v270;
	}
LABEL_189:
	if (!v18)
	{
		*(float*)a1 = v12;
		*(float*)(a1 + 4) = v14;
		*(float*)(a1 + 8) = v13;
		*(float*)(a1 + 12) = v8;
		*(float*)(a1 + 16) = v11;
		*(_DWORD*)(a1 + 20) = v7;
		if (v269)
			v268 = 1065353216;
		else
			v268 = 1086918619;
		*(float*)(a1 + 12) = sub_1408FDE98(v8, *(float*)&v268);
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;

