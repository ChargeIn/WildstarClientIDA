#include "../winhttp.h"

//----- (0000000140138940) ----------------------------------------------------
void __fastcall sub_140138940(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	const __m128i* v3; // r15
	__int64 v4; // rax
	_QWORD* v5; // r12
	__int64 v6; // rcx
	_QWORD* v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned int v11; // ebx
	__int64 v12; // rdi
	bool v13; // zf
	__int64 v14; // r13
	__int64 v15; // rsi
	__int64 v16; // rax
	__int64 v17; // r15
	__int64 i; // rbx
	__int64 v19; // rax
	int* v20; // rax
	__int64 v21; // rax
	int* v22; // rbx
	__int64 v23; // rax
	int* v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rdi
	__int64 v27; // rbx
	__int64 v28; // rax
	int* v29; // rax
	__int64 v30; // rax
	unsigned int v31; // ebx
	__int64 v32; // rdi
	__int64 v33; // rbx
	__int64 v34; // rax
	int* v35; // rax
	__int64 v36; // rax
	char v37; // bl
	__int64 v38; // rdi
	__int64 v39; // rbx
	__int64 v40; // rax
	int* v41; // rax
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // rdi
	__int64 j; // rsi
	__int64 v48; // rax
	int* v49; // rax
	__int64 v50; // rax
	int* v51; // rsi
	__int64 v52; // rax
	__int64 v53; // r13
	__int64 v54; // rsi
	__int64 v55; // rax
	int* v56; // rax
	__int64 v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rax
	__int64 v60; // rax
	__int64 v61; // rcx
	__int64 v62; // rcx
	__int64 v63; // rax
	__int64 v64; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v67; // rcx
	__int64 v68; // rax
	__int64 v69; // rax
	__int64 v70; // rcx
	__int64 v71; // rcx
	__int64 v72; // rax
	__int64 v73; // rcx
	__int64 v74; // r8
	__int64 v75; // rax
	int* v76; // rbx
	__int64 v77; // rcx
	int n; // eax
	int v79; // eax
	int jj; // eax
	int kk; // eax
	__int64 v82; // rcx
	__int64* v83; // rax
	__int64* v84; // rax
	__int64 v85; // rcx
	int* v86; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v87; // [rsp+30h] [rbp-D8h]
	_QWORD* v88; // [rsp+38h] [rbp-D0h]
	__int64 v89; // [rsp+40h] [rbp-C8h]
	__int64 v90; // [rsp+48h] [rbp-C0h]
	const __m128i* v91; // [rsp+50h] [rbp-B8h]
	__int64 v92[2]; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v93; // [rsp+68h] [rbp-A0h]
	__int64 v94; // [rsp+70h] [rbp-98h]
	__int64 v95; // [rsp+78h] [rbp-90h]
	_QWORD* v96; // [rsp+88h] [rbp-80h]
	_QWORD* v97; // [rsp+90h] [rbp-78h]
	__int64 v98; // [rsp+98h] [rbp-70h]
	__int64 v99; // [rsp+A0h] [rbp-68h]
	int v100; // [rsp+B4h] [rbp-54h]
	__int64 v101; // [rsp+C0h] [rbp-48h]
	__int64 v102; // [rsp+C8h] [rbp-40h]
	__int64(__fastcall * *v103)(); // [rsp+D8h] [rbp-30h] BYREF
	char* v104; // [rsp+E0h] [rbp-28h]
	char v105; // [rsp+E8h] [rbp-20h] BYREF
	int v106; // [rsp+13Ch] [rbp+34h]
	__int64 v107; // [rsp+140h] [rbp+38h]
	__int128 v108; // [rsp+148h] [rbp+40h]
	__int64(__fastcall * *v109)(); // [rsp+158h] [rbp+50h]
	char* v110; // [rsp+160h] [rbp+58h]
	char v111; // [rsp+168h] [rbp+60h] BYREF
	int v112; // [rsp+1BCh] [rbp+B4h]
	__int64 v113; // [rsp+1C0h] [rbp+B8h]
	__int128 v114; // [rsp+1C8h] [rbp+C0h]
	__int64(__fastcall * *v115)(); // [rsp+1D8h] [rbp+D0h]
	char* v116; // [rsp+1E0h] [rbp+D8h]
	char v117; // [rsp+1E8h] [rbp+E0h] BYREF
	int v118; // [rsp+23Ch] [rbp+134h]
	__int64 v119; // [rsp+240h] [rbp+138h]
	__int128 v120; // [rsp+248h] [rbp+140h]
	__int64(__fastcall * *ii)(); // [rsp+258h] [rbp+150h]
	char* v122; // [rsp+260h] [rbp+158h]
	char v123; // [rsp+268h] [rbp+160h] BYREF
	int v124; // [rsp+2BCh] [rbp+1B4h]
	__int64 v125; // [rsp+2C0h] [rbp+1B8h]
	__int128 v126; // [rsp+2C8h] [rbp+1C0h]
	int v127[100]; // [rsp+2D8h] [rbp+1D0h] BYREF

	v2 = a1;
	v90 = a1;
	v3 = (const __m128i*)a2;
	v91 = (const __m128i*)a2;
	sub_1401A72E0((__int64)v92);
	v4 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v103[2])(&v103);
	v5 = (_QWORD*)v4;
	v88 = (_QWORD*)v4;
	if (v4)
	{
		*(_QWORD*)(v4 + 16) = 0i64;
		*(_QWORD*)(v4 + 8) = v92;
		*(_DWORD*)(v4 + 24) = 0;
		*(_QWORD*)(v4 + 32) = 0i64;
		*(_QWORD*)(v4 + 40) = 0i64;
		*(_QWORD*)(v4 + 48) = 0i64;
		*(_QWORD*)(v4 + 56) = 0i64;
		*(_QWORD*)(v4 + 64) = 0i64;
		*(_QWORD*)(v4 + 72) = 0i64;
		*(_QWORD*)(v4 + 80) = 0i64;
		*(_QWORD*)v4 = off_140B5EBA0;
		*(_DWORD*)(v4 + 88) = 0;
		*(_QWORD*)(v4 + 96) = 0i64;
	}
	else
	{
		v5 = 0i64;
		v88 = 0i64;
	}
	v5[10] = &v103;
	sub_1401A4C50((__int64)(v5 + 3), (int*)L"Addons");
	if (v5[1] == v92[1])
	{
		v6 = v5[2];
		if (v6)
		{
			v7 = *(_QWORD**)(v6 + 48);
			if (v5 == v7)
				*(_QWORD*)(v6 + 48) = v7[9];
			v8 = *(_QWORD**)(v6 + 56);
			if (v5 == v8)
				*(_QWORD*)(v6 + 56) = v8[8];
			v9 = v5[8];
			if (v9)
				*(_QWORD*)(v9 + 72) = v5[9];
			v10 = v5[9];
			if (v10)
				*(_QWORD*)(v10 + 64) = v5[8];
			v5[2] = 0i64;
		}
		else
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v5[10] + 32i64))(v5[10]);
		}
		if (v97)
		{
			v97[9] = v5;
			v5[8] = v97;
			v97 = v5;
		}
		else
		{
			v97 = v5;
			v96 = v5;
			v5[8] = 0i64;
		}
		v5[9] = 0i64;
		v5[2] = v92;
	}
	v11 = *(_DWORD*)(v2 + 72);
	v12 = sub_1401A6C70((__int64)v5, (int*)L"APIVersion");
	sub_1401A4C20(v127, 0xC8ui64, (__int64)L"%d", v11);
	sub_1401A4C50(v12 + 32, v127);
	v13 = *(_DWORD*)(v2 + 24) == 0;
	LODWORD(v86) = 0;
	if (!v13)
	{
		v87 = 0i64;
		v14 = 0i64;
		do
		{
			v15 = *(_QWORD*)(v14 + *(_QWORD*)(v2 + 16));
			v89 = v15;
			if (*(_BYTE*)(v15 + 312))
			{
				v16 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v103[2])(&v103);
				v17 = v16;
				if (v16)
				{
					*(_QWORD*)(v16 + 16) = 0i64;
					*(_QWORD*)(v16 + 8) = v92;
					*(_DWORD*)(v16 + 24) = 0;
					*(_QWORD*)(v16 + 32) = 0i64;
					*(_QWORD*)(v16 + 40) = 0i64;
					*(_QWORD*)(v16 + 48) = 0i64;
					*(_QWORD*)(v16 + 56) = 0i64;
					*(_QWORD*)(v16 + 64) = 0i64;
					*(_QWORD*)(v16 + 72) = 0i64;
					*(_QWORD*)v16 = off_140B5EBA0;
					*(_QWORD*)(v16 + 80) = 0i64;
					*(_DWORD*)(v16 + 88) = 0;
					*(_QWORD*)(v16 + 96) = 0i64;
				}
				else
				{
					v17 = 0i64;
				}
				*(_QWORD*)(v17 + 80) = &v103;
				if ((*(_DWORD*)(v17 + 24) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v17 + 32), 0);
				*(_DWORD*)(v17 + 24) = 0;
				*(_QWORD*)(v17 + 32) = 0i64;
				*(_QWORD*)(v17 + 40) = 0i64;
				for (i = 0i64; aAddon[i]; ++i)
					;
				v19 = 2 * (i + 1);
				if (!is_mul_ok(i + 1, 2ui64))
					v19 = -1i64;
				v20 = sub_14018B280(v19, 0);
				*(_QWORD*)(v17 + 32) = v20;
				sub_1407DB590(v20, (int*)L"Addon", 2 * i + 2);
				v21 = *(_QWORD*)(v17 + 32);
				*(_DWORD*)(v17 + 24) = 512;
				*(_QWORD*)(v17 + 40) = v21 + 2 * i;
				v22 = *(int**)(v15 + 128);
				v23 = sub_1401A6C70(v17, (int*)L"Folder");
				sub_1401A4C50(v23 + 32, v22);
				v24 = *(int**)(v15 + 96);
				v25 = sub_1401A6C70(v17, (int*)L"SubLoc");
				sub_1401A4C50(v25 + 32, v24);
				LOBYTE(v24) = *(_BYTE*)(v15 + 264);
				v26 = sub_1401A6C70(v17, (int*)L"Carbine");
				sub_1401A4C20(v127, 0xC8ui64, (__int64)L"%d", (_BYTE)v24 != 0);
				if ((*(_DWORD*)(v26 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v26 + 40), 0);
				v13 = LOWORD(v127[0]) == 0;
				*(_DWORD*)(v26 + 32) = 0;
				*(_QWORD*)(v26 + 40) = 0i64;
				*(_QWORD*)(v26 + 48) = 0i64;
				v27 = 0i64;
				if (!v13)
				{
					do
						++v27;
					while (*((_WORD*)v127 + v27));
				}
				v28 = 2 * (v27 + 1);
				if (!is_mul_ok(v27 + 1, 2ui64))
					v28 = -1i64;
				v29 = sub_14018B280(v28, 0);
				*(_QWORD*)(v26 + 40) = v29;
				sub_1407DB590(v29, v127, 2 * v27 + 2);
				v30 = *(_QWORD*)(v26 + 40);
				*(_DWORD*)(v26 + 32) = 512;
				*(_QWORD*)(v26 + 48) = v30 + 2 * v27;
				v31 = *(_DWORD*)(v15 + 268);
				v32 = sub_1401A6C70(v17, (int*)L"LoadOnStart");
				sub_1401A4C20(v127, 0xC8ui64, (__int64)L"%d", v31);
				if ((*(_DWORD*)(v32 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v32 + 40), 0);
				v13 = LOWORD(v127[0]) == 0;
				*(_DWORD*)(v32 + 32) = 0;
				*(_QWORD*)(v32 + 40) = 0i64;
				*(_QWORD*)(v32 + 48) = 0i64;
				v33 = 0i64;
				if (!v13)
				{
					do
						++v33;
					while (*((_WORD*)v127 + v33));
				}
				v34 = 2 * (v33 + 1);
				if (!is_mul_ok(v33 + 1, 2ui64))
					v34 = -1i64;
				v35 = sub_14018B280(v34, 0);
				*(_QWORD*)(v32 + 40) = v35;
				sub_1407DB590(v35, v127, 2 * v33 + 2);
				v36 = *(_QWORD*)(v32 + 40);
				*(_DWORD*)(v32 + 32) = 512;
				*(_QWORD*)(v32 + 48) = v36 + 2 * v33;
				v37 = *(_BYTE*)(v15 + 272);
				v38 = sub_1401A6C70(v17, (int*)L"IgnoreVersionForceLoad");
				sub_1401A4C20(v127, 0xC8ui64, (__int64)L"%d", v37 != 0);
				if ((*(_DWORD*)(v38 + 32) & 0x200) != 0)
					sub_14018B900(*(_QWORD*)(v38 + 40), 0);
				v13 = LOWORD(v127[0]) == 0;
				*(_DWORD*)(v38 + 32) = 0;
				*(_QWORD*)(v38 + 40) = 0i64;
				*(_QWORD*)(v38 + 48) = 0i64;
				v39 = 0i64;
				if (!v13)
				{
					do
						++v39;
					while (*((_WORD*)v127 + v39));
				}
				v40 = 2 * (v39 + 1);
				if (!is_mul_ok(v39 + 1, 2ui64))
					v40 = -1i64;
				v41 = sub_14018B280(v40, 0);
				*(_QWORD*)(v38 + 40) = v41;
				sub_1407DB590(v41, v127, 2 * v39 + 2);
				v42 = *(_QWORD*)(v38 + 40);
				*(_DWORD*)(v38 + 32) = 512;
				*(_QWORD*)(v38 + 48) = v42 + 2 * v39;
				v43 = *(_QWORD*)(v15 + 288);
				v44 = *(_QWORD*)(v43 + 16);
				if (v44 != v43)
				{
					do
					{
						if (*(_DWORD*)(v44 + 64) != 2)
						{
							v45 = ((__int64(__fastcall*)(__int64(__fastcall***)()))v103[2])(&v103);
							v46 = v45;
							if (v45)
							{
								*(_QWORD*)(v45 + 16) = 0i64;
								*(_QWORD*)(v45 + 8) = v92;
								*(_DWORD*)(v45 + 24) = 0;
								*(_QWORD*)(v45 + 32) = 0i64;
								*(_QWORD*)(v45 + 40) = 0i64;
								*(_QWORD*)(v45 + 48) = 0i64;
								*(_QWORD*)(v45 + 56) = 0i64;
								*(_QWORD*)(v45 + 64) = 0i64;
								*(_QWORD*)(v45 + 72) = 0i64;
								*(_QWORD*)v45 = off_140B5EBA0;
								*(_QWORD*)(v45 + 80) = 0i64;
								*(_DWORD*)(v45 + 88) = 0;
								*(_QWORD*)(v45 + 96) = 0i64;
							}
							else
							{
								v46 = 0i64;
							}
							*(_QWORD*)(v46 + 80) = &v103;
							if ((*(_DWORD*)(v46 + 24) & 0x200) != 0)
								sub_14018B900(*(_QWORD*)(v46 + 32), 0);
							*(_DWORD*)(v46 + 24) = 0;
							*(_QWORD*)(v46 + 32) = 0i64;
							*(_QWORD*)(v46 + 40) = 0i64;
							for (j = 0i64; aLoadcondition[j]; ++j)
								;
							v48 = 2 * (j + 1);
							if (!is_mul_ok(j + 1, 2ui64))
								v48 = -1i64;
							v49 = sub_14018B280(v48, 0);
							*(_QWORD*)(v46 + 32) = v49;
							sub_1407DB590(v49, (int*)L"LoadCondition", 2 * j + 2);
							v50 = *(_QWORD*)(v46 + 32);
							*(_DWORD*)(v46 + 24) = 512;
							*(_QWORD*)(v46 + 40) = v50 + 2 * j;
							v51 = *(int**)(v44 + 40);
							v52 = sub_1401A6C70(v46, (int*)L"Condition");
							sub_1401A4C50(v52 + 32, v51);
							LODWORD(v51) = *(_DWORD*)(v44 + 64);
							v53 = sub_1401A6C70(v46, (int*)L"LoadOnStart");
							sub_1401A4C20(v127, 0xC8ui64, (__int64)L"%d", (unsigned int)v51);
							if ((*(_DWORD*)(v53 + 32) & 0x200) != 0)
								sub_14018B900(*(_QWORD*)(v53 + 40), 0);
							v13 = LOWORD(v127[0]) == 0;
							*(_DWORD*)(v53 + 32) = 0;
							*(_QWORD*)(v53 + 40) = 0i64;
							*(_QWORD*)(v53 + 48) = 0i64;
							v54 = 0i64;
							if (!v13)
							{
								do
									++v54;
								while (*((_WORD*)v127 + v54));
							}
							v55 = 2 * (v54 + 1);
							if (!is_mul_ok(v54 + 1, 2ui64))
								v55 = -1i64;
							v56 = sub_14018B280(v55, 0);
							*(_QWORD*)(v53 + 40) = v56;
							sub_1407DB590(v56, v127, 2 * v54 + 2);
							v57 = *(_QWORD*)(v53 + 40);
							*(_DWORD*)(v53 + 32) = 512;
							*(_QWORD*)(v53 + 48) = v57 + 2 * v54;
							if (*(_QWORD*)(v46 + 8) == *(_QWORD*)(v17 + 8))
							{
								v58 = *(_QWORD*)(v46 + 16);
								if (v58)
								{
									v59 = *(_QWORD*)(v58 + 48);
									if (v46 == v59)
										*(_QWORD*)(v58 + 48) = *(_QWORD*)(v59 + 72);
									v60 = *(_QWORD*)(v58 + 56);
									if (v46 == v60)
										*(_QWORD*)(v58 + 56) = *(_QWORD*)(v60 + 64);
									v61 = *(_QWORD*)(v46 + 64);
									if (v61)
										*(_QWORD*)(v61 + 72) = *(_QWORD*)(v46 + 72);
									v62 = *(_QWORD*)(v46 + 72);
									if (v62)
										*(_QWORD*)(v62 + 64) = *(_QWORD*)(v46 + 64);
									*(_QWORD*)(v46 + 16) = 0i64;
								}
								else
								{
									(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v46 + 80) + 32i64))(*(_QWORD*)(v46 + 80));
								}
								v63 = *(_QWORD*)(v17 + 56);
								if (v63)
								{
									*(_QWORD*)(v63 + 72) = v46;
									*(_QWORD*)(v46 + 64) = *(_QWORD*)(v17 + 56);
									*(_QWORD*)(v17 + 56) = v46;
								}
								else
								{
									*(_QWORD*)(v17 + 56) = v46;
									*(_QWORD*)(v17 + 48) = v46;
									*(_QWORD*)(v46 + 64) = 0i64;
								}
								*(_QWORD*)(v46 + 72) = 0i64;
								*(_QWORD*)(v46 + 16) = v17;
							}
							v15 = v89;
						}
						v64 = *(_QWORD*)(v44 + 24);
						if (v64)
						{
							v44 = *(_QWORD*)(v44 + 24);
							for (k = *(_QWORD*)(v64 + 16); k; k = *(_QWORD*)(k + 16))
								v44 = k;
						}
						else
						{
							for (m = *(_QWORD*)(v44 + 8); v44 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
								v44 = m;
							if (*(_QWORD*)(v44 + 24) != m)
								v44 = m;
						}
					} while (v44 != *(_QWORD*)(v15 + 288));
					v5 = v88;
					v14 = v87;
				}
				if (*(_QWORD*)(v17 + 8) == v5[1])
				{
					v67 = *(_QWORD*)(v17 + 16);
					if (v67)
					{
						v68 = *(_QWORD*)(v67 + 48);
						if (v17 == v68)
							*(_QWORD*)(v67 + 48) = *(_QWORD*)(v68 + 72);
						v69 = *(_QWORD*)(v67 + 56);
						if (v17 == v69)
							*(_QWORD*)(v67 + 56) = *(_QWORD*)(v69 + 64);
						v70 = *(_QWORD*)(v17 + 64);
						if (v70)
							*(_QWORD*)(v70 + 72) = *(_QWORD*)(v17 + 72);
						v71 = *(_QWORD*)(v17 + 72);
						if (v71)
							*(_QWORD*)(v71 + 64) = *(_QWORD*)(v17 + 64);
						*(_QWORD*)(v17 + 16) = 0i64;
					}
					else
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v17 + 80) + 32i64))(*(_QWORD*)(v17 + 80));
					}
					v72 = v5[7];
					if (v72)
					{
						*(_QWORD*)(v72 + 72) = v17;
						*(_QWORD*)(v17 + 64) = v5[7];
						v5[7] = v17;
					}
					else
					{
						v5[7] = v17;
						v5[6] = v17;
						*(_QWORD*)(v17 + 64) = 0i64;
					}
					*(_QWORD*)(v17 + 72) = 0i64;
					*(_QWORD*)(v17 + 16) = v5;
				}
			}
			v2 = v90;
			v14 += 8i64;
			v87 = v14;
			LODWORD(v86) = (_DWORD)v86 + 1;
		} while ((unsigned int)v86 < *(_DWORD*)(v90 + 24));
		v3 = v91;
	}
	if (!v100 && v3)
	{
		v86 = 0i64;
		if ((int)sub_1401A7FC0((__int64)v92, &v86) >= 0)
		{
			v76 = v86;
			sub_1401B6F30(v73, v3, v74, (__int64)v86);
			if (!v76)
				goto LABEL_120;
			v75 = *(_QWORD*)v76;
		}
		else
		{
			if (!v86)
				goto LABEL_120;
			v75 = *(_QWORD*)v86;
		}
		(*(void (**)(void))(v75 + 8))();
	}
