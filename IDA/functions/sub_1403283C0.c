#include "../winhttp.h"

//----- (00000001403283C0) ----------------------------------------------------
__int64 __fastcall sub_1403283C0(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
	_QWORD* v6; // r15
	__int64 v7; // r8
	float* v8; // rbx
	float* v9; // r14
	__int64 v10; // rax
	__int64 v11; // r13
	__int64 v12; // r12
	unsigned int* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // r12
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rdx
	float* v19; // r9
	__int64 v20; // r13
	__int64 v21; // rax
	__int64 v22; // rdx
	int v23; // eax
	__int64 v24; // r13
	int v25; // r14d
	int v26; // edi
	__int64 v27; // r8
	int v28; // ecx
	int v29; // r14d
	int v30; // edi
	int v31; // r10d
	unsigned __int64 v32; // rdx
	unsigned __int64 v33; // r9
	int v34; // r13d
	int v35; // r11d
	int v36; // ecx
	int v37; // eax
	int v38; // r11d
	int v39; // r14d
	int v40; // edi
	int v41; // r14d
	int v42; // edi
	BOOL v43; // eax
	int v44; // r14d
	int v45; // edi
	int v46; // eax
	__int64 v47; // rax
	int v48; // ecx
	int v49; // r14d
	int v50; // edi
	int v51; // r14d
	int v52; // edi
	__int64 v53; // rdx
	int v54; // ebx
	bool v55; // zf
	__int64 v56; // r13
	__m128* v57; // rax
	__m128 v58; // xmm2
	__m128 v59; // xmm5
	__m128 v60; // xmm4
	__m128 v61; // xmm3
	__m128 v62; // xmm2
	unsigned int v63; // r11d
	__int64 v64; // rcx
	unsigned int v65; // r10d
	_DWORD* v66; // rdx
	_DWORD* v67; // r8
	_DWORD* v68; // rdx
	__int64 v69; // r8
	unsigned int v70; // r9d
	__int64 v71; // r10
	unsigned __int16* v72; // r11
	unsigned int v73; // ecx
	unsigned int v74; // edx
	unsigned int v75; // ecx
	_WORD* v76; // rax
	unsigned int v77; // edx
	unsigned int v78; // ecx
	_WORD* v79; // rax
	__int64 v80; // rax
	unsigned __int16 v81; // cx
	__m128* v82; // rax
	__m128 v83; // xmm2
	__m128 v84; // xmm1
	__m128* v85; // rax
	__int64 v86; // rsi
	__m128* v87; // rbx
	__int64 v88; // rdx
	__int64 v89; // rax
	__m128 v90; // xmm2
	__m128 v91; // xmm0
	__m128 v92; // xmm3
	__int64 v93; // rax
	__int64 v94; // rax
	__int64 v95; // rax
	__int64 v96; // rax
	__int64 v97; // rbx
	__int64 v98; // rcx
	__int64 v99; // rsi
	__int64 v100; // rcx
	__int64 v101; // rax
	__int64 v102; // rcx
	_QWORD* v103; // r13
	__int64 v104; // r15
	__int64 v105; // rdi
	__int64 v106; // r14
	__int64 v107; // r12
	__int64 v108; // rsi
	unsigned __int64 v109; // rbx
	__int64 v110; // r13
	__int64 v111; // r11
	__int64 v112; // r8
	__int64 v113; // r11
	char* v114; // rcx
	_OWORD* v115; // rax
	__int64 v116; // rdx
	int v117; // edx
	__int64 v118; // r9
	unsigned int v119; // r8d
	unsigned int v120; // eax
	int v121; // eax
	unsigned int v122; // ecx
	__int64 v123; // rax
	int* v124; // rdx
	int v125; // eax
	int v126; // eax
	__int64 v127; // rax
	int v128; // eax
	int v129; // eax
	__int64 v130; // rax
	int v131; // ecx
	__int64 v132; // rax
	int v133; // xmm6_4
	__int64 v134; // r15
	unsigned int* v135; // r13
	__int64 v136; // rax
	int v137; // xmm0_4
	int v138; // xmm0_4
	__int128 v139; // xmm0
	__m128 v140; // xmm3
	__m128 v141; // xmm1
	unsigned int v142; // r12d
	_QWORD* v143; // r13
	__int64 v144; // rdx
	char* v145; // rbx
	unsigned int v146; // r15d
	int* v147; // r11
	unsigned __int16* v148; // r10
	__int64* v149; // r8
	__int64 v150; // rsi
	__int64 v151; // rcx
	float* v152; // rsi
	__int64 v153; // rdi
	int v154; // eax
	__int64 v155; // rax
	int v156; // r14d
	int v157; // edi
	_QWORD* v158; // r15
	_WORD* v159; // rsi
	int v160; // r14d
	__int64 v161; // rax
	__int64 v162; // rcx
	int v163; // edi
	__int64 v164; // r13
	__int64 v165; // r12
	__int64 v166; // rbx
	__int16 v167; // ax
	int v168; // xmm1_4
	__int64 v169; // rcx
	__int64 v170; // rax
	float v171; // xmm6_4
	float* v172; // rcx
	__m128i v173; // xmm1
	unsigned int v174; // eax
	__m128i v175; // xmm0
	int v176; // eax
	__m128i v177; // xmm1
	unsigned int v178; // eax
	__m128i v179; // xmm0
	int v180; // eax
	__int16 v181; // ax
	unsigned int* v182; // rdx
	__int64 v183; // r8
	unsigned int v184; // r13d
	__int64 v185; // rcx
	__int64 v186; // rbx
	__m128* v187; // rbx
	__m128* v188; // rcx
	__m128 v189; // xmm2
	__m128 v190; // xmm5
	__m128 v191; // xmm4
	__m128 v192; // xmm3
	__m128 v193; // xmm2
	__int64 v194; // rsi
	__m128* v195; // rdx
	_DWORD* v196; // rcx
	__int64 v197; // rdx
	int v198; // r14d
	int v199; // edi
	_DWORD* v200; // rax
	unsigned __int16* v201; // r10
	_QWORD* v202; // r13
	__int64 v203; // rcx
	int v204; // r14d
	int v205; // edi
	unsigned int v206; // r15d
	char* v207; // rbx
	char* v208; // r11
	char* v209; // r8
	__int64 v210; // rsi
	__int64 v211; // rcx
	float* v212; // rsi
	__int64 v213; // rdi
	int v214; // eax
	_DWORD* v215; // rbx
	int v216; // r14d
	int v217; // edi
	_DWORD* v218; // rax
	float* v219; // r8
	__int64 v220; // rax
	unsigned int* v221; // rsi
	unsigned __int64 v222; // rcx
	int v223; // r8d
	int v224; // r15d
	unsigned __int64 v225; // rdx
	unsigned __int64 v226; // rax
	int v227; // r8d
	unsigned __int64 v228; // r12
	__int64 v229; // rbx
	__m128* v230; // rax
	__int64 v231; // rdx
	char* v232; // r8
	__m128* v233; // r9
	__m128 v234; // xmm0
	__m128* v235; // r9
	unsigned __int64 v236; // r10
	__int64 v237; // rdx
	__m128* v238; // rcx
	__m128* v239; // r9
	int v240; // ecx
	__int64 v241; // rdx
	__int64 v242; // rax
	__int64 v243; // rcx
	__int128 v244; // xmm0
	unsigned __int64 v245; // rcx
	unsigned int v246; // ebx
	char* v247; // r15
	char* v248; // rsi
	__int64 v249; // r8
	unsigned int v250; // ebx
	int* v251; // r15
	char* v252; // rsi
	__int64 v253; // r8
	__int64 v254; // rbx
	unsigned int v255; // ebx
	char* v256; // r15
	char* v257; // rsi
	__int64 v258; // r8
	__int64 v260; // [rsp+28h] [rbp-E0h]
	__int64 v261; // [rsp+28h] [rbp-E0h]
	unsigned int v262; // [rsp+48h] [rbp-C0h]
	unsigned int v263; // [rsp+4Ch] [rbp-BCh]
	int v264; // [rsp+50h] [rbp-B8h]
	unsigned int v265; // [rsp+54h] [rbp-B4h]
	int v266; // [rsp+58h] [rbp-B0h]
	int v267; // [rsp+5Ch] [rbp-ACh]
	unsigned int v268; // [rsp+60h] [rbp-A8h]
	int v269; // [rsp+68h] [rbp-A0h]
	int v270; // [rsp+68h] [rbp-A0h]
	__int64 v271; // [rsp+68h] [rbp-A0h]
	__int64 v272; // [rsp+68h] [rbp-A0h]
	__int64 v273; // [rsp+68h] [rbp-A0h]
	__int64 v274; // [rsp+68h] [rbp-A0h]
	unsigned int v275; // [rsp+68h] [rbp-A0h]
	unsigned int v277; // [rsp+74h] [rbp-94h]
	int v280; // [rsp+80h] [rbp-88h]
	unsigned int* v281; // [rsp+88h] [rbp-80h]
	__int64 v282; // [rsp+90h] [rbp-78h]
	__int64 v283; // [rsp+90h] [rbp-78h]
	int v284; // [rsp+98h] [rbp-70h]
	float* v285; // [rsp+A0h] [rbp-68h]
	int v286; // [rsp+A8h] [rbp-60h]
	int v287; // [rsp+ACh] [rbp-5Ch]
	int v288; // [rsp+B0h] [rbp-58h]
	int v289; // [rsp+B4h] [rbp-54h]
	__m128 v290; // [rsp+B8h] [rbp-50h] BYREF
	int v291; // [rsp+CCh] [rbp-3Ch]
	_QWORD* v292; // [rsp+D8h] [rbp-30h]
	__int64 v293; // [rsp+E0h] [rbp-28h]
	__int64 v294; // [rsp+E8h] [rbp-20h]
	__int64 v295; // [rsp+F0h] [rbp-18h]
	unsigned int v296; // [rsp+F8h] [rbp-10h]
	int v297; // [rsp+FCh] [rbp-Ch]
	unsigned int v298; // [rsp+100h] [rbp-8h]
	float* v299; // [rsp+108h] [rbp+0h]
	__int64 v300; // [rsp+110h] [rbp+8h]
	unsigned __int64 v301; // [rsp+118h] [rbp+10h]
	float* v302; // [rsp+120h] [rbp+18h]
	__int64 v303; // [rsp+128h] [rbp+20h]
	_DWORD* v304; // [rsp+130h] [rbp+28h]
	float* v305; // [rsp+138h] [rbp+30h]
	_DWORD* v306; // [rsp+140h] [rbp+38h]
	unsigned __int64 v307; // [rsp+148h] [rbp+40h]
	__int64 v308; // [rsp+150h] [rbp+48h]
	__int64 v309; // [rsp+168h] [rbp+60h]
	__m128 v310; // [rsp+178h] [rbp+70h] BYREF
	__m128 v311; // [rsp+188h] [rbp+80h]
	__m128 v312; // [rsp+198h] [rbp+90h]
	__m128 v313; // [rsp+1A8h] [rbp+A0h]
	int v314; // [rsp+1B8h] [rbp+B0h] BYREF
	int v315; // [rsp+1BCh] [rbp+B4h]
	unsigned int v316; // [rsp+1C0h] [rbp+B8h]
	int v317; // [rsp+1C4h] [rbp+BCh]
	int v318; // [rsp+1C8h] [rbp+C0h]
	int v319; // [rsp+1CCh] [rbp+C4h]
	int v320; // [rsp+1D0h] [rbp+C8h]
	int v321; // [rsp+1D4h] [rbp+CCh]
	int v322; // [rsp+1D8h] [rbp+D0h]
	__int64 v323; // [rsp+1DCh] [rbp+D4h]
	unsigned int v324; // [rsp+1E4h] [rbp+DCh]
	unsigned int v325; // [rsp+1E8h] [rbp+E0h]
	__int64 v326; // [rsp+1F0h] [rbp+E8h]
	unsigned int v327; // [rsp+1F8h] [rbp+F0h]
	char v328[16]; // [rsp+200h] [rbp+F8h] BYREF
	char v329; // [rsp+210h] [rbp+108h] BYREF
	__int64 v330[5]; // [rsp+220h] [rbp+118h] BYREF
	__int64 v331; // [rsp+248h] [rbp+140h]
	__int64 v332; // [rsp+250h] [rbp+148h]
	__int64 v333; // [rsp+258h] [rbp+150h]
	__int64 v334; // [rsp+260h] [rbp+158h]
	char v335[80]; // [rsp+280h] [rbp+178h] BYREF
	char v336; // [rsp+2D0h] [rbp+1C8h] BYREF
	__int64 v337; // [rsp+2E0h] [rbp+1D8h]
	__int64 v338; // [rsp+2E8h] [rbp+1E0h]
	char v339; // [rsp+300h] [rbp+1F8h] BYREF
	char v340; // [rsp+308h] [rbp+200h] BYREF
	int v341[5]; // [rsp+310h] [rbp+208h] BYREF
	int v342; // [rsp+324h] [rbp+21Ch]
	int v343[14]; // [rsp+328h] [rbp+220h] BYREF
	__int64 v344; // [rsp+360h] [rbp+258h]
	__int64 v345; // [rsp+368h] [rbp+260h]
	__int64 v346; // [rsp+380h] [rbp+278h]
	__int64 v347; // [rsp+388h] [rbp+280h]
	__int64 v348; // [rsp+390h] [rbp+288h]
	__int64 v349; // [rsp+398h] [rbp+290h]
	__int64 v350; // [rsp+3A0h] [rbp+298h]
	__m128* v351[10]; // [rsp+3C8h] [rbp+2C0h] BYREF

	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 16i64);
	v7 = *(_QWORD*)a4;
	v8 = *(float**)(*(_QWORD*)a4 + 48i64);
	v9 = *(float**)(*(_QWORD*)a4 + 72i64);
	v10 = *((_QWORD*)v8 + 7);
	v11 = *((_QWORD*)v8 + 8);
	v309 = a4;
	v12 = *(_QWORD*)(v11 + 504);
	v307 = v10;
	v13 = *(unsigned int**)(v7 + 64);
	v294 = v7;
	v14 = *((unsigned __int16*)v13 + 11);
	v281 = v13;
	v298 = *(_DWORD*)(v7 + 80);
	v306 = *(_DWORD**)(v7 + 56);
	v15 = 48 * v14 + v12 + 8;
	v16 = *((_QWORD*)v8 + 138) + 96 * v14;
	v17 = *(_QWORD*)qword_140C65688;
	v292 = v6;
	v285 = v8;
	v299 = 0i64;
	v301 = 0i64;
	v308 = v11;
	v282 = 0i64;
	v303 = v15;
	v293 = 0i64;
	v295 = v16;
	v300 = 0i64;
	v269 = 0;
	v304 = 0i64;
	v302 = v9;
	v305 = 0i64;
	v297 = *(_DWORD*)(*(_QWORD*)(*(__int64(__fastcall**)(__int64))(v17 + 224))(qword_140C65688)
		+ 4i64 * *(unsigned __int8*)(v16 + 88));
	if (v9 && *(_WORD*)(*(_QWORD*)v9 + 6i64) == 3)
	{
		v18 = *(unsigned __int16*)(*(_QWORD*)v9 + 14i64);
		v15 = 48 * v18 + *(_QWORD*)(v11 + 504) + 8i64;
		v295 = *((_QWORD*)v8 + 138) + 96 * v18;
		v303 = v15;
	}
	if (a6)
	{
		v19 = *(float**)(a6 + 48);
		v20 = *(_QWORD*)(a6 + 64);
		v21 = *((_QWORD*)v19 + 7);
		v22 = *(unsigned __int16*)(v20 + 22);
		v299 = v19;
		v301 = v21;
		v282 = v20;
		if (*(_DWORD*)v15 == *(_DWORD*)(*(_QWORD*)(*((_QWORD*)v19 + 8) + 504i64) + 8i64 + 48 * v22))
		{
			v23 = *(_DWORD*)(a6 + 80);
			v293 = *(_QWORD*)(*((_QWORD*)v19 + 8) + 504i64) + 8i64 + 48 * v22;
			v269 = v23;
			v24 = *((_QWORD*)v19 + 138) + 96 * v22;
			v304 = *(_DWORD**)(a6 + 56);
			v305 = *(float**)(a6 + 72);
			v300 = v24;
		}
	}
	sub_1407E4830(&v314, 0i64, 0x208ui64);
	v25 = v314 | 0x40;
	v26 = v315 | 0x40;
	v325 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 272i64))(qword_140C65688);
	if (!a6)
		sub_140312840(*(_QWORD*)(a1 + 16), a2);
	v27 = *(unsigned int*)(v15 + 4);
	if ((v27 & 4) != 0 || (v28 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 1392i64), (v28 & 0xC0) != 0))
	{
		v29 = v25 | 4;
		v30 = v26 | 4;
		v316 = 0;
	}
	else
	{
		v29 = v25 | 4;
		v30 = v26 | 4;
		if ((v28 & 0x100) != 0)
			v316 = 2;
		else
			v316 = 1;
	}
	v31 = 4;
	v265 = 1;
	v32 = *(unsigned int*)(*(_QWORD*)(a1 + 16) + 1392i64);
	v263 = 0;
	v262 = 0;
	v267 = 1;
	v264 = 0;
	v266 = 0;
	v33 = v32 & 4;
	if ((v32 & 4) != 0)
	{
		v265 = 1;
		v263 = 1;
		v267 = 1;
		v264 = 1;
		v262 = 3;
		v266 = 3;
	}
	else if ((v32 & 0x200) != 0 && a2 == 1)
	{
		v265 = 4;
		v263 = 5;
		v262 = 0;
		v267 = 4;
		v264 = 5;
		v266 = 0;
	}
	v34 = *(_DWORD*)(v15 + 12);
	v289 = v34;
	v268 = 15;
	if (v293)
		v35 = *(_DWORD*)(v293 + 12);
	else
		v35 = 15;
	v284 = v35;
	if (a2 == 5)
	{
		if (v302)
		{
			if (v34)
			{
				if (v34 == 1 || (v6 = v292, *(_WORD*)(*(_QWORD*)v302 + 6i64) == 2))
				{
					v34 = 4;
					v289 = 4;
				}
			}
			else
			{
				v34 = 3;
				v289 = 3;
			}
		}
		if (v305)
		{
			if (v35)
			{
				if (v35 == 1 || *(_WORD*)(*(_QWORD*)v305 + 6i64) == 2)
					v284 = 4;
			}
			else
			{
				v284 = 3;
			}
		}
		if (v302 && *(_WORD*)(*(_QWORD*)v302 + 6i64) == 2)
		{
			switch (*(_WORD*)(*(_QWORD*)v302 + 22i64))
			{
			case 3:
				goto LABEL_44;
			case 4:
				v36 = 1;
				v37 = 4;
				v264 = 1;
				goto LABEL_46;
			case 5:
				goto LABEL_48;
			case 6:
				v37 = 8;
				v264 = 1;
				v36 = 2;
				goto LABEL_46;
			case 8:
				goto LABEL_50;
			case 9:
				goto LABEL_51;
			case 0xA:
				v37 = 1;
				v36 = 3;
				goto LABEL_45;
			default:
				v37 = 4;
				v31 = 0;
				v36 = 5;
				v38 = 7;
				v264 = 1;
				v262 = 0;
				v266 = 0;
				v265 = 4;
				v263 = 5;
				v267 = 7;
				break;
			}
		}
		else
		{
			switch (v34)
			{
			case 3:
			LABEL_44:
				v37 = 1;
				v36 = 1;
			LABEL_45:
				v264 = 1;
				goto LABEL_46;
			case 4:
				v37 = 4;
				v36 = 1;
				v31 = 0;
				v38 = 7;
				v262 = 0;
				v266 = 0;
				v265 = 4;
				v263 = 1;
				v264 = 1;
				v267 = 7;
				break;
			case 5:
			LABEL_48:
				v36 = 0;
				v37 = 8;
				v38 = 7;
				v31 = 0;
				v264 = 1;
				v265 = 8;
				v263 = 0;
				v267 = 7;
				v266 = 0;
				v262 = 0;
				break;
			case 6:
				v31 = 0;
				v37 = 8;
				v36 = 2;
				v38 = 7;
				v264 = 1;
				v265 = 8;
				v263 = 2;
				v262 = 0;
				v266 = 0;
				v267 = 7;
				break;
			case 8:
			LABEL_50:
				v31 = 3;
				goto LABEL_51;
			case 9:
			LABEL_51:
				v37 = 1;
				v38 = 7;
				v262 = v31;
				v36 = 1;
				v265 = 1;
				v263 = 1;
				v267 = 7;
				v264 = 1;
				v266 = 0;
				break;
			case 10:
				v37 = 1;
				v31 = 0;
				v36 = 3;
				v38 = 7;
				v265 = 1;
				v263 = 3;
				v262 = 0;
				v264 = 1;
				v266 = 0;
				v267 = 7;
				break;
			default:
				v37 = 4;
				v36 = 5;
				v264 = 1;
			LABEL_46:
				v31 = 0;
				v38 = 7;
				v265 = v37;
				v267 = 7;
				v262 = 0;
				v266 = 0;
				v263 = v36;
				break;
			}
		}
	}
	else
	{
		v37 = v265;
		v36 = v263;
		v31 = v262;
		v38 = v267;
	}
	v317 = v37;
	v39 = v29 | 8;
	v321 = v264;
	v40 = v30 | 8;
	v318 = v36;
	v319 = v31;
	v320 = v38;
	v322 = v266;
	if ((v32 & 8) == 0)
	{
		if (a2 == 5)
		{
			v44 = v39 | 1;
			v45 = v40 | 1;
			v46 = 143;
			if ((v32 & 0x40) == 0)
				v46 = 7;
			LODWORD(v323) = v46;
			v268 = v46;
			if ((v32 & 0x20) != 0 || (v47 = *(_QWORD*)(v294 + 72)) != 0 && *(_WORD*)(*(_QWORD*)v47 + 6i64) == 2)
			{
				v41 = v44 | 2;
				v42 = v45 | 2;
				v43 = 0;
			}
			else
			{
				v41 = v44 | 2;
				v42 = v45 | 2;
				v43 = (v27 & 2) == 0;
			}
			goto LABEL_72;
		}
		if (a2 == 4)
		{
			LODWORD(v323) = 15;
		}
		else
		{
			if ((v32 & 4) != 0)
			{
				v48 = 15;
				v268 = 15;
			}
			else
			{
				if ((v32 & 0x20) != 0)
				{
					v268 = 4087;
					LODWORD(v323) = 4087;
					goto LABEL_70;
				}
				v48 = 4095;
				if ((v32 & 0x1000) != 0)
					v48 = 12287;
				v268 = v48;
				if (!a2 && ((_BYTE)v8[456] & 1) != 0)
				{
					v48 |= 0x2000u;
					v268 = v48;
				}
				if ((v27 & 0x10000) != 0)
				{
					v49 = v39 | 0x41;
					v50 = v40 | 0x41;
					v268 = 0;
					LODWORD(v323) = 0;
					v325 = 0;
					goto LABEL_71;
				}
			}
			LODWORD(v323) = v48;
		}
	LABEL_70:
		v49 = v39 | 1;
		v50 = v40 | 1;
	LABEL_71:
		v41 = v49 | 2;
		v43 = 1;
		v42 = v50 | 2;
	LABEL_72:
		HIDWORD(v323) = v43;
		goto LABEL_73;
	}
	v41 = v39 | 3;
	v42 = v40 | 3;
	v43 = 0;
	v268 = 0;
	v323 = 0i64;
