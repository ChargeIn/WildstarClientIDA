#include "../winhttp.h"

//----- (00000001404422F0) ----------------------------------------------------
__int64 __fastcall sub_1404422F0(__int64 a1, int a2)
{
	_QWORD* v2; // r13
	int v3; // ebx
	__int64 v5; // rsi
	unsigned int v6; // r15d
	__int64(__fastcall * v7)(wchar_t**, __int64); // rax
	__int64(__fastcall * *v8)(); // rdi
	unsigned int v9; // r12d
	int v10; // eax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r14
	int* v14; // rax
	int v15; // eax
	__int64 v16; // rsi
	__int64 v17; // r13
	int* v18; // rax
	int* v19; // r15
	int* v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // r14
	int v23; // eax
	int v24; // edi
	int* v25; // rbx
	unsigned int v26; // eax
	unsigned __int64 v27; // rax
	__int64 v28; // rax
	unsigned __int64 v29; // kr00_8
	int* v30; // rax
	unsigned __int64 v31; // r8
	unsigned int v32; // esi
	__int64 v33; // rax
	__int64 v34; // rdi
	int* v35; // rax
	__int64 v36; // rbx
	unsigned __int64 v37; // rax
	__int64 v38; // r12
	unsigned __int64 v39; // r13
	unsigned __int64 v40; // r15
	int* v41; // rax
	__int64 v42; // rcx
	int v43; // r12d
	int* v44; // rbx
	__int64 v45; // r13
	unsigned int v46; // esi
	int v47; // eax
	unsigned int* v48; // rax
	unsigned int v49; // r15d
	int v50; // edi
	__int64 v51; // rax
	int v52; // ecx
	int* v53; // rax
	int* v54; // rdi
	__int64 v55; // r14
	int v56; // edi
	bool v57; // cc
	float v58; // xmm7_4
	float v59; // xmm6_4
	int* v60; // rbx
	unsigned __int64 v61; // rsi
	__int64 v62; // r15
	int v63; // eax
	int* v64; // rax
	int* v65; // rdx
	__int64 v66; // rcx
	unsigned int v67; // ebx
	__int64 v68; // rsi
	float v69; // xmm0_4
	unsigned int v70; // eax
	unsigned int v71; // r13d
	unsigned int v72; // r12d
	int* v73; // rax
	int* v74; // r15
	__int64 v75; // rsi
	unsigned __int64 v76; // r14
	_QWORD* v77; // rbx
	int* v78; // rdx
	unsigned __int64 v79; // r14
	_QWORD* v80; // rbx
	unsigned __int64 v81; // r14
	_QWORD* v82; // rbx
	unsigned __int64 v83; // r14
	_QWORD* v84; // rbx
	unsigned __int64 v85; // r14
	_QWORD* v86; // rbx
	unsigned __int64 v87; // r14
	_QWORD* v88; // rbx
	unsigned __int64 v89; // rdi
	int* v90; // r14
	__int64 v91; // r12
	unsigned int v92; // eax
	unsigned int v93; // r13d
	__int64(__fastcall * v94)(wchar_t**, _QWORD, __int64); // rax
	__int64 v95; // rax
	__int64 v96; // rdi
	unsigned int v97; // ebx
	__int64 v98; // rax
	_DWORD* v99; // r14
	unsigned int v100; // ebx
	__int64 v101; // rax
	_DWORD* v102; // rbx
	unsigned int v103; // esi
	__int64 v104; // rax
	int* v105; // r14
	int* v106; // rax
	int* v107; // rbx
	unsigned __int64 v108; // rsi
	int* v109; // rax
	unsigned __int64 v110; // rdi
	int* v111; // rbx
	int* v112; // rax
	int* v113; // rbx
	unsigned __int64 v114; // rcx
	char v115; // dl
	unsigned __int8 v116; // dl
	unsigned int v117; // ebx
	__int64 v118; // rax
	unsigned int v119; // ebx
	__int64 v120; // rax
	int v121; // edx
	unsigned int v122; // ebx
	__int64 v123; // rax
	unsigned int v124; // ebx
	__int64 v125; // rax
	float v126; // xmm0_4
	unsigned __int64 v127; // r14
	unsigned __int64 v128; // rsi
	int* v129; // rax
	int* v130; // rbx
	unsigned __int64 v131; // rcx
	__int64 v132; // rax
	int* v133; // rax
	unsigned __int64 v134; // r8
	__int64 v135; // r15
	unsigned __int64 v136; // r13
	unsigned int* v137; // r12
	int* v138; // rax
	int* v139; // rdi
	int* v140; // rbx
	__int64 v141; // rbx
	__int64 v142; // rax
	unsigned __int64 v143; // rax
	__int64 v144; // r14
	unsigned __int64 v145; // r15
	unsigned __int64 v146; // rsi
	int* v147; // rax
	__int64 v148; // rcx
	unsigned __int64 v149; // rax
	__int64 v150; // rsi
	unsigned __int64 v151; // r14
	unsigned __int64 v152; // rdi
	int* v153; // rax
	__int64 v154; // rcx
	unsigned int v155; // ebx
	__int64(__fastcall * v156)(wchar_t**, _QWORD, __int64); // rax
	__int64 v157; // rax
	__int64 v158; // rdi
	__int64 v159; // r8
	int* v160; // rax
	__int64 v161; // rcx
	__int64* v162; // rbx
	int* v163; // rax
	__int64 v164; // r8
	int* v165; // rax
	__int64 v166; // rcx
	unsigned int v167; // ebx
	__int64 v168; // rax
	__int64 v169; // rdi
	__int64 v170; // r8
	int* v171; // rax
	__int64 v172; // rcx
	__int64* v173; // rbx
	int* v174; // rax
	__int64 v175; // r8
	int* v176; // rax
	__int64 v177; // rcx
	__int64 v178; // rax
	__int64 v179; // rbx
	__int64 v180; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v183; // rax
	__int64 v184; // rbx
	__int64 v185; // rax
	__int64 k; // rax
	__int64 m; // rax
	int v188; // eax
	unsigned int v189; // r13d
	unsigned int v190; // r12d
	__int64 v191; // rax
	unsigned int* v192; // rdi
	__int64 v193; // r14
	_DWORD* v194; // rsi
	unsigned __int64 v195; // r15
	_QWORD* v196; // rbx
	_QWORD* v197; // rbx
	__int64 v198; // rcx
	__int64 v199; // rbx
	__int64 v200; // r13
	unsigned __int64 v201; // rax
	__int64 v202; // r14
	unsigned __int64 v203; // r15
	unsigned __int64 v204; // rdi
	int* v205; // rax
	__int64 v206; // rcx
	int v207; // eax
	int v208; // edx
	bool v209; // zf
	unsigned __int8 v210; // cl
	unsigned int v211; // eax
	int v212; // eax
	unsigned int v213; // r12d
	unsigned int v214; // r13d
	__int64 v215; // rax
	unsigned int* v216; // rdi
	__int64 v217; // r14
	unsigned __int64 v218; // r15
	_QWORD* v219; // rbx
	__int64* v220; // rbx
	__int64 v221; // rbx
	__int64 v222; // r12
	__int64 v223; // r13
	__int64 v224; // rbx
	unsigned __int64 v225; // rax
	__int64 v226; // r15
	unsigned __int64 v227; // r12
	unsigned __int64 v228; // r14
	int* v229; // rax
	__int64 v230; // rcx
	_DWORD* v231; // rsi
	__int64 v232; // r14
	unsigned __int64 v233; // r15
	_QWORD* v234; // rbx
	__int64* v235; // rbx
	__int64 v236; // rbx
	__int64 v237; // rcx
	__int64 v238; // r12
	__int64 v239; // rbx
	unsigned __int64 v240; // rax
	__int64 v241; // r14
	unsigned __int64 v242; // r15
	unsigned __int64 v243; // rdi
	int* v244; // rax
	__int64 v245; // rcx
	int* v246; // rax
	int* v247; // [rsp+20h] [rbp-E0h]
	int* v248; // [rsp+28h] [rbp-D8h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v250; // [rsp+38h] [rbp-C8h]
	int* v251; // [rsp+48h] [rbp-B8h] BYREF
	int* v252; // [rsp+50h] [rbp-B0h] BYREF
	int* v253; // [rsp+58h] [rbp-A8h]
	int v254[2]; // [rsp+60h] [rbp-A0h] BYREF
	char v255[4]; // [rsp+68h] [rbp-98h] BYREF
	int v256; // [rsp+6Ch] [rbp-94h]
	__int64 v257; // [rsp+70h] [rbp-90h]
	__int64 v258; // [rsp+78h] [rbp-88h]
	int v259; // [rsp+84h] [rbp-7Ch]
	char v260[8]; // [rsp+88h] [rbp-78h] BYREF
	int* v261; // [rsp+90h] [rbp-70h]
	__int64 v262; // [rsp+98h] [rbp-68h]
	int v263[2]; // [rsp+A8h] [rbp-58h] BYREF
	char v264[4]; // [rsp+B0h] [rbp-50h] BYREF
	int v265; // [rsp+B4h] [rbp-4Ch]
	__int64 v266; // [rsp+B8h] [rbp-48h]
	__int64 v267; // [rsp+C0h] [rbp-40h]
	int v268; // [rsp+CCh] [rbp-34h]
	__int64(__fastcall * *v269)(); // [rsp+D0h] [rbp-30h] BYREF
	__int128 v270; // [rsp+D8h] [rbp-28h]
	__int64 v271; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v272[2]; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v273; // [rsp+108h] [rbp+8h] BYREF
	__int64 v274; // [rsp+110h] [rbp+10h] BYREF
	int* v275; // [rsp+120h] [rbp+20h] BYREF
	int* v276; // [rsp+128h] [rbp+28h] BYREF
	__int64 v277; // [rsp+1B0h] [rbp+B0h] BYREF
	int v278; // [rsp+1B8h] [rbp+B8h] BYREF
	unsigned __int64 v279; // [rsp+1C0h] [rbp+C0h]
	unsigned __int64 v280; // [rsp+1C8h] [rbp+C8h]

	v278 = a2;
	v277 = a1;
	v2 = (_QWORD*)a1;
	if (*(_DWORD*)(a1 + 16))
	{
		*(_QWORD*)&v250 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v250 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v269 = TlsValue;
		v277 = 0x141E615C0i64;
		v270 = v250;
		v3 = sub_140196F30(&dword_140C8AC58, 43, &v277, &v269);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v250 + 1));
		if (v3)
			DebugBreak();
		return 2147500037i64;
	}
	*(_DWORD*)(a1 + 8) = 1;
	sub_140444CC0(a1);
	v5 = (__int64)(v2 + 3);
	v6 = 0;
	v280 = (unsigned __int64)(v2 + 3);
	if (v2[5])
	{
		sub_1400B61B0((__int64)(v2 + 3), *(_QWORD**)(v2[4] + 8i64));
		*(_QWORD*)(v2[4] + 16i64) = v2[4];
		*(_QWORD*)(v2[4] + 8i64) = 0i64;
		*(_QWORD*)(v2[4] + 24i64) = v2[4];
		v2[5] = 0i64;
	}
	v7 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	v8 = (__int64(__fastcall**)())v2[4];
	v9 = 0;
	if (qword_140C63838)
	{
		v10 = qword_140C63838(off_140A6AF30, qword_140C63858);
		goto LABEL_12;
	}
	if (dword_140C63AAC)
		goto LABEL_41;
	if ((int)sub_14020D880() >= 0)
	{
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63A68 + 40i64))(qword_140C63A68);
	LABEL_12:
		LODWORD(v279) = v10;
		if (v10)
		{
			v11 = v277;
			do
			{
				if (qword_140C63848)
				{
					v12 = qword_140C63848(off_140A6AF30, v9, qword_140C63858);
				}
				else
				{
					if (dword_140C63AAC)
					{
						v13 = 0i64;
						goto LABEL_22;
					}
					if ((int)sub_14020D880() < 0)
					{
						v13 = 0i64;
						goto LABEL_22;
					}
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A68 + 32i64))(qword_140C63A68, v9);
				}
				v13 = v12;
			LABEL_22:
				if (v8 == (__int64(__fastcall**)())v2[4] || *((_DWORD*)v8 + 8) != *(_DWORD*)(v13 + 4))
				{
					v14 = sub_14018B280(56i64, 0);
					v262 = 0i64;
					v261 = v14;
					*(_BYTE*)v14 = 0;
					*((_QWORD*)v261 + 1) = 0i64;
					*((_QWORD*)v261 + 2) = v261;
					*((_QWORD*)v261 + 3) = v261;
					v254[0] = *(_DWORD*)(v13 + 4);
					sub_140445910((__int64)v255, (__int64)v260);
					v263[0] = v254[0];
					sub_140445910((__int64)v264, (__int64)v255);
					sub_140445810(v5, (__int64)&TlsValue, v263);
					v8 = TlsValue;
					if (v267)
					{
						sub_14001A270((__int64)v264, *(_QWORD**)(v266 + 8));
						*(_QWORD*)(v266 + 16) = v266;
						*(_QWORD*)(v266 + 8) = 0i64;
						*(_QWORD*)(v266 + 24) = v266;
						v267 = 0i64;
					}
					sub_14018B900(v266, 0);
					if (v258)
					{
						sub_14001A270((__int64)v255, *(_QWORD**)(v257 + 8));
						*(_QWORD*)(v257 + 16) = v257;
						*(_QWORD*)(v257 + 8) = 0i64;
						*(_QWORD*)(v257 + 24) = v257;
						v258 = 0i64;
					}
					sub_14018B900(v257, 0);
					if (v262)
					{
						sub_14001A270((__int64)v260, *((_QWORD**)v261 + 1));
						*((_QWORD*)v261 + 2) = v261;
						*((_QWORD*)v261 + 1) = 0i64;
						*((_QWORD*)v261 + 3) = v261;
						v262 = 0i64;
					}
					sub_14018B900((__int64)v261, 0);
					v11 = (__int64)v8[6];
				}
				if ((__int64(__fastcall*)())v11 == v8[6] || *(_DWORD*)(v11 + 32) != *(_DWORD*)(v13 + 8))
				{
					v15 = *(_DWORD*)(v13 + 8);
					v272[1] = 0i64;
					v272[0] = 0i64;
					LODWORD(v271) = v15;
					LODWORD(v273) = v15;
					sub_1403FE910(&v274, (__int64)v272);
					sub_1403FE760((__int64)(v8 + 5), (__int64)&v269, (int*)&v273);
					v11 = (__int64)v269;
					if (v274)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v274 - 16) + 8i64))(v274 - 16);
				}
				v16 = *(_QWORD*)(v11 + 48);
				v17 = v16 + 1;
				v18 = sub_14018DB00(*(_QWORD*)(v11 + 40), v16 + 1, 8i64);
				v19 = v18;
				*(_QWORD*)&v18[2 * v16] = v13;
				v20 = *(int**)(v11 + 40);
				if (v20 != v18)
				{
					sub_1407DB590(v18, v20, 8i64 * *(_QWORD*)(v11 + 48));
					v21 = *(_QWORD*)(v11 + 40);
					if (v21)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
					*(_QWORD*)(v11 + 40) = v19;
				}
				v5 = v280;
				++v9;
				*(_QWORD*)(v11 + 48) = v17;
				v2 = (_QWORD*)v277;
				v6 = 0;
			} while (v9 < (unsigned int)v279);
		}
	}
	v7 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