LABEL_120:
	v92[0] = (__int64)off_140B5EB10;
	sub_1401A59A0((__int64)v92);
	v77 = v101;
	v100 = 0;
	v101 = 0i64;
	if (v77)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v77 - 16) + 8i64))(v77 - 16);
	sub_14018B900(v102, 0);
	v102 = 0i64;
	ii = off_140B5EA18;
	for (n = v124; v124; n = v124)
	{
		v124 = n - 1;
		sub_14018B900(*(_QWORD*)&v122[8 * n - 8], 0);
	}
	v125 = 0i64;
	v126 = 0i64;
	if (v122 != &v123)
		sub_14018B900((__int64)v122, 0);
	v115 = off_140B5EA48;
	v79 = v118;
	for (ii = &off_140B5EAD8; v118; v79 = v118)
	{
		v118 = v79 - 1;
		sub_14018B900(*(_QWORD*)&v116[8 * v79 - 8], 0);
	}
	v119 = 0i64;
	v120 = 0i64;
	if (v116 != &v117)
		sub_14018B900((__int64)v116, 0);
	v115 = &off_140B5EAD8;
	v109 = off_140B5EA78;
	for (jj = v112; v112; jj = v112)
	{
		v112 = jj - 1;
		sub_14018B900(*(_QWORD*)&v110[8 * jj - 8], 0);
	}
	v113 = 0i64;
	v114 = 0i64;
	if (v110 != &v111)
		sub_14018B900((__int64)v110, 0);
	v109 = &off_140B5EAD8;
	v103 = off_140B5EAA8;
	for (kk = v106; v106; kk = v106)
	{
		v106 = kk - 1;
		sub_14018B900(*(_QWORD*)&v104[8 * kk - 8], 0);
	}
	v107 = 0i64;
	v108 = 0i64;
	if (v104 != &v105)
		sub_14018B900((__int64)v104, 0);
	v103 = &off_140B5EAD8;
	if (v101)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v101 - 16) + 8i64))(v101 - 16);
	v92[0] = (__int64)off_140B5EDE0;
	sub_1401A59A0((__int64)v92);
	v82 = v93;
	if (v93)
	{
		v83 = *(__int64**)(v93 + 48);
		if (v92 == v83)
			*(_QWORD*)(v93 + 48) = v83[9];
		v84 = *(__int64**)(v82 + 56);
		if (v92 == v84)
			*(_QWORD*)(v82 + 56) = v84[8];
		v85 = v98;
		if (v98)
		{
			*(_QWORD*)(v98 + 72) = v99;
			v85 = v98;
		}
		if (v99)
			*(_QWORD*)(v99 + 64) = v85;
		v93 = 0i64;
	}
	if ((v94 & 0x200) != 0)
		sub_14018B900(v95, 0);
}
// 1401392F3: variable 'v73' is possibly undefined
// 1401392F3: variable 'v74' is possibly undefined
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A22670: using guessed type wchar_t aFolder_0[7];
// 140A22738: using guessed type wchar_t aApiversion[11];
// 140A22750: using guessed type wchar_t aIgnoreversionf[23];
// 140A22A10: using guessed type wchar_t aSubloc[7];
// 140A32CF0: using guessed type wchar_t aAddons_2[7];
// 140A32D28: using guessed type wchar_t aAddon[6];
// 140A32DD8: using guessed type wchar_t aLoadonstart[12];
// 140A32E20: using guessed type wchar_t aLoadcondition[14];
// 140A32E60: using guessed type wchar_t aCarbine[8];
// 140A32E70: using guessed type wchar_t aCondition[10];
// 140B5EA18: using guessed type __int64 (__fastcall *off_140B5EA18[25])();
// 140B5EA48: using guessed type __int64 (__fastcall *off_140B5EA48[19])();
// 140B5EA78: using guessed type __int64 (__fastcall *off_140B5EA78[13])();
// 140B5EAA8: using guessed type __int64 (__fastcall *off_140B5EAA8[7])();
// 140B5EAD8: using guessed type __int64 (__fastcall *off_140B5EAD8)();
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();