LABEL_73:
	v277 = v43;
	if ((v32 & 0x20) != 0 || (v27 & 1) != 0)
		v324 = 7;
	else
		v324 = 3;
	v51 = v41 | 0x10;
	v52 = v42 | 0x10;
	v315 = v52;
	v287 = v52;
	v314 = v51;
	v286 = v51;
	if ((v32 & 4) != 0)
	{
		if (!a6)
		{
			v53 = 8i64;
		LABEL_94:
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 392i64))(qword_140C65670, v53);
		}
	}
	else if (!v282 || ((*((_BYTE*)v281 + 56) ^ *(_BYTE*)(v282 + 56)) & 1) != 0)
	{
		if ((v281[14] & 1) != 0)
			v53 = 4294967288i64;
		else
			v53 = 0i64;
		goto LABEL_94;
	}
	if (!v299
		|| (v54 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v299 + 280i64))(v299),
			v55 = v54 == (*(unsigned int(__fastcall**)(float*))(*(_QWORD*)v285 + 280i64))(v285),
			v8 = v285,
			!v55)
		|| (v32 = v285[421] > 0.0, v299[421] > 0.0 != (_DWORD)v32))
	{
		LOBYTE(v33) = 0;
		if (!a2)
			LOBYTE(v33) = (*(unsigned int(__fastcall**)(float*, unsigned __int64, __int64, unsigned __int64))(*(_QWORD*)v8 + 280i64))(
				v8,
				v32,
				v27,
				v33) != 0
			? 0x40
			: 0;
		if (!v299 || v299[421] > 0.0 != v8[421] > 0.0)
			LOBYTE(v33) = byte_140B62CB1[(v8[421] > 0.0) - (unsigned __int64)(v8[421] < 0.0)] | v33;
		LOBYTE(v27) = 120;
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65688 + 264i64))(
			qword_140C65688,
			(unsigned __int8)v33,
			v27);
	}
	if (!*(_DWORD*)v15)
	{
		v56 = v293;
		if (!v293)
		{
			v57 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD))(*(_QWORD*)qword_140C65670
				+ 256i64))(
					qword_140C65670,
					64i64,
					0i64,
					2i64,
					0);
			if (v57)
			{
				v58 = *(__m128*)(*(_QWORD*)(a1 + 16) + 1456i64);
				v59 = _mm_unpackhi_ps(*(__m128*)(*(_QWORD*)(a1 + 16) + 1424i64), *(__m128*)(*(_QWORD*)(a1 + 16) + 1440i64));
				v60 = _mm_unpackhi_ps(v58, *(__m128*)(*(_QWORD*)(a1 + 16) + 1472i64));
				v61 = _mm_unpacklo_ps(*(__m128*)(*(_QWORD*)(a1 + 16) + 1424i64), *(__m128*)(*(_QWORD*)(a1 + 16) + 1440i64));
				v62 = _mm_unpacklo_ps(v58, *(__m128*)(*(_QWORD*)(a1 + 16) + 1472i64));
				*v57 = _mm_shuffle_ps(v61, v62, 68);
				v57[1] = _mm_shuffle_ps(v61, v62, 238);
				v57[2] = _mm_shuffle_ps(v59, v60, 68);
				v57[3] = _mm_shuffle_ps(v59, v60, 238);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
			}
		}
		if (v56)
		{
			if (v15 == v56)
				goto LABEL_120;
			v63 = *(_DWORD*)(v15 + 24);
			v64 = *(unsigned int*)(v56 + 24);
			v65 = v63;
			if ((unsigned int)v64 < v63)
				v65 = *(_DWORD*)(v56 + 24);
			v33 = 0i64;
			if (v65)
			{
				v66 = (_DWORD*)(*(_QWORD*)(v15 + 32) + 288i64);
				v67 = (_DWORD*)(*(_QWORD*)(v56 + 32) + 288i64);
				while (*v66 == *v67)
				{
					v33 = (unsigned int)(v33 + 1);
					v67 += 74;
					v66 += 74;
					if ((unsigned int)v33 >= v65)
						goto LABEL_116;
				}
				goto LABEL_122;
			}
		LABEL_116:
			if ((unsigned int)v64 >= v63)
			{
			LABEL_120:
				if (v8 == v299)
				{
					if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)v281 + 6, v282 + 48, 8ui64))
						goto LABEL_141;
				}
				else
				{
					v74 = *(_DWORD*)(v15 + 24);
					v75 = 0;
					if (v74)
					{
						v76 = v281 + 12;
						while (*v76 == 0xFFFF)
						{
							++v75;
							++v76;
							if (v75 >= v74)
								goto LABEL_130;
						}
					}
					else
					{
					LABEL_130:
						v77 = *(_DWORD*)(v56 + 24);
						v78 = 0;
						if (!v77)
							goto LABEL_141;
						v79 = (_WORD*)(v282 + 48);
						while (*v79 == 0xFFFF)
						{
							++v78;
							++v79;
							if (v78 >= v77)
								goto LABEL_141;
						}
					}
				}
			}
			else
			{
				v68 = (_DWORD*)(*(_QWORD*)(v15 + 32) + 296 * v64 + 288);
				while (*v68 == 3)
				{
					LODWORD(v64) = v64 + 1;
					v68 += 74;
					if ((unsigned int)v64 >= v63)
						goto LABEL_120;
				}
			}
		}
	LABEL_122:
		v69 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
			qword_140C65670,
			128i64,
			1i64,
			6i64,
			0);
		if (v69)
		{
			v70 = 0;
			v71 = 0i64;
			v72 = (unsigned __int16*)(v281 + 12);
			do
			{
				if (v70 >= *(_DWORD*)(v15 + 24))
					v73 = 3;
				else
					v73 = *(_DWORD*)(*(_QWORD*)(v15 + 32) + v71 + 288);
				v80 = v73;
				v81 = *v72;
				v82 = (__m128*) & xmmword_140C79E10[4 * v80];
				if (*v72 == 0xFFFF)
				{
					v83 = _mm_unpacklo_ps(*v82, v82[1]);
					v84 = _mm_unpacklo_ps(v82[2], v82[3]);
				}
				else
				{
					v290.m128_u64[0] = (unsigned __int64)v82;
					v351[0] = v82;
					v290.m128_u64[1] = *((_QWORD*)v8 + 106) + 272i64 * v81 + 208;
					v351[1] = (__m128*)v290.m128_u64[1];
					sub_1401AFB10(v351, &v310);
					v83 = _mm_unpacklo_ps(v310, v311);
					v84 = _mm_unpacklo_ps(v312, v313);
				}
				++v70;
				v69 += 32i64;
				++v72;
				v71 += 296i64;
				*(__m128*)(v69 - 32) = _mm_shuffle_ps(v83, v84, 68);
				*(__m128*)(v69 - 16) = _mm_shuffle_ps(v83, v84, 238);
			} while (v70 < 4);
			(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65670 + 264i64))(
				qword_140C65670,
				xmmword_140C79E10);
			v6 = v292;
			v56 = v293;
		}
	LABEL_141:
		v296 = 2;
		v288 = 14;
		if (!v56 || *(_DWORD*)(v294 + 84) != *(_DWORD*)(a6 + 84))
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
				qword_140C65670,
				v6[255],
				*(unsigned int*)(v294 + 84));
		if (v56)
		{
			v86 = a1;
		}
		else
		{
			v85 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
				+ 272i64))(
					qword_140C65670,
					208i64,
					0i64,
					0i64,
					0);
			v86 = a1;
			v87 = v85;
			if (v85)
			{
				sub_140262D50((float*)(*(_QWORD*)(a1 + 16) + 560i64), v85);
				sub_140262750(*(_QWORD*)(a1 + 16) + 560i64, v88 + 112, (_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64));
				v290 = 0i64;
				v87[10].m128_u64[0] = 0i64;
				v290 = _mm_sub_ps(*(__m128*)(*(_QWORD*)(a1 + 16) + 1344i64), (__m128)xmmword_140B7B240);
				v87[10].m128_u64[1] = v290.m128_u64[0];
				v87[11].m128_u64[0] = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1360i64);
				v290 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a1 + 16) + 1360i64), (__m128)xmmword_140B7AC50);
				v87[11].m128_u64[1] = v290.m128_u64[0];
				v89 = *(_QWORD*)(a1 + 16);
				v90 = (__m128) * (unsigned int*)(v89 + 432);
				v91 = (__m128) * (unsigned int*)(v89 + 436);
				v92 = v90;
				v90.m128_f32[0] = v90.m128_f32[0] - v91.m128_f32[0];
				v92.m128_f32[0] = v92.m128_f32[0] * v91.m128_f32[0];
				v87[12] = _mm_unpacklo_ps(_mm_unpacklo_ps(v92, v91), _mm_unpacklo_ps(v90, (__m128)0i64));
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			}
		}
		if ((*(_DWORD*)(*(_QWORD*)(v86 + 16) + 1392i64) & 0x224) == 0)
		{
			if (a2 == 1 || a2 == 4)
			{
				v51 |= 0x20000u;
				v52 |= 0x20000u;
				v93 = *(_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688);
				v343[0] = 0;
				v348 = 0i64;
				v286 = v51;
				v287 = v52;
				v332 = v93;
			}
			if (a2 == 5)
			{
				v94 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 200i64))(qword_140C65688)
					+ 32);
				v341[4] = 0;
				v330[4] = v94;
				v95 = *(_QWORD*)qword_140C65688;
				v346 = 0i64;
				v51 |= 0x28000u;
				v52 |= 0x28000u;
				v96 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(v95 + 192))(qword_140C65688) + 56);
				v343[0] = 0;
				v348 = 0i64;
				v332 = v96;
			LABEL_155:
				v97 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 216i64))(qword_140C65688);
				v51 |= 0x40000u;
				v52 |= 0x40000u;
				v98 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688)
					+ 72);
				v343[1] = 0;
				v349 = v97;
				v286 = v51;
				v287 = v52;
				v333 = v98;
				goto LABEL_156;
			}
			if (a2 == 4)
				goto LABEL_155;
		}
	LABEL_156:
		v99 = v295;
		v100 = v300;
		if (v295 != v300 || v298 != v269)
		{
			v101 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
				qword_140C65670,
				480i64,
				1i64,
				13i64,
				0);
			v103 = (_QWORD*)v101;
			v290.m128_u64[0] = v101;
			if (v101)
			{
				LODWORD(v104) = *(_DWORD*)(v15 + 24);
				if ((unsigned int)v104 > 4)
					LODWORD(v104) = 4;
				v270 = v104;
				if ((_DWORD)v104)
				{
					v105 = v303;
					v106 = v295;
					v107 = 0i64;
					v108 = v101 + 400;
					v109 = v101 + 128;
					v110 = 0i64;
					v104 = (unsigned int)v104;
					do
					{
						v111 = *(_QWORD*)(v106 + 8);
						v112 = *(_QWORD*)(v105 + 32);
						v310.m128_u64[0] = v109 - 128;
						v310.m128_u64[1] = v109 - 64;
						v311.m128_u64[1] = v109 + 64;
						v311.m128_u64[0] = v109;
						v312.m128_u64[0] = v109 + 128;
						sub_1403282E0(v102, (__m128**) & v310, v110 + v112, (unsigned int*)(v107 + v111));
						v108 += 4i64;
						v109 += 16i64;
						v110 += 296i64;
						v107 += 224i64;
						*(_OWORD*)(v109 + 176) = *(_OWORD*)(v113 + 192);
						*(float*)(v108 - 20) = fmaxf(*(float*)(v113 + 100), 0.0);
						*(float*)(v108 - 4) = *(float*)(v113 + 120) + 0.001;
						*(_DWORD*)(v108 + 12) = *(_DWORD*)(v113 + 140);
						*(_DWORD*)(v108 + 28) = *(_DWORD*)(v113 + 160);
						--v104;
					} while (v104);
					v52 = v287;
					v51 = v286;
					LODWORD(v104) = v270;
					v103 = (_QWORD*)v290.m128_u64[0];
					v15 = v303;
					v99 = v295;
				}
				if ((unsigned int)v104 < 4)
				{
					v114 = (char*)v103 + 4 * (unsigned int)v104 + 400;
					v115 = &v103[2 * (unsigned int)v104 + 16];
					v116 = (unsigned int)(4 - v104);
					do
					{
						*(v115 - 8) = 0i64;
						*(v115 - 4) = 0i64;
						*v115 = 0i64;
						v114 += 4;
						v115[4] = 0i64;
						v115[8] = 0i64;
						v115[12] = 0i64;
						*((_DWORD*)v114 - 5) = 0;
						*((_DWORD*)v114 - 1) = 0;
						*((_DWORD*)v114 + 3) = 0;
						*((_DWORD*)v114 + 7) = 0;
						++v115;
						--v116;
					} while (v116);
				}
				v117 = *(unsigned __int8*)(v99 + 89);
				v118 = v298;
				v119 = *((_DWORD*)v292 + 564);
				if (v117 < v119)
				{
					v120 = *((_DWORD*)v292 + 565);
					if (v298 < v120)
						v117 = *(_DWORD*)(v292[283] + 4i64 * (v298 + v120 * v117));
				}
				v121 = *(unsigned __int8*)(v99 + 88);
				if (v121 < v119)
				{
					v122 = *((_DWORD*)v292 + 565);
					if (v298 < v122)
						v121 = *(_DWORD*)(v292[283] + 4i64 * (v298 + v121 * v122));
				}
				*(float*)&v271 = (float)v121;
				v123 = *(_QWORD*)(v294 + 48);
				*((float*)&v271 + 1) = (float)v117;
				if (*(float*)(v123 + 860) >= 0.0)
					LODWORD(v271) = *(_DWORD*)(v123 + 860);
				if (*(float*)(v123 + 864) >= 0.0)
					HIDWORD(v271) = *(_DWORD*)(v123 + 864);
				v124 = (int*)qword_140C63750;
				v103[56] = v271;
				if ((*(_DWORD*)(v15 + 4) & 0x2000) == 0)
					goto LABEL_185;
				v125 = dword_140C422A0;
				if (*v124 < dword_140C422A0)
					v125 = *v124;
				if (byte_140C422B0[v125])
				{
					v126 = dword_140C422E0;
					HIDWORD(v272) = 0;
					if (*v124 < dword_140C422E0)
						v126 = *v124;
					LODWORD(v272) = dword_140C422F0[v126];
					v127 = v272;
				}
				else
				{
				LABEL_185:
					v127 = qword_140C67498;
				}
				v103[58] = v127;
				if ((*(_DWORD*)(v15 + 4) & 0x4000) == 0)
					goto LABEL_195;
				v128 = dword_140C42340;
				if (*v124 < dword_140C42340)
					v128 = *v124;
				if (byte_140C42350[v128])
				{
					v129 = dword_140C42380;
					HIDWORD(v273) = 0;
					if (*v124 < dword_140C42380)
						v129 = *v124;
					LODWORD(v273) = dword_140C42390[v129];
					v130 = v273;
					HIDWORD(v274) = 0;
					v103[59] = v130;
					v131 = dword_140C423E0;
					if (*v124 < dword_140C423E0)
						v131 = *v124;
					LODWORD(v274) = dword_140C423F0[v131];
					v132 = v274;
				}
				else
				{
				LABEL_195:
					v103[59] = qword_140C67498;
					v132 = qword_140C67498;
				}
				v103[57] = v132;
				(*(void(__fastcall**)(__int64, int*, unsigned __int64, __int64))(*(_QWORD*)qword_140C65670 + 280i64))(
					qword_140C65670,
					v124,
					0x140000000ui64,
					v118);
			}
			v100 = v300;
		}
		v133 = 998277249;
		v134 = (__int64)v306;
		if (v289 == v284 && v306 == v304)
		{
			v135 = v281;
			if (v99 == v100 && ((*((_BYTE*)v281 + 56) ^ *(_BYTE*)(v282 + 56)) & 1) == 0)
				goto LABEL_236;
		}
		else
		{
			v135 = v281;
		}
		v136 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 272i64))(
			qword_140C65670,
			176i64,
			2i64);
		if (v136)
		{
			if (v289 >= 3)
			{
				if (v289 <= 4)
				{
					*(_DWORD*)v136 = dword_140C79700;
					*(_DWORD*)(v136 + 4) = dword_140C79704;
					*(_QWORD*)(v136 + 8) = (unsigned int)dword_140C79708;
					goto LABEL_213;
				}
				if (v289 == 5)
				{
					*(_QWORD*)v136 = qword_140C79710;
					*(_QWORD*)(v136 + 8) = (unsigned int)dword_140C79718;
					goto LABEL_213;
				}
				if (v289 == 6)
				{
					*(_DWORD*)v136 = 1056964608;
					*(_DWORD*)(v136 + 4) = 1056964608;
					*(_DWORD*)(v136 + 8) = 1056964608;
					*(_DWORD*)(v136 + 12) = 0;
				LABEL_213:
					if (v289)
					{
						if (v289 == 1)
						{
							*(_DWORD*)(v136 + 16) = 1065353216;
							*(_DWORD*)(v136 + 20) = 1056964608;
						}
						else
						{
							*(_DWORD*)(v136 + 16) = 0;
							*(_DWORD*)(v136 + 20) = 998277249;
						}
					}
					else
					{
						if (*(float*)(v134 + 32) < 0.99607843
							|| (v135[14] & 1) != 0 && (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 1392i64) & 4) == 0)
						{
							v137 = 0;
						}
						else
						{
							v137 = 1065353216;
						}
						*(_DWORD*)(v136 + 16) = v137;
						if (*(float*)(v134 + 32) >= 0.99607843)
							v138 = 0;
						else
							v138 = 998277249;
						*(_DWORD*)(v136 + 20) = v138;
					}
					*(_DWORD*)(v136 + 24) = *(_DWORD*)(v134 + 36);
					*(_DWORD*)(v136 + 28) = *(_DWORD*)(v134 + 40);
					*(float*)(v136 + 32) = (float)(((unsigned int)~*(_DWORD*)(v15 + 4) >> 15) & 1);
					*(_DWORD*)(v136 + 36) = 0;
					*(_DWORD*)(v136 + 40) = 0;
					*(_DWORD*)(v136 + 44) = 0;
					if ((unsigned int)(v289 - 3) > 3)
					{
						*(_OWORD*)(v136 + 48) = *(_OWORD*)(v134 + 16);
						*(_OWORD*)(v136 + 64) = *(_OWORD*)(v99 + 48);
						v139 = *(_OWORD*)(v99 + 64);
					}
					else
					{
						v139 = 0i64;
						*(_OWORD*)(v136 + 48) = 0i64;
						*(_OWORD*)(v136 + 64) = 0i64;
					}
					*(_OWORD*)(v136 + 80) = v139;
					if ((unsigned int)(v289 - 5) > 1)
					{
						*(__m128*)(v136 + 96) = _mm_mul_ps(*(__m128*)(v99 + 16), *(__m128*)v134);
						*(__m128*)(v136 + 112) = _mm_mul_ps(*(__m128*)(v99 + 32), *(__m128*)v134);
					}
					else
					{
						*(_OWORD*)(v136 + 96) = xmmword_140B7B240;
						*(_OWORD*)(v136 + 112) = xmmword_140B7B240;
					}
					if (v297 == 1)
						*(__m128*)(v136 + 128) = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)v135[24], (__m128)v135[26]),
							_mm_unpacklo_ps((__m128)v135[25], (__m128)0i64));
					else
						*(_OWORD*)(v136 + 128) = 0i64;
					v140 = (__m128)0x3F800000u;
					v140.m128_f32[0] = 1.0 / (float)(*(float*)(v134 + 76) + 0.0000099999997);
					*(__m128*)(v136 + 144) = _mm_mul_ps(
						*(__m128*)(v134 + 64),
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(v140, v140),
							_mm_unpacklo_ps(v140, (__m128)0x3F800000u)));
					v141 = (__m128) * (unsigned int*)(v134 + 80);
					v141.m128_f32[0] = v141.m128_f32[0] + 0.0000099999997;
					*(__m128*)(v136 + 160) = _mm_unpacklo_ps(_mm_unpacklo_ps(v141, (__m128)0i64), (__m128)0i64);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
					goto LABEL_236;
				}
			}
			*(_DWORD*)v136 = dword_140C79700;
			*(_DWORD*)(v136 + 4) = dword_140C79704;
			*(_DWORD*)(v136 + 8) = dword_140C79708;
			*(_DWORD*)(v136 + 12) = 1065353216;
			goto LABEL_213;
		}
	LABEL_236:
		v142 = *(_DWORD*)(v15 + 24);
		v143 = v292;
		v144 = 0i64;
		if (v142)
		{
			v145 = &v339;
			v33 = (unsigned __int64)v328;
			v146 = *(_DWORD*)(v308 + 448);
			v147 = v341;
			v148 = *(unsigned __int16**)(v303 + 32);
			v149 = v330;
			do
			{
				v150 = *v148;
				v314 = (128 << v144) | v51;
				v315 = (128 << v144) | v52;
				if ((unsigned int)v150 >= v146)
				{
					v152 = v285;
					*(_QWORD*)v33 = v143[268];
					*(_DWORD*)v145 = 0;
					*(_QWORD*)(v33 + 320) = 0i64;
				}
				else
				{
					v151 = 3 * v150;
					v152 = v285;
					*(_QWORD*)(v33 + 128) = *(_QWORD*)(*((_QWORD*)v285 + 132) + 8 * v151 + 16);
					*(_DWORD*)v145 = 0;
				}
				v153 = v148[1];
				v154 = 128 << (v144 + 4);
				v314 |= v154;
				v315 |= v154;
				if ((unsigned int)v153 >= v146)
				{
					*v149 = v143[269];
					*v147 = 0;
					v149[40] = 0i64;
				}
				else
				{
					v149[16] = *(_QWORD*)(*((_QWORD*)v152 + 132) + 24 * v153 + 16);
					*v147 = 0;
				}
				v52 = v315;
				v51 = v314;
				v144 = (unsigned int)(v144 + 1);
				++v147;
				++v149;
				v148 += 148;
				v145 += 4;
				v33 += 8i64;
			} while ((unsigned int)v144 < v142);
			v277 = HIDWORD(v323);
			v268 = v323;
			v266 = v322;
			v264 = v321;
			v267 = v320;
			v262 = v319;
			v263 = v318;
			v265 = v317;
		}
		if (v297 == 1)
			v155 = *(_QWORD*)((*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 192i64))(
				qword_140C65688,
				v144)
				+ 80);
		else
			v155 = v143[275];
		v32 = (unsigned __int64)v302;
		v156 = v51 | 0x10000;
		v157 = v52 | 0x10000;
		v347 = 0i64;
		v342 = 0;
		v331 = v155;
		if (v302)
		{
			v158 = (_QWORD*)*((_QWORD*)v302 + 1);
			v159 = *(_WORD**)v302;
			v160 = v156 | 0x80000;
			v161 = v158[8];
			v162 = *(unsigned __int16*)(*(_QWORD*)v302 + 4i64);
			v163 = v157 | 0x80000;
			v343[2] = 0;
			if ((unsigned int)v162 >= *(_DWORD*)(v161 + 448))
			{
				v334 = 0i64;
				v350 = 0i64;
			}
			else
			{
				v337 = *(_QWORD*)(v158[132] + 24 * v162 + 16);
			}
			v164 = v158[132];
			v156 = v160 | 0x100000;
			v165 = 3i64 * (unsigned __int16)v159[5];
			v157 = v163 | 0x100000;
			v343[3] = 0;
			v338 = *(_QWORD*)(v164 + 8 * v165 + 16);
			if (v302 != v305)
			{
				v166 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
					+ 272i64))(
						qword_140C65670,
						64i64,
						3i64,
						54i64,
						0);
				if (v166)
				{
					v167 = v159[9];
					if ((v167 & 2) != 0)
						v168 = 1065353216;
					else
						v168 = 0;
					if ((v167 & 1) == 0)
						v133 = 0;
					*(float*)v166 = v302[8] * 2.0;
					*(_DWORD*)(v166 + 4) = v133;
					*(_DWORD*)(v166 + 8) = v168;
					v169 = *(_QWORD*)(v164 + 8 * v165 + 16);
					if (v169 && (v170 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v169 + 56i64))(v169)) != 0)
					{
						v171 = (float)*((unsigned __int16*)v302 + 26) + 0.5;
						*(float*)(v166 + 12) = v171
							/ (float)*(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v170 + 24i64))(v170)
								+ 8);
					}
					else
					{
						*(_DWORD*)(v166 + 12) = 0;
					}
					v172 = v302;
					v173 = _mm_cvtsi32_si128(*((char*)v302 + 93));
					v174 = *((char*)v302 + 94);
					v290.m128_f32[0] = (float)*((char*)v302 + 92);
					v175 = _mm_cvtsi32_si128(v174);
					v176 = *((char*)v302 + 95);
					v290.m128_i32[1] = _mm_cvtepi32_ps(v173).m128_u32[0];
					v290.m128_i32[2] = _mm_cvtepi32_ps(v175).m128_u32[0];
					v290.m128_f32[3] = (float)v176;
					*(__m128*)(v166 + 16) = v290;
					v177 = _mm_cvtsi32_si128(*((char*)v172 + 113));
					v178 = *((char*)v172 + 114);
					v290.m128_f32[0] = (float)*((char*)v172 + 112);
					v179 = _mm_cvtsi32_si128(v178);
					v180 = *((char*)v172 + 115);
					v290.m128_i32[1] = _mm_cvtepi32_ps(v177).m128_u32[0];
					v290.m128_i32[2] = _mm_cvtepi32_ps(v179).m128_u32[0];
					v290.m128_f32[3] = (float)v180;
					*(__m128*)(v166 + 32) = v290;
					v181 = v159[3];
					if (v181 == 2)
					{
						*(__m128*)(v166 + 48) = _mm_mul_ps(
							(__m128)xmmword_140B7B270,
							_mm_mul_ps(
								_mm_cvtepi32_ps(
									_mm_shuffle_epi32(
										_mm_unpacklo_epi16(
											_mm_unpacklo_epi8(
												_mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD*)v172 + 18)), 0),
												(__m128i)0i64),
											(__m128i)0i64),
										198)),
								(__m128)xmmword_140B7AB70));
					}
					else if (v181 == 3)
					{
						v182 = *(unsigned int**)(96i64 * (unsigned __int16)v159[7] + v158[138] + 8);
						*(__m128*)(v166 + 48) = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)v182[48], (__m128)v182[50]),
							_mm_unpacklo_ps((__m128)v182[49], (__m128)0x3F800000u));
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
				}
			}
		}
		v183 = v295;
		if (v295 != v300)
		{
			HIDWORD(v260) = 0;
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 352i64))(qword_140C65670, 14i64);
			v183 = v295;
		}
		v184 = *(_DWORD*)(v294 + 88);
		if (a2 == 5)
		{
			if (*(float*)(*(_QWORD*)(a1 + 16) + 1316i64) > 0.0)
			{
				if ((a3 & 2) != 0)
					v184 += 50688;
				else
					v184 += 46080;
			}
			else if ((a3 & 1) != 0)
			{
				v184 += 36864;
			}
			else
			{
				v184 += 41472;
			}
		}
		else if (a2 == 1 && (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 1392i64) & 0x200) != 0)
		{
			v32 = 13 * (v184 / 0x1200 / 0xD);
			v33 = 12 - v184 / 0x1200 % 0xD;
			v184 += 4608 * v33;
		}
		if (*(_QWORD*)(v183 + 80))
			++v184;
		v6 = v292;
		v51 = v156 | 0x20;
		v52 = v157 | 0x20;
		v185 = v292[256];
		v314 = v51;
		v315 = v52;
		v283 = v185;
		v326 = v185;
		v327 = v184;
		goto LABEL_335;
	}
	if (*(_DWORD*)v15 != 1)
	{
		v184 = v327;
		v283 = v326;
		v296 = a3;
		v288 = a3;
		goto LABEL_335;
	}
	v186 = v293;
	if (!v293)
	{
		v187 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
			qword_140C65670,
			128i64,
			0i64);
		if (v187)
		{
			v188 = (__m128*)(*(_QWORD*)(a1 + 16) + 1424i64);
			v189 = *(__m128*)(*(_QWORD*)(a1 + 16) + 1456i64);
			v190 = _mm_unpackhi_ps(*v188, *(__m128*)(*(_QWORD*)(a1 + 16) + 1440i64));
			v191 = _mm_unpackhi_ps(v189, *(__m128*)(*(_QWORD*)(a1 + 16) + 1472i64));
			v192 = _mm_unpacklo_ps(*v188, *(__m128*)(*(_QWORD*)(a1 + 16) + 1440i64));
			v193 = _mm_unpacklo_ps(v189, *(__m128*)(*(_QWORD*)(a1 + 16) + 1472i64));
			*v187 = _mm_shuffle_ps(v192, v193, 68);
			v187[1] = _mm_shuffle_ps(v192, v193, 238);
			v187[2] = _mm_shuffle_ps(v190, v191, 68);
			v187[3] = _mm_shuffle_ps(v190, v191, 238);
			sub_140262750(*(_QWORD*)(a1 + 16) + 560i64, (__int64)&v187[4], (_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64));
			v187[7].m128_i32[0] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 1296i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
		}
		v186 = v293;
	}
	v296 = 1;
	v288 = 10;
	if (!v186 || *(_DWORD*)(v294 + 84) != *(_DWORD*)(a6 + 84))
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
			qword_140C65670,
			v6[257],
			*(unsigned int*)(v294 + 84));
	if (v186)
	{
		v194 = a1;
	}
	else
	{
		v194 = a1;
		v195 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
			+ 272i64))(
				qword_140C65670,
				176i64,
				0i64,
				0i64,
				0);
		if (v195)
		{
			sub_140262D50((float*)(*(_QWORD*)(a1 + 16) + 560i64), v195);
			v196 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 560i64);
			*(_OWORD*)(v197 + 112) = *(_OWORD*)(*(_QWORD*)(a1 + 16) + 736i64);
			*(_DWORD*)(v197 + 128) = v196[36];
			*(_DWORD*)(v197 + 132) = v196[37];
			*(_DWORD*)(v197 + 136) = v196[38];
			*(_DWORD*)(v197 + 140) = v196[173];
			*(_DWORD*)(v197 + 144) = v196[40];
			*(_DWORD*)(v197 + 148) = v196[41];
			*(_DWORD*)(v197 + 152) = v196[42];
			*(_DWORD*)(v197 + 156) = v196[172];
			*(_QWORD*)(v197 + 160) = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1360i64);
			v290 = _mm_mul_ps(*(__m128*)(*(_QWORD*)(a1 + 16) + 1360i64), (__m128)xmmword_140B7AC50);
			*(_QWORD*)(v197 + 168) = v290.m128_u64[0];
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
	}
	if (v34 >= 3)
	{
		if (v34 <= 4)
		{
			v330[0] = v6[271];
			goto LABEL_305;
		}
		if (v34 == 5)
		{
			v330[0] = v6[272];
			goto LABEL_305;
		}
		if (v34 == 6)
		{
			v330[0] = v6[273];
			goto LABEL_305;
		}
	}
	v330[0] = *(_QWORD*)(*(_QWORD*)(v194 + 16) + 1400i64);