LABEL_41:
	v22 = 0i64;
	v278 = 0;
	if (v7)
	{
		v23 = v7(off_140A6AE18, qword_140C63858);
	LABEL_48:
		v24 = v23;
		goto LABEL_49;
	}
	if (dword_140C63F8C)
	{
		v24 = 0;
	}
	else
	{
		if ((int)sub_14020C340() >= 0)
		{
			v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653B8 + 40i64))(qword_140C653B8);
			goto LABEL_48;
		}
		v24 = 0;
	}
LABEL_49:
	LODWORD(v279) = v24;
	v25 = sub_14018B280(40i64, 0);
	if (v25)
	{
		if (qword_140C63838)
		{
			v26 = qword_140C63838(off_140A6AE50, qword_140C63858);
		}
		else if (dword_140C64868)
		{
			v26 = 0;
		}
		else if ((int)sub_14020C780() >= 0)
		{
			v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F00 + 40i64))(qword_140C63F00);
		}
		else
		{
			v26 = 0;
		}
		*(_QWORD*)v25 = 0i64;
		v27 = sub_1401A40C0(v26);
		*((_QWORD*)v25 + 1) = v27;
		v29 = v27;
		v28 = 8 * v27;
		if (!is_mul_ok(v29, 8ui64))
			v28 = -1i64;
		v30 = sub_14018B280(v28, 0);
		v31 = 8i64 * *((_QWORD*)v25 + 1);
		*((_QWORD*)v25 + 2) = v30;
		sub_1407E4830(v30, 0i64, v31);
		*((_QWORD*)v25 + 3) = sub_1400522D0;
		*((_QWORD*)v25 + 4) = sub_1400522E0;
	}
	else
	{
		v25 = 0i64;
	}
	v2[13] = v25;
	v32 = 0;
	if (v24)
	{
		while (!qword_140C63848)
		{
			if (dword_140C63F8C)
			{
				v34 = 0i64;
			}
			else
			{
				if ((int)sub_14020C340() >= 0)
				{
					v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653B8 + 32i64))(qword_140C653B8, v32);
					goto LABEL_69;
				}
				v34 = 0i64;
			}
		LABEL_70:
			if (*(_DWORD*)(v34 + 4) != v278)
			{
				v278 = *(_DWORD*)(v34 + 4);
				v35 = sub_14018B280(24i64, 0);
				if (v35)
					v22 = sub_140441F20((__int64)v35, v278);
				else
					v22 = 0i64;
				v36 = v2[13];
				if (*(_QWORD*)v36 == *(_QWORD*)(v36 + 8))
					sub_1400290D0(v2[13]);
				v37 = (*(__int64(__fastcall**)(int*))(v36 + 24))(&v278);
				v38 = *(_QWORD*)(v36 + 16);
				v39 = v37;
				v40 = v37 % *(_QWORD*)(v36 + 8);
				v41 = sub_14018B280(32i64, 0);
				if (v41)
				{
					v42 = *(_QWORD*)(v38 + 8 * v40);
					*(_QWORD*)v41 = v39;
					*((_QWORD*)v41 + 1) = v42;
					LODWORD(v42) = v278;
					*((_QWORD*)v41 + 3) = v22;
					v41[4] = v42;
				}
				v2 = (_QWORD*)v277;
				*(_QWORD*)(v38 + 8 * v40) = v41;
				++* (_QWORD*)v36;
				v6 = 0;
			}
			sub_140441FF0(v22, v34);
			if (++v32 >= (unsigned int)v279)
				goto LABEL_80;
		}
		v33 = qword_140C63848(off_140A6AE18, v32, qword_140C63858);
	LABEL_69:
		v34 = v33;
		goto LABEL_70;
	}
