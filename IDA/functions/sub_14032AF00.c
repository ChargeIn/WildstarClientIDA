//----- (000000014032AF00) ----------------------------------------------------
__int64 __fastcall sub_14032AF00(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	_QWORD* v4; // r10
	__int64 v5; // r15
	__int64 v6; // r13
	unsigned int* v7; // rdi
	__int64 v8; // r8
	__int64 v9; // rbx
	__int64 v10; // r9
	__int64 v11; // rsi
	_DWORD* v12; // rcx
	bool v13; // cf
	__int64 v14; // r10
	__int64 v15; // r8
	int v16; // r14d
	__int64 v17; // r11
	__m128 v18; // xmm13
	__m128 v19; // xmm14
	__m128 v20; // xmm15
	__m128i v21; // xmm3
	__int64 v22; // rax
	__m128* v23; // rax
	__int64 v24; // r9
	int v25; // xmm0_4
	int v26; // xmm1_4
	int v27; // xmm2_4
	__int64 v28; // r11
	__m128* v29; // rax
	__int64 v30; // r9
	int v31; // xmm0_4
	int v32; // xmm1_4
	int v33; // xmm2_4
	__int64 v34; // r11
	__m128* v35; // rax
	__int64 v36; // r8
	__int64 v37; // r10
	__int64 v38; // r9
	__int64 v39; // r12
	int v40; // xmm0_4
	int v41; // xmm1_4
	int v42; // xmm2_4
	__int64 v43; // r11
	__int64 v44; // rcx
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // rax
	__int64 v48; // rcx
	__int64 v49; // rax
	__int64 v50; // rcx
	__int64 v51; // rax
	__int64 v52; // rcx
	unsigned __int64 v53; // rcx
	__int64 v54; // rax
	__int64 v55; // r9
	__int64 v56; // rax
	__m128i v57; // xmm3
	__m128* v58; // rax
	__int64 v59; // r9
	int v60; // xmm1_4
	int v61; // xmm2_4
	__m128* v62; // rax
	int v63; // xmm1_4
	int v64; // xmm2_4
	__int64 v65; // r9
	__m128* v66; // rax
	__int64 v67; // r8
	__int64 v68; // r10
	int v69; // xmm1_4
	int v70; // xmm2_4
	__int64 v71; // r9
	__int64 v72; // rax
	int v73; // r11d
	__int64 v74; // r9
	__int64 v75; // rax
	__m128i v76; // xmm3
	__m128* v77; // rax
	__int64 v78; // r9
	int v79; // xmm1_4
	int v80; // xmm2_4
	__m128* v81; // rax
	__int64 v82; // r9
	int v83; // xmm1_4
	int v84; // xmm2_4
	__m128* v85; // rax
	__int64 v86; // r8
	__int64 v87; // r10
	__int64 v88; // r11
	__m128 v89; // xmm4
	__m128 v90; // xmm5
	int v91; // xmm0_4
	int v92; // xmm1_4
	int v93; // xmm2_4
	__int64 v94; // r9
	unsigned int v95; // eax
	unsigned int v96; // edx
	__int64 v97; // r9
	__int64 v98; // rcx
	__m128 v99; // xmm3
	__int64 v100; // rcx
	__int64 v101; // rax
	__int64 v102; // rcx
	__int64 v103; // rax
	unsigned __int64 v104; // rdx
	float v105; // xmm7_4
	__int64 v106; // r10
	_DWORD* v107; // r14
	bool v108; // zf
	__m128 v109; // xmm10
	__m128 v110; // xmm6
	float v111; // xmm4_4
	__m128 v112; // xmm5
	float v113; // xmm2_4
	float v114; // xmm3_4
	float v115; // xmm0_4
	__m128 v116; // xmm3
	__m128 v117; // xmm1
	__m128 v118; // xmm3
	int v119; // xmm0_4
	int v120; // xmm1_4
	int v121; // eax
	int v122; // xmm0_4
	unsigned __int64 v123; // rdi
	int v124; // eax
	int v125; // xmm0_4
	__int64 v126; // r11
	__m128* v127; // rax
	__m128* v128; // r9
	__m128 v129; // xmm7
	unsigned __int16* v130; // r10
	__int64 v131; // r11
	__m128* v132; // rax
	__m128* v133; // r9
	__m128 v134; // xmm1
	__m128 v135; // xmm3
	__m128 v136; // xmm9
	__m128 v137; // xmm3
	__m128 v138; // xmm4
	__m128 v139; // xmm8
	__m128 v140; // xmm7
	__m128 v141; // xmm0
	unsigned __int16* v142; // r10
	__int64 v143; // r10
	__m128 v144; // xmm3
	__m128i v145; // xmm3
	__int64 v146; // rax
	__int64 v147; // rdi
	__m128 v148; // xmm4
	__m128 v149; // xmm5
	__m128 v150; // xmm6
	__m128 v151; // xmm7
	unsigned __int16* v152; // rdx
	__int64 v153; // rax
	__int64 v154; // rcx
	__m128 v155; // xmm0
	__m128 v156; // xmm2
	unsigned __int64 v157; // rax
	int v158; // xmm1_4
	__m128 v159; // xmm3
	__m128 v160; // xmm3
	int v161; // xmm0_4
	__m128 v162; // xmm3
	int v163; // xmm0_4
	int v164; // xmm0_4
	__m128 v165; // xmm9
	__m128 v166; // xmm11
	__int64 v167; // rdi
	__int64 v168; // r12
	int* v169; // rbx
	unsigned __int16* v170; // r13
	unsigned __int64 v171; // r9
	__int64 v172; // rsi
	unsigned __int64 v173; // r14
	__int64 v174; // r11
	__int64 v175; // r11
	__m128* v176; // rax
	__m128* v177; // r9
	__m128 v178; // xmm6
	unsigned __int16* v179; // r10
	__int64 v180; // r11
	__m128* v181; // rax
	__m128* v182; // r9
	__m128 v183; // xmm1
	__m128 v184; // xmm3
	__m128 v185; // xmm7
	__m128 v186; // xmm3
	__m128 v187; // xmm1
	__m128 v188; // xmm8
	__m128 v189; // xmm7
	__m128 v190; // xmm0
	unsigned __int16* v191; // r10
	__int64 v192; // r10
	__m128 v193; // xmm3
	__int64 v194; // r11
	__m128i v195; // xmm3
	__int64 v196; // r8
	__int64 v197; // r11
	unsigned __int64 v198; // rax
	__int128 v199; // xmm1
	__int128 v200; // xmm0
	__int64 v201; // rcx
	__int64 v202; // rax
	__int64 v203; // rcx
	__int64 v204; // rax
	__int64 v205; // rax
	__int64 v206; // rcx
	__int64 v207; // rax
	__int64 v209; // [rsp+28h] [rbp-E0h]
	__m128 v210; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v211; // [rsp+48h] [rbp-C0h]
	unsigned int v212; // [rsp+50h] [rbp-B8h]
	unsigned int v213; // [rsp+54h] [rbp-B4h]
	unsigned int v214; // [rsp+58h] [rbp-B0h]
	unsigned int v215; // [rsp+5Ch] [rbp-ACh]
	unsigned __int32 v216; // [rsp+60h] [rbp-A8h]
	unsigned __int32 v217; // [rsp+64h] [rbp-A4h]
	unsigned __int64 v218; // [rsp+68h] [rbp-A0h]
	_QWORD v219[3]; // [rsp+70h] [rbp-98h] BYREF
	__m128 v220; // [rsp+88h] [rbp-80h]
	__m128i v221; // [rsp+98h] [rbp-70h] BYREF
	double* v222; // [rsp+A8h] [rbp-60h]
	__m128* v223; // [rsp+B0h] [rbp-58h]
	__int128 v224; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v225; // [rsp+C8h] [rbp-40h]
	__int128 v226; // [rsp+D8h] [rbp-30h]
	__int128 v227; // [rsp+E8h] [rbp-20h]
	__int64 v228; // [rsp+F8h] [rbp-10h]
	__int64 v229; // [rsp+100h] [rbp-8h]
	__int64 v230; // [rsp+108h] [rbp+0h]
	__int64 v231; // [rsp+110h] [rbp+8h]
	__int64 v232; // [rsp+118h] [rbp+10h]
	__int64 v233; // [rsp+120h] [rbp+18h]
	__int64 v234; // [rsp+128h] [rbp+20h]
	__int64 v235; // [rsp+130h] [rbp+28h]
	__int64 v236; // [rsp+138h] [rbp+30h]
	_DWORD* v237; // [rsp+140h] [rbp+38h]
	__m128* v238[2]; // [rsp+148h] [rbp+40h] BYREF
	__int64 v239; // [rsp+158h] [rbp+50h]
	__int64 v240; // [rsp+160h] [rbp+58h]
	__int64 v241; // [rsp+168h] [rbp+60h]
	__m128i v242; // [rsp+178h] [rbp+70h] BYREF
	__m128i v243; // [rsp+188h] [rbp+80h] BYREF
	__m128i v244; // [rsp+198h] [rbp+90h] BYREF
	double v245[24]; // [rsp+1A8h] [rbp+A0h] BYREF
	__int128 v246[6]; // [rsp+268h] [rbp+160h] BYREF
	__m128 v247; // [rsp+2C8h] [rbp+1C0h] BYREF
	__m128 v248; // [rsp+2D8h] [rbp+1D0h]
	__m128 v249; // [rsp+2E8h] [rbp+1E0h]
	__m128 v250; // [rsp+2F8h] [rbp+1F0h]
	__m128 v251; // [rsp+308h] [rbp+200h]
	__m128 v252; // [rsp+318h] [rbp+210h]
	int v253; // [rsp+328h] [rbp+220h]
	int v254; // [rsp+32Ch] [rbp+224h]
	int v255; // [rsp+330h] [rbp+228h]
	int v256; // [rsp+334h] [rbp+22Ch]
	int v257; // [rsp+338h] [rbp+230h]
	int v258; // [rsp+33Ch] [rbp+234h]
	int v259; // [rsp+340h] [rbp+238h]
	__m128 v260; // [rsp+348h] [rbp+240h]
	int v261; // [rsp+358h] [rbp+250h]
	int v262; // [rsp+35Ch] [rbp+254h]
	int v263; // [rsp+360h] [rbp+258h]
	int v264; // [rsp+364h] [rbp+25Ch]
	int v265; // [rsp+368h] [rbp+260h]
	int v266; // [rsp+36Ch] [rbp+264h]
	int v267; // [rsp+370h] [rbp+268h]
	int v268; // [rsp+374h] [rbp+26Ch]
	int v269[4]; // [rsp+378h] [rbp+270h] BYREF
	__int64 v270; // [rsp+388h] [rbp+280h]
	__int64 v271; // [rsp+390h] [rbp+288h]
	__int64 v272; // [rsp+438h] [rbp+330h]
	__m128* v273; // [rsp+448h] [rbp+340h] BYREF
	__m128* v274; // [rsp+450h] [rbp+348h]
	int v275; // [rsp+458h] [rbp+350h]
	int v276; // [rsp+45Ch] [rbp+354h]
	int v277; // [rsp+460h] [rbp+358h]
	int v278; // [rsp+464h] [rbp+35Ch]
	int v279; // [rsp+468h] [rbp+360h]
	int v280; // [rsp+46Ch] [rbp+364h]
	int v281; // [rsp+470h] [rbp+368h]
	int v282; // [rsp+474h] [rbp+36Ch]
	int v283; // [rsp+478h] [rbp+370h]
	int v284; // [rsp+47Ch] [rbp+374h]
	int v285; // [rsp+480h] [rbp+378h]
	int v286; // [rsp+484h] [rbp+37Ch]
	int v287[2]; // [rsp+488h] [rbp+380h] BYREF
	char v288; // [rsp+490h] [rbp+388h]
	__int64 v289; // [rsp+498h] [rbp+390h]
	unsigned int v290; // [rsp+4A0h] [rbp+398h]
	int v291; // [rsp+4A4h] [rbp+39Ch]
	int v292; // [rsp+4A8h] [rbp+3A0h]
	int v293; // [rsp+4ACh] [rbp+3A4h]
	int v294; // [rsp+4B0h] [rbp+3A8h]
	int v295; // [rsp+4B4h] [rbp+3ACh]
	int v296; // [rsp+4B8h] [rbp+3B0h]
	int v297; // [rsp+4BCh] [rbp+3B4h]
	int v298; // [rsp+4C0h] [rbp+3B8h]
	int v299; // [rsp+4C4h] [rbp+3BCh]
	int v300; // [rsp+4C8h] [rbp+3C0h]
	int v301; // [rsp+4CCh] [rbp+3C4h]
	int v302; // [rsp+4D0h] [rbp+3C8h]
	int v303; // [rsp+4D4h] [rbp+3CCh]
	int v304[2]; // [rsp+4D8h] [rbp+3D0h] BYREF
	char v305; // [rsp+4E0h] [rbp+3D8h]
	__int64 v306; // [rsp+4E8h] [rbp+3E0h]
	int v307; // [rsp+4F0h] [rbp+3E8h]
	int v308; // [rsp+4F4h] [rbp+3ECh]
	int v309; // [rsp+4F8h] [rbp+3F0h]
	int v310; // [rsp+4FCh] [rbp+3F4h]
	int v311; // [rsp+500h] [rbp+3F8h]
	int v312; // [rsp+504h] [rbp+3FCh]
	int v313; // [rsp+508h] [rbp+400h]
	int v314; // [rsp+50Ch] [rbp+404h]
	int v315; // [rsp+510h] [rbp+408h]
	int v316; // [rsp+514h] [rbp+40Ch]
	int v317; // [rsp+518h] [rbp+410h]
	int v318; // [rsp+51Ch] [rbp+414h]
	int v319; // [rsp+520h] [rbp+418h]
	int v320; // [rsp+524h] [rbp+41Ch]
	int v321[2]; // [rsp+528h] [rbp+420h] BYREF
	char v322; // [rsp+530h] [rbp+428h]
	__m128 v323; // [rsp+538h] [rbp+430h] BYREF
	__m128 v324; // [rsp+548h] [rbp+440h]
	__m128 v325; // [rsp+558h] [rbp+450h]
	__int128 v326; // [rsp+568h] [rbp+460h]
	__m128* v327[10]; // [rsp+588h] [rbp+480h] BYREF

	v4 = (_QWORD*)*a4;
	v211 = a1;
	v5 = v4[6];
	v6 = v4[8];
	v7 = (unsigned int*)v4[7];
	v8 = *(unsigned __int16*)(v6 + 22);
	v9 = *(_QWORD*)(v5 + 64);
	v10 = *(_QWORD*)(v5 + 56);
	v11 = *(_QWORD*)(v5 + 1104) + 96 * v8;
	v12 = (_DWORD*)(48 * v8 + *(_QWORD*)(v9 + 504) + 8i64);
	v13 = *(_DWORD*)(v6 + 12) < 3u;
	v235 = v9;
	v237 = v12;
	v221.m128i_i64[0] = v11;
	if (!v13)
	{
		v14 = *(_QWORD*)(v10 + 304);
		v15 = *(_QWORD*)(v10 + 216);
		v16 = *(_DWORD*)(v10 + 392);
		v17 = *(unsigned int*)(v6 + 4);
		if (v16 == 1)
		{
			v18 = (__m128) * (unsigned int*)(v17 * v14 + v15);
			v19 = (__m128) * (unsigned int*)(v17 * v14 + v15 + 4);
			v20 = (__m128) * (unsigned int*)(v17 * v14 + v15 + 8);
			LODWORD(v289) = *(_DWORD*)(v17 * v14 + v15);
			HIDWORD(v289) = v19.m128_i32[0];
			v290 = v20.m128_i32[0];
		}
		else
		{
			v21 = (__m128i)_mm_mul_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v17 * v14 + v15)),
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v17 * v14 + v15 + 4))),
					_mm_unpacklo_ps(
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v17 * v14 + v15 + 2)),
						(__m128)0i64)),
				(__m128)xmmword_140B7A650);
			v289 = v21.m128i_i64[0];
			v19 = (__m128)v21.m128i_u32[1];
			v18 = (__m128)v21.m128i_u32[0];
			v290 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
			v20 = (__m128)v290;
		}
		v22 = *(_QWORD*)(v10 + 312);
		v234 = *(_QWORD*)(v10 + 224);
		v239 = v22;
		v23 = sub_1407B08C0((unsigned __int8*)(v234 + v17 * v22), &v210);
		v231 = *(_QWORD*)(v24 + 232);
		v25 = v23->m128_i32[0];
		v26 = v23->m128_i32[1];
		v27 = v23->m128_i32[2];
		v229 = *(_QWORD*)(v24 + 320);
		v291 = v25;
		v292 = v26;
		v293 = v27;
		v29 = sub_1407B08C0((unsigned __int8*)(v231 + v28 * v229), &v210);
		v228 = *(_QWORD*)(v30 + 240);
		v31 = v29->m128_i32[0];
		v32 = v29->m128_i32[1];
		v33 = v29->m128_i32[2];
		v233 = *(_QWORD*)(v30 + 328);
		v294 = v31;
		v295 = v32;
		v296 = v33;
		v35 = sub_1407B08C0((unsigned __int8*)(v228 + v34 * v233), &v210);
		v39 = *(_QWORD*)(v38 + 336);
		v40 = v35->m128_i32[0];
		v41 = v35->m128_i32[1];
		v42 = v35->m128_i32[2];
		v209 = *(_QWORD*)(v38 + 248);
		v297 = v40;
		v298 = v41;
		v299 = v42;
		v44 = *(_QWORD*)(v38 + 256);
		v300 = *(_DWORD*)(v43 * v39 + v209);
		v45 = *(_QWORD*)(v38 + 344);
		v230 = v44;
		v241 = v45;
		LODWORD(v45) = *(_DWORD*)(v43 * v45 + v44);
		v46 = *(_QWORD*)(v38 + 264);
		v301 = v45;
		v47 = *(_QWORD*)(v38 + 352);
		v232 = v46;
		v236 = v47;
		LODWORD(v47) = *(_DWORD*)(v43 * v47 + v46);
		v48 = *(_QWORD*)(v38 + 272);
		v302 = v47;
		v49 = *(_QWORD*)(v38 + 360);
		v242.m128i_i64[0] = v48;
		v240 = v49;
		LODWORD(v49) = *(_DWORD*)(v43 * v49 + v48);
		v50 = *(_QWORD*)(v38 + 280);
		v303 = v49;
		v51 = *(_QWORD*)(v38 + 368);
		v243.m128i_i64[0] = v50;
		v244.m128i_i64[0] = v51;
		v304[0] = *(_DWORD*)(v43 * v51 + v50);
		v52 = *(_QWORD*)(v38 + 288);
		v238[0] = *(__m128**)(v38 + 376);
		LODWORD(v51) = *(_DWORD*)(v43 * (__int64)v238[0] + v52);
		v222 = (double*)v52;
		v53 = *(_QWORD*)(v38 + 296);
		v304[1] = v51;
		v54 = *(_QWORD*)(v38 + 384);
		v210.m128_u64[0] = v53;
		v218 = v54;
		v55 = (unsigned int)(v43 + 1);
		v305 = *(_BYTE*)(v43 * v54 + v53);
		if (v16 == 1)
		{
			v56 = v37 * (unsigned int)v55;
			v217 = *(_DWORD*)(v56 + v36);
			LODWORD(v306) = v217;
			v212 = *(_DWORD*)(v56 + v36 + 4);
			HIDWORD(v306) = v212;
			v215 = *(_DWORD*)(v56 + v36 + 8);
			v307 = v215;
		}
		else
		{
			v57 = (__m128i)_mm_mul_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v37 * v55 + v36)),
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v37 * v55 + v36 + 4))),
					_mm_unpacklo_ps(
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v37 * v55 + v36 + 2)),
						(__m128)0i64)),
				(__m128)xmmword_140B7A650);
			v306 = v57.m128i_i64[0];
			v307 = _mm_cvtsi128_si32(_mm_srli_si128(v57, 8));
			v215 = v307;
			v212 = v57.m128i_u32[1];
			v217 = v57.m128i_i32[0];
		}
		v58 = sub_1407B08C0((unsigned __int8*)(v234 + v239 * v55), (__m128*) & v219[1]);
		v60 = v58->m128_i32[1];
		v61 = v58->m128_i32[2];
		v308 = v58->m128_i32[0];
		v309 = v60;
		v310 = v61;
		v62 = sub_1407B08C0((unsigned __int8*)(v231 + v229 * v59), (__m128*) & v219[1]);
		v63 = v62->m128_i32[1];
		v64 = v62->m128_i32[2];
		v311 = v62->m128_i32[0];
		v312 = v63;
		v313 = v64;
		v66 = sub_1407B08C0((unsigned __int8*)(v228 + v65 * v233), (__m128*) & v219[1]);
		v69 = v66->m128_i32[1];
		v70 = v66->m128_i32[2];
		v314 = v66->m128_i32[0];
		v315 = v69;
		v316 = v70;
		v317 = *(_DWORD*)(v71 * v39 + v209);
		v318 = *(_DWORD*)(v71 * v241 + v230);
		v319 = *(_DWORD*)(v71 * v236 + v232);
		v320 = *(_DWORD*)(v71 * v240 + v242.m128i_i64[0]);
		v321[0] = *(_DWORD*)(v71 * v244.m128i_i64[0] + v243.m128i_i64[0]);
		v321[1] = *(_DWORD*)((char*)v222 + v71 * (__int64)v238[0]);
		v72 = v71 * v218;
		v74 = (unsigned int)(v73 + 2);
		v322 = *(_BYTE*)(v72 + v210.m128_u64[0]);
		if (v16 == 1)
		{
			v75 = v68 * (unsigned int)v74;
			v216 = *(_DWORD*)(v75 + v67);
			LODWORD(v273) = v216;
			v214 = *(_DWORD*)(v75 + v67 + 4);
			HIDWORD(v273) = v214;
			v213 = *(_DWORD*)(v75 + v67 + 8);
			LODWORD(v274) = v213;
		}
		else
		{
			v76 = (__m128i)_mm_mul_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v68 * v74 + v67)),
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v68 * v74 + v67 + 4))),
					_mm_unpacklo_ps(
						(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v68 * v74 + v67 + 2)),
						(__m128)0i64)),
				(__m128)xmmword_140B7A650);
			v273 = (__m128*)v76.m128i_i64[0];
			LODWORD(v274) = _mm_cvtsi128_si32(_mm_srli_si128(v76, 8));
			v213 = (unsigned int)v274;
			v214 = v76.m128i_u32[1];
			v216 = v76.m128i_i32[0];
		}
		v77 = sub_1407B08C0((unsigned __int8*)(v234 + v239 * v74), (__m128*) & v219[1]);
		v79 = v77->m128_i32[1];
		v80 = v77->m128_i32[2];
		HIDWORD(v274) = v77->m128_i32[0];
		v275 = v79;
		v276 = v80;
		v81 = sub_1407B08C0((unsigned __int8*)(v231 + v229 * v78), (__m128*) & v219[1]);
		v83 = v81->m128_i32[1];
		v84 = v81->m128_i32[2];
		v277 = v81->m128_i32[0];
		v278 = v83;
		v279 = v84;
		v85 = sub_1407B08C0((unsigned __int8*)(v228 + v233 * v82), (__m128*) & v219[1]);
		v89 = (__m128)xmmword_140C798C0;
		v90 = (__m128)xmmword_140C798D0;
		v91 = v85->m128_i32[0];
		v92 = v85->m128_i32[1];
		v93 = v85->m128_i32[2];
		*(_OWORD*)&v219[1] = xmmword_140C798C0;
		v220 = (__m128)xmmword_140C798D0;
		v280 = v91;
		v281 = v92;
		v282 = v93;
		v283 = *(_DWORD*)(v39 * v94 + v209);
		v284 = *(_DWORD*)(v241 * v94 + v230);
		v285 = *(_DWORD*)(v236 * v94 + v232);
		v286 = *(_DWORD*)(v240 * v94 + v242.m128i_i64[0]);
		v287[0] = *(_DWORD*)(v244.m128i_i64[0] * v94 + v243.m128i_i64[0]);
		v287[1] = *(_DWORD*)((char*)v222 + (__int64)v238[0] * v94);
		v288 = *(_BYTE*)(v218 * v94 + v210.m128_u64[0]);
		v95 = *(_DWORD*)(v6 + 12);
		if (v95)
		{
			v96 = v88;
			v97 = v95;
			do
			{
				v98 = v87 * v96;
				if (v16 == 1)
					v99 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v98 + v86), (__m128) * (unsigned int*)(v98 + v86 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v98 + v86 + 4), (__m128)0i64));
				else
					v99 = _mm_mul_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v98 + v86)),
								(__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v98 + v86 + 4))),
							_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(__int16*)(v98 + v86 + 2)), (__m128)0i64)),
						(__m128)xmmword_140B7AB30);
				v90 = _mm_max_ps(v90, v99);
				++v96;
				v89 = _mm_min_ps(v89, v99);
				v220 = v90;
				--v97;
			} while (v97);
			*(__m128*)& v219[1] = v89;
		}
		v100 = *(unsigned __int16*)(v6 + 16);
		v101 = *(unsigned __int8*)(v88 * v39 + v209);
		HIDWORD(v219[1]) = -1065353216;
		v102 = v101 + v100;
		v103 = *(_QWORD*)(v9 + 440);
		v220.m128_i32[1] = 1082130432;
		v104 = *(_QWORD*)(v5 + 824) + ((unsigned __int64)*(unsigned __int16*)(v103 + 2 * v102) << 6);
		v210.m128_u64[1] = *(_QWORD*)(v211 + 16) + 304i64;
		v210.m128_u64[0] = v104;
		v323 = v210;
		sub_1401AFB10((__m128**) & v323, (__m128*) & v224);
		v105 = (float)(*(float*)&v226 * *((float*)&v227 + 1)) - (float)(*(float*)&v227 * *((float*)&v226 + 1));
		if (fabs(
			(float)((float)((float)((float)((float)((float)((float)((float)(*((float*)&v227 + 3) * *((float*)&v226 + 2))
				- (float)(*((float*)&v226 + 3) * *((float*)&v227 + 2)))
				* *((float*)&v225 + 1))
				- (float)((float)((float)(*((float*)&v227 + 3) * *((float*)&v226 + 1))
					- (float)(*((float*)&v226 + 3) * *((float*)&v227 + 1)))
					* *((float*)&v225 + 2)))
				+ (float)((float)((float)(*((float*)&v227 + 2) * *((float*)&v226 + 1))
					- (float)(*((float*)&v226 + 2) * *((float*)&v227 + 1)))
					* *((float*)&v225 + 3)))
				* *(float*)&v224)
				- (float)((float)((float)((float)((float)((float)(*((float*)&v227 + 3) * *((float*)&v226 + 2))
					- (float)(*((float*)&v226 + 3) * *((float*)&v227 + 2)))
					* *(float*)&v225)
					- (float)((float)((float)(*((float*)&v227 + 3) * *(float*)&v226)
						- (float)(*((float*)&v226 + 3) * *(float*)&v227))
						* *((float*)&v225 + 2)))
					+ (float)((float)((float)(*((float*)&v227 + 2) * *(float*)&v226)
						- (float)(*((float*)&v226 + 2) * *(float*)&v227))
						* *((float*)&v225 + 3)))
					* *((float*)&v224 + 1)))
				+ (float)((float)((float)((float)((float)((float)(*((float*)&v227 + 3) * *((float*)&v226 + 1))
					- (float)(*((float*)&v226 + 3) * *((float*)&v227 + 1)))
					* *(float*)&v225)
					- (float)((float)((float)(*((float*)&v227 + 3) * *(float*)&v226)
						- (float)(*((float*)&v226 + 3) * *(float*)&v227))
						* *((float*)&v225 + 1)))
					+ (float)(v105 * *((float*)&v225 + 3)))
					* *((float*)&v224 + 2)))
			- (float)((float)((float)((float)((float)((float)(*((float*)&v227 + 2) * *((float*)&v226 + 1))
				- (float)(*((float*)&v226 + 2) * *((float*)&v227 + 1)))
				* *(float*)&v225)
				- (float)((float)((float)(*((float*)&v227 + 2) * *(float*)&v226)
					- (float)(*((float*)&v226 + 2) * *(float*)&v227))
					* *((float*)&v225 + 1)))
				+ (float)(v105 * *((float*)&v225 + 2)))
				* *((float*)&v224 + 3))) >= 0.0000099999997)
		{
			v327[0] = (__m128*) & v224;
			sub_1401AFC20((__int64*)v327, v245);
			v107 = v237;
			v108 = *v237 == 0;
			v109 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v20), _mm_unpacklo_ps(v19, (__m128)0i64));
			v110 = _mm_sub_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v217, (__m128)v215), _mm_unpacklo_ps((__m128)v212, (__m128)0i64)),
				v109);
			v111 = _mm_shuffle_ps(v110, v110, 170).m128_f32[0];
			v112 = _mm_sub_ps(
				_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v216, (__m128)v213), _mm_unpacklo_ps((__m128)v214, (__m128)0i64)),
				v109);
			v113 = _mm_shuffle_ps(v112, v112, 170).m128_f32[0];
			v114 = 1.0 / (float)((float)(v113 * v110.m128_f32[0]) - (float)(v111 * v112.m128_f32[0]));
			v323.m128_f32[0] = v114 * v113;
			v115 = v114 * v111;
			v324.m128_f32[1] = v114 * v110.m128_f32[0];
			v116 = (__m128) * v7;
			v323.m128_f32[1] = -(float)((float)(1.0
				/ (float)((float)(v113 * v110.m128_f32[0]) - (float)(v111 * v112.m128_f32[0])))
				* v112.m128_f32[0]);
			v246[1] = (__int128)v220;
			v324.m128_f32[0] = -v115;
			v246[3] = v225;
			v246[0] = *(_OWORD*)&v219[1];
			v246[2] = v224;
			v246[5] = v227;
			v117 = _mm_unpacklo_ps((__m128)v7[1], (__m128)0x3F800000u);
			v246[4] = v226;
			v118 = _mm_unpacklo_ps(_mm_unpacklo_ps(v116, (__m128)v7[2]), v117);
			if (v108)
			{
				v119 = v7[8];
				v120 = v7[10];
				v269[0] = v237[3];
				v121 = *(unsigned __int8*)(v11 + 88);
				v260 = v118;
				v261 = v119;
				v122 = v7[11];
				v262 = v120;
				v123 = *(unsigned __int16*)(v6 + 48);
				v269[1] = v121;
				v124 = *(unsigned __int8*)(v11 + 89);
				v263 = v122;
				v125 = *(_DWORD*)(v5 + 1684);
				v269[2] = v124;
				v265 = 0x40000000;
				v267 = v125;
				v108 = *(_WORD*)(v6 + 40) == 2;
				v271 = 0i64;
				v264 = 0;
				v266 = 1082130432;
				v268 = 7328;
				sub_1401B2CE0((__m128i*) & v219[1], (unsigned __int16*)&v304[v108]);
				v127 = (__m128*)sub_1401B2CE0(&v221, (unsigned __int16*)&v321[v126]);
				v129 = _mm_sub_ps(*v127, *v128);
				sub_1401B2CE0((__m128i*) & v219[1], v130);
				v132 = (__m128*)sub_1401B2CE0(&v221, (unsigned __int16*)&v287[v131]);
				v134 = _mm_sub_ps(*v132, *v133);
				v135 = _mm_unpacklo_ps(_mm_unpacklo_ps(v129, (__m128)0i64), _mm_unpacklo_ps(v134, (__m128)0i64));
				v136 = _mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v135, v135, 0), v323),
					_mm_mul_ps(_mm_shuffle_ps(v135, v135, 85), v324));
				v137 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(_mm_shuffle_ps(v129, v129, 85), (__m128)0i64),
					_mm_unpacklo_ps(_mm_shuffle_ps(v134, v134, 85), (__m128)0i64));
				v138 = _mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v137, v137, 0), v323),
					_mm_mul_ps(_mm_shuffle_ps(v137, v137, 85), v324));
				v139 = _mm_unpacklo_ps(_mm_unpacklo_ps(v136, (__m128)0i64), _mm_unpacklo_ps(v138, (__m128)0i64));
				v323 = v139;
				v324 = (__m128)xmmword_140B7A700;
				v140 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(_mm_shuffle_ps(v136, v136, 85), (__m128)0i64),
					_mm_unpacklo_ps(_mm_shuffle_ps(v138, v138, 85), (__m128)0i64));
				v141 = (__m128)xmmword_140B7AD00;
				v326 = xmmword_140B7AD00;
				v325 = v140;
				v141.m128_f32[0] = sub_1401C9770(v142);
				v144 = v141;
				v141.m128_f32[0] = sub_1401C9770((unsigned __int16*)(v143 + 2));
				v221.m128i_i64[0] = (__int64)v245;
				v221.m128i_i64[1] = (__int64)&v323;
				v273 = (__m128*)v245;
				v274 = &v323;
				v145 = (__m128i)_mm_sub_ps(
					_mm_unpacklo_ps(_mm_unpacklo_ps(v144, (__m128)0i64), _mm_unpacklo_ps(v141, (__m128)0i64)),
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v109, v109, 85), (__m128)xmmword_140B7A700),
							_mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v139)),
						_mm_mul_ps(_mm_shuffle_ps(v109, v109, 170), v140)));
				*(_QWORD*)&v326 = v145.m128i_i64[0];
				DWORD2(v326) = _mm_cvtsi128_si32(_mm_srli_si128(v145, 8));
				sub_1401AFB10(&v273, &v247);
				if (v123 < *(unsigned int*)(v9 + 480))
				{
					v146 = *(_QWORD*)(v5 + 848);
					v147 = 272 * v123;
					v148 = *(__m128*)(v147 + v146 + 208);
					v149 = *(__m128*)(v147 + v146 + 224);
					v150 = *(__m128*)(v147 + v146 + 240);
					v151 = *(__m128*)(v147 + v146 + 256);
					v247 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v247, v247, 85), v149),
								_mm_mul_ps(_mm_shuffle_ps(v247, v247, 0), v148)),
							_mm_mul_ps(_mm_shuffle_ps(v247, v247, 170), v150)),
						_mm_mul_ps(_mm_shuffle_ps(v247, v247, 255), v151));
					v248 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v248, v248, 85), v149),
								_mm_mul_ps(_mm_shuffle_ps(v248, v248, 0), v148)),
							_mm_mul_ps(_mm_shuffle_ps(v248, v248, 170), v150)),
						_mm_mul_ps(_mm_shuffle_ps(v248, v248, 255), v151));
					v249 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v249, v249, 0), v148),
								_mm_mul_ps(_mm_shuffle_ps(v249, v249, 85), v149)),
							_mm_mul_ps(_mm_shuffle_ps(v249, v249, 170), v150)),
						_mm_mul_ps(_mm_shuffle_ps(v249, v249, 255), v151));
					v250 = _mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v250, v250, 0), v148),
								_mm_mul_ps(_mm_shuffle_ps(v250, v250, 85), v149)),
							_mm_mul_ps(_mm_shuffle_ps(v250, v250, 170), v150)),
						_mm_mul_ps(_mm_shuffle_ps(v250, v250, 255), v151));
				}
				v152 = (unsigned __int16*)*((_QWORD*)v107 + 4);
				v270 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v211 + 16) + 16i64) + 2144i64);
				v153 = *v152;
				if ((unsigned int)v153 < *(_DWORD*)(v9 + 448))
				{
					v154 = *(_QWORD*)(*(_QWORD*)(v5 + 1056) + 24 * v153 + 16);
					if (v154)
						v270 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v154 + 56i64))(v154);
				}
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65688 + 104i64))(qword_140C65688, v246);
			}
			else
			{
				v155 = (__m128)v7[6];
				v156 = (__m128)v7[5];
				v251 = v118;
				v209 = 0i64;
				v157 = (unsigned int)v237[6];
				v158 = v7[10];
				v159 = (__m128)v7[4];
				v256 = 0;
				v258 = 1082130432;
				v160 = _mm_unpacklo_ps(v159, v155);
				v161 = v7[8];
				v254 = v158;
				v162 = _mm_unpacklo_ps(v160, _mm_unpacklo_ps(v156, (__m128)0i64));
				if (v157 > 2)
					v157 = 2i64;
				v260.m128_u64[0] = (unsigned __int64)v237;
				v272 = 0i64;
				v253 = v161;
				v163 = v7[11];
				v252 = v162;
				v218 = v157;
				v255 = v163;
				v164 = *(_DWORD*)(v5 + 1684);
				v257 = 0x40000000;
				v259 = v164;
				if (v157)
				{
					v165 = v324;
					v166 = v323;
					v167 = 0i64;
					v168 = 0i64;
					v169 = v269;
					v170 = (unsigned __int16*)(v6 + 48);
					do
					{
						v171 = *((_QWORD*)v107 + 4);
						v172 = *(_QWORD*)(v11 + 8);
						v173 = *v170;
						v174 = *(v170 - 4) == 2;
						v108 = *((_DWORD*)&v209 + v174) == 0;
						v210.m128_u64[0] = v171;
						if (v108)
						{
							sub_1401B2CE0((__m128i*) & v219[1], (unsigned __int16*)&v304[v174]);
							v176 = (__m128*)sub_1401B2CE0(&v243, (unsigned __int16*)&v321[v175]);
							v178 = _mm_sub_ps(*v176, *v177);
							sub_1401B2CE0(&v244, v179);
							v181 = (__m128*)sub_1401B2CE0(&v242, (unsigned __int16*)&v287[v180]);
							v183 = _mm_sub_ps(*v181, *v182);
							v184 = _mm_unpacklo_ps(_mm_unpacklo_ps(v178, (__m128)0i64), _mm_unpacklo_ps(v183, (__m128)0i64));
							v185 = _mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v184, v184, 0), v166),
								_mm_mul_ps(_mm_shuffle_ps(v184, v184, 85), v165));
							v324 = (__m128)xmmword_140B7A700;
							v186 = _mm_unpacklo_ps(
								_mm_unpacklo_ps(_mm_shuffle_ps(v178, v178, 85), (__m128)0i64),
								_mm_unpacklo_ps(_mm_shuffle_ps(v183, v183, 85), (__m128)0i64));
							v187 = _mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v186, v186, 0), v166),
								_mm_mul_ps(_mm_shuffle_ps(v186, v186, 85), v165));
							v188 = _mm_unpacklo_ps(_mm_unpacklo_ps(v185, (__m128)0i64), _mm_unpacklo_ps(v187, (__m128)0i64));
							v323 = v188;
							v189 = _mm_unpacklo_ps(
								_mm_unpacklo_ps(_mm_shuffle_ps(v185, v185, 85), (__m128)0i64),
								_mm_unpacklo_ps(_mm_shuffle_ps(v187, v187, 85), (__m128)0i64));
							v190 = (__m128)xmmword_140B7AD00;
							v326 = xmmword_140B7AD00;
							v325 = v189;
							v190.m128_f32[0] = sub_1401C9770(v191);
							v193 = v190;
							v190.m128_f32[0] = sub_1401C9770((unsigned __int16*)(v192 + 2));
							v222 = v245;
							v223 = &v323;
							v195 = (__m128i)_mm_sub_ps(
								_mm_unpacklo_ps(
									_mm_unpacklo_ps(v193, (__m128)0i64),
									_mm_unpacklo_ps(v190, (__m128)0i64)),
								_mm_add_ps(
									_mm_add_ps(
										_mm_mul_ps(_mm_shuffle_ps(v109, v109, 85), (__m128)xmmword_140B7A700),
										_mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v188)),
									_mm_mul_ps(_mm_shuffle_ps(v109, v109, 170), v189)));
							v327[0] = (__m128*)v245;
							v327[1] = &v323;
							*(_QWORD*)&v326 = v195.m128i_i64[0];
							DWORD2(v326) = _mm_cvtsi128_si32(_mm_srli_si128(v195, 8));
							sub_1401AFB10(v327, (__m128*) & v245[8 * v194 + 8]);
							v171 = v210.m128_u64[0];
							v106 = v211;
							*((_DWORD*)&v209 + v174) = 1;
						}
						v196 = v235;
						v197 = v174 << 6;
						v198 = *(unsigned int*)(v235 + 480);
						v199 = *(_OWORD*)((char*)&v245[12] + v197);
						*((_OWORD*)v169 - 2) = *(_OWORD*)((char*)&v245[8] + v197);
						*((_OWORD*)v169 - 1) = *(_OWORD*)((char*)&v245[10] + v197);
						v200 = *(_OWORD*)((char*)&v245[14] + v197);
						*(_OWORD*)v169 = v199;
						*((_OWORD*)v169 + 1) = v200;
						if (v173 < v198)
						{
							v201 = *(_QWORD*)(v5 + 848);
							v238[0] = (__m128*)(v169 - 8);
							v238[1] = (__m128*)(272 * v173 + v201 + 208);
							sub_1401AFB10(v238, (__m128*)v169 - 2);
						}
						*((_QWORD*)v169 + 6) = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v106 + 16) + 16i64) + 2144i64);
						v202 = *(unsigned __int16*)(v168 + v171);
						if ((unsigned int)v202 < *(_DWORD*)(v196 + 448))
						{
							v203 = *(_QWORD*)(*(_QWORD*)(v5 + 1056) + 24 * v202 + 16);
							if (v203)
							{
								v204 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v203 + 56i64))(v203);
								v196 = v235;
								v171 = v210.m128_u64[0];
								v106 = v211;
								*((_QWORD*)v169 + 6) = v204;
							}
						}
						*((_QWORD*)v169 + 7) = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v106 + 16) + 16i64) + 2152i64);
						v205 = *(unsigned __int16*)(v168 + v171 + 2);
						if ((unsigned int)v205 < *(_DWORD*)(v196 + 448))
						{
							v206 = *(_QWORD*)(*(_QWORD*)(v5 + 1056) + 24 * v205 + 16);
							if (v206)
							{
								v207 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v206 + 56i64))(v206);
								v106 = v211;
								*((_QWORD*)v169 + 7) = v207;
							}
						}
						v107 = v237;
						v169[16] = *(_DWORD*)(v167 + v172 + 20);
						v169 += 28;
						*(v169 - 11) = *(_DWORD*)(v167 + v172 + 40);
						++v170;
						*(v169 - 10) = *(_DWORD*)(v167 + v172 + 60);
						v168 += 296i64;
						*(v169 - 9) = *(_DWORD*)(v167 + v172 + 80);
						v167 += 224i64;
						v108 = v218-- == 1;
						*((_OWORD*)v169 - 5) = *(_OWORD*)(v167 + v172 - 32);
						v11 = v221.m128i_i64[0];
					} while (!v108);
				}
				(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65688 + 112i64))(qword_140C65688, v246);
			}
		}
	}
	return 0i64;
}
// 14032B0C5: variable 'v24' is possibly undefined
// 14032B104: variable 'v28' is possibly undefined
// 14032B115: variable 'v30' is possibly undefined
// 14032B154: variable 'v34' is possibly undefined
// 14032B16C: variable 'v38' is possibly undefined
// 14032B1A1: variable 'v43' is possibly undefined
// 14032B296: variable 'v37' is possibly undefined
// 14032B29A: variable 'v36' is possibly undefined
// 14032B37B: variable 'v59' is possibly undefined
// 14032B3C6: variable 'v65' is possibly undefined
// 14032B401: variable 'v71' is possibly undefined
// 14032B4A3: variable 'v73' is possibly undefined
// 14032B4BA: variable 'v68' is possibly undefined
// 14032B4BE: variable 'v67' is possibly undefined
// 14032B59F: variable 'v78' is possibly undefined
// 14032B5DB: variable 'v82' is possibly undefined
// 14032B63C: variable 'v94' is possibly undefined
// 14032B6F2: variable 'v88' is possibly undefined
// 14032B705: variable 'v87' is possibly undefined
// 14032B71D: variable 'v86' is possibly undefined
// 14032BB7D: variable 'v126' is possibly undefined
// 14032BB94: variable 'v128' is possibly undefined
// 14032BB98: variable 'v130' is possibly undefined
// 14032BBA4: variable 'v131' is possibly undefined
// 14032BBC7: variable 'v133' is possibly undefined
// 14032BC85: variable 'v142' is possibly undefined
// 14032BC8A: variable 'v143' is possibly undefined
// 14032BFF0: variable 'v175' is possibly undefined
// 14032C009: variable 'v177' is possibly undefined
// 14032C00D: variable 'v179' is possibly undefined
// 14032C019: variable 'v180' is possibly undefined
// 14032C03F: variable 'v182' is possibly undefined
// 14032C0E5: variable 'v191' is possibly undefined
// 14032C0EA: variable 'v192' is possibly undefined
// 14032C14E: variable 'v194' is possibly undefined
// 14032C1A3: variable 'v174' is possibly undefined
// 14032C21F: variable 'v106' is possibly undefined
// 14032C232: variable 'v171' is possibly undefined
// 14032C237: variable 'v196' is possibly undefined
// 140B7A650: using guessed type __int128 xmmword_140B7A650;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7AB30: using guessed type __int128 xmmword_140B7AB30;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