LABEL_305:
	v198 = v51 | 0x800;
	v199 = v52 | 0x800;
	v344 = 0i64;
	v341[0] = 0;
	if (!v186 || v34 != v284)
	{
		v200 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
			+ 272i64))(
				qword_140C65670,
				16i64,
				1i64,
				11i64,
				0);
		if (v200)
		{
			if (v34 >= 3)
			{
				if (v34 <= 4)
				{
					*v200 = dword_140C79700;
					v200[1] = dword_140C79704;
					v200[2] = dword_140C79708;
					v200[3] = 0;
					goto LABEL_316;
				}
				if (v34 == 5)
				{
					*(_QWORD*)v200 = qword_140C79710;
					v200[2] = dword_140C79718;
					v200[3] = 0;
					goto LABEL_316;
				}
				if (v34 == 6)
				{
					*v200 = 1056964608;
					v200[1] = 1056964608;
					v200[2] = 1056964608;
					v200[3] = 0;
				LABEL_316:
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
					goto LABEL_317;
				}
			}
			*v200 = dword_140C79700;
			v200[1] = dword_140C79704;
			v200[2] = dword_140C79708;
			v200[3] = 1065353216;
			goto LABEL_316;
		}
	}
LABEL_317:
	v201 = *(unsigned __int16**)(v15 + 32);
	v202 = v292;
	v203 = *(_QWORD*)(*(_QWORD*)(v194 + 16) + 1408i64);
	v204 = v198 | 0x1000;
	v205 = v199 | 0x1000;
	v341[1] = 0;
	v345 = 0i64;
	LODWORD(v32) = 0;
	v206 = *(_DWORD*)(v308 + 448);
	v330[1] = v203;
	v207 = &v339;
	v33 = (unsigned __int64)v328;
	v208 = &v340;
	v209 = &v329;
	do
	{
		v210 = *v201;
		v314 = (128 << v32) | v204;
		v315 = (128 << v32) | v205;
		if ((unsigned int)v210 >= v206)
		{
			v212 = v285;
			*(_QWORD*)v33 = v202[268];
			*(_DWORD*)v207 = 0;
			*(_QWORD*)(v33 + 320) = 0i64;
		}
		else
		{
			v211 = 3 * v210;
			v212 = v285;
			*(_QWORD*)(v33 + 128) = *(_QWORD*)(*((_QWORD*)v285 + 132) + 8 * v211 + 16);
			*(_DWORD*)v207 = 0;
		}
		v213 = v201[1];
		v214 = 128 << (v32 + 2);
		v314 |= v214;
		v315 |= v214;
		if ((unsigned int)v213 >= v206)
		{
			*(_QWORD*)v209 = v202[269];
			*(_DWORD*)v208 = 0;
			*((_QWORD*)v209 + 40) = 0i64;
		}
		else
		{
			*((_QWORD*)v209 + 16) = *(_QWORD*)(*((_QWORD*)v212 + 132) + 24 * v213 + 16);
			*(_DWORD*)v208 = 0;
		}
		v205 = v315;
		v204 = v314;
		v32 = (unsigned int)(v32 + 1);
		v208 += 4;
		v209 += 8;
		v201 += 148;
		v207 += 4;
		v33 += 8i64;
	} while ((unsigned int)v32 < 2);
	v215 = v306;
	v216 = v314 | 0x10000;
	v217 = v315 | 0x10000;
	v6 = v202;
	v331 = v202[275];
	v342 = 0;
	v347 = 0i64;
	if (v306 != v304 || v289 != v284 || ((*((_BYTE*)v281 + 56) ^ *(_BYTE*)(v282 + 56)) & 1) != 0)
	{
		v218 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
			+ 272i64))(
				qword_140C65670,
				16i64,
				2i64,
				12i64,
				0);
		v32 = (unsigned __int64)v218;
		if (v218)
		{
			if ((unsigned int)(v289 - 5) > 1)
			{
				*v218 = *v306;
				v218[1] = v215[1];
				v218[2] = v215[2];
			}
			else
			{
				*(_QWORD*)v218 = qword_140C79710;
				v218[2] = dword_140C79718;
			}
			v218[3] = v215[8];
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
		}
	}
	v51 = v216 | 0x20;
	v52 = v217 | 0x20;
	v283 = v202[258];
	v326 = v283;
	v184 = *(_DWORD*)(v294 + 88);
	v314 = v51;
	v277 = HIDWORD(v323);
	v315 = v52;
	v268 = v323;
	v327 = v184;
	v266 = v322;
	v264 = v321;
	v267 = v320;
	v262 = v319;
	v263 = v318;
	v265 = v317;