LABEL_80:
	v43 = 1;
	v280 = 7i64;
	do
	{
		v44 = 0i64;
		v45 = 0i64;
		LODWORD(TlsValue) = v43;
		v46 = 0;
		v250 = 0ui64;
		if (qword_140C63838)
		{
			v47 = qword_140C63838(off_140A6DEE0, qword_140C63858);
		}
		else
		{
			if (dword_140C64070 || (int)sub_140247760() < 0)
				goto LABEL_115;
			v47 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64930 + 40i64))(qword_140C64930);
		}
		LODWORD(v279) = v47;
		if (!v47)
			goto LABEL_115;
		do
		{
			if (qword_140C63848)
			{
				v48 = (unsigned int*)qword_140C63848(off_140A6DEE0, v46, qword_140C63858);
			}
			else
			{
				if (dword_140C64070 || (int)sub_140247760() < 0)
					goto LABEL_109;
				v48 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 32i64))(
					qword_140C64930,
					v46);
			}
			if (!v48)
				goto LABEL_109;
			v49 = *v48;
			v50 = v43;
			if (((unsigned __int8)TlsValue & 0x40) != 0)
				v50 = 127;
			if (qword_140C63840)
			{
				v51 = qword_140C63840(off_140A6DEE0, v49, qword_140C63858);
			}
			else
			{
				if (dword_140C64070 || (int)sub_140247760() < 0)
					goto LABEL_109;
				v51 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 24i64))(qword_140C64930, v49);
			}
			if (v51)
			{
				v52 = *(_DWORD*)(v51 + 36);
				if ((v52 & 4) != 0 && (v52 & 0x200) != 0 && (v50 & *(_DWORD*)(v51 + 48)) != 0)
				{
					v53 = sub_14018DB00((__int64)v44, v45 + 1, 4i64);
					v53[v45] = v49;
					v54 = v53;
					if (v44 != v53)
					{
						sub_1407DB590(v53, v44, 4 * v45);
						if (v44)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
						v44 = v54;
					}
					++v45;
				}
			}
		LABEL_109:
			++v46;
		} while (v46 < (unsigned int)v279);
		*(_QWORD*)&v250 = v44;
		*((_QWORD*)&v250 + 1) = v45;
		if (v45)
			sub_140445700((__int64*)(v277 + 368), &TlsValue);
		if (v44)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
		v6 = 0;
	LABEL_115:
		v43 = __ROL4__(v43, 1);
		--v280;
	} while (v280);
	v55 = v277;
	v56 = 0;
	v57 = *(_QWORD*)(v277 + 360) <= 8ui64;
	v58 = 0.0;
	v263[1] = 0;
	v59 = 1.0;
	v265 = 0;
	HIDWORD(v266) = 0;
	HIDWORD(v267) = 0;
	v268 = 0;
	v254[1] = 0;
	v256 = 0;
	HIDWORD(v257) = 0;
	HIDWORD(v258) = 0;
	v259 = 0;
	if (v57)
	{
		v60 = *(int**)(v277 + 352);
		if (!v60)
		{
			v61 = 8i64;
			v62 = 48i64;
			goto LABEL_122;
		}
		if (*((_QWORD*)v60 - 1) < 8ui64)
		{
			v61 = (unsigned __int64)(sub_14018A3E0(0x30ui64) - 16) >> 2;
			v62 = 4 * v61 + 16;
			v63 = (**((__int64(__fastcall***)(__int64, __int64))v60 - 2))((__int64)(v60 - 4), v62);
			v55 = v277;
			if (v63)
			{
				*((_QWORD*)v60 - 1) = v61;
				v6 = 0;
				goto LABEL_126;
			}
		LABEL_122:
			v64 = sub_14018B280(v62, 0);
			v6 = 0;
			if (v64)
			{
				*((_QWORD*)v64 + 1) = v61;
				*(_QWORD*)v64 = off_140B55060;
			}
			else
			{
				v64 = 0i64;
			}
			v60 = v64 + 4;
		}
	LABEL_126:
		v65 = *(int**)(v55 + 352);
		if (v65 != v60)
		{
			sub_1407DB590(v60, v65, 4i64 * *(_QWORD*)(v55 + 360));
			v66 = *(_QWORD*)(v55 + 352);
			if (v66)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v66 - 16) + 8i64))(v66 - 16);
			*(_QWORD*)(v55 + 352) = v60;
		}
	}
	*(_QWORD*)(v55 + 360) = 8i64;
	v67 = 0;
	v68 = 0i64;
	do
	{
		if (v67 == (unsigned int)sub_140445440((unsigned int*)v263, v56))
		{
			v69 = sub_140445590((float*)v254, v56++);
			v58 = v69;
		}
		v59 = v59 + v58;
		++v67;
		v68 += 4i64;
		*(float*)(v68 + *(_QWORD*)(v55 + 352) - 4) = v59;
	} while (v67 < 8);
	if (qword_140C63838)
	{
		v70 = qword_140C63838(off_140A6B240, qword_140C63858);
		goto LABEL_141;
	}
	if (dword_140C642E8)
	{
		v71 = 0;
	}
	else if ((int)sub_140211460() >= 0)
	{
		v70 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64508 + 40i64))(qword_140C64508);
	LABEL_141:
		v71 = v70;
	}
	else
	{
		v71 = 0;
	}
	v72 = 0;
	if (!v71)
		goto LABEL_201;
	while (2)
	{
		if (qword_140C63848)
		{
			v73 = (int*)qword_140C63848(off_140A6B240, v72, qword_140C63858);
			goto LABEL_148;
		}
		if (!dword_140C642E8 && (int)sub_140211460() >= 0)
		{
			v73 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64508 + 32i64))(
				qword_140C64508,
				v72);
		LABEL_148:
			v74 = v73;
			if (v73)
			{
				if (!v73[1])
				{
					if (v73[5])
					{
						v75 = v55 + 152;
						v79 = (*(__int64(__fastcall**)(int*))(v55 + 176))(v73 + 5);
						v80 = *(_QWORD**)(*(_QWORD*)(v75 + 16) + 8 * (v79 % *(_QWORD*)(v75 + 8)));
						if (v80)
						{
							while (v79 != *v80 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v75 + 32))(v74 + 5, v80 + 2))
							{
								v80 = (_QWORD*)v80[1];
								if (!v80)
								{
									v78 = v74 + 5;
									goto LABEL_197;
								}
							}
							if (v80 != (_QWORD*)-20i64)
								goto LABEL_198;
						}
						v78 = v74 + 5;
					}
					else if (v73[2])
					{
						v75 = v55 + 192;
						v81 = (*(__int64(__fastcall**)(int*))(v55 + 216))(v73 + 2);
						v82 = *(_QWORD**)(*(_QWORD*)(v75 + 16) + 8 * (v81 % *(_QWORD*)(v75 + 8)));
						if (v82)
						{
							while (v81 != *v82 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v75 + 32))(v74 + 2, v82 + 2))
							{
								v82 = (_QWORD*)v82[1];
								if (!v82)
								{
									v78 = v74 + 2;
									goto LABEL_197;
								}
							}
							if (v82 != (_QWORD*)-20i64)
								goto LABEL_198;
						}
						v78 = v74 + 2;
					}
					else if (v73[3])
					{
						v75 = v55 + 232;
						v83 = (*(__int64(__fastcall**)(int*))(v55 + 256))(v73 + 3);
						v84 = *(_QWORD**)(*(_QWORD*)(v75 + 16) + 8 * (v83 % *(_QWORD*)(v75 + 8)));
						if (v84)
						{
							while (v83 != *v84 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v75 + 32))(v74 + 3, v84 + 2))
							{
								v84 = (_QWORD*)v84[1];
								if (!v84)
								{
									v78 = v74 + 3;
									goto LABEL_197;
								}
							}
							if (v84 != (_QWORD*)-20i64)
								goto LABEL_198;
						}
						v78 = v74 + 3;
					}
					else if (v73[4])
					{
						v75 = v55 + 272;
						v85 = (*(__int64(__fastcall**)(int*))(v55 + 296))(v73 + 4);
						v86 = *(_QWORD**)(*(_QWORD*)(v75 + 16) + 8 * (v85 % *(_QWORD*)(v75 + 8)));
						if (v86)
						{
							while (v85 != *v86 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v75 + 32))(v74 + 4, v86 + 2))
							{
								v86 = (_QWORD*)v86[1];
								if (!v86)
								{
									v78 = v74 + 4;
									goto LABEL_197;
								}
							}
							if (v86 != (_QWORD*)-20i64)
								goto LABEL_198;
						}
						v78 = v74 + 4;
					}
					else
					{
						if (!v73[6])
							goto LABEL_199;
						v75 = v55 + 312;
						v87 = (*(__int64(__fastcall**)(int*))(v55 + 336))(v73 + 6);
						v88 = *(_QWORD**)(*(_QWORD*)(v75 + 16) + 8 * (v87 % *(_QWORD*)(v75 + 8)));
						if (v88)
						{
							while (v87 != *v88 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v75 + 32))(v74 + 6, v88 + 2))
							{
								v88 = (_QWORD*)v88[1];
								if (!v88)
									goto LABEL_196;
							}
							if (v88 != (_QWORD*)-20i64)
								goto LABEL_198;
						}
					LABEL_196:
						v78 = v74 + 6;
					}
				LABEL_197:
					sub_1400BD4A0(v75, v78, v74);
					goto LABEL_198;
				}
				v75 = v55 + 112;
				v76 = (*(__int64(__fastcall**)(int*))(v55 + 136))(v73 + 1);
				v77 = *(_QWORD**)(*(_QWORD*)(v75 + 16) + 8 * (v76 % *(_QWORD*)(v75 + 8)));
				if (!v77)
					goto LABEL_156;
				while (v76 != *v77 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v75 + 32))(v74 + 1, v77 + 2))
				{
					v77 = (_QWORD*)v77[1];
					if (!v77)
					{
						v78 = v74 + 1;
						goto LABEL_197;
					}
				}
				if (v77 == (_QWORD*)-20i64)
				{
				LABEL_156:
					v78 = v74 + 1;
					goto LABEL_197;
				}
			LABEL_198:
				v55 = v277;
			}
		}
	LABEL_199:
		if (++v72 < v71)
			continue;
		break;
	}
	v6 = 0;
