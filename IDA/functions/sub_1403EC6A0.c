#include "../winhttp.h"

//----- (00000001403EC6A0) ----------------------------------------------------
__int64 __fastcall sub_1403EC6A0(unsigned __int64 a1, unsigned int a2, unsigned int a3, unsigned int* a4)
{
	double v4; // xmm2_8
	double v5; // xmm3_8
	__int64 v7; // r8
	unsigned int* v8; // rdi
	__int64 v12; // rdx
	__int16* v13; // rbx
	float v14; // xmm1_4
	float v15; // xmm0_4
	int v16; // eax
	bool v17; // zf
	_QWORD* v18; // rcx
	unsigned int v19; // eax
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rcx
	unsigned int v23; // edx
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64 v26; // rcx
	__int16* v27; // rax
	__int16* v28; // r9
	unsigned int v29; // esi
	__int64 v30; // r10
	_DWORD* v31; // rax
	_DWORD* v32; // rbx
	__int64 v33; // rax
	__int64 v34; // r9
	__int64 v35; // rax
	unsigned int v36; // r14d
	__int64 v37; // rsi
	__int64 v38; // rax
	__int64 v39; // rcx
	_DWORD* v40; // rax
	_DWORD* v41; // rbx
	__int64 v42; // rcx
	__int64 v43; // rax
	int v44; // eax
	__int64 v45; // rax
	int v46; // eax
	__int64 v47; // rcx
	__int64 v48; // rdx
	__int64 v49; // r8
	int v50; // ecx
	__int64 v51; // rcx
	__int64 v52; // rcx
	__int64 v53; // rcx
	__int64 v54; // rax
	__int64 v55; // rax
	float v56; // xmm0_4
	__int64 v57; // r9
	__int64 v58; // rdx
	unsigned int v59; // xmm0_4
	__int64 v60; // rcx
	_DWORD* v61; // rax
	__int64 v62; // rax
	__int64 v63; // rax
	__int64 v64; // rax
	__int64 v65; // rdx
	__int64 v66; // rax
	__int64 v67; // rax
	int v68; // eax
	__int64 v69; // rax
	__int64 v70; // rbx
	__int64 v71; // rax
	__int64 v72; // rdx
	__int64 v73; // rcx
	unsigned int v74; // r8d
	__int64 v75; // rax
	int v76; // eax
	__int64 v77; // rax
	__int64 v78; // rax
	int v79; // r8d
	__int64 v80; // rcx
	__int64 v81; // rax
	unsigned __int64 v82; // rcx
	__int64 v83; // rcx
	__int64 v84; // rax
	int v85; // edx
	__int64 v86; // rax
	__int64 v87; // rcx
	__int16* v88; // rax
	__int64 v89; // rcx
	int* v90; // rdx
	__int64 v91; // rax
	__int64 v92; // rax
	__int64 v93; // rcx
	__int64 v94; // rax
	unsigned int v95; // ecx
	__int64 v96; // rax
	__int64 v97; // rax
	__int64 v98; // rax
	__int64 v99; // rax
	__int64 v100; // rcx
	__int16* v101; // rax
	__int64 v102; // rax
	unsigned __int64 v103; // rcx
	int* v104; // rax
	__int64 v105; // rax
	unsigned __int64 v106; // rcx
	int* v107; // rax
	__int64 v108; // rax
	_QWORD* v109; // rcx
	int* v110; // rax
	__int64 v111; // rax
	__int64 v112; // r14
	unsigned int i; // esi
	__int64 v114; // rcx
	int v115; // edx
	__int64 v116; // rax
	unsigned int v117; // ecx
	unsigned int v118; // ecx
	unsigned int v119; // ecx
	__int64 v120; // rcx
	__int64 v121; // r9
	__int64 v122; // rax
	__int64 v123; // rdx
	__int64 v124; // r8
	__int64 v125; // rax
	__int64 v126; // rax
	__int64 v127; // rax
	__int64 v128; // rax
	__int64 v129; // rax
	__int64 v130; // rcx
	__int64 v131; // rcx
	__int64 v132; // rbx
	__int64 v133; // rcx
	__int64 v134; // rax
	__int64 v135; // rax
	__int64 v136; // rax
	__int64 v137; // rax
	__int64 v138; // rbx
	__int64* v139; // rcx
	__int64 v140; // rcx
	__int64 v141; // rax
	_QWORD* v142; // rax
	__int64 v143; // rax
	__int64 v144; // rbx
	__int64 v145; // rcx
	__int64 v146; // rax
	__int64 v147; // rax
	__int64 v148; // rax
	__int64 v149; // rcx
	__int64 v150; // rcx
	__int64 v151; // r15
	unsigned __int64 v152; // rsi
	__int64 v153; // r14
	__int64 v154; // rax
	__int16* v155; // rax
	__int64 v156; // r9
	__int64 v157; // rcx
	unsigned int v158; // eax
	__int64 v159; // rdx
	__int64 v160; // r8
	unsigned int v161; // edx
	__int64 v162; // rcx
	unsigned int v163; // eax
	int v164; // eax
	unsigned int v165; // eax
	unsigned int v166; // eax
	unsigned int v167; // eax
	int v168; // eax
	int v169; // eax
	unsigned int v170; // eax
	unsigned int v171; // eax
	unsigned int v172; // eax
	unsigned int v173; // eax
	unsigned int v174; // eax
	unsigned int v175; // eax
	unsigned int v176; // xmm0_4
	unsigned int v177; // eax
	unsigned int v178; // eax
	int v179; // xmm0_4
	unsigned int v180; // eax
	_DWORD* v181; // rdi
	__int64 v182; // rcx
	unsigned int v183; // xmm0_4
	unsigned int v184; // xmm1_4
	unsigned int v185; // eax
	unsigned int v186; // eax
	__m128 v187; // xmm0
	__m128 v188; // xmm2
	__m128 v189; // xmm3
	unsigned int v190; // eax
	__m128 v191; // xmm3
	unsigned int v192; // eax
	unsigned int v193; // eax
	unsigned int v194; // eax
	unsigned int v195; // eax
	unsigned int v196; // eax
	unsigned int v197; // eax
	unsigned int v198; // esi
	__int64 v199; // rax
	__int64 v200; // rax
	__int64 v201; // rax
	__int64 v202; // rax
	__int64 v203; // rax
	__int64 v204; // rcx
	__int64 v205; // rdx
	_QWORD* v206; // rcx
	__int64 v207; // rcx
	_QWORD* v208; // rcx
	char* v209; // r8
	char* v210; // rdx
	unsigned int v211; // eax
	__int64 v212; // rax
	__int64 v213; // rax
	__int64 v214; // rax
	__int64 v215; // rax
	__int64 v216; // rax
	__int64 v217; // rax
	__int64 v218; // rax
	__int64 v219; // rax
	__int64 v220; // rax
	__int64 v221; // rax
	__int64 v222; // rax
	__int64 v223; // rax
	__int64 v224; // rcx
	__int64 v225; // r9
	__int64 v226; // rcx
	__int64 v227; // rcx
	unsigned int* v228; // rcx
	__int64 v229; // r8
	__int64 v230; // rcx
	__int64 v231; // rdx
	unsigned int v232; // eax
	__int64 v233; // r8
	__int64 v234; // r8
	__int64 v235; // rax
	__int64 v236; // rcx
	unsigned int v237; // eax
	char* v238; // r8
	char* v239; // rdx
	__int64 v240; // rax
	__int64 v241; // rax
	__int64 v242; // rbx
	__int64 v243; // rax
	__int64 v244; // rax
	__int64 v245; // rax
	__int64 v246; // rax
	__int64 v247; // rax
	__int64 v248; // rax
	__int64 v249; // rax
	__int64 v250; // rcx
	__int64 v251; // rax
	__int64 v252; // rax
	__int64 v253; // rax
	__int64 v254; // rax
	__int64 v255; // rax
	__int64 v256; // rax
	_QWORD* v257; // rax
	__int64 v258; // rax
	__int64 v259; // rax
	__int64 v260; // rax
	__int64 v261; // rax
	__int64 v262; // rax
	__int64 v263; // rax
	__int64 v264; // rax
	__int64 v265; // rax
	__int64 v266; // rax
	__int64 v267; // rcx
	__int64 v268; // rdx
	__int64 v269; // rcx
	__int64 v270; // rcx
	__int64 v271; // rcx
	unsigned int v272; // eax
	__int64 v273; // rcx
	__int64 v274; // rcx
	__int64 v275; // rcx
	__int64 v276; // rcx
	__int64 v277; // rdx
	__int64 v278; // rdx
	__int64 v279; // rcx
	__int64 v280; // r14
	unsigned __int8 v281; // bl
	int* v282; // rax
	__int64 v283; // rcx
	__int16* v284; // rax
	unsigned __int8 v285; // dl
	__int64 v286; // [rsp+20h] [rbp-49h]
	__int64 v287; // [rsp+28h] [rbp-41h]
	unsigned int v288; // [rsp+28h] [rbp-41h]
	__int64 v289; // [rsp+30h] [rbp-39h]
	__int64 v290; // [rsp+38h] [rbp-31h]
	__m128 v291; // [rsp+40h] [rbp-29h] BYREF
	__int64 v292; // [rsp+50h] [rbp-19h] BYREF
	__int64 v293; // [rsp+58h] [rbp-11h]
	int v294; // [rsp+70h] [rbp+7h] BYREF
	unsigned int v295; // [rsp+74h] [rbp+Bh]
	unsigned int v296; // [rsp+78h] [rbp+Fh]
	unsigned int v297; // [rsp+7Ch] [rbp+13h]
	int v298; // [rsp+80h] [rbp+17h]
	int v299; // [rsp+84h] [rbp+1Bh]
	unsigned int v300; // [rsp+88h] [rbp+1Fh]
	unsigned int v301; // [rsp+8Ch] [rbp+23h]
	unsigned int v302; // [rsp+D0h] [rbp+67h] BYREF
	unsigned int v303; // [rsp+D4h] [rbp+6Bh]

	v7 = *(_QWORD*)(a1 + 31016);
	v8 = a4;
	if (!v7 || a2 != *(_DWORD*)(v7 + 152))
		return 1i64;
	v12 = (unsigned int)dword_140C636A8;
	*(_DWORD*)(a1 + 31564) = dword_140C636A8;
	switch (a3)
	{
	case 0x61u:
		LODWORD(v13) = sub_1403C74D0(a1);
		return (unsigned int)v13;
	case 0x68u:
		LODWORD(v13) = sub_1403C08D0(a1, a4);
		return (unsigned int)v13;
	case 0x70u:
		LODWORD(v13) = sub_1403D1E10(a1, *a4);
		return (unsigned int)v13;
	case 0x7Eu:
		v201 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a4);
		if (!v201)
			goto LABEL_5;
		sub_14056AC90(v201, v8[2], *((int**)v8 + 2), v8[6], v286, v287, v289, v290);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x91u:
		sub_14062D0F0((__int64*)(a1 + 29088), COERCE_DOUBLE((unsigned __int64)*a4), *((float*)a4 + 1));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x92u:
		v282 = sub_14054F210();
		LODWORD(v13) = (*(__int64(__fastcall**)(int*, unsigned int*))(*(_QWORD*)v282 + 16i64))(v282, v8);
		return (unsigned int)v13;
	case 0xA9u:
		LODWORD(v13) = sub_14048F960(a1, a4);
		return (unsigned int)v13;
	case 0xAAu:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeShareTimedOut", byte_1409E9994, *a4);
		goto LABEL_995;
	case 0xADu:
		LODWORD(v13) = sub_1403B6DE0(a1, (float*)a4, v4, v5);
		return (unsigned int)v13;
	case 0xAEu:
		LODWORD(v13) = 0;
		v29 = 0;
		if (*a4)
		{
			do
			{
				sub_140643F00(
					qword_140C65C28,
					*(_DWORD*)(*((_QWORD*)v8 + 1) + 24i64 * v29),
					*(_DWORD*)(*((_QWORD*)v8 + 1) + 24i64 * v29 + 4),
					*(_DWORD*)(*((_QWORD*)v8 + 1) + 24i64 * v29 + 8),
					*(_QWORD*)(*((_QWORD*)v8 + 1) + 24i64 * v29 + 16),
					1,
					0);
				++v29;
			} while (v29 < *v8);
		}
		return (unsigned int)v13;
	case 0xAFu:
		LODWORD(v13) = sub_140611F20(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xB0u:
		LODWORD(v13) = (unsigned int)sub_1403C6A90(a1, a4);
		return (unsigned int)v13;
	case 0xB2u:
		LODWORD(v13) = sub_1403CD9E0(a1, a4);
		return (unsigned int)v13;
	case 0xB7u:
		sub_1403C9A70(a1);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xBAu:
		LODWORD(v13) = sub_1403B8790(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xBCu:
		LODWORD(v13) = sub_1403B8630(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xBDu:
		LODWORD(v13) = sub_1403B88D0((_QWORD*)a1, (int*)a4);
		return (unsigned int)v13;
	case 0xC1u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "DuelCancelWarning", byte_1409D10AF);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xC4u:
		LODWORD(v13) = 0;
		*(_QWORD*)(a1 + 25480) = 0i64;
		*(_QWORD*)(a1 + 25488) = 0i64;
		*(_QWORD*)(a1 + 25496) = 0i64;
		*(_QWORD*)(a1 + 25504) = 0i64;
		*(_DWORD*)(a1 + 25512) = 0;
		*(_DWORD*)(a1 + 25480) = *(unsigned __int8*)a4;
		return (unsigned int)v13;
	case 0xC6u:
		LODWORD(v13) = sub_14048E2B0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xC7u:
		LODWORD(v13) = sub_14048DED0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xCAu:
		LODWORD(v13) = sub_1403C0F90(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xD1u:
	case 0xE7u:
	case 0x181u:
	case 0x5CFu:
	case 0x6DEu:
	case 0x7E3u:
	case 0x846u:
		goto LABEL_5;
	case 0xD3u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "HideInstanceGameModeDialog", byte_1409E8FBC, 0i64);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xD6u:
		v216 = sub_140498A40(qword_140C65980, *a4, 0);
		v13 = (__int16*)v216;
		if (!v216)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v216 + 288i64))(v216, v8 + 4);
		(*(void(__fastcall**)(__int16*, unsigned int*))(*(_QWORD*)v13 + 232i64))(v13, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xD8u:
		LODWORD(v13) = sub_1403CC360(a1, (int*)a4);
		return (unsigned int)v13;
	case 0xD9u:
		LODWORD(v13) = sub_1403CC270(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xDDu:
		LODWORD(v13) = sub_1403D2550(a1, a4);
		return (unsigned int)v13;
	case 0xDFu:
		v132 = qword_140C659B0;
		sub_140008410(qword_140C659B0 + 1008);
		sub_140008410(v132 + 1072);
		sub_140008410(v132 + 1040);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "DatacubeUpdated", &unk_1409D0C13);
		goto LABEL_378;
	case 0xE0u:
		sub_1404A75D0(a1, (__int64)a4);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "DatacubeUpdated", &unk_1409D0C13);
		goto LABEL_378;
	case 0xE1u:
		sub_1404A7B30(a1, (int*)a4);
		v130 = *(_QWORD*)(qword_140C65898 + 29504);
		LODWORD(v13) = 0;
		if (*v8)
			sub_1400EA3E0(v130, "DatacubeUpdated", byte_1409E9484);
		else
			sub_1400EA3E0(v130, "DatacubeUpdated", &unk_1409D0C13);
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		return (unsigned int)v13;
	case 0xE2u:
		sub_1404A7D40(a1, a4);
		v131 = *(_QWORD*)(qword_140C65898 + 29504);
		if (*v8)
			sub_1400EA3E0(v131, "DatacubeUpdated", byte_1409E9484);
		else
			sub_1400EA3E0(v131, "DatacubeUpdated", &unk_1409D0C13);
		goto LABEL_378;
	case 0xEBu:
		LODWORD(v13) = sub_1403CBB60(a1, a4);
		return (unsigned int)v13;
	case 0xEEu:
		LODWORD(v13) = sub_1403C9180(a1);
		return (unsigned int)v13;
	case 0xF1u:
		LODWORD(v13) = sub_1403B67E0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0xF4u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_140572430(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xF5u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_140572360(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xF6u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_1405725F0(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xF7u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_140572670(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xF8u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_140572550(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xFAu:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_1405724B0(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0xFEu:
		v226 = *(_QWORD*)(a1 + 29504);
		*(_DWORD*)(a1 + 25384) = *a4;
		sub_1400EA3E0(v226, "CharacterFlagsUpdated", &unk_1409D1329);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x100u:
		LODWORD(v13) = sub_1403CB990(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x101u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ForceResurrect", &unk_1409D0946);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x102u:
		LODWORD(v13) = sub_14049A790();
		return (unsigned int)v13;
	case 0x104u:
		LODWORD(v13) = sub_14049A860(a1, a4);
		return (unsigned int)v13;
	case 0x106u:
		sub_1403CC530(a1, *a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x109u:
		LODWORD(v13) = sub_1404A6560(a1, a4);
		return (unsigned int)v13;
	case 0x10Au:
		LODWORD(v13) = sub_1404A63A0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x10Bu:
		LODWORD(v13) = sub_1404A67A0(a1, a4);
		return (unsigned int)v13;
	case 0x10Du:
		sub_1403C9970(a1);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x10Eu:
		LODWORD(v13) = sub_1403CD6D0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x110u:
		v205 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v205)
			goto LABEL_208;
		LODWORD(v13) = 0;
		if (*a4 != *(_DWORD*)(v205 + 8))
			goto LABEL_208;
		sub_1403CC530(a1, a4[3]);
		return (unsigned int)v13;
	case 0x111u:
		LODWORD(v13) = sub_1403B8380(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x112u:
		v213 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v213)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v213 + 216i64))(v213, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x113u:
		v217 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v217)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v217 + 224i64))(v217, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x114u:
		sub_14042CFB0(*(_QWORD*)(a1 + 29504));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x11Cu:
		LODWORD(v13) = sub_14039CEE0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x129u:
		LODWORD(v13) = sub_1403A9340(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x12Cu:
		LODWORD(v13) = sub_1403B9620(a1, a4);
		return (unsigned int)v13;
	case 0x12Eu:
		LODWORD(v13) = sub_1403A8920(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x12Fu:
		LODWORD(v13) = sub_1403A8D60(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x130u:
		v219 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v219)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v219 + 280i64))(v219, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x131u:
		LODWORD(v13) = sub_1405F5010(a1, a4);
		return (unsigned int)v13;
	case 0x132u:
		LODWORD(v13) = sub_1405F4FC0(a1, a4);
		return (unsigned int)v13;
	case 0x133u:
		v214 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
			qword_140C65980,
			*a4,
			0i64);
		if (!v214)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v214 + 248i64))(v214, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x134u:
		LODWORD(v13) = sub_1405F4F70(a1, a4);
		return (unsigned int)v13;
	case 0x135u:
		v212 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v212)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v212 + 264i64))(v212, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x136u:
		v215 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v215)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v215 + 272i64))(v215, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x137u:
		v221 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v221)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v221 + 288i64))(v221, v8 + 2);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x138u:
		LODWORD(v13) = sub_1405F50F0(a1, a4);
		return (unsigned int)v13;
	case 0x13Au:
		v218 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v218)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v218 + 304i64))(v218, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x13Bu:
		v220 = sub_140498A40(qword_140C65980, *a4, 0);
		if (!v220)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v220 + 296i64))(v220, v8[1], v8[2]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x13Cu:
		sub_1405C0040(qword_140C65B98, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x13Du:
		v235 = *(_QWORD*)(a1 + 120);
		LODWORD(v13) = 0;
		if (v235)
		{
			v236 = *(_QWORD*)(a1 + 29504);
			*(_DWORD*)(a1 + 28136) = 0;
			sub_1400EA3E0(v236, "UnitPvpFlagsChanged", L"U", *(unsigned int*)(v235 + 8));
		}
		return (unsigned int)v13;
	case 0x13Eu:
		v234 = *(_QWORD*)(a1 + 120);
		if (!v234)
			goto LABEL_5;
		*(_DWORD*)(a1 + 28136) = v12 + *a4;
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "UnitPvpFlagsChanged", L"U", *(unsigned int*)(v234 + 8));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x140u:
		sub_1405C0420(qword_140C65B98, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x143u:
		LODWORD(v13) = sub_1403CBC80(a1);
		return (unsigned int)v13;
	case 0x145u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "CharacterRecustomizationResult", L"i", *a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x148u:
		sub_1403B7D40(a1, *(_QWORD*)a4, a4[2]);
		goto LABEL_576;
	case 0x14Au:
		sub_1403B7E80(a1, (__int64)a4);
	LABEL_576:
		sub_1400A8020(*(_QWORD*)(a1 + 29504) + 3720i64);
		v204 = *(_QWORD*)(a1 + 32736);
		if (!v204)
			goto LABEL_5;
		sub_1400A8020(v204 + 376);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x14Du:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "RepairItemCompleted", &unk_1409D0D86);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x152u:
		LODWORD(v13) = sub_1403D1CE0((_QWORD*)a1, (unsigned __int8*)a4);
		return (unsigned int)v13;
	case 0x154u:
		v225 = 0i64;
		goto LABEL_675;
	case 0x155u:
		v225 = a4[1];
	LABEL_675:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "OnInstanceResetResult", byte_1409E8FEC, v225);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x157u:
		v24 = *(_QWORD*)(a1 + 28048);
		if (!v24)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v24 + 200i64))(v24, *a4, a4[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x158u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ShowInstanceRestrictedDialog", &unk_1409D09DF);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x15Bu:
		v25 = sub_1403D90D0(qword_140C65898, *a4);
		if (!v25)
			goto LABEL_5;
		v26 = *(_QWORD*)(a1 + 29504);
		*(_DWORD*)(a1 + 7048) = 1;
		v27 = *(__int16**)(v25 + 16);
		v28 = &word_140B7B704;
		if (v27)
			v28 = v27;
		sub_1400EA3E0(v26, "CasterResurrectedPlayer", byte_1409E8FAC, v28);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x160u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ScriptResurrect", &unk_1409D0943);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x164u:
		LODWORD(v13) = sub_1403B9720(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x169u:
		LODWORD(v13) = sub_1403B95C0(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x16Bu:
		LODWORD(v13) = sub_1403B9C60(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x16Cu:
		LODWORD(v13) = sub_1403B9920(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x16Du:
		LODWORD(v13) = sub_1403CBB10(a1, a4);
		return (unsigned int)v13;
	case 0x16Eu:
		LODWORD(v13) = 0;
		*(_DWORD*)(a1 + 28132) = *a4;
		return (unsigned int)v13;
	case 0x171u:
		v208 = (_QWORD*)qword_140C65BA8;
		*(_DWORD*)(a1 + 26444) = *a4;
		*(_DWORD*)(a1 + 26448) = a4[1];
		sub_1405F9E30(v208, (__int64)(v208 + 44), 0);
		v207 = *(_QWORD*)qword_140C65B80;
		if (*(_QWORD*)qword_140C65B80)
			goto LABEL_591;
		goto LABEL_5;
	case 0x172u:
		v206 = (_QWORD*)qword_140C65BA8;
		*(_DWORD*)(a1 + 26452) = *a4;
		*(_DWORD*)(a1 + 26456) = a4[1];
		sub_1405F9E30(v206, (__int64)(v206 + 48), 0);
		v207 = *(_QWORD*)qword_140C65B80;
		if (!*(_QWORD*)qword_140C65B80)
			goto LABEL_5;
	LABEL_591:
		sub_1405FBB10(v207);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x175u:
		v281 = *(_BYTE*)a4;
		if (a4[1])
			v281 = *(_BYTE*)(a1 + 28140);
		else
			sub_1403CD930(a1, v281);
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "SpecChanged", byte_1409ECDE4, (unsigned int)v281 + 1, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x176u:
		LODWORD(v13) = sub_1403B9FB0((_QWORD*)a1, a4);
		return (unsigned int)v13;
	case 0x178u:
		sub_1403C9B30();
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x179u:
		LODWORD(v13) = 0;
		sub_140437A10((_QWORD*)qword_140C658D8, *a4, 0, 0i64, 0, 0, 1);
		return (unsigned int)v13;
	case 0x17Bu:
		LODWORD(v13) = sub_1403B9410(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x17Fu:
		LODWORD(v13) = sub_1403C0B20(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x183u:
		LODWORD(v13) = sub_1403DF570(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x186u:
		sub_1404ACEB0(a1, *a4);
		goto LABEL_377;
	case 0x187u:
		sub_140008410(qword_140C659D0 + 264);
	LABEL_377:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FlightPathUpdate", &unk_1409D0E02);
	LABEL_378:
		LODWORD(v13) = 0;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		return (unsigned int)v13;
	case 0x188u:
		sub_1404ACCF0(a1, (__int64)a4);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FlightPathUpdate", &unk_1409D0E02);
		goto LABEL_151;
	case 0x189u:
		v129 = sub_1403D90D0(a1, *a4);
		if (!v129)
			goto LABEL_5;
		sub_14045B790(v129, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x18Au:
		LODWORD(v13) = sub_1403CA390(a1, a4);
		return (unsigned int)v13;
	case 0x18Bu:
		sub_140615F20(a1 + 25344, (__int64)a4);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerTitleUpdate", byte_1409D10C7);
		goto LABEL_151;
	case 0x18Eu:
		v20 = *(_QWORD*)(a1 + 26392);
		LODWORD(v13) = 0;
		if (!v20)
			return (unsigned int)v13;
		if (*(_DWORD*)(v20 + 16) && (!*(_DWORD*)(v20 + 4) || !*(_DWORD*)(v20 + 12)))
		{
			*(_DWORD*)(v20 + 4) = 0;
			*(_DWORD*)(v20 + 12) = 0;
			sub_140718BD0((__int64*)(v20 + 24), a4);
		}
		goto LABEL_55;
	case 0x193u:
		LODWORD(v13) = sub_1403A6E60(a1, a4);
		return (unsigned int)v13;
	case 0x195u:
		LODWORD(v13) = sub_1403A6F10(a1, (__int64*)a4);
		return (unsigned int)v13;
	case 0x196u:
		LODWORD(v13) = sub_1403A6FA0(a1, a4);
		return (unsigned int)v13;
	case 0x198u:
		v21 = *(_QWORD*)(a1 + 26392);
		LODWORD(v13) = 0;
		if (!v21)
			return (unsigned int)v13;
		v22 = *((_QWORD*)a4 + 1);
		v23 = *a4;
		if (*(_DWORD*)(v21 + 16) && (!*(_DWORD*)(v21 + 4) || !*(_DWORD*)(v21 + 12)))
		{
			*(_DWORD*)(v21 + 4) = 0;
			*(_DWORD*)(v21 + 12) = 0;
			if (v23 == *(_DWORD*)v21)
			{
				*(_QWORD*)(v21 + 40) = v22;
			}
			else if (v23 == *(_DWORD*)(v21 + 8))
			{
				*(_QWORD*)(v21 + 48) = v22;
			}
		}
	LABEL_55:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "P2PTradeChange", byte_1409D1277);
		return (unsigned int)v13;
	case 0x199u:
		LODWORD(v13) = sub_1403C0D70(a1, a4);
		return (unsigned int)v13;
	case 0x19Bu:
		LODWORD(v13) = sub_1403B5AD0(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x19Cu:
		LODWORD(v13) = sub_1403D1C00(a1, (unsigned __int8*)a4);
		return (unsigned int)v13;
	case 0x19Du:
		LODWORD(v13) = sub_1403B97A0(a1, (unsigned __int8*)a4);
		return (unsigned int)v13;
	case 0x19Eu:
		LODWORD(v13) = 0;
		*(_DWORD*)(a1 + 1376) = *a4;
		return (unsigned int)v13;
	case 0x19Fu:
		LODWORD(v13) = sub_1403B9530(a1, (unsigned __int8*)a4);
		return (unsigned int)v13;
	case 0x1A0u:
		LODWORD(v13) = sub_1403B92A0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1A1u:
		*(_DWORD*)(a1 + 28260) = *(__int16*)a4;
		sub_1403CDBF0(a1);
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "CharacterEldanAugmentationsUpdated", &unk_1409D10E6);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x1A3u:
		LODWORD(v13) = sub_1403D1C60(a1, (unsigned __int8*)a4);
		return (unsigned int)v13;
	case 0x1A4u:
		LODWORD(v13) = sub_1403C9070(a1, a4);
		return (unsigned int)v13;
	case 0x1A5u:
		LODWORD(v13) = sub_1403CAE70(a1, a4);
		return (unsigned int)v13;
	case 0x1A6u:
		*(_DWORD*)(a1 + 1368) = 1;
		if (!a4)
			goto LABEL_5;
		v224 = *(_QWORD*)(a1 + 29504);
		*(_DWORD*)(a1 + 1372) = *a4;
		sub_1400EA3E0(v224, "UpdateGearScore", &unk_1409D0E2E);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x1A7u:
		LODWORD(v13) = sub_1403B9690(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1A8u:
		v223 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a4);
		if (!v223)
			goto LABEL_5;
		LODWORD(v13) = 0;
		*(_DWORD*)(v223 + 136) = v8[2];
		return (unsigned int)v13;
	case 0x1AAu:
		if (!qword_140C65970)
			goto LABEL_5;
		sub_14056E610(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x1ABu:
		if (!qword_140C65898)
			goto LABEL_5;
		v133 = *(_QWORD*)(a1 + 120);
		if (!v133)
			goto LABEL_5;
		*(_BYTE*)(a1 + 7020) = *(_BYTE*)a4;
		*(_DWORD*)(a1 + 7048) = a4[1];
		if (*(_DWORD*)(v133 + 592))
			sub_140425910(*(_QWORD*)(a1 + 29504));
		*(_DWORD*)(a1 + 28568) = 1;
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x1ACu:
		LODWORD(v13) = sub_1403C8760(a1, a4);
		return (unsigned int)v13;
	case 0x1AEu:
		LODWORD(v13) = sub_1403A9510(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x1B2u:
		LODWORD(v13) = 0;
		*(_QWORD*)(a1 + 32792) = 0i64;
		sub_1403705B0((__int64*)(a1 + 32784), *((int**)a4 + 1), *a4);
		return (unsigned int)v13;
	case 0x1B3u:
		LODWORD(v13) = sub_1403C1080(a1, (__int64)a4, v4, v5);
		return (unsigned int)v13;
	case 0x1B4u:
		if (!a4[1])
			goto LABEL_5;
		if (!qword_140C658F8)
			goto LABEL_5;
		v222 = sub_140448420(a1, *a4);
		if (!v222)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v222 + 144i64))(v222, *((_QWORD*)v8 + 1), v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x1B5u:
		LODWORD(v13) = sub_140403E00(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1B7u:
		LODWORD(v13) = sub_1404037D0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1BBu:
		v237 = a4[4];
		a4 = (unsigned int*)*((_QWORD*)a4 + 1);
		v238 = "Si";
		v239 = "ChatJoinResult";
		goto LABEL_896;
	case 0x1BCu:
		LODWORD(v13) = sub_1404039F0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1BFu:
		LODWORD(v13) = sub_140403C80(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1C0u:
		LODWORD(v13) = sub_140403D70(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1C2u:
		LODWORD(v13) = sub_140403400(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1C6u:
		LODWORD(v13) = sub_140403330(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1C8u:
		LODWORD(v13) = sub_140402F20((__int64*)qword_140C658A0, (__int64)a4);
		return (unsigned int)v13;
	case 0x1CAu:
		LODWORD(v13) = sub_1404033A0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1D3u:
		LODWORD(v13) = sub_140403850(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1D9u:
		LODWORD(v13) = sub_140403970(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x1DAu:
		LODWORD(v13) = sub_140403670(a1, a4);
		return (unsigned int)v13;
	case 0x1EFu:
		LODWORD(v13) = sub_1405EF270((__int64*)a1, (unsigned __int8*)a4);
		return (unsigned int)v13;
	case 0x210u:
		v13 = *(__int16**)(a1 + 29080);
		if (*((_DWORD*)v13 + 7)
			|| *((_QWORD*)v13 + 76)
			|| *((_DWORD*)v13 + 10)
			|| (unsigned int)sub_1405CCEE0(*(_QWORD*)(a1 + 29080)))
		{
			*((_DWORD*)v13 + 9) = 1;
			LODWORD(v13) = 0;
		}
		else
		{
			sub_1405CCA00((__int64)v13, v159, v160, v5);
			LODWORD(v13) = 0;
		}
		return (unsigned int)v13;
	case 0x211u:
		v192 = *a4;
		v294 = 26;
		v295 = v192;
		v296 = a4[1];
		v297 = a4[2];
		v298 = a4[3];
		goto LABEL_490;
	case 0x212u:
		v187 = (__m128)a4[3];
		v188 = (__m128)a4[2];
		v189 = (__m128)a4[1];
		v190 = *a4;
		v294 = 25;
		v295 = v190;
		v191 = _mm_unpacklo_ps(_mm_unpacklo_ps(v189, v187), _mm_unpacklo_ps(v188, (__m128)0i64));
		v296 = v191.m128_i32[0];
		v187.m128_i32[0] = _mm_shuffle_ps(v191, v191, 85).m128_u32[0];
		*(_QWORD*)&v5 = _mm_shuffle_ps(v191, v191, 170).m128_u64[0];
		v298 = LODWORD(v5);
		v297 = v187.m128_i32[0];
		goto LABEL_490;
	case 0x213u:
		v170 = a4[2];
		v294 = 12;
		v295 = v170;
		v296 = a4[3];
		v297 = *a4;
		v298 = a4[1];
		v299 = a4[4];
		goto LABEL_490;
	case 0x214u:
		sub_1405CDD70(*(_QWORD*)(a1 + 29080), (int*)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x215u:
		v17 = a4[4] == 0;
		v169 = 7;
		v298 = a4[3];
		if (!v17)
			v169 = 10;
		v294 = v169;
		v295 = *a4;
		v296 = a4[1];
		v297 = a4[2];
		v299 = a4[5];
		goto LABEL_490;
	case 0x216u:
		v165 = *a4;
		v294 = 11;
		v295 = v165;
		v296 = a4[1];
		v297 = *((unsigned __int16*)a4 + 4);
		v298 = *((unsigned __int16*)a4 + 5);
		v299 = *((unsigned __int16*)a4 + 6);
		goto LABEL_490;
	case 0x217u:
		v168 = 6;
		if (a4[2])
			v168 = 9;
		v294 = v168;
		v295 = *a4;
		v296 = a4[1];
		goto LABEL_490;
	case 0x218u:
		v161 = a4[1];
		v162 = *(_QWORD*)(a1 + 29080);
		v295 = *a4;
		if ((v161 & 1) != 0)
		{
			v163 = a4[2];
			v296 = v161;
			v297 = v163;
			v164 = *((unsigned __int16*)a4 + 6);
			v294 = 3;
			v298 = v164;
			v299 = *((unsigned __int16*)a4 + 7);
			v300 = *((unsigned __int16*)a4 + 8);
		}
		else
		{
			v294 = 4;
		}
		sub_1405CCF20(v162, (__int64)&v294, (_QWORD*)v7, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x219u:
		v195 = *a4;
		v17 = a4[1] == 1;
		v294 = 31;
		v295 = v195;
		LOBYTE(v296) = v17;
		goto LABEL_490;
	case 0x21Au:
		v166 = a4[1];
		v294 = 13;
		v295 = v166;
		v296 = *a4;
		goto LABEL_490;
	case 0x21Bu:
		v171 = *a4;
		v294 = 16;
		v295 = v171;
		v296 = a4[2];
		v297 = a4[3];
		v298 = a4[4];
		v299 = a4[1];
		goto LABEL_490;
	case 0x21Cu:
		sub_1405CDE10(*(_QWORD*)(a1 + 29080), (int*)a4, (_QWORD*)v7);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x21Du:
		v174 = *a4;
		v294 = 19;
		v295 = v174;
		v296 = a4[1];
		goto LABEL_490;
	case 0x21Eu:
		v193 = *a4;
		v294 = 27;
		v295 = v193;
		v296 = a4[1];
		goto LABEL_490;
	case 0x21Fu:
		v181 = *(_DWORD**)(a1 + 29080);
		LODWORD(v13) = 0;
		if (v181[18])
		{
			v181[19] = 1;
		}
		else
		{
			v182 = *(_QWORD*)(*(_QWORD*)v181 + 8i64);
			if (v182 && *(_DWORD*)(v182 + 692))
				sub_1405D3380(v182, v12, v4, v5);
			v181[19] = 0;
		}
		return (unsigned int)v13;
	case 0x220u:
		v185 = *a4;
		v17 = a4[2] == 1;
		v294 = 24;
		v295 = v185;
		v186 = a4[1];
		LOBYTE(v297) = v17;
		v17 = a4[3] == 1;
		v296 = v186;
		BYTE1(v297) = v17;
		goto LABEL_490;
	case 0x221u:
		v183 = a4[1];
		v184 = a4[2];
		v295 = *a4;
		v294 = 23;
		v296 = v183;
		v297 = v184;
		goto LABEL_490;
	case 0x222u:
		sub_1405CDAF0(*(_QWORD*)(a1 + 29080), (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x223u:
		v167 = a4[1];
		v294 = 14;
		v295 = v167;
		v296 = *a4;
		goto LABEL_490;
	case 0x224u:
		v173 = *a4;
		v294 = 29;
		v295 = v173;
		v296 = a4[1];
		goto LABEL_490;
	case 0x225u:
		v172 = *a4;
		v294 = 17;
		v295 = v172;
		v296 = a4[1];
		goto LABEL_490;
	case 0x226u:
		v196 = *a4;
		v294 = 32;
		v295 = v196;
		goto LABEL_490;
	case 0x227u:
		v197 = *a4;
		v294 = 33;
		v295 = v197;
		v296 = a4[1];
		goto LABEL_490;
	case 0x228u:
		sub_1405CE040(*(_QWORD*)(a1 + 29080), (__int64)a4, (_QWORD*)v7);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x229u:
		v295 = *a4;
		v294 = 2;
		goto LABEL_490;
	case 0x22Au:
		sub_1405CE0E0(*(_QWORD*)(a1 + 29080), a4, (_QWORD*)v7, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x22Bu:
		v194 = *a4;
		v17 = a4[1] == 1;
		v294 = 28;
		v295 = v194;
		LOBYTE(v296) = v17;
		goto LABEL_490;
	case 0x22Cu:
		sub_1405CE360(*(_QWORD*)(a1 + 29080), a4, v4, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x22Du:
		sub_1405CE1B0(*(_DWORD**)(a1 + 29080), v12);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x22Eu:
		v294 = 1;
		goto LABEL_489;
	case 0x22Fu:
		v178 = *a4;
		v179 = a4[3];
		v294 = 21;
		v295 = v178;
		v180 = a4[1];
		v299 = v179;
		v296 = v180;
		v297 = a4[2];
		v298 = a4[4];
		v300 = a4[5];
		v301 = a4[6];
		goto LABEL_490;
	case 0x230u:
		v175 = *a4;
		v176 = a4[2];
		v294 = 20;
		v295 = v175;
		v177 = a4[1];
		v297 = v176;
		v296 = v177;
		goto LABEL_490;
	case 0x231u:
		v294 = 22;
	LABEL_489:
		v295 = *a4;
		v296 = a4[1];
		v297 = a4[2];
	LABEL_490:
		sub_1405CCF20(*(_QWORD*)(a1 + 29080), (__int64)&v294, (_QWORD*)v7, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x232u:
		sub_1405CD990(*(_QWORD*)(a1 + 29080), (unsigned __int16*)a4, (_QWORD*)v7, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x237u:
		if (*a4 != *(_DWORD*)(a1 + 26176))
			goto LABEL_5;
		sub_1403A71F0(a1, 0, 0x65u, 0);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x23Bu:
		LODWORD(v13) = sub_1403A96E0(a1);
		return (unsigned int)v13;
	case 0x247u:
		LODWORD(v13) = sub_1403C3190(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x24Au:
		v237 = a4[14];
		v238 = (char*)&unk_1409EC74C;
		v239 = "CommodityAuctionFilledPartial";
		goto LABEL_896;
	case 0x24Bu:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CommodityAuctionRemoved", byte_1409EC83C, a4[14], a4);
		goto LABEL_926;
	case 0x24Cu:
		sub_14042A7B0(*(_QWORD*)(qword_140C65898 + 29504), a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x24Du:
		LODWORD(v13) = sub_1404BBFC0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x252u:
		LODWORD(v13) = sub_14048A460(a1, a4);
		return (unsigned int)v13;
	case 0x257u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "CostumeSaveResult", "iii", a4[1], *a4, a4[2]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x258u:
		LODWORD(v13) = sub_1403CC000(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x259u:
		LODWORD(v13) = sub_1403CBDF0(a1, a4[1], *a4);
		return (unsigned int)v13;
	case 0x25Au:
		LODWORD(v13) = sub_1403CBD10(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x25Eu:
		LODWORD(v13) = sub_1403B5F80(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x25Fu:
		LODWORD(v13) = sub_140600E10(qword_140C65BB0, a4);
		return (unsigned int)v13;
	case 0x260u:
		v151 = qword_140C65BB0;
		LODWORD(v13) = 0;
		v152 = 0i64;
		if (*a4)
		{
			v153 = 0i64;
			do
			{
				sub_140600E10(v151, (unsigned int*)(v153 + *((_QWORD*)v8 + 1)));
				++v152;
				v153 += 44i64;
			} while (v152 < *v8);
		}
		return (unsigned int)v13;
	case 0x261u:
		LODWORD(v13) = sub_140577920(a1, a4);
		return (unsigned int)v13;
	case 0x262u:
		LODWORD(v13) = sub_1403D9760((_QWORD*)a1, (int*)a4, v4, v5);
		return (unsigned int)v13;
	case 0x263u:
		LODWORD(v13) = sub_140577660(qword_140C65B78, a4);
		return (unsigned int)v13;
	case 0x264u:
		LODWORD(v13) = sub_140577D20(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x26Au:
		if (*(_DWORD*)(qword_140C635F0 + 5896))
			goto LABEL_5;
		sub_14042B9A0(*(_QWORD*)(a1 + 29504), (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x33Eu:
		LODWORD(v13) = sub_1404B40B0((int*)a1, a4);
		return (unsigned int)v13;
	case 0x34Eu:
		LODWORD(v13) = sub_1406424A0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x34Fu:
		sub_140780790(a1, *a4, a4[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x350u:
		sub_140780A00(a1, *a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x351u:
		LODWORD(v13) = sub_140642430(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x355u:
		LODWORD(v13) = sub_1403D98F0(a1, (int*)a4, v4, v5);
		return (unsigned int)v13;
	case 0x357u:
		sub_140554510(a1, *a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x358u:
		LODWORD(v13) = sub_14050F770();
		return (unsigned int)v13;
	case 0x359u:
		LODWORD(v13) = sub_1406128B0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x35Cu:
		if (!*(_QWORD*)qword_140C65B80)
			goto LABEL_208;
		LODWORD(v13) = sub_1405FB670(*(_QWORD*)qword_140C65B80, a4);
		return (unsigned int)v13;
	case 0x35Fu:
		if (!*(_QWORD*)qword_140C65B80)
			goto LABEL_208;
		LODWORD(v13) = sub_1405FB350(*(_QWORD*)qword_140C65B80, (__int64)a4);
		return (unsigned int)v13;
	case 0x361u:
		if (!*(_QWORD*)qword_140C65B80)
			goto LABEL_208;
		LODWORD(v13) = sub_1405FB830(*(_QWORD*)qword_140C65B80, a4);
		return (unsigned int)v13;
	case 0x362u:
		LODWORD(v13) = sub_140611E30(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x363u:
		v13 = *(__int16**)(a1 + 29504);
		v198 = *a4;
		v199 = sub_1405A8A40(a1, a4[1]);
		if (!v199)
			goto LABEL_5;
		sub_1400EA3E0((__int64)v13, "Dialog_QuestShare", byte_1409E91EC, v199, v198);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x366u:
		LODWORD(v13) = sub_1403AA8E0((__int64*)a1, (int*)a4);
		return (unsigned int)v13;
	case 0x36Au:
		LODWORD(v13) = sub_1403B6D10(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x36Fu:
		v17 = a4[1] == 0;
		v18 = (_QWORD*)(a1 + 29328);
		v302 = *a4;
		if (v17)
			*sub_14043F330(v18, &v302) = 1;
		else
			sub_14043F470(v18, &v302);
		sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 224, *v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x37Fu:
		v240 = sub_1403D90D0(qword_140C65898, a4[2]);
		if (!v240)
			goto LABEL_5;
		sub_1404739B0(v240, *v8, v8[3], v8[1], v8[4], v8[5]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x399u:
		LODWORD(v13) = sub_1405E1080(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x39Au:
		LODWORD(v13) = sub_1405E1140(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x39Cu:
		LODWORD(v13) = sub_1405E13A0(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x39Fu:
		LODWORD(v13) = sub_1405E1C10(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3A0u:
		LODWORD(v13) = sub_1405E1F20(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3A3u:
		LODWORD(v13) = sub_1405E0BD0(a1 + 26680, a4);
		return (unsigned int)v13;
	case 0x3A4u:
		LODWORD(v13) = sub_1405E1B40(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3A5u:
		v279 = qword_140C65898;
		*(_DWORD*)(a1 + 27360) = *a4 & 2;
		sub_1400EA3E0(*(_QWORD*)(v279 + 29504), "FriendshipAccountPersonalStatusUpdate", &unk_1409D0EFD);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x3A6u:
		LODWORD(v13) = sub_1405E16C0(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3AAu:
		LODWORD(v13) = sub_1405E1540(a1 + 26680, a4);
		return (unsigned int)v13;
	case 0x3ADu:
		LODWORD(v13) = sub_1405E1200(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3AEu:
		LODWORD(v13) = sub_1405E1940(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3B0u:
		LODWORD(v13) = sub_1405E0F80(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3B1u:
		LODWORD(v13) = sub_1405E1860(a1 + 26680, a4);
		return (unsigned int)v13;
	case 0x3B2u:
		LODWORD(v13) = sub_1405E1A00(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3B5u:
		LODWORD(v13) = sub_1405DFE00(a1 + 26680, (__int64*)a4);
		return (unsigned int)v13;
	case 0x3BAu:
		LODWORD(v13) = sub_1405E05D0(a1 + 26680, (unsigned __int16*)a4);
		return (unsigned int)v13;
	case 0x3BBu:
		LODWORD(v13) = sub_1405E08F0(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3BEu:
		LODWORD(v13) = sub_1405DFAB0(a1 + 26680, (unsigned __int16*)a4);
		return (unsigned int)v13;
	case 0x3C0u:
		LODWORD(v13) = sub_1405E09E0(a1 + 26680, (unsigned __int8*)a4);
		return (unsigned int)v13;
	case 0x3C3u:
		LODWORD(v13) = sub_1405E04B0(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3C4u:
		if (a4[2] == 30)
			sub_1405DF720(a1 + 26680);
		v237 = v8[2];
		a4 = *(unsigned int**)v8;
		v238 = byte_1409EA994;
		v239 = "FriendshipResult";
	LABEL_896:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), v239, v238, a4, v237);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x3C6u:
		LODWORD(v13) = sub_1405E02A0(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3C9u:
		LODWORD(v13) = sub_1405E0360(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3CAu:
		LODWORD(v13) = sub_1405E01D0(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3CBu:
		LODWORD(v13) = sub_1405E0080(a1 + 26680, (__int64)a4);
		return (unsigned int)v13;
	case 0x3CFu:
	case 0x3D0u:
	case 0x3D1u:
	case 0x3D2u:
		v280 = qword_140C65A48;
		if (!qword_140C65A48 || *(_QWORD*)(qword_140C65A48 + 24))
			goto LABEL_1012;
		sub_1404D6210(qword_140C65A48, (void(__fastcall***)(_QWORD))a1, (void(__fastcall***)(_QWORD))v7);
		LODWORD(v13) = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, unsigned int*))(*(_QWORD*)v280 + 88i64))(
			v280,
			a2,
			a3,
			v8);
		sub_1404D6210(v280, 0i64, 0i64);
		return (unsigned int)v13;
	case 0x3E1u:
		if (*a4)
		{
			if (*a4 == 1)
				sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "RealmBroadcastTierMedium", byte_1409EBA1C, *((_QWORD*)a4 + 1));
		}
		else
		{
			sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "RealmBroadcastTierHigh", byte_1409EB9E4, *((_QWORD*)a4 + 1));
		}
		LODWORD(v13) = 0;
		sub_140003890((__int64*)qword_140C658A0, 0x19u, 0i64, *((int**)v8 + 1), 0, 0i64);
		return (unsigned int)v13;
	case 0x405u:
		LODWORD(v13) = sub_1406026E0(a1 + 27664, a4);
		return (unsigned int)v13;
	case 0x410u:
		LODWORD(v13) = sub_140602CA0(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x414u:
		v269 = *(_QWORD*)(a1 + 27728);
		if (v269 && *(_QWORD*)(v269 + 72) == *(_QWORD*)a4)
		{
			*(_DWORD*)(v269 + 36) = a4[4];
			sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 4536i64);
			LODWORD(v13) = 0;
			return (unsigned int)v13;
		}
		v270 = *(_QWORD*)(a1 + 27736);
		if (!v270 || *(_QWORD*)(v270 + 72) != *(_QWORD*)a4)
			goto LABEL_5;
		LODWORD(v13) = 0;
		*(_DWORD*)(v270 + 36) = a4[4];
		return (unsigned int)v13;
	case 0x41Du:
		LODWORD(v13) = sub_140602180(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x41Fu:
		LODWORD(v13) = sub_1406021E0((_QWORD*)(a1 + 27664), (__int64)a4);
		return (unsigned int)v13;
	case 0x424u:
		*(_QWORD*)(a1 + 27696) = *(_QWORD*)a4;
		v266 = *((_QWORD*)a4 + 4);
		*(_DWORD*)(a1 + 27720) = 1;
		*(_QWORD*)(a1 + 27712) = v266;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Group_JoinRequest", byte_1409EA1EC, *((_QWORD*)a4 + 4));
		goto LABEL_138;
	case 0x427u:
		LODWORD(v13) = sub_140602320((_QWORD*)(a1 + 27664), (__int64)a4);
		return (unsigned int)v13;
	case 0x42Au:
		v209 = "bii";
		v210 = "GroupLeaderPhaseChanged";
		v288 = a4[1];
		v211 = *a4;
		goto LABEL_602;
	case 0x42Du:
		LODWORD(v13) = sub_140602AE0(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x42Fu:
		LODWORD(v13) = sub_140603560(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x431u:
		v276 = a1 + 27664;
		v277 = *(_QWORD*)(a1 + 27728);
		if (!v277 || *(_QWORD*)(v277 + 72) != *(_QWORD*)a4)
		{
			v278 = *(_QWORD*)(a1 + 27736);
			if (!v278 || *(_QWORD*)(v278 + 72) != *(_QWORD*)a4)
				goto LABEL_5;
		}
		sub_140607310(v276, (__int64)(a4 + 2));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x436u:
		LODWORD(v13) = sub_1406029B0(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x437u:
		LODWORD(v13) = sub_140602D20(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x438u:
		LODWORD(v13) = sub_140602ED0(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x43Au:
		LODWORD(v13) = sub_1403CC420(a1, a4);
		return (unsigned int)v13;
	case 0x441u:
		LODWORD(v13) = sub_140603A60(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x443u:
		v267 = a1 + 27664;
		v268 = *(_QWORD*)(a1 + 27728);
		if (!v268 || *(_QWORD*)(v268 + 72) != *(_QWORD*)a4)
			goto LABEL_5;
		sub_140604E20(v267, (__int64)(a4 + 2), a4[6]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x447u:
		LODWORD(v13) = sub_1406031D0(a1 + 27664, a4);
		return (unsigned int)v13;
	case 0x44Cu:
		LODWORD(v13) = sub_140603970(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x44Fu:
		LODWORD(v13) = sub_1406022C0(a1 + 27664, a4);
		return (unsigned int)v13;
	case 0x450u:
		LODWORD(v13) = sub_1406027E0(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x456u:
		LODWORD(v13) = sub_140602240((_QWORD*)(a1 + 27664), (__int64)a4);
		return (unsigned int)v13;
	case 0x45Au:
		v272 = sub_1403D9500(qword_140C65898, (int*)a4);
		if (!v272)
			goto LABEL_5;
		v274 = *(_QWORD*)(v273 + 29504);
		v291 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v8[4], (__m128)v8[6]),
			_mm_unpacklo_ps((__m128)v8[5], (__m128)0i64));
		sub_1400EA3E0(v274, "ZoneMapPing", byte_1409E9DC4, v272, &v291);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x45Bu:
		v275 = *(_QWORD*)(a1 + 27728);
		if (!v275 || *(_QWORD*)(v275 + 72) != *(_QWORD*)a4)
		{
			v275 = *(_QWORD*)(a1 + 27736);
			if (!v275 || *(_QWORD*)(v275 + 72) != *(_QWORD*)a4)
				goto LABEL_5;
		}
		sub_1406014B0(v275, a4[2], a4[3]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x461u:
		LODWORD(v13) = sub_140603610(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x462u:
		LODWORD(v13) = sub_140602C30(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x466u:
		LODWORD(v13) = sub_140603380(a1 + 27664, a4);
		return (unsigned int)v13;
	case 0x467u:
		LODWORD(v13) = sub_140603450(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x468u:
		LODWORD(v13) = sub_140604B70(a1 + 27664, (__int64)a4);
		return (unsigned int)v13;
	case 0x469u:
		v271 = *(_QWORD*)(a1 + 27728);
		if (!v271 || *(_QWORD*)(v271 + 72) != *(_QWORD*)a4)
			goto LABEL_5;
		sub_140426BC0(
			*(_QWORD*)(qword_140C65898 + 29504),
			a4[2],
			*((_QWORD*)a4 + 2),
			*((_QWORD*)a4 + 3),
			*((_DWORD**)a4 + 5),
			*((_QWORD*)a4 + 4),
			a4[3]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x46Fu:
		v251 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v251)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D190(v251, (__int64)v8);
		return (unsigned int)v13;
	case 0x470u:
		v253 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v253)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D370(v253, (__int64)v8);
		return (unsigned int)v13;
	case 0x476u:
		v254 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v254)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D530(v254, (__int64)v8);
		return (unsigned int)v13;
	case 0x478u:
		v256 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v256)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D6E0(v256, (__int64)v8);
		return (unsigned int)v13;
	case 0x479u:
		v255 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v255)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D5B0(v255, (__int64)v8);
		return (unsigned int)v13;
	case 0x47Au:
		v248 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v248)
			goto LABEL_5;
		LODWORD(v13) = sub_14057CDC0(v248, (__int64)v8);
		return (unsigned int)v13;
	case 0x480u:
		LODWORD(v13) = sub_1405828A0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x487u:
		v263 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v263)
			goto LABEL_5;
		LODWORD(v13) = sub_14057E3C0(v263, (unsigned __int64*)v8);
		return (unsigned int)v13;
	case 0x489u:
		v262 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v262)
			goto LABEL_5;
		LODWORD(v13) = sub_14057DBD0(v262, (__int64)v8, 1);
		return (unsigned int)v13;
	case 0x48Au:
		LODWORD(v13) = sub_140582790(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x48Bu:
		LODWORD(v13) = sub_1405825E0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x48Du:
		v252 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v252)
			goto LABEL_5;
		LODWORD(v13) = sub_14057CCE0(v252, (__int64)v8);
		return (unsigned int)v13;
	case 0x48Fu:
		v261 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v261)
			goto LABEL_5;
		LODWORD(v13) = sub_14057DAE0(v261, (__int64)v8);
		return (unsigned int)v13;
	case 0x491u:
		LODWORD(v13) = sub_140583A20(a1, a4);
		return (unsigned int)v13;
	case 0x493u:
		LODWORD(v13) = sub_140584190(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x495u:
		sub_140584B00(a1, *((_QWORD*)a4 + 1));
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildChange", &unk_1409D0EB3);
		goto LABEL_151;
	case 0x497u:
		LODWORD(v13) = sub_140583CA0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x49Fu:
		v265 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v265 || v8[4] != *(_DWORD*)(v265 + 792) || *((_QWORD*)v8 + 3) != *(_QWORD*)(v265 + 800))
			goto LABEL_5;
		LODWORD(v13) = 0;
		*(_DWORD*)(v265 + 892) = v8[8] & 2;
		return (unsigned int)v13;
	case 0x4A0u:
		v244 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v244)
			goto LABEL_5;
		LODWORD(v13) = sub_14057C650(v244, (__int64)v8);
		return (unsigned int)v13;
	case 0x4A1u:
		v257 = (_QWORD*)sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v257)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D880(v257, (__int64)v8);
		return (unsigned int)v13;
	case 0x4A2u:
		LODWORD(v13) = sub_140582630(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4A3u:
		v247 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v247)
			goto LABEL_5;
		LODWORD(v13) = sub_14057CC70(v247, (__int64)v8);
		return (unsigned int)v13;
	case 0x4A5u:
		v260 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v260)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D9F0(v260, (__int64)v8);
		return (unsigned int)v13;
	case 0x4ACu:
		LODWORD(v13) = sub_1405842C0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4AEu:
		v241 = sub_1403D90D0(qword_140C65898, *a4);
		v242 = v241;
		if (!v241)
			goto LABEL_5;
		sub_14045B940(v241, *((int**)v8 + 1));
		*(_DWORD*)(v242 + 152) = v8[4];
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UnitGuildNameplateChanged", byte_1409EDCCC, *v8);
		goto LABEL_995;
	case 0x4AFu:
		v243 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v243)
			goto LABEL_5;
		LODWORD(v13) = sub_14057C6E0(v243, (__int64)v8);
		return (unsigned int)v13;
	case 0x4B6u:
		v259 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v259)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D970(v259, (__int64)v8);
		return (unsigned int)v13;
	case 0x4BAu:
		LODWORD(v13) = sub_140582720(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4BDu:
		v258 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v258)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D900(v258, (__int64)v8);
		return (unsigned int)v13;
	case 0x4C1u:
		LODWORD(v13) = sub_1405826B0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4C3u:
		v246 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v246)
			goto LABEL_5;
		LODWORD(v13) = sub_14057C970(v246, (__int64)v8);
		return (unsigned int)v13;
	case 0x4C5u:
		v245 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v245)
			goto LABEL_5;
		LODWORD(v13) = sub_14057C830(v245, (__int64)v8);
		return (unsigned int)v13;
	case 0x4C9u:
	case 0x4CAu:
		LODWORD(v13) = sub_140582560(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4D0u:
		LODWORD(v13) = sub_140590A90(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4D4u:
		LODWORD(v13) = sub_140584240(a1, a4);
		return (unsigned int)v13;
	case 0x4DAu:
		LODWORD(v13) = sub_1403AA630((_QWORD*)a1, a4);
		return (unsigned int)v13;
	case 0x4DDu:
		sub_140429DA0(*(_QWORD*)(qword_140C65898 + 29504), (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x4DEu:
		LODWORD(v13) = sub_1404BAAD0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4DFu:
		LODWORD(v13) = sub_1404BA930(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x4E1u:
		LODWORD(v13) = sub_1404BAF60(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x4FEu:
		LODWORD(v13) = sub_1404BBB80(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x501u:
		LODWORD(v13) = sub_1404BA470(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x506u:
		LODWORD(v13) = sub_1404BA4F0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x507u:
		LODWORD(v13) = sub_1404BA660(a1, a4);
		return (unsigned int)v13;
	case 0x508u:
		LODWORD(v13) = sub_1404BB220(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x514u:
		LODWORD(v13) = sub_1404BBA70(a1, a4);
		return (unsigned int)v13;
	case 0x519u:
		LODWORD(v13) = sub_1404BB790(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x51Fu:
		LODWORD(v13) = sub_1404BBF60(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x526u:
		LODWORD(v13) = sub_1404BADA0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x527u:
		LODWORD(v13) = sub_1404BACA0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x533u:
		if (!a4)
			goto LABEL_208;
		LODWORD(v13) = sub_1405B1800(*(_QWORD**)(qword_140C659F0 + 824), (__int64)a4);
		return (unsigned int)v13;
	case 0x536u:
		LODWORD(v13) = sub_1404BB380(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x53Au:
		LODWORD(v13) = sub_1404BBF00(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x53Bu:
		LODWORD(v13) = sub_1404BB2F0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x547u:
		LODWORD(v13) = sub_140630CD0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x548u:
		LODWORD(v13) = sub_140630930(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x54Au:
		LODWORD(v13) = sub_140630B70(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x54Cu:
		LODWORD(v13) = sub_140630E50(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x54Du:
		LODWORD(v13) = sub_140630F30(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x54Eu:
		LODWORD(v13) = sub_140630850(a1, (__int64*)a4);
		return (unsigned int)v13;
	case 0x551u:
		v51 = *(_QWORD*)(a1 + 120);
		if (!v51)
			goto LABEL_208;
		sub_140458FE0(v51, *((_QWORD*)a4 + 1), *a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x553u:
		LODWORD(v13) = sub_1403DEFF0(a1, a4);
		return (unsigned int)v13;
	case 0x554u:
		LODWORD(v13) = sub_1403F3F10(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x555u:
		v283 = *(_QWORD*)(a1 + 29504);
		*(_DWORD*)(a1 + 7044) = *a4;
		sub_1400EA3E0(v283, "InstanceSetBusy", byte_1409E8F04);
		*(_DWORD*)(a1 + 28568) = 1;
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x55Fu:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemAuctionBidPosted", byte_1409EC93C, a4);
		goto LABEL_138;
	case 0x560u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemAuctionBidResult", byte_1409EC8B4, *a4, a4 + 2);
		goto LABEL_926;
	case 0x561u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemAuctionExpired", byte_1409EC404, a4);
		goto LABEL_138;
	case 0x562u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemAuctionOutbid", byte_1409EC4A4, a4);
		goto LABEL_138;
	case 0x563u:
		sub_14042B880(*(_QWORD*)(qword_140C65898 + 29504), (int*)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x564u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemAuctionWon", byte_1409EC424, a4);
		goto LABEL_138;
	case 0x565u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemCancelResult", byte_1409EC91C, a4[28], a4);
		goto LABEL_926;
	case 0x566u:
		LODWORD(v13) = sub_14062A3D0((_QWORD*)(a1 + 27592), (__int64)a4);
		return (unsigned int)v13;
	case 0x567u:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		v200 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a4);
		if (!v200)
			goto LABEL_5;
		LODWORD(v13) = 0;
		*(_DWORD*)(v200 + 128) = *((unsigned __int8*)v8 + 8);
		return (unsigned int)v13;
	case 0x568u:
		LODWORD(v13) = sub_1403B74E0(a1, (__int64*)a4);
		return (unsigned int)v13;
	case 0x569u:
		LODWORD(v13) = sub_1403B7300(a1, (__int64*)a4);
		return (unsigned int)v13;
	case 0x56Au:
		LODWORD(v13) = sub_1403B7770(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x56Bu:
		LODWORD(v13) = sub_1403B85A0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x56Cu:
		LODWORD(v13) = sub_1403B8540(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x56Du:
		v203 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a4);
		if (!v203)
			goto LABEL_5;
		sub_14056ABA0(v203, *((unsigned __int8*)v8 + 12), *((int**)v8 + 2), v8[2]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x56Fu:
		LODWORD(v13) = sub_1404D7090(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x579u:
		LODWORD(v13) = sub_1404D3CD0(a1, a4);
		return (unsigned int)v13;
	case 0x57Au:
		LODWORD(v13) = sub_1404D3C50(a1, a4);
		return (unsigned int)v13;
	case 0x594u:
		LODWORD(v13) = sub_1403B6A80(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x598u:
		LODWORD(v13) = sub_1403F3B50((_QWORD*)a1, a4);
		return (unsigned int)v13;
	case 0x599u:
		LODWORD(v13) = sub_1403F3D30((_QWORD*)a1, a4);
		return (unsigned int)v13;
	case 0x59Du:
		LODWORD(v13) = sub_1403F3E60(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x5A0u:
		v202 = sub_1403AC780(a1 + 160, (int*)a4);
		if (!v202)
			goto LABEL_5;
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "EldanForgeResult", "O", v202);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x5A1u:
		if (*(_QWORD*)(a1 + 32144))
			LODWORD(v13) = sub_1405FEA40(a1, a4);
		else
			LODWORD(v13) = v302;
		return (unsigned int)v13;
	case 0x5A2u:
		LODWORD(v13) = sub_14062A230(a1 + 27592, (__int64)a4);
		return (unsigned int)v13;
	case 0x5A3u:
		LODWORD(v13) = sub_14062A340(a1 + 27592, (__int64)a4);
		return (unsigned int)v13;
	case 0x5A7u:
		sub_140629B70((_QWORD*)(a1 + 27592), *(_QWORD*)a4);
		sub_1404308E0(*(_QWORD*)(qword_140C65898 + 29504), *(_QWORD*)v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x5A8u:
		LODWORD(v13) = sub_14062A2B0(a1 + 27592, (__int64)a4);
		return (unsigned int)v13;
	case 0x5B0u:
		LODWORD(v13) = 0;
		*(_DWORD*)(qword_140C65B98 + 432) = *a4;
		return (unsigned int)v13;
	case 0x5B8u:
		LODWORD(v13) = sub_1405C41C0(a1, a4);
		return (unsigned int)v13;
	case 0x5BCu:
		LODWORD(v13) = sub_1405C3C90();
		return (unsigned int)v13;
	case 0x5BEu:
		*(_DWORD*)(qword_140C65B98 + 340) = 1;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchFinished", byte_1409D1257);
		goto LABEL_151;
	case 0x5BFu:
		v227 = qword_140C65B98;
		*(_DWORD*)(qword_140C65B98 + 264) = *a4;
		*(_DWORD*)(v227 + 336) = 1;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchEntered", &unk_1409D1273);
		goto LABEL_151;
	case 0x5C0u:
		LODWORD(v13) = 0;
		*(_DWORD*)(qword_140C65B98 + 336) = 0;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchExited", byte_1409D12A3);
		return (unsigned int)v13;
	case 0x5C4u:
		LODWORD(v13) = sub_1405C3AF0(a1, a4);
		return (unsigned int)v13;
	case 0x5C6u:
		LODWORD(v13) = sub_1405C4140(a1, a4);
		return (unsigned int)v13;
	case 0x5CAu:
		LODWORD(v13) = sub_1405C39F0(a1, a4);
		return (unsigned int)v13;
	case 0x5CCu:
		LODWORD(v13) = sub_1405C3C00(a1, a4);
		return (unsigned int)v13;
	case 0x5D9u:
		LODWORD(v13) = sub_1405C0AD0((_DWORD*)qword_140C65B98, a4);
		return (unsigned int)v13;
	case 0x5DCu:
		LODWORD(v13) = sub_1405C1850(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x5DFu:
		LODWORD(v13) = sub_1405C0B80(qword_140C65B98, (__int64)a4);
		return (unsigned int)v13;
	case 0x5E1u:
		LODWORD(v13) = sub_1405C3D30(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x5E3u:
		LODWORD(v13) = sub_1405C3E40(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x5E5u:
		v229 = qword_140C65B98;
		v230 = 2i64;
		v231 = qword_140C65B98 + 264 - (_QWORD)a4;
		do
		{
			v232 = *v8++;
			*(unsigned int*)((char*)v8 + v231 + 76) = v232;
			--v230;
		} while (v230);
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PVPDeathmatchPoolUpdated",
			"ii",
			*(unsigned int*)(v229 + 344),
			*(_DWORD*)(v229 + 348));
		goto LABEL_926;
	case 0x5E6u:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "MatchingPvpInactivityAlert", L"i", *a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x5E7u:
		v13 = (__int16*)qword_140C65B98;
		sub_1405C50A0((__int64*)(qword_140C65B98 + 384), a4);
		if (*((_QWORD*)v13 + 49) != 1i64)
			goto LABEL_5;
		sub_1405C26A0((__int64)(v13 + 132), 0, v233);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x5E8u:
		v228 = (unsigned int*)(qword_140C65B98 + 264);
		*(_DWORD*)(qword_140C65B98 + 280) = *a4;
		LODWORD(v13) = sub_1405C18D0(v228, a4 + 1);
		return (unsigned int)v13;
	case 0x5E9u:
		LODWORD(v13) = sub_1405C1A30(qword_140C65B98 + 264, a4);
		return (unsigned int)v13;
	case 0x5EAu:
		LODWORD(v13) = sub_1405C18D0((unsigned int*)(qword_140C65B98 + 264), a4);
		return (unsigned int)v13;
	case 0x5EDu:
		LODWORD(v13) = sub_1405C11C0(qword_140C65B98, (int*)a4);
		return (unsigned int)v13;
	case 0x5EEu:
		LODWORD(v13) = sub_1405C1950((__int64*)(qword_140C65B98 + 264), (int**)a4);
		return (unsigned int)v13;
	case 0x5F1u:
		LODWORD(v13) = sub_1405C0E90(qword_140C65B98, a4);
		return (unsigned int)v13;
	case 0x5F2u:
		LODWORD(v13) = sub_1405C2440(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x600u:
		LODWORD(v13) = sub_1405C0F00(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x604u:
		LODWORD(v13) = sub_1405C24A0(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x60Au:
		LODWORD(v13) = sub_1405C3F50(a1, a4);
		return (unsigned int)v13;
	case 0x60Du:
		LODWORD(v13) = sub_1405C1EA0(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x612u:
		LODWORD(v13) = sub_1405C1F00(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x614u:
		LODWORD(v13) = sub_1405C1CB0(qword_140C65B98 + 264, (__int64)a4);
		return (unsigned int)v13;
	case 0x616u:
		LODWORD(v13) = sub_1405C1AB0(qword_140C65B98 + 264, (int*)a4);
		return (unsigned int)v13;
	case 0x61Au:
		LODWORD(v13) = sub_1405C1F60(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x61Fu:
		LODWORD(v13) = sub_1405C2310(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x621u:
		LODWORD(v13) = sub_1405C21D0(qword_140C65B98 + 264);
		return (unsigned int)v13;
	case 0x623u:
		LODWORD(v13) = sub_1405C1FC0((_DWORD*)(qword_140C65B98 + 264), (int*)a4);
		return (unsigned int)v13;
	case 0x628u:
		LODWORD(v13) = sub_1405C0E00(qword_140C65B98, (int*)a4);
		return (unsigned int)v13;
	case 0x634u:
		LODWORD(v13) = 0;
		*(_DWORD*)(a1 + 28836) = *a4;
		return (unsigned int)v13;
	case 0x636u:
		LODWORD(v13) = sub_14057A630(a1, (int*)a4, v4, v5);
		return (unsigned int)v13;
	case 0x638u:
		LODWORD(v13) = sub_14057A830(a1, (int*)a4, v4);
		return (unsigned int)v13;
	case 0x639u:
		LODWORD(v13) = sub_14057A790(a1);
		return (unsigned int)v13;
	case 0x63Fu:
		LODWORD(v13) = sub_1403CBA60(a1, a4);
		return (unsigned int)v13;
	case 0x640u:
		LODWORD(v13) = sub_1403CD760(a1, a4);
		return (unsigned int)v13;
	case 0x642u:
		LODWORD(v13) = sub_14049C1A0(a1, *a4, a4[1], a4[2]);
		return (unsigned int)v13;
	case 0x64Cu:
		sub_14042B610(*(_QWORD*)(qword_140C65898 + 29504), a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x64Du:
		sub_14042B770(*(_QWORD*)(qword_140C65898 + 29504), a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x667u:
		if (!*(_QWORD*)(a1 + 120)
			|| !qword_140C65950
			|| *(_DWORD*)(a1 + 26180) != 29
			|| !sub_1403D90D0(qword_140C65898, *a4))
		{
			goto LABEL_5;
		}
		LODWORD(v13) = sub_140618ED0(v42, (int*)v8);
		return (unsigned int)v13;
	case 0x669u:
		LODWORD(v13) = sub_1406120B0(a1, a4);
		return (unsigned int)v13;
	case 0x66Cu:
		if (!*(_QWORD*)(a1 + 120) || *(_DWORD*)(a1 + 26180) != 30)
			goto LABEL_5;
		v36 = *a4;
		v37 = *(_QWORD*)(qword_140C65898 + 29504);
		v13 = (__int16*)&unk_1409EDA84;
		if (a4[1])
		{
			v38 = sub_140432A10(a1, a4[2]);
			if (v38)
				v13 = sub_14034BDD0(v39, *(_DWORD*)(*(_QWORD*)(v38 + 24) + 16i64));
		}
		sub_1400EA3E0(v37, "SettlerBuildResult", "iS", v36, v13);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x66Du:
		if (!*(_QWORD*)(a1 + 120) || *(_DWORD*)(a1 + 26180) != 30 || !a4[1] || !sub_1403D90D0(qword_140C65898, *a4))
			goto LABEL_5;
		sub_14042DFD0(*(_QWORD*)(qword_140C65898 + 29504), v8);
		LODWORD(v13) = 0;
		sub_140437A10((_QWORD*)qword_140C658D8, 0x62u, 0, 0i64, 0, 0, 1);
		return (unsigned int)v13;
	case 0x66Eu:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		LODWORD(v13) = sub_140618400(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x66Fu:
		v13 = *(__int16**)(qword_140C65898 + 29504);
		v99 = sub_140432960(qword_140C65960, *a4);
		if (!v99)
			goto LABEL_5;
		v101 = sub_14034BDD0(v100, *(_DWORD*)(*(_QWORD*)(v99 + 8) + 112i64));
		sub_1400EA3E0((__int64)v13, "SettlerHubReward", L"S", v101);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x671u:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		LODWORD(v13) = sub_1406185A0(a1, a4);
		return (unsigned int)v13;
	case 0x672u:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		sub_14042DCB0(*(_QWORD*)(qword_140C65898 + 29504), *a4, *((int**)a4 + 1));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x673u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SettlerInfrastructureComplete", &unk_1409D1143);
		goto LABEL_151;
	case 0x674u:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		v40 = (_DWORD*)sub_1403D2D60(a1, *a4);
		v41 = v40;
		if (!v40)
			goto LABEL_5;
		if (v40[4] != v8[1])
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v40 + 8i64))(v40);
		v41[5] = v8[2];
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SettlerInfrastructureUpdated", byte_1409D118B);
		goto LABEL_151;
	case 0x675u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SettlerInfrastructureStarted", &unk_1409D11C2);
		goto LABEL_151;
	case 0x676u:
		LODWORD(v13) = sub_1403CB7F0(a1, a4);
		return (unsigned int)v13;
	case 0x677u:
		LODWORD(v13) = sub_1406122B0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x678u:
		LODWORD(v13) = sub_1403CB8E0(a1, a4);
		return (unsigned int)v13;
	case 0x679u:
		LODWORD(v13) = sub_140612610(a1, a4);
		return (unsigned int)v13;
	case 0x67Au:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		v35 = sub_140617410(a1, *a4);
		v32 = (_DWORD*)v35;
		if (!v35)
			goto LABEL_5;
		v302 = v8[1];
		v303 = v8[2];
		sub_140617E50(v35 + 40, &v302);
		goto LABEL_136;
	case 0x67Bu:
		LODWORD(v13) = sub_140612180(a1, a4);
		return (unsigned int)v13;
	case 0x67Cu:
		LODWORD(v13) = sub_140612740(a1, a4);
		return (unsigned int)v13;
	case 0x67Eu:
		sub_14042DB70(*(_QWORD*)(qword_140C65898 + 29504), (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x67Fu:
		LODWORD(v13) = sub_140612850(a1, a4);
		return (unsigned int)v13;
	case 0x680u:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		v33 = sub_140617410(a1, *a4);
		if (!v33 || *(_DWORD*)v33 != 1)
			goto LABEL_5;
		v34 = *(_QWORD*)(v33 + 152);
		*(_DWORD*)(v33 + 104) = v8[1];
		goto LABEL_137;
	case 0x681u:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		v31 = (_DWORD*)sub_140617410(a1, *a4);
		v32 = v31;
		if (!v31 || *v31 != 1)
			goto LABEL_5;
		v302 = v8[1];
		sub_1400293C0((__int64)(v31 + 18), (__int64)&v291, (int*)&v302);
	LABEL_136:
		v34 = *((_QWORD*)v32 + 19);
	LABEL_137:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UpdateSoldierBuild", L"#", v34);
	LABEL_138:
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x687u:
	case 0x688u:
		sub_1403C8690(a1);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x689u:
		sub_1403C85C0(a1, a4, v7, 0x140000000i64, v286, v287, v289);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x68Bu:
		sub_14042A1A0(*(_QWORD*)(qword_140C65898 + 29504), a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x68Du:
		LODWORD(v13) = sub_1403A8E10(a1, a4);
		return (unsigned int)v13;
	case 0x68Fu:
		LODWORD(v13) = sub_1403C0A80(a1, a4);
		return (unsigned int)v13;
	case 0x694u:
		LODWORD(v13) = sub_140409FF0(a1, (FILETIME*)a4);
		return (unsigned int)v13;
	case 0x6B3u:
		LODWORD(v13) = sub_14056F800(a1, a4);
		return (unsigned int)v13;
	case 0x6B4u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_14056E380(qword_140C65970);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6B5u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_14056E520(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6B6u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_140572030(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6B7u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_140572120(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6B8u:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		if (qword_140C65970 && sub_140722000(a1, a4[1]))
			*sub_140032640(v30 + 160, v8 + 1) = *v8;
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6B9u:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_140571ED0(a1, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6BAu:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_14056ED20(a1, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6BBu:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_14056F150(a1, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6BCu:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_5;
		sub_1404927D0((__int64)a4);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SetPlayerPath", &unk_1409D1142);
		sub_1405B3A80();
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6BEu:
		if (!*a4)
			*(_DWORD*)(qword_140C65970 + 12) = *((unsigned __int8*)a4 + 4);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PathUnlockResult", byte_1409EBB94, *a4);
		goto LABEL_995;
	case 0x6BFu:
		if (!*(_QWORD*)(a1 + 120) || !qword_140C65970)
			goto LABEL_5;
		sub_14056EA80(a1, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6DBu:
		sub_14042B720(*(_QWORD*)(qword_140C65898 + 29504), a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6DDu:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PostItemAuctionResult", byte_1409EC8D4, *a4, a4 + 2);
		goto LABEL_926;
	case 0x6DFu:
		LODWORD(v13) = sub_1404D6AF0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x6EAu:
		LODWORD(v13) = 0;
		if (qword_140C658A0)
		{
			v284 = sub_14034BDD0(a1, 684667);
			sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, (int*)v284, 0, 0i64);
		}
		return (unsigned int)v13;
	case 0x6F1u:
		LODWORD(v13) = sub_1405F5170(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x6F5u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PublicEventBombDropped", byte_1409ED424, *a4, a4[1]);
		goto LABEL_926;
	case 0x6F6u:
		v209 = (char*)&unk_1409ED45C;
		v210 = "PublicEventBombStatus";
		v288 = *a4;
		v211 = a4[1];
	LABEL_602:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), v210, v209, a4[2], v211, v288);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x6F9u:
		LODWORD(v13) = sub_1405F5610(a1, a4);
		return (unsigned int)v13;
	case 0x6FDu:
		LODWORD(v13) = sub_1405F53F0(a1, a4);
		return (unsigned int)v13;
	case 0x6FEu:
		LODWORD(v13) = sub_1405F54C0(a1, a4);
		return (unsigned int)v13;
	case 0x6FFu:
		LODWORD(v13) = sub_1405F5300(a1, a4);
		return (unsigned int)v13;
	case 0x700u:
		sub_140496B10(a1, (int*)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x71Au:
		LODWORD(v13) = sub_1406042B0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x71Cu:
		LODWORD(v13) = sub_14040AA40(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x723u:
		v155 = sub_14034BDD0(a1, *a4);
		if (v155)
		{
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"GenericFloater",
				"US",
				*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
				v155);
			LODWORD(v13) = 0;
		}
		else
		{
		LABEL_208:
			LODWORD(v13) = -2147467259;
		}
		return (unsigned int)v13;
	case 0x724u:
		sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"GenericFloater",
			"US",
			*(unsigned int*)(*(_QWORD*)(a1 + 120) + 8i64),
			*(_QWORD*)a4);
	LABEL_926:
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x737u:
		v156 = *a4;
		v157 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v8[1])
			sub_1400EA3E0(v157, "GenericMapNodeEnabled", "R", v156);
		else
			sub_1400EA3E0(v157, "GenericMapNodeDisabled", "R", v156);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x738u:
		LODWORD(v13) = sub_140641AE0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x73Au:
		LODWORD(v13) = sub_140641FA0(a1, a4);
		return (unsigned int)v13;
	case 0x74Au:
		v154 = sub_1403D90D0(a1, *a4);
		LODWORD(v13) = 0;
		if (v154)
			sub_14046C8E0(v154, v8[4], v8[1], *((unsigned __int16*)v8 + 10), 1065353216, 0, 1, 1);
		return (unsigned int)v13;
	case 0x753u:
		LODWORD(v13) = sub_140641BD0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x755u:
		LODWORD(v13) = sub_140641640(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x757u:
		sub_14043B7B0(a1, *a4, v7, a4[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x758u:
		sub_1404315C0(*(_QWORD*)(qword_140C65898 + 29504), (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x759u:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "StoryPanelDialog_Hide", &unk_1409D1096);
	LABEL_151:
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x75Au:
		LODWORD(v13) = sub_140642060(a1, a4);
		return (unsigned int)v13;
	case 0x75Bu:
		LODWORD(v13) = sub_140642240(a1, a4);
		return (unsigned int)v13;
	case 0x75Cu:
		LODWORD(v13) = sub_140641D80(a1, (float*)a4);
		return (unsigned int)v13;
	case 0x75Fu:
		LODWORD(v13) = sub_1403F38B0(a1, a4);
		return (unsigned int)v13;
	case 0x767u:
		LODWORD(v13) = sub_1405828F0(a1, a4);
		return (unsigned int)v13;
	case 0x768u:
		LODWORD(v13) = sub_1405827F0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x769u:
		v264 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v264)
			goto LABEL_5;
		LODWORD(v13) = sub_14057E580(v264, (__int64)v8);
		return (unsigned int)v13;
	case 0x76Au:
		LODWORD(v13) = sub_1405838B0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x76Bu:
		LODWORD(v13) = sub_1405834D0(a1, a4);
		return (unsigned int)v13;
	case 0x76Cu:
		LODWORD(v13) = sub_140582850(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x76Du:
		LODWORD(v13) = sub_140582FA0(a1, a4);
		return (unsigned int)v13;
	case 0x77Du:
		LODWORD(v13) = sub_1406011C0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x77Eu:
		LODWORD(v13) = sub_1405781D0(a1, a4);
		return (unsigned int)v13;
	case 0x77Fu:
		LODWORD(v13) = sub_1403C09B0(a1, a4);
		return (unsigned int)v13;
	case 0x784u:
		LODWORD(v13) = sub_140578050((__int64*)qword_140C65B78, *a4, 0);
		return (unsigned int)v13;
	case 0x785u:
		LODWORD(v13) = sub_140578350((const void**)a1, a4);
		return (unsigned int)v13;
	case 0x78Cu:
		LODWORD(v13) = sub_1403F42E0(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x7C7u:
		LODWORD(v13) = sub_140636AC0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x7C8u:
		LODWORD(v13) = sub_140636840(a1, (int**)a4);
		return (unsigned int)v13;
	case 0x7C9u:
		LODWORD(v13) = sub_1406369C0(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x7CAu:
		LODWORD(v13) = sub_140636280(a1, a4);
		return (unsigned int)v13;
	case 0x7CBu:
		LODWORD(v13) = sub_1406368D0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x7CDu:
		LODWORD(v13) = sub_1404D16D0(qword_140C65A38, a4, 0);
		return (unsigned int)v13;
	case 0x7D0u:
		LODWORD(v13) = sub_1404D1A40(a1, a4);
		return (unsigned int)v13;
	case 0x7D3u:
		LODWORD(v13) = sub_1404D1640(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x7D5u:
		LODWORD(v13) = sub_1404D18E0(a1, a4);
		return (unsigned int)v13;
	case 0x7E4u:
		LODWORD(v13) = 0;
		*(_OWORD*)(a1 + 32512) = 0i64;
		*(_QWORD*)(a1 + 32528) = 0i64;
		return (unsigned int)v13;
	case 0x7E5u:
		*(__m128*)(a1 + 32512) = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * a4, (__m128)a4[2]),
			_mm_unpacklo_ps((__m128)a4[1], (__m128)0i64));
		v158 = a4[3];
		*(_DWORD*)(a1 + 32532) = 1;
		*(_DWORD*)(a1 + 32528) = v158;
		sub_1403AA3A0((__m128*)a1);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x7F2u:
		LODWORD(v13) = sub_1403DAF90(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x7F4u:
		v134 = sub_140561C30(qword_140C65B70, *a4);
		v13 = (__int16*)v134;
		if (!v134)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v134 + 8i64))(v134);
		sub_14053E5A0((__int64)v13, (__int64)v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x7F5u:
		v137 = sub_140561C30(qword_140C65B70, *a4);
		v138 = v137;
		if (!v137)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v137 + 8i64))(v137);
		v139 = *(__int64**)(v138 + 72);
		if (!v139)
			goto LABEL_5;
		while (*((_DWORD*)v139 + 16) != v8[1])
		{
			v139 = (__int64*)v139[5];
			if (!v139)
			{
				LODWORD(v13) = 0;
				return (unsigned int)v13;
			}
		}
		v140 = *v139;
		if (v140)
		{
			while (*(_DWORD*)(v140 + 100) != v8[2])
			{
				v140 = *(_QWORD*)(v140 + 32);
				if (!v140)
				{
					LODWORD(v13) = 0;
					return (unsigned int)v13;
				}
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v140 + 16i64))(v140);
			LODWORD(v13) = 0;
		}
		else
		{
		LABEL_5:
			LODWORD(v13) = 0;
		}
		return (unsigned int)v13;
	case 0x7F6u:
		LODWORD(v13) = sub_1405A5800(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x7F7u:
		v148 = sub_14046A300(*(_QWORD*)(a1 + 120), *a4, a4[1], a4[2]);
		v13 = (__int16*)v148;
		if (!v148)
			goto LABEL_5;
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v148 + 80) + 8i64))(*(_QWORD*)(v148 + 80));
		(**(void(__fastcall***)(__int16*, __int64))v13)(v13, 1i64);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x7F8u:
		v136 = sub_140561C30(qword_140C65B70, *a4);
		v13 = (__int16*)v136;
		if (!v136)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v136 + 8i64))(v136);
		sub_14053F340((__int64)v13, (__int64)v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x7F9u:
		LODWORD(v13) = sub_1405A5550(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x7FAu:
		LODWORD(v13) = sub_1405A56B0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x7FBu:
		v135 = sub_140561C30(qword_140C65B70, *a4);
		v13 = (__int16*)v135;
		if (!v135)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v135 + 8i64))(v135);
		sub_14053F090(v13, (__int64)v8, v4, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x7FCu:
		LODWORD(v13) = sub_1405A5010(a1, a4);
		return (unsigned int)v13;
	case 0x7FDu:
		LODWORD(v13) = sub_1405A4E60(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x7FEu:
		v147 = sub_140561C30(qword_140C65B70, *a4);
		v13 = (__int16*)v147;
		if (!v147)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v147 + 8i64))(v147);
		sub_14053E1B0((__int64)v13, 8u, 0, 0);
		if (!qword_140C65B70)
			goto LABEL_5;
		sub_140561AD0(qword_140C65B70, (__int64)v13);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x7FFu:
		LODWORD(v13) = sub_1405A51A0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x804u:
		v150 = *(_QWORD*)(a1 + 120);
		if (!v150)
			goto LABEL_5;
		sub_14046A3D0(v150, *a4, a4[1], a4[2], a4[3]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x80Eu:
		v149 = *(_QWORD*)(a1 + 120);
		if (v149)
			sub_14046B440(v149);
		LODWORD(v13) = 0;
		*(_DWORD*)(a1 + 29056) = *v8;
		return (unsigned int)v13;
	case 0x80Fu:
		LODWORD(v13) = sub_1405A5A10(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x810u:
		LODWORD(v13) = sub_1405A5980(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x811u:
		LODWORD(v13) = sub_1405A5AA0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x812u:
		v141 = sub_140561C30(qword_140C65B70, *a4);
		v13 = (__int16*)v141;
		if (!v141)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v141 + 8i64))(v141);
		sub_14053F620((__int64)v13, v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x813u:
		v142 = (_QWORD*)sub_140561C30(qword_140C65B70, *a4);
		if (!v142)
			goto LABEL_5;
		v13 = (__int16*)v142[9];
		if (!v13)
			goto LABEL_5;
		while (*((_DWORD*)v13 + 16) != v8[1])
		{
			v13 = (__int16*)*((_QWORD*)v13 + 5);
			if (!v13)
				return (unsigned int)v13;
		}
		(*(void(__fastcall**)(_QWORD*))(*v142 + 8i64))(v142);
		sub_140717DF0((__int64)v13, *((_DWORD*)v13 + 20) - 1);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x814u:
		LODWORD(v13) = sub_1403BEE40((__int64*)a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x815u:
		LODWORD(v13) = sub_1403BED60((__int64*)a1, a4);
		return (unsigned int)v13;
	case 0x816u:
		LODWORD(v13) = sub_1403BE940((_QWORD*)a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x817u:
		LODWORD(v13) = sub_1403BEA90((__int64*)a1, a4);
		return (unsigned int)v13;
	case 0x818u:
		v146 = sub_140561C30(qword_140C65B70, *a4);
		v13 = (__int16*)v146;
		if (!v146)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v146 + 8i64))(v146);
		sub_14053F710((__int64)v13, (__int64)v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x819u:
		v143 = sub_140561C30(qword_140C65B70, a4[1]);
		v144 = v143;
		if (!v143)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v143 + 8i64))(v143);
		v145 = *(_QWORD*)(v144 + 72);
		if (!v145)
			goto LABEL_5;
		break;
	case 0x81Au:
		LODWORD(v13) = sub_140633D80(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x81Bu:
		LODWORD(v13) = sub_140633FE0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x81Cu:
		LODWORD(v13) = sub_1406342A0(a1, a4);
		return (unsigned int)v13;
	case 0x832u:
		LODWORD(v13) = sub_1403CD550(a1, a4);
		return (unsigned int)v13;
	case 0x83Au:
		LODWORD(v13) = sub_1403DA300(a1);
		return (unsigned int)v13;
	case 0x83Cu:
		LODWORD(v13) = sub_14043E580(a1, (LARGE_INTEGER)v12);
		return (unsigned int)v13;
	case 0x845u:
		v14 = *(float*)&dword_140C44F18;
		*(_DWORD*)(a1 + 29396) = a4[1];
		LODWORD(v13) = 0;
		v15 = (float)(int)*a4;
		*(float*)(a1 + 29376) = v15;
		*(float*)(a1 + 29380) = v15;
		v16 = a4[2];
		*(_DWORD*)(a1 + 29392) = v12;
		*(_DWORD*)(a1 + 29384) = v16;
		*(float*)(a1 + 29388) = v14 / (float)v16;
		return (unsigned int)v13;
	case 0x848u:
		LODWORD(v13) = sub_1403F4200(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x849u:
		LODWORD(v13) = sub_1403F4170(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x84Cu:
		sub_1405E57F0(a1 + 5784, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x853u:
		sub_1405E6690(a1 + 5784, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x854u:
		sub_1405E6830(a1 + 5784, (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x856u:
		sub_1405E4CD0(a1 + 5784, a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x85Du:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "TradeSkillSigilResult", L"i", *a4);
		goto LABEL_995;
	case 0x85Eu:
		sub_1405E5760((__int64*)(a1 + 5784), (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x85Fu:
		LODWORD(v13) = sub_1403B6760(a1, a4);
		return (unsigned int)v13;
	case 0x860u:
		sub_1405E52F0((__int64*)(a1 + 5784), (int*)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x861u:
		v19 = *a4;
		LODWORD(v13) = 0;
		if (*a4)
		{
			*(_DWORD*)(a1 + 6964) = 1;
			*(_DWORD*)(a1 + 6968) = v12 + 1000 * v19;
		}
		else
		{
			*(_DWORD*)(a1 + 6968) = v12;
			*(_DWORD*)(a1 + 6964) = 0;
		}
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ProfessionUpdated", &unk_1409D135E);
		return (unsigned int)v13;
	case 0x86Fu:
		v62 = sub_1403D90D0(a1, *a4);
		if (!v62)
			goto LABEL_5;
		sub_14047B820(v62, (__int64)v8, v4, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x876u:
		LODWORD(v13) = sub_1403DC950(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x879u:
		LODWORD(v13) = sub_1403DC300(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x87Fu:
		v77 = sub_1403D90D0(a1, *a4);
		if (!v77)
			goto LABEL_5;
		sub_14045D310(v77, (__int64)v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x880u:
		v78 = sub_1403D90D0(a1, *a4);
		if (!v78)
			goto LABEL_5;
		v79 = v8[1];
		if (v79 >= 28)
			goto LABEL_5;
		sub_14045D9C0(v78, v8, v79);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x881u:
		v80 = *(_QWORD*)(a1 + 25744);
		LODWORD(v13) = 0;
		if (v80)
			*(_DWORD*)(v80 + 1292) = *a4;
		return (unsigned int)v13;
	case 0x885u:
		if (*(_QWORD*)(a1 + 120) != sub_1403D90D0(a1, *a4))
			goto LABEL_5;
		sub_1403CB770(v83, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x889u:
		LODWORD(v13) = sub_1403DEDE0(a1, (int*)a4, v4, v5);
		return (unsigned int)v13;
	case 0x88Au:
		v120 = sub_1403D90D0(a1, *a4);
		if (!v120)
			goto LABEL_5;
		v121 = *(unsigned int*)(v120 + 8);
		*(_DWORD*)(v120 + 13836) = v8[1];
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UnitMiniMapMarkerChanged", byte_1409EDC1C, v121);
		goto LABEL_995;
	case 0x88Cu:
		LODWORD(v13) = sub_1403DB870(a1, (int*)a4, v4, v5);
		return (unsigned int)v13;
	case 0x892u:
		v122 = sub_1403D90D0(a1, *a4);
		LODWORD(v13) = 0;
		v123 = v122;
		if (v122)
		{
			v124 = qword_140C65898;
			*(_DWORD*)(v122 + 6312) = 1;
			v125 = *(_QWORD*)(v124 + 120);
			if (v125)
			{
				if (*(_DWORD*)(v123 + 8) == *(_DWORD*)(v125 + 8))
					*(_DWORD*)(v124 + 28568) = 1;
			}
		}
		return (unsigned int)v13;
	case 0x893u:
		v43 = *(_QWORD*)(a1 + 120);
		LODWORD(v13) = 0;
		if (v43)
			v44 = *(_DWORD*)(v43 + 8);
		else
			v44 = 0;
		if (v44 && v44 == a4[1])
		{
			*(_DWORD*)(a1 + 28388) = 2;
			sub_14042CEA0(*(_QWORD*)(a1 + 29504));
		}
		sub_14042CF30(*(_QWORD*)(a1 + 29504));
		return (unsigned int)v13;
	case 0x894u:
		LODWORD(v13) = sub_1403DE240(a1, (int*)a4, v7, v5);
		return (unsigned int)v13;
	case 0x895u:
		v45 = *(_QWORD*)(a1 + 120);
		LODWORD(v13) = 0;
		if (v45)
			v46 = *(_DWORD*)(v45 + 8);
		else
			v46 = 0;
		if (v46 && (v46 == *a4 || v46 == a4[1]))
		{
			v47 = *(_QWORD*)(a1 + 29504);
			*(_DWORD*)(a1 + 28388) = 3;
			sub_14042CEA0(v47);
			v50 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 264i64);
			if (*v8 == v50 || v8[1] == v50)
				sub_14055BAC0((_QWORD*)a1, v48, v49, v5);
		}
		return (unsigned int)v13;
	case 0x896u:
		LODWORD(v13) = sub_1403DDEC0(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x897u:
		LODWORD(v13) = sub_1403DB920(a1, a4);
		return (unsigned int)v13;
	case 0x89Au:
		v69 = sub_1403D90D0(a1, *a4);
		v70 = v69;
		if (v69)
			sub_14045C500(v69, v8[1]);
		if (v70 != *(_QWORD*)(a1 + 25744) || !v8[1])
			goto LABEL_5;
		sub_1403A2550(a1);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x89Bu:
		v61 = (_DWORD*)sub_1403D90D0(a1, *a4);
		if (!v61)
			goto LABEL_5;
		sub_14047B710(v61, (__int64)v8, v4, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x89Fu:
		LODWORD(v13) = sub_1403DB4A0(a1, a4);
		return (unsigned int)v13;
	case 0x8A1u:
		sub_1405FF100(*(_QWORD**)(a1 + 32144), *a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8A2u:
		LODWORD(v13) = sub_1403DB510(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x8A3u:
		LODWORD(v13) = sub_1403DB610(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x8A5u:
		LODWORD(v13) = sub_1403DB050(a1, (__int64)a4, v4, v5);
		return (unsigned int)v13;
	case 0x8A6u:
		LODWORD(v13) = sub_1403DB1F0(a1, a4);
		return (unsigned int)v13;
	case 0x8A8u:
		LODWORD(v13) = sub_1403DC010(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x8ACu:
		v127 = sub_1403D90D0(a1, *a4);
		if (!v127)
			goto LABEL_5;
		*(_DWORD*)(v127 + 532) = v8[1];
		v128 = *(_QWORD*)(v127 + 24);
		if (!v128 || !*(_DWORD*)(v128 + 168))
			goto LABEL_5;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UnitMiniMapMarkerChanged", byte_1409EDC1C, *v8);
	LABEL_995:
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8B2u:
		v102 = sub_1403D90D0(a1, *a4);
		if (!v102)
			goto LABEL_5;
		v104 = *(int**)(v102 + 24);
		if (!v104)
			goto LABEL_5;
		sub_1404842A0(v103, *v104, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8B3u:
		LODWORD(v13) = sub_1403DED30(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x8B4u:
		v108 = sub_1403D90D0(a1, *a4);
		if (!v108)
			goto LABEL_5;
		v110 = *(int**)(v108 + 24);
		if (!v110)
			goto LABEL_5;
		sub_140484420(v109, *v110, v8[1], v8[2]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8B5u:
		v105 = sub_1403D90D0(a1, *a4);
		if (!v105)
			goto LABEL_5;
		v107 = *(int**)(v105 + 24);
		if (!v107)
			goto LABEL_5;
		sub_140484360(v106, *v107, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8B6u:
		v98 = sub_1403D90D0(a1, *a4);
		if (!v98)
			goto LABEL_5;
		sub_14047C4B0(v98, (__int64)v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8B7u:
		LODWORD(v13) = sub_140611EB0(a1, a4);
		return (unsigned int)v13;
	case 0x8B8u:
		v111 = sub_1403D90D0(a1, *a4);
		if (!v111)
			goto LABEL_5;
		LODWORD(v13) = 0;
		*(_DWORD*)(v111 + 14080) = v8[1];
		return (unsigned int)v13;
	case 0x8BBu:
		LODWORD(v13) = 0;
		v112 = sub_1403D90D0(a1, *a4);
		if (v112)
		{
			for (i = 0; i < v8[1]; ++i)
			{
				v114 = *((_QWORD*)v8 + 1);
				v115 = *(_DWORD*)(v114 + 8i64 * i + 4);
				if (v115)
				{
					if (v115 == 2)
						sub_14047E920(v112, *(_DWORD*)(v114 + 8i64 * i));
				}
				else
				{
					sub_14047E7E0(v112, *(_DWORD*)(v114 + 8i64 * i));
				}
			}
		}
		return (unsigned int)v13;
	case 0x8BCu:
		v116 = sub_1403D90D0(a1, *a4);
		if (!v116)
			goto LABEL_5;
		v117 = v8[2];
		if (v117)
		{
			v118 = v117 - 1;
			if (v118)
			{
				v119 = v118 - 1;
				if (v119)
				{
					if (v119 != 1)
						goto LABEL_5;
					sub_14047E9C0(v116, v8[1]);
					LODWORD(v13) = 0;
				}
				else
				{
					sub_14047E920(v116, v8[1]);
					LODWORD(v13) = 0;
				}
			}
			else
			{
				sub_14047E880(v116, v8[1]);
				LODWORD(v13) = 0;
			}
		}
		else
		{
			sub_14047E7E0(v116, v8[1]);
			LODWORD(v13) = 0;
		}
		return (unsigned int)v13;
	case 0x8BDu:
		LODWORD(v13) = sub_1403DDC60(a1, a4);
		return (unsigned int)v13;
	case 0x8C7u:
		v63 = sub_1403D90D0(a1, *a4);
		if (v63)
			sub_14047B9B0(v63, v8[1]);
		v64 = sub_1403D90D0(qword_140C65898, v8[1]);
		if (!v64)
			goto LABEL_5;
		sub_14047BAC0(v64, v65, v4, v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8CCu:
		v96 = sub_1403D90D0(a1, *a4);
		if (!v96)
			goto LABEL_5;
		sub_14045B030(v96, *((int**)v8 + 1));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8CFu:
		LODWORD(v13) = sub_1403DC1E0(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x8D3u:
		if (!*a4)
			goto LABEL_5;
		if (a4[1] >= 0x19)
			goto LABEL_5;
		v94 = sub_1403D90D0(a1, *a4);
		if (!v94)
			goto LABEL_5;
		if (!*(_QWORD*)(v94 + 24))
			goto LABEL_5;
		v95 = v8[1];
		if (v95 - 1 > 0x18)
			goto LABEL_5;
		*(_DWORD*)(v94 + 48) = v95;
		*(_QWORD*)(v94 + 256) = sub_1401F64E0(v95);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8D7u:
		if (*(_QWORD*)(a1 + 120) != sub_1403D90D0(a1, *a4))
			goto LABEL_5;
		sub_1403CB6E0(v82, v8[1], *((float*)v8 + 2));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8F4u:
		v71 = sub_1403D90D0(a1, *a4);
		LODWORD(v13) = 0;
		v72 = v71;
		if (v71)
		{
			v73 = (int)v8[1];
			v74 = v8[2];
			if ((int)v73 < 24)
			{
				*(_DWORD*)(v71 + 4 * v73 + 1296) = v74;
				if ((_DWORD)v73 == 6)
				{
					if (v74)
					{
						v75 = *(_QWORD*)(qword_140C65898 + 25744);
						v76 = v75 ? *(_DWORD*)(v75 + 264) : 0;
						if (v76 == *(_DWORD*)(v72 + 8))
							sub_14055B0E0(qword_140C65898, 0, v4, v5);
					}
				}
			}
		}
		return (unsigned int)v13;
	case 0x8F5u:
		v126 = sub_1403D90D0(a1, *a4);
		if (!v126)
			goto LABEL_5;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v126 + 176i64))(v126, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x8F6u:
		v97 = sub_1403D90D0(a1, *a4);
		if (!v97)
			goto LABEL_5;
		LODWORD(v13) = 0;
		*(_DWORD*)(v97 + 5548) = v8[1];
		return (unsigned int)v13;
	case 0x902u:
		LODWORD(v13) = sub_1403DC650(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x905u:
		LODWORD(v13) = sub_1403DBB70(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x908u:
		LODWORD(v13) = sub_1403DB7F0(a1, (int*)a4, v7, v5);
		return (unsigned int)v13;
	case 0x909u:
		LODWORD(v13) = 0;
		if (sub_1403D90D0(a1, *a4))
		{
			v67 = *(_QWORD*)(a1 + 25744);
			v68 = v67 ? *(_DWORD*)(v67 + 264) : 0;
			if (v68 == *v8)
				sub_14055C0F0(a1, (int*)v8);
		}
		return (unsigned int)v13;
	case 0x90Au:
		v66 = sub_1403D90D0(a1, *a4);
		if (!v66)
			goto LABEL_5;
		sub_14045BDC0(v66, v8[1], v8[2], v5);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x90Bu:
		LODWORD(v13) = sub_1403DB9A0(a1, a4);
		return (unsigned int)v13;
	case 0x914u:
		sub_1405A6C90(a1, *a4, a4[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x918u:
		sub_1403D1E40((__int64*)a1, *a4, a4[1], 0);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x919u:
		LODWORD(v13) = sub_1403C70E0(a1, a4);
		return (unsigned int)v13;
	case 0x91Bu:
		LODWORD(v13) = sub_1403D9950(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x92Cu:
		sub_1403AB820(a1 + 7160, (unsigned __int8*)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x92Fu:
		LODWORD(v13) = sub_1403DA0B0(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x931u:
		LODWORD(v13) = sub_1403DA5C0(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x932u:
		v91 = sub_1403D90D0(a1, *a4);
		if (!v91 || *(_QWORD*)(a1 + 120) == v91)
			goto LABEL_5;
		sub_14045AD90(v91, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x933u:
		LODWORD(v13) = sub_1403DA490(a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x934u:
		v81 = sub_1403D90D0(a1, *a4);
		if (!v81)
			goto LABEL_5;
		sub_14045AB70(v81, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x935u:
		v55 = sub_1403D90D0(a1, *a4);
		if (!v55)
			goto LABEL_5;
		v56 = *((float*)v8 + 2);
		v57 = 0i64;
		goto LABEL_221;
	case 0x936u:
		v93 = sub_1403D90D0(a1, *a4);
		if (!v93)
			goto LABEL_5;
		*(_QWORD*)(v93 + 6304) = *((_QWORD*)v8 + 1);
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "UnitGroupChanged", L"U", *v8);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x937u:
		LODWORD(v13) = sub_1403DA270(a1, (int*)a4, v4, v5);
		return (unsigned int)v13;
	case 0x938u:
		v55 = sub_1403D90D0(a1, *a4);
		if (!v55)
			goto LABEL_5;
		v57 = v8[2];
		v56 = 0.0;
	LABEL_221:
		LODWORD(v13) = sub_1403D9A60((_QWORD*)a1, v55, v8[1], v57, v56);
		return (unsigned int)v13;
	case 0x939u:
		v84 = sub_1403D90D0(a1, *a4);
		v13 = (__int16*)v84;
		if (!v84)
			goto LABEL_5;
		v85 = v8[2];
		if (v85)
		{
			v86 = sub_1404835C0(qword_140C65918, v85);
			if (v86)
			{
				v88 = sub_14034BDD0(v87, *(_DWORD*)(v86 + 8));
				v89 = (__int64)v13;
				v90 = (int*)v88;
				goto LABEL_287;
			}
			v89 = (__int64)v13;
		}
		else
		{
			v89 = v84;
		}
		v90 = (int*)*((_QWORD*)v8 + 2);
	LABEL_287:
		sub_14045B030(v89, v90);
		sub_14045B790((__int64)v13, v8[1]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x93Au:
		LODWORD(v13) = sub_1403DA360((_QWORD*)a1, (__int64)a4);
		return (unsigned int)v13;
	case 0x93Bu:
		LODWORD(v13) = sub_1403DC280(a1, (int*)a4);
		return (unsigned int)v13;
	case 0x93Cu:
		v54 = sub_1403D90D0(a1, *a4);
		if (!v54)
			goto LABEL_5;
		sub_14045BF30(v54, v8[1], v8[2]);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x93Du:
		v58 = sub_1403D90D0(a1, *a4);
		if (!v58)
			goto LABEL_5;
		v59 = v8[3];
		if (v8[1] > 0x1A)
			goto LABEL_5;
		v60 = (int)v8[1];
		LODWORD(v13) = 0;
		*(_DWORD*)(v58 + 8 * v60 + 3048) = v8[2];
		*(_DWORD*)(v58 + 8 * v60 + 3052) = v59;
		return (unsigned int)v13;
	case 0x93Eu:
		v92 = sub_1403D90D0(a1, *a4);
		if (!v92 || *(_QWORD*)(a1 + 120) == v92)
			goto LABEL_5;
		sub_14045BCD0(v92, v8[1], *((_QWORD*)v8 + 1));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x93Fu:
		v52 = sub_1403D90D0(a1, *a4);
		if (!v52)
			goto LABEL_5;
		*(_DWORD*)(v52 + 584) = v8[1];
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "RefreshHealthCeiling", &unk_1409D08F3);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x940u:
		v53 = sub_1403D90D0(a1, *a4);
		if (!v53)
			goto LABEL_5;
		*(_DWORD*)(v53 + 588) = v8[1];
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "RefreshHealthFloor", &unk_1409D08BF);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x951u:
		v249 = sub_1405845F0(a1, *((_QWORD*)a4 + 1));
		if (!v249)
			goto LABEL_5;
		LODWORD(v13) = sub_14057D0F0(v249, (__int64)v8);
		return (unsigned int)v13;
	case 0x954u:
		sub_14042FF50(*(_QWORD*)(qword_140C65898 + 29504), (__int64)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x958u:
		v250 = qword_140C65B98;
		*(_DWORD*)(qword_140C65B98 + 400) = *a4;
		v250 += 264i64;
		*(_DWORD*)(v250 + 140) = *((unsigned __int16*)a4 + 2);
		*(_DWORD*)(v250 + 144) = *((unsigned __int16*)a4 + 3);
		sub_1405C16D0(v250, *((unsigned __int8**)a4 + 2), *((unsigned __int8*)a4 + 8));
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x95Au:
		sub_14042E720(*(_QWORD*)(qword_140C65898 + 29504), a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x965u:
		sub_1404B4400(a1, (int*)a4);
		LODWORD(v13) = 0;
		return (unsigned int)v13;
	case 0x972u:
		LODWORD(v13) = sub_140402EC0(a1, (int*)a4);
		return (unsigned int)v13;
	default:
		if (qword_140C65828)
			sub_140335F10(&v292, a3);
		else
			sub_14018EE90(&v292, (__int64)"Message Id #%d", a3);
		sub_1400035B0();
		if (v293)
			sub_14018B900(v293, v285);
	LABEL_1012:
		LODWORD(v13) = 1;
		return (unsigned int)v13;
	}
	while (*(_DWORD*)(v145 + 64) != *v8)
	{
		v145 = *(_QWORD*)(v145 + 40);
		if (!v145)
		{
			LODWORD(v13) = 0;
			return (unsigned int)v13;
		}
	}
	sub_140718AF0(v145);
	LODWORD(v13) = 0;
	return (unsigned int)v13;
}
// 1403EC7CF: variable 'v4' is possibly undefined
// 1403EC7CF: variable 'v5' is possibly undefined
// 1403ECE17: variable 'v30' is possibly undefined
// 1403ED070: variable 'v39' is possibly undefined
// 1403ED24A: variable 'v42' is possibly undefined
// 1403ED3D2: variable 'v48' is possibly undefined
// 1403ED3D2: variable 'v49' is possibly undefined
// 1403ED62E: variable 'v65' is possibly undefined
// 1403ED8D0: variable 'v82' is possibly undefined
// 1403ED8F3: variable 'v83' is possibly undefined
// 1403ED930: variable 'v87' is possibly undefined
// 1403EDB77: variable 'v100' is possibly undefined
// 1403EDBD4: variable 'v103' is possibly undefined
// 1403EDC06: variable 'v106' is possibly undefined
// 1403EDC3C: variable 'v109' is possibly undefined
// 1403EE842: variable 'v159' is possibly undefined
// 1403EE842: variable 'v160' is possibly undefined
// 1403EEF2A: variable 'v286' is possibly undefined
// 1403EEF2A: variable 'v287' is possibly undefined
// 1403EEF2A: variable 'v289' is possibly undefined
// 1403EEF2A: variable 'v290' is possibly undefined
// 1403EFB3B: variable 'v233' is possibly undefined
// 1403F07C9: variable 'v273' is possibly undefined
// 1403F1316: variable 'v285' is possibly undefined
// 1405E1860: using guessed type __int64 __fastcall sub_1405E1860(_QWORD, _QWORD);
// 1409D10AF: using guessed type _BYTE byte_1409D10AF[19];
// 1409D10C7: using guessed type _BYTE byte_1409D10C7[26];
// 1409D118B: using guessed type _BYTE byte_1409D118B[33];
// 1409D1257: using guessed type _BYTE byte_1409D1257[28];
// 1409D1277: using guessed type _BYTE byte_1409D1277[19];
// 1409D12A3: using guessed type _BYTE byte_1409D12A3[3];
// 1409E8F04: using guessed type _BYTE byte_1409E8F04[64];
// 1409E8FAC: using guessed type _BYTE byte_1409E8FAC[16];
// 1409E8FBC: using guessed type _BYTE byte_1409E8FBC[48];
// 1409E8FEC: using guessed type _BYTE byte_1409E8FEC[48];
// 1409E91EC: using guessed type _BYTE byte_1409E91EC[72];
// 1409E9484: using guessed type _BYTE byte_1409E9484[32];
// 1409E9994: using guessed type _BYTE byte_1409E9994[24];
// 1409E9DC4: using guessed type _BYTE byte_1409E9DC4[88];
// 1409EA1EC: using guessed type _BYTE byte_1409EA1EC[48];
// 1409EA994: using guessed type _BYTE byte_1409EA994[56];
// 1409EB9E4: using guessed type _BYTE byte_1409EB9E4[56];
// 1409EBA1C: using guessed type _BYTE byte_1409EBA1C[40];
// 1409EBB94: using guessed type _BYTE byte_1409EBB94[24];
// 1409EC404: using guessed type _BYTE byte_1409EC404[4];
// 1409EC424: using guessed type _BYTE byte_1409EC424[4];
// 1409EC4A4: using guessed type _BYTE byte_1409EC4A4[4];
// 1409EC83C: using guessed type _BYTE byte_1409EC83C[4];
// 1409EC8B4: using guessed type _BYTE byte_1409EC8B4[4];
// 1409EC8D4: using guessed type _BYTE byte_1409EC8D4[4];
// 1409EC91C: using guessed type _BYTE byte_1409EC91C[4];
// 1409EC93C: using guessed type _BYTE byte_1409EC93C[4];
// 1409ECDE4: using guessed type _BYTE byte_1409ECDE4[4];
// 1409ED424: using guessed type _BYTE byte_1409ED424[56];
// 1409ED7BC: using guessed type wchar_t aS_34[2];
// 1409ED804: using guessed type wchar_t asc_1409ED804[2];
// 1409EDC1C: using guessed type _BYTE byte_1409EDC1C[4];
// 1409EDCCC: using guessed type _BYTE byte_1409EDCCC[4];
// 1409EDD2C: using guessed type wchar_t aI_31[2];
// 1409EDF2C: using guessed type wchar_t aI_9[2];
// 1409EE08C: using guessed type wchar_t aU_7[2];
// 1409EEA84: using guessed type wchar_t aI_8[2];
// 1409EEC0C: using guessed type wchar_t aU_6[2];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C44F18: using guessed type int dword_140C44F18;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65828: using guessed type __int64 qword_140C65828;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65950: using guessed type __int64 qword_140C65950;
// 140C65960: using guessed type __int64 qword_140C65960;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65980: using guessed type __int64 qword_140C65980;
// 140C659B0: using guessed type __int64 qword_140C659B0;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C65A38: using guessed type __int64 qword_140C65A38;
// 140C65A48: using guessed type __int64 qword_140C65A48;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;
// 140C65BB0: using guessed type __int64 qword_140C65BB0;
// 140C65C28: using guessed type __int64 qword_140C65C28;