LABEL_335:
	v219 = v285;
	if (v307 != v301 || *((_QWORD*)v285 + 143) != *((_QWORD*)v299 + 143))
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
			qword_140C65670,
			*((_QWORD*)v285 + 143));
	if (v307 != v301)
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			*(_QWORD*)(v307 + 160),
			*(unsigned int*)(v307 + 168),
			0i64);
	if (!v293)
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
			qword_140C65670,
			v6[277],
			*(unsigned int*)(v307 + 168),
			1i64);
	v220 = (*(__int64(__fastcall**)(__int64, unsigned __int64, float*, unsigned __int64))(*(_QWORD*)qword_140C65670
		+ 712i64))(
			qword_140C65670,
			v32,
			v219,
			v33);
	v221 = v281;
	v222 = a5;
	v223 = *(_DWORD*)(v220 + 48) - v288;
	v275 = *((unsigned __int16*)v281 + 9) + 2 * *((unsigned __int16*)v281 + 9) + 1;
	v224 = v275;
	v225 = (v223 - 1) / v275;
	v226 = 0i64;
	v301 = 0i64;
	v307 = v225;
	if (a5)
	{
		v227 = 16 * v223;
		v280 = v227;
		do
		{
			v228 = v222 - v226;
			v229 = v309 + 8 * v226;
			LODWORD(v260) = v227;
			if (v225 < v222 - v226)
				v228 = v225;
			v230 = (__m128*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 256i64))(
				qword_140C65670,
				(unsigned int)(16 * (v224 * v228 + 1)),
				v296);
			v233 = v230;
			if (v230)
			{
				v234 = 0i64;
				v235 = v230 + 1;
				v236 = 0i64;
				v234.m128_f32[0] = (float)v224;
				for (*v230 = _mm_shuffle_ps(v234, v234, 0); v236 < v228; v235 = &v239[(unsigned __int64)v231 / 0x10])
				{
					v237 = *(_QWORD*)(v229 + 8 * v236);
					v238 = v235;
					v239 = v235 + 1;
					*v238 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(*(_QWORD*)(v237 + 56) + 32i64),
							(__m128) * (unsigned int*)(*(_QWORD*)(v237 + 56) + 56i64)),
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(*(_QWORD*)(v237 + 56) + 44i64),
							(__m128) * (unsigned int*)(*(_QWORD*)(v237 + 56) + 60i64)));
					v232 = (char*)(*(_QWORD*)(*(_QWORD*)(v237 + 48) + 832i64) + 48i64 * *((unsigned __int16*)v221 + 8));
					v240 = 3 * *((unsigned __int16*)v221 + 9);
					v241 = v240;
					if (v240)
					{
						v242 = v240;
						v243 = (char*)v239 - v232;
						do
						{
							v244 = *(_OWORD*)v232;
							v232 += 16;
							*(_OWORD*)&v232[v243 - 16] = v244;
							--v242;
						} while (v242);
					}
					v231 = 16 * v241;
					++v236;
				}
				(*(void(__fastcall**)(__int64, __int64, char*, __m128*, __int64))(*(_QWORD*)qword_140C65670 + 264i64))(
					qword_140C65670,
					v231,
					v232,
					v235,
					v260);
			}
			if (!a2 && (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 1392i64) & 1) != 0 && v297 == 1)
			{
				(*(void(__fastcall**)(__int64, __int64, char*, __m128*))(*(_QWORD*)qword_140C65670 + 504i64))(
					qword_140C65670,
					v231,
					v232,
					v233);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
				v245 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 192i64))(qword_140C65688)
					+ 80);
				v290.m128_i32[0] = 1;
				v291 = 0;
				v290.m128_u64[1] = v245;
				(*(void(__fastcall**)(__int64, __m128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
					qword_140C65670,
					&v290,
					&unk_140C3FE88,
					&unk_140C3FE88,
					&unk_140C3FE88);
				(*(void(__fastcall**)(__int64, void*, _QWORD))(*(_QWORD*)qword_140C65670 + 528i64))(
					qword_140C65670,
					&unk_140C3FE88,
					0i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 1i64);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
					qword_140C65670,
					1i64,
					1i64,
					3i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 2i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
				v246 = 0;
				v247 = &v339;
				v248 = v335;
				do
				{
					if (((128 << v246) & v51) != 0)
					{
						if (*(_QWORD*)v248)
						{
							(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
								qword_140C65670,
								v246,
								*(_QWORD*)v248,
								*(unsigned int*)v247);
						}
						else
						{
							v249 = *((_QWORD*)v248 - 16);
							if (v249)
								(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
									qword_140C65670,
									v246,
									v249,
									*(unsigned int*)v247,
									*((_QWORD*)v248 + 24));
						}
					}
					++v246;
					v248 += 8;
					v247 += 4;
				} while (v246 < 9);
				HIDWORD(v261) = 0;
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					9i64,
					0i64);
				v250 = 10;
				v251 = v343;
				v252 = &v336;
				do
				{
					if (((128 << v250) & v51) != 0)
					{
						if (*(_QWORD*)v252)
						{
							(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
								qword_140C65670,
								v250,
								*(_QWORD*)v252,
								(unsigned int)*v251);
						}
						else
						{
							v253 = *((_QWORD*)v252 - 16);
							if (v253)
								(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
									qword_140C65670,
									v250,
									v253,
									(unsigned int)*v251,
									*((_QWORD*)v252 + 24));
						}
					}
					++v250;
					v252 += 8;
					++v251;
				} while (v250 < 0x10);
				v254 = v283;
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					v283,
					v184 - 4608 * (v184 / 0x1200 % 0xD));
				v221 = v281;
				LODWORD(v261) = v281[1];
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64, unsigned int, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
					qword_140C65670,
					3i64,
					*v281,
					v281[2],
					v261,
					v281[3],
					0,
					v228);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
				v52 |= 0x1003Fu;
				v315 = v52;
			}
			else
			{
				v254 = v283;
			}
			if (v52)
			{
				if ((v52 & 1) != 0)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, v268);
				if ((v52 & 4) != 0)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, v316);
				if ((v52 & 8) != 0)
				{
					LODWORD(v260) = v267;
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, __int64, int, int))(*(_QWORD*)qword_140C65670
						+ 456i64))(
							qword_140C65670,
							v265,
							v263,
							v262,
							v260,
							v264,
							v266);
				}
				if ((v52 & 0x10) != 0)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, v324);
				if ((v52 & 2) != 0)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, v277);
				if ((v52 & 0x40) != 0)
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(
						qword_140C65670,
						v325,
						0i64);
				if ((v52 & 0x20) != 0)
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
						qword_140C65670,
						v254,
						v184);
				if ((v52 & 0x7FFF80) != 0)
				{
					v255 = 0;
					v256 = &v339;
					v257 = v335;
					do
					{
						if (((128 << v255) & v52) != 0)
						{
							if (*(_QWORD*)v257)
							{
								(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
									qword_140C65670,
									v255,
									*(_QWORD*)v257,
									*(unsigned int*)v256);
							}
							else
							{
								v258 = *((_QWORD*)v257 - 16);
								if (v258)
									(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
										qword_140C65670,
										v255,
										v258,
										*(unsigned int*)v256,
										*((_QWORD*)v257 + 24));
							}
						}
						++v255;
						v257 += 8;
						v256 += 4;
					} while (v255 < 0x10);
				}
				v221 = v281;
				v52 = 0;
				v315 = 0;
			}
			LODWORD(v260) = v221[1];
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64, unsigned int, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
				qword_140C65670,
				3i64,
				*v221,
				v221[2],
				v260,
				v221[3],
				0,
				v228);
			v222 = a5;
			v227 = v280;
			v224 = v275;
			v225 = v307;
			v226 = v228 + v301;
			v301 = v226;
		} while (v226 < a5);
	}
	return 0i64;
}
// 140328C18: variable 'v32' is possibly undefined
// 140328C18: variable 'v27' is possibly undefined
// 140328C18: variable 'v33' is possibly undefined
// 140328F91: variable 'v70' is possibly undefined
// 140328F98: variable 'v69' is possibly undefined
// 140328F9C: variable 'v72' is possibly undefined
// 140328FA0: variable 'v71' is possibly undefined
// 140329061: variable 'v88' is possibly undefined
// 140329325: variable 'v102' is possibly undefined
// 140329332: variable 'v113' is possibly undefined
// 140329F50: variable 'v197' is possibly undefined
// 14032A4B2: variable 'v219' is possibly undefined
// 14032A610: variable 'v231' is possibly undefined
// 14032A610: variable 'v232' is possibly undefined
// 14032A610: variable 'v260' is possibly undefined
// 14032A64B: variable 'v233' is possibly undefined
// 14032A8C1: variable 'v261' is possibly undefined
// 140B62CB1: using guessed type unsigned __int8 byte_140B62CB1[7];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B270: using guessed type __int128 xmmword_140B7B270;
// 140C422A0: using guessed type int dword_140C422A0;
// 140C422B0: using guessed type _BYTE[32];
// 140C422E0: using guessed type int dword_140C422E0;
// 140C422F0: using guessed type int dword_140C422F0[16];
// 140C42340: using guessed type int dword_140C42340;
// 140C42350: using guessed type _BYTE[32];
// 140C42380: using guessed type int dword_140C42380;
// 140C42390: using guessed type int dword_140C42390[];
// 140C423E0: using guessed type int dword_140C423E0;
// 140C423F0: using guessed type int dword_140C423F0[16];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C67498: using guessed type __int64 qword_140C67498;
// 140C79700: using guessed type int dword_140C79700;
// 140C79704: using guessed type int dword_140C79704;
// 140C79708: using guessed type int dword_140C79708;
// 140C79710: using guessed type __int64 qword_140C79710;
// 140C79718: using guessed type int dword_140C79718;
// 140C79E10: using guessed type __int128 xmmword_140C79E10[];
// 1403283C0: using guessed type __m128 var_3E0;