LABEL_201:
	v89 = 0i64;
	v279 = 0i64;
	v90 = 0i64;
	v247 = 0i64;
	v91 = 0i64;
	v253 = 0i64;
	if (qword_140C63838)
	{
		v92 = qword_140C63838(off_140A6ABB0, qword_140C63858);
		goto LABEL_208;
	}
	if (dword_140C649FC)
	{
		v93 = 0;
	}
	else if ((int)sub_140209480() >= 0)
	{
		v92 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C640E8 + 40i64))(qword_140C640E8);
	LABEL_208:
		v93 = v92;
	}
	else
	{
		v93 = 0;
	}
	if (!v93)
		goto LABEL_248;
	v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	while (2)
	{
		if (qword_140C63848)
		{
			v95 = qword_140C63848(off_140A6ABB0, v6, qword_140C63858);
			goto LABEL_218;
		}
		if (dword_140C649FC)
		{
			v96 = 0i64;
		}
		else
		{
			if ((int)sub_140209480() >= 0)
			{
				v95 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640E8 + 32i64))(qword_140C640E8, v6);
			LABEL_218:
				v96 = v95;
			}
			else
			{
				v96 = 0i64;
			}
			v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		}
		v97 = *(_DWORD*)(v96 + 28);
		if (v94)
		{
			v98 = v94(off_140A6AC20, v97, qword_140C63858);
			goto LABEL_225;
		}
		if (dword_140C63A54)
		{
		LABEL_245:
			v89 = v279;
			goto LABEL_246;
		}
		if ((int)sub_140209D00() < 0)
			goto LABEL_244;
		v98 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65060 + 24i64))(qword_140C65060, v97);
	LABEL_225:
		v99 = (_DWORD*)v98;
		if (!v98)
			goto LABEL_244;
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v100 = *(_DWORD*)(v96 + 32);
		if (qword_140C63840)
		{
			v101 = qword_140C63840(off_140A6ABE8, v100, qword_140C63858);
			goto LABEL_231;
		}
		if (dword_140C63EB4)
			goto LABEL_245;
		if ((int)sub_1402098C0() < 0)
			goto LABEL_244;
		v101 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E00 + 24i64))(qword_140C64E00, v100);
	LABEL_231:
		v102 = (_DWORD*)v101;
		if (!v101)
			goto LABEL_244;
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v103 = *(_DWORD*)(v96 + 36);
		if (qword_140C63840)
		{
			v104 = qword_140C63840(off_140A6AC58, v103, qword_140C63858);
			goto LABEL_237;
		}
		if (dword_140C650D4)
			goto LABEL_245;
		if ((int)sub_14020A140() < 0)
			goto LABEL_244;
		v104 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AC8 + 24i64))(qword_140C64AC8, v103);
	LABEL_237:
		if (!v104)
		{
		LABEL_244:
			v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			goto LABEL_245;
		}
		if ((*(_DWORD*)(v96 + 124) & 0x4000) != 0)
		{
			v105 = v253;
			v106 = sub_14018DB00((__int64)v253, v91 + 1, 8i64);
			*(_QWORD*)&v106[2 * v91] = v96;
			v107 = v106;
			if (v105 != v106)
			{
				sub_1407DB590(v106, v105, 8 * v91);
				if (v105)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v105 - 2) + 8i64))(v105 - 4);
				v253 = v107;
			}
			++v91;
			goto LABEL_244;
		}
		if (*(_DWORD*)(v104 + 32) != *v102 || v102[12] != *v99)
			goto LABEL_244;
		v117 = v102[2];
		if (!v117)
			goto LABEL_279;
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		if (!qword_140C63840)
		{
			if (!dword_140C64590)
			{
				if ((int)sub_14020BF00() < 0)
					goto LABEL_244;
				v118 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65498 + 24i64))(qword_140C65498, v117);
				goto LABEL_278;
			}
			goto LABEL_245;
		}
		v118 = qword_140C63840(off_140A6ADE0, v117, qword_140C63858);
	LABEL_278:
		if (!v118)
			goto LABEL_244;
	LABEL_279:
		v119 = *(_DWORD*)(v96 + 16);
		if (!v119)
			goto LABEL_286;
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		if (!qword_140C63840)
		{
			if (!dword_140C64F20)
			{
				if ((int)sub_14020CBC0() < 0)
					goto LABEL_244;
				v120 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D38 + 24i64))(qword_140C63D38, v119);
				goto LABEL_285;
			}
			goto LABEL_245;
		}
		v120 = qword_140C63840(off_140A6AE88, v119, qword_140C63858);
	LABEL_285:
		if (!v120)
			goto LABEL_244;
	LABEL_286:
		v121 = *(_DWORD*)(v96 + 20);
		if (v121 && !sub_14040FA40(v277, v121))
			goto LABEL_244;
		v122 = *(_DWORD*)(v96 + 92);
		if (!v122)
			goto LABEL_295;
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		if (!qword_140C63840)
		{
			if (!dword_140C64D18)
			{
				if ((int)sub_14022A820() < 0)
					goto LABEL_244;
				v123 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C642A8 + 24i64))(qword_140C642A8, v122);
				goto LABEL_294;
			}
			goto LABEL_245;
		}
		v123 = qword_140C63840(off_140A6C708, v122, qword_140C63858);
	LABEL_294:
		if (!v123)
			goto LABEL_244;
	LABEL_295:
		v124 = *(_DWORD*)(v96 + 96);
		if (!v124)
			goto LABEL_302;
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		if (!qword_140C63840)
		{
			if (!dword_140C64D18)
			{
				if ((int)sub_14022A820() < 0)
					goto LABEL_244;
				v125 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C642A8 + 24i64))(qword_140C642A8, v124);
				goto LABEL_301;
			}
			goto LABEL_245;
		}
		v125 = qword_140C63840(off_140A6C708, v124, qword_140C63858);
	LABEL_301:
		if (!v125)
			goto LABEL_244;
	LABEL_302:
		if ((unsigned int)(*(_DWORD*)(v96 + 80) - 1) > 0x3E7)
			goto LABEL_244;
		v126 = *(float*)(v96 + 172);
		if (v126 < -1.0 || v126 > 1.0)
			goto LABEL_244;
		v127 = v279;
		v128 = v279 + 1;
		v129 = sub_14018DB00((__int64)v247, v279 + 1, 8i64);
		v130 = v129;
		*(_QWORD*)&v129[2 * v127] = v96;
		if (v247 != v129)
		{
			sub_1407DB590(v129, v247, 8 * v127);
			if (v247)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v247 - 2) + 8i64))(v247 - 4);
			v247 = v130;
		}
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v89 = v128;
		v279 = v128;
	LABEL_246:
		if (++v6 < v93)
			continue;
		break;
	}
	v90 = v247;
LABEL_248:
	v280 = v89;
	if (v91)
	{
		v108 = v91 + v89;
		v109 = sub_14018DB00((__int64)v90, v91 + v89, 8i64);
		v110 = 2 * v89;
		v111 = v109;
		sub_1407DB590(&v109[v110], v253, 8 * v91);
		if (v90 != v111)
		{
			sub_1407DB590(v111, v90, v110 * 4);
			if (v90)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v90 - 2) + 8i64))(v90 - 4);
			v90 = v111;
			v247 = v111;
		}
		v89 = v108;
		v279 = v108;
	}
	v112 = sub_14018B280(40i64, 0);
	v113 = v112;
	if (v112)
	{
		*(_QWORD*)v112 = 0i64;
		if (v89 < 2)
			goto LABEL_310;
		v114 = v89 - 1;
		v115 = 1;
		if (((v89 - 1) & 0xFFFFFFFF00000000ui64) != 0)
		{
			v115 = 33;
			v114 >>= 32;
		}
		if ((v114 & 0xFFFF0000) != 0)
		{
			v115 += 16;
			v114 >>= 16;
		}
		if ((v114 & 0xFF00) != 0)
		{
			v115 += 8;
			v114 >>= 8;
		}
		if ((v114 & 0xF0) != 0)
		{
			v115 += 4;
			v114 >>= 4;
		}
		if ((v114 & 0xC) != 0)
		{
			v115 += 2;
			v114 >>= 2;
		}
		if ((v114 & 2) != 0)
			++v115;
		if ((unsigned __int8)v115 < 4u)
			LABEL_310:
		v116 = 0;
		else
			v116 = v115 - 4;
		v131 = *(_QWORD*)&asc_140B5E820[8 * v116];
		if (v89 > v131)
			v131 = *(_QWORD*)&asc_140B5E820[8 * v116 + 8];
		*((_QWORD*)v112 + 1) = v131;
		v132 = 8 * v131;
		if (!is_mul_ok(v131, 8ui64))
			v132 = -1i64;
		v133 = sub_14018B280(v132, 0);
		v134 = 8i64 * *((_QWORD*)v113 + 1);
		*((_QWORD*)v113 + 2) = v133;
		sub_1407E4830(v133, 0i64, v134);
		*((_QWORD*)v113 + 3) = sub_1400522D0;
		*((_QWORD*)v113 + 4) = sub_1400522E0;
	}
	else
	{
		v113 = 0i64;
	}
	v135 = v277;
	v136 = 0i64;
	*(_QWORD*)(v277 + 88) = v113;
	if (v89)
	{
		while (2)
		{
			v137 = *(unsigned int**)&v90[2 * v136];
			if (*(_DWORD*)(v135 + 8) || (v138 = sub_14018B280(496i64, 0), (v139 = v138) == 0i64))
			{
				v139 = 0i64;
			}
			else
			{
				v140 = v138 + 2;
				sub_1400B52A0((__int64)(v138 + 2));
				sub_1407E4830(v139, 0i64, 0x1F0ui64);
				sub_1407E4830(v140, 0i64, 0x138ui64);
				v140 += 37;
				sub_1407E4830(v140, 0i64, 0x90ui64);
				*(_QWORD*)v140 = 0xC5000000C5i64;
				*((_QWORD*)v140 + 1) = 0xC5000000C5i64;
				*((_QWORD*)v140 + 2) = 0xC5000000C5i64;
				*((_QWORD*)v140 + 3) = 0xC5000000C5i64;
				*((_QWORD*)v140 + 4) = 0xC5000000C5i64;
				*((_QWORD*)v140 + 5) = 0xC5000000C5i64;
				*((_QWORD*)v140 + 6) = 0xC5000000C5i64;
				v140[14] = 197;
			}
			if ((int)sub_1404445D0((_DWORD*)v135, (__int64)v139, *v137) < 0)
			{
				if (v139)
					sub_14018B900((__int64)v139, 0);
			LABEL_397:
				if (++v136 >= v279)
					goto LABEL_398;
				continue;
			}
			break;
		}
		v141 = *(_QWORD*)(v135 + 88);
		v142 = *(_QWORD*)(v141 + 8);
		if (v139)
		{
			if (*(_QWORD*)v141 == v142)
				sub_1400290D0(*(_QWORD*)(v135 + 88));
			v143 = (*(__int64(__fastcall**)(unsigned int*))(v141 + 24))(v137);
			v144 = *(_QWORD*)(v141 + 16);
			v145 = v143;
			v146 = v143 % *(_QWORD*)(v141 + 8);
			v147 = sub_14018B280(32i64, 0);
			if (v147)
			{
				v148 = *(_QWORD*)(v144 + 8 * v146);
				*(_QWORD*)v147 = v145;
				v135 = v277;
				*((_QWORD*)v147 + 1) = v148;
				LODWORD(v148) = *v137;
				*((_QWORD*)v147 + 3) = v139;
				v147[4] = v148;
				*(_QWORD*)(v144 + 8 * v146) = v147;
			}
			else
			{
				v135 = v277;
				*(_QWORD*)(v144 + 8 * v146) = 0i64;
			}
		}
		else
		{
			if (*(_QWORD*)v141 == v142)
				sub_1400290D0(*(_QWORD*)(v135 + 88));
			v149 = (*(__int64(__fastcall**)(unsigned int*))(v141 + 24))(v137);
			v150 = *(_QWORD*)(v141 + 16);
			v151 = v149;
			v152 = v149 % *(_QWORD*)(v141 + 8);
			v153 = sub_14018B280(32i64, 0);
			if (v153)
			{
				v154 = *(_QWORD*)(v150 + 8 * v152);
				*(_QWORD*)v153 = v151;
				*((_QWORD*)v153 + 1) = v154;
				LODWORD(v154) = *v137;
				*((_QWORD*)v153 + 3) = 1i64;
				v153[4] = v154;
			}
			*(_QWORD*)(v150 + 8 * v152) = v153;
		}
		++* (_QWORD*)v141;
		if (v136 < v280)
		{
			v155 = v137[26];
			if (!v155)
				goto LABEL_366;
			v156 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			if (qword_140C63840)
			{
				v157 = qword_140C63840(off_140A6DB98, v155, qword_140C63858);
			LABEL_343:
				v158 = v157;
				if (v157)
				{
					v159 = *(_QWORD*)(v135 + 392);
					v160 = (int*)v159;
					v161 = *(_QWORD*)(v159 + 8);
					while (v161)
					{
						if (*(_DWORD*)(v161 + 32) < *(_DWORD*)(v158 + 4))
						{
							v161 = *(_QWORD*)(v161 + 24);
						}
						else
						{
							v160 = (int*)v161;
							v161 = *(_QWORD*)(v161 + 16);
						}
					}
					if (v160 == (int*)v159 || *(_DWORD*)(v158 + 4) < (unsigned int)v160[8])
					{
						LODWORD(v273) = *(_DWORD*)(v158 + 4);
						v274 = 0i64;
						v248 = v160;
						sub_140055C60(v135 + 384, &v252, (__int64*)&v248, &v273);
						v160 = v252;
					}
					v162 = (__int64*)*((_QWORD*)v160 + 5);
					if (!v162)
					{
						v163 = sub_14018B280(16i64, 0);
						v162 = (__int64*)v163;
						if (v163)
						{
							*((_QWORD*)v163 + 1) = 0i64;
							*(_QWORD*)v163 = 0i64;
						}
						else
						{
							v162 = 0i64;
						}
						v164 = *(_QWORD*)(v135 + 392);
						v165 = (int*)v164;
						v166 = *(_QWORD*)(v164 + 8);
						while (v166)
						{
							if (*(_DWORD*)(v166 + 32) < *(_DWORD*)(v158 + 4))
							{
								v166 = *(_QWORD*)(v166 + 24);
							}
							else
							{
								v165 = (int*)v166;
								v166 = *(_QWORD*)(v166 + 16);
							}
						}
						if (v165 == (int*)v164 || *(_DWORD*)(v158 + 4) < (unsigned int)v165[8])
						{
							LODWORD(v271) = *(_DWORD*)(v158 + 4);
							v272[0] = 0i64;
							v248 = v165;
							sub_140055C60(v135 + 384, &v251, (__int64*)&v248, &v271);
							v165 = v251;
						}
						*((_QWORD*)v165 + 5) = v162;
					}
					sub_140003460(v162, (int*)v137);
				}
				goto LABEL_366;
			}
			if (!dword_140C64E9C)
			{
				if ((int)sub_1402437A0() >= 0)
				{
					v157 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64CB0 + 24i64))(
						qword_140C64CB0,
						v155);
					goto LABEL_343;
				}
			LABEL_366:
				v156 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			}
			v167 = v137[27];
			if (v167)
			{
				if (v156)
				{
					v168 = v156(off_140A6DC08, v167, qword_140C63858);
				LABEL_373:
					v169 = v168;
					if (v168)
					{
						v170 = *(_QWORD*)(v135 + 424);
						v171 = (int*)v170;
						v172 = *(_QWORD*)(v170 + 8);
						while (v172)
						{
							if (*(_DWORD*)(v172 + 32) < *(_DWORD*)(v169 + 4))
							{
								v172 = *(_QWORD*)(v172 + 24);
							}
							else
							{
								v171 = (int*)v172;
								v172 = *(_QWORD*)(v172 + 16);
							}
						}
						if (v171 == (int*)v170 || *(_DWORD*)(v169 + 4) < (unsigned int)v171[8])
						{
							LODWORD(v269) = *(_DWORD*)(v169 + 4);
							*(_QWORD*)&v270 = 0i64;
							v248 = v171;
							sub_140055C60(v135 + 416, &v276, (__int64*)&v248, &v269);
							v171 = v276;
						}
						v173 = (__int64*)*((_QWORD*)v171 + 5);
						if (!v173)
						{
							v174 = sub_14018B280(16i64, 0);
							v173 = (__int64*)v174;
							if (v174)
							{
								*((_QWORD*)v174 + 1) = 0i64;
								*(_QWORD*)v174 = 0i64;
							}
							else
							{
								v173 = 0i64;
							}
							v175 = *(_QWORD*)(v135 + 424);
							v176 = (int*)v175;
							v177 = *(_QWORD*)(v175 + 8);
							while (v177)
							{
								if (*(_DWORD*)(v177 + 32) < *(_DWORD*)(v169 + 4))
								{
									v177 = *(_QWORD*)(v177 + 24);
								}
								else
								{
									v176 = (int*)v177;
									v177 = *(_QWORD*)(v177 + 16);
								}
							}
							if (v176 == (int*)v175 || *(_DWORD*)(v169 + 4) < (unsigned int)v176[8])
							{
								LODWORD(TlsValue) = *(_DWORD*)(v169 + 4);
								*(_QWORD*)&v250 = 0i64;
								v248 = v176;
								sub_140055C60(v135 + 416, &v275, (__int64*)&v248, &TlsValue);
								v176 = v275;
							}
							*((_QWORD*)v176 + 5) = v173;
						}
						sub_140003460(v173, (int*)v137);
					}
				}
				else if (!dword_140C64338 && (int)sub_140244020() >= 0)
				{
					v168 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63968 + 24i64))(
						qword_140C63968,
						v167);
					goto LABEL_373;
				}
			}
		}
		v90 = v247;
		goto LABEL_397;
	}
LABEL_398:
	v178 = *(_QWORD*)(v135 + 392);
	v179 = *(_QWORD*)(v178 + 16);
	if (v179 != v178)
	{
		do
		{
			sub_140029250(*(__int64**)(v179 + 40), (__int64)sub_1404420B0, v135);
			v180 = *(_QWORD*)(v179 + 24);
			if (v180)
			{
				v179 = *(_QWORD*)(v179 + 24);
				for (i = *(_QWORD*)(v180 + 16); i; i = *(_QWORD*)(i + 16))
					v179 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v179 + 8); v179 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v179 = j;
				if (*(_QWORD*)(v179 + 24) != j)
					v179 = j;
			}
		} while (v179 != *(_QWORD*)(v135 + 392));
	}
	v183 = *(_QWORD*)(v135 + 424);
	v184 = *(_QWORD*)(v183 + 16);
	if (v184 != v183)
	{
		do
		{
			sub_140029250(*(__int64**)(v184 + 40), (__int64)sub_140442220, v135);
			v185 = *(_QWORD*)(v184 + 24);
			if (v185)
			{
				v184 = *(_QWORD*)(v184 + 24);
				for (k = *(_QWORD*)(v185 + 16); k; k = *(_QWORD*)(k + 16))
					v184 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v184 + 8); v184 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v184 = m;
				if (*(_QWORD*)(v184 + 24) != m)
					v184 = m;
			}
		} while (v184 != *(_QWORD*)(v135 + 424));
	}
	if (qword_140C63838)
	{
		v188 = qword_140C63838(off_140A6DCB0, qword_140C63858);
	}
	else if (dword_140C63F58)
	{
		v188 = 0;
	}
	else if ((int)sub_140244CE0() >= 0)
	{
		v188 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63978 + 40i64))(qword_140C63978);
	}
	else
	{
		v188 = 0;
	}
	v189 = 0;
	v190 = 0;
	LODWORD(v279) = v188;
	if (v188)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v191 = qword_140C63848(off_140A6DCB0, v190, qword_140C63858);
				goto LABEL_433;
			}
			if (dword_140C63F58)
			{
				v192 = 0i64;
			}
			else if ((int)sub_140244CE0() >= 0)
			{
				v191 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63978 + 32i64))(qword_140C63978, v190);
			LABEL_433:
				v192 = (unsigned int*)v191;
			}
			else
			{
				v192 = 0i64;
			}
			if (*v192 < 0x200)
			{
				v193 = *(_QWORD*)(v135 + 88);
				v194 = v192 + 1;
				v195 = (*(__int64(__fastcall**)(unsigned int*))(v193 + 24))(v192 + 1);
				v196 = *(_QWORD**)(*(_QWORD*)(v193 + 16) + 8 * (v195 % *(_QWORD*)(v193 + 8)));
				if (!v196)
					goto LABEL_450;
				while (v195 != *v196
					|| !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v193 + 32))(v192 + 1, v196 + 2))
				{
					v196 = (_QWORD*)v196[1];
					if (!v196)
						goto LABEL_450;
				}
				v135 = v277;
				v197 = v196 + 3;
				if (v197)
				{
					if (!*(_DWORD*)(v277 + 8))
					{
						*(_DWORD*)(*v197 + 456i64) = *v192;
						goto LABEL_451;
					}
					v198 = *(_QWORD*)(v277 + 88);
					if (*v192 > v189)
						v189 = *v192;
					LODWORD(v280) = v189;
					sub_1400B6120(v198, (__int64)(v192 + 1));
					v199 = *(_QWORD*)(v135 + 88);
					v200 = 2 * *v192 + 1;
					if (*(_QWORD*)v199 == *(_QWORD*)(v199 + 8))
						sub_1400290D0(*(_QWORD*)(v135 + 88));
					v201 = (*(__int64(__fastcall**)(unsigned int*))(v199 + 24))(v192 + 1);
					v202 = *(_QWORD*)(v199 + 16);
					v203 = v201;
					v204 = v201 % *(_QWORD*)(v199 + 8);
					v205 = sub_14018B280(32i64, 0);
					if (v205)
					{
						v206 = *(_QWORD*)(v202 + 8 * v204);
						*(_QWORD*)v205 = v203;
						*((_QWORD*)v205 + 1) = v206;
						LODWORD(v206) = *v194;
						*((_QWORD*)v205 + 3) = v200;
						v205[4] = v206;
					}
					v189 = v280;
					*(_QWORD*)(v202 + 8 * v204) = v205;
					++* (_QWORD*)v199;
				LABEL_450:
					v135 = v277;
				}
			}
		LABEL_451:
			if (++v190 >= (unsigned int)v279)
				break;
			continue;
		}
	}
	if (qword_140C63838)
	{
		v207 = qword_140C63838(off_140A6DD58, qword_140C63858);
		goto LABEL_459;
	}
	if (dword_140C654F8)
	{
		v208 = 0;
	}
	else if ((int)sub_1402459A0() >= 0)
	{
		v207 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63868 + 40i64))(qword_140C63868);
	LABEL_459:
		v208 = v207;
	}
	else
	{
		v208 = 0;
	}
	v209 = *(_DWORD*)(v135 + 8) == 0;
	LODWORD(v279) = v208;
	if (v209)
	{
		LODWORD(v251) = v278;
		v212 = v278;
	}
	else
	{
		if (v189 >= 2)
		{
			v211 = v189 - 1;
			v210 = 1;
			if (((v189 - 1) & 0xFFFF0000) != 0)
			{
				v210 = 17;
				v211 >>= 16;
			}
			if ((v211 & 0xFF00) != 0)
			{
				v210 += 8;
				v211 >>= 8;
			}
			if ((v211 & 0xF0) != 0)
			{
				v210 += 4;
				v211 >>= 4;
			}
			if ((v211 & 0xC) != 0)
			{
				v210 += 2;
				v211 >>= 2;
			}
			if ((v211 & 2) != 0)
				++v210;
		}
		else
		{
			v210 = 0;
		}
		*(_DWORD*)(v135 + 12) = v210;
		LODWORD(v251) = v210 + 1;
		v212 = (1 << (char)v251) - 1;
	}
	v213 = 0;
	v214 = 0;
	LODWORD(v252) = v212;
	LODWORD(v280) = 0;
	LODWORD(v248) = 0;
	if (v208)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v215 = qword_140C63848(off_140A6DD58, v214, qword_140C63858);
				goto LABEL_483;
			}
			if (dword_140C654F8)
			{
				v216 = 0i64;
			}
			else if ((int)sub_1402459A0() >= 0)
			{
				v215 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 32i64))(qword_140C63868, v214);
			LABEL_483:
				v216 = (unsigned int*)v215;
			}
			else
			{
				v216 = 0i64;
			}
			v217 = *(_QWORD*)(v135 + 88);
			v218 = (*(__int64(__fastcall**)(unsigned int*))(v217 + 24))(v216 + 3);
			v219 = *(_QWORD**)(*(_QWORD*)(v217 + 16) + 8 * (v218 % *(_QWORD*)(v217 + 8)));
			if (v219)
			{
				while (v218 != *v219
					|| !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v217 + 32))(v216 + 3, v219 + 2))
				{
					v219 = (_QWORD*)v219[1];
					if (!v219)
						goto LABEL_499;
				}
				v220 = v219 + 3;
				if (v220)
				{
					v221 = *v220;
					if (*(_DWORD*)(v277 + 8))
					{
						if (*v216 > v213)
							v213 = *v216;
						LODWORD(v280) = v213;
						v222 = v277;
						sub_1400B6120(*(_QWORD*)(v277 + 88), (__int64)(v216 + 3));
						v223 = ((unsigned int)v252 & (unsigned int)v221) + (*v216 << (char)v251);
						v224 = *(_QWORD*)(v222 + 88);
						if (*(_QWORD*)v224 == *(_QWORD*)(v224 + 8))
							sub_1400290D0(*(_QWORD*)(v222 + 88));
						v225 = (*(__int64(__fastcall**)(unsigned int*))(v224 + 24))(v216 + 3);
						v226 = *(_QWORD*)(v224 + 16);
						v227 = v225;
						v228 = v225 % *(_QWORD*)(v224 + 8);
						v229 = sub_14018B280(32i64, 0);
						if (v229)
						{
							v230 = *(_QWORD*)(v226 + 8 * v228);
							*(_QWORD*)v229 = v227;
							*((_QWORD*)v229 + 1) = v230;
							LODWORD(v230) = v216[3];
							*((_QWORD*)v229 + 3) = v223;
							v229[4] = v230;
						}
						v214 = (unsigned int)v248;
						v213 = v280;
						*(_QWORD*)(v226 + 8 * v228) = v229;
						++* (_QWORD*)v224;
					}
					else
					{
						*(_DWORD*)(v221 + 460) = *v216;
					}
				}
			}
		LABEL_499:
			v231 = v216 + 24;
			v232 = *(_QWORD*)(v277 + 88);
			v233 = (*(__int64(__fastcall**)(unsigned int*))(v232 + 24))(v216 + 24);
			v234 = *(_QWORD**)(*(_QWORD*)(v232 + 16) + 8 * (v233 % *(_QWORD*)(v232 + 8)));
			if (!v234)
				goto LABEL_514;
			while (v233 != *v234
				|| !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v232 + 32))(v216 + 24, v234 + 2))
			{
				v234 = (_QWORD*)v234[1];
				if (!v234)
					goto LABEL_514;
			}
			v135 = v277;
			v235 = v234 + 3;
			if (v235)
			{
				v236 = *v235;
				if (!*(_DWORD*)(v277 + 8))
				{
					*(_DWORD*)(v236 + 460) = *v216;
					goto LABEL_515;
				}
				v237 = *(_QWORD*)(v277 + 88);
				if (*v216 > v213)
					v213 = *v216;
				LODWORD(v280) = v213;
				sub_1400B6120(v237, (__int64)(v216 + 24));
				v238 = ((unsigned int)v252 & (unsigned int)v236) + (*v216 << (char)v251);
				v239 = *(_QWORD*)(v135 + 88);
				if (*(_QWORD*)v239 == *(_QWORD*)(v239 + 8))
					sub_1400290D0(*(_QWORD*)(v135 + 88));
				v240 = (*(__int64(__fastcall**)(unsigned int*))(v239 + 24))(v216 + 24);
				v241 = *(_QWORD*)(v239 + 16);
				v242 = v240;
				v243 = v240 % *(_QWORD*)(v239 + 8);
				v244 = sub_14018B280(32i64, 0);
				if (v244)
				{
					v245 = *(_QWORD*)(v241 + 8 * v243);
					*(_QWORD*)v244 = v242;
					*((_QWORD*)v244 + 1) = v245;
					LODWORD(v245) = *v231;
					*((_QWORD*)v244 + 3) = v238;
					v244[4] = v245;
				}
				*(_QWORD*)(v241 + 8 * v243) = v244;
				++* (_QWORD*)v239;
			LABEL_514:
				v135 = v277;
			}
		LABEL_515:
			v213 = v280;
			LODWORD(v248) = ++v214;
			if (v214 >= (unsigned int)v279)
				break;
			continue;
		}
	}
	v246 = v253;
	*(_DWORD*)(v135 + 16) = 1;
	if (v246)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v246 - 2) + 8i64))(v246 - 4);
	if (v247)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v247 - 2) + 8i64))(v247 - 4);
	return 0i64;
}
// 140A6ABB0: using guessed type wchar_t *off_140A6ABB0[2];
// 140A6ABE8: using guessed type wchar_t *off_140A6ABE8[2];
// 140A6AC20: using guessed type wchar_t *off_140A6AC20[2];
// 140A6AC58: using guessed type wchar_t *off_140A6AC58[2];
// 140A6ADE0: using guessed type wchar_t *off_140A6ADE0[2];
// 140A6AE18: using guessed type wchar_t *off_140A6AE18[2];
// 140A6AE50: using guessed type wchar_t *off_140A6AE50[2];
// 140A6AE88: using guessed type wchar_t *off_140A6AE88[2];
// 140A6AF30: using guessed type wchar_t *off_140A6AF30[2];
// 140A6B240: using guessed type wchar_t *off_140A6B240[2];
// 140A6C708: using guessed type wchar_t *off_140A6C708[2];
// 140A6DB98: using guessed type wchar_t *off_140A6DB98[2];
// 140A6DC08: using guessed type wchar_t *off_140A6DC08[2];
// 140A6DCB0: using guessed type wchar_t *off_140A6DCB0[2];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C63968: using guessed type __int64 qword_140C63968;
// 140C63978: using guessed type __int64 qword_140C63978;
// 140C63A54: using guessed type int dword_140C63A54;
// 140C63A68: using guessed type __int64 qword_140C63A68;
// 140C63AAC: using guessed type int dword_140C63AAC;
// 140C63D38: using guessed type __int64 qword_140C63D38;
// 140C63EB4: using guessed type int dword_140C63EB4;
// 140C63F00: using guessed type __int64 qword_140C63F00;
// 140C63F58: using guessed type int dword_140C63F58;
// 140C63F8C: using guessed type int dword_140C63F8C;
// 140C64070: using guessed type int dword_140C64070;
// 140C640E8: using guessed type __int64 qword_140C640E8;
// 140C642A8: using guessed type __int64 qword_140C642A8;
// 140C642E8: using guessed type int dword_140C642E8;
// 140C64338: using guessed type int dword_140C64338;
// 140C64508: using guessed type __int64 qword_140C64508;
// 140C64590: using guessed type int dword_140C64590;
// 140C64868: using guessed type int dword_140C64868;
// 140C64930: using guessed type __int64 qword_140C64930;
// 140C649FC: using guessed type int dword_140C649FC;
// 140C64AC8: using guessed type __int64 qword_140C64AC8;
// 140C64CB0: using guessed type __int64 qword_140C64CB0;
// 140C64D18: using guessed type int dword_140C64D18;
// 140C64E00: using guessed type __int64 qword_140C64E00;
// 140C64E9C: using guessed type int dword_140C64E9C;
// 140C64F20: using guessed type int dword_140C64F20;
// 140C65060: using guessed type __int64 qword_140C65060;
// 140C650D4: using guessed type int dword_140C650D4;
// 140C653B8: using guessed type __int64 qword_140C653B8;
// 140C65498: using guessed type __int64 qword_140C65498;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C8AC58: using guessed type _DWORD dword_140C8AC58;
// 1404422F0: using guessed type char var_118[8];

