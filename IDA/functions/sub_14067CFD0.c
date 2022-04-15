//----- (000000014067CFD0) ----------------------------------------------------
__int64 __fastcall sub_14067CFD0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rbx
	_QWORD* v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // r14
	__int64 v11; // r13
	unsigned int v12; // r12d
	__int64 v13; // rbx
	unsigned int* v14; // rax
	unsigned int* v15; // rbx
	int* v16; // rax
	double v17; // xmm1_8
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rdx
	int v24; // r15d
	unsigned __int64 v25; // rcx
	__int64 v26; // rsi
	__int64 v27; // rbx
	__int64 v28; // rax
	int v29; // r14d
	__int64 v30; // rbx
	__int64 v31; // rdx
	__int64 v32; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v35; // ebx
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // rdx
	_QWORD* v39; // rax
	__int64 v40; // r8
	__int64 v42; // [rsp+20h] [rbp-E0h] BYREF
	unsigned __int64 v43; // [rsp+28h] [rbp-D8h]
	char v44[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v45; // [rsp+38h] [rbp-C8h]
	__int64 v46; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v47)(); // [rsp+50h] [rbp-B0h] BYREF
	int v48; // [rsp+58h] [rbp-A8h]
	_QWORD* v49; // [rsp+60h] [rbp-A0h]
	int v50; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v51)(); // [rsp+70h] [rbp-90h] BYREF
	int v52; // [rsp+78h] [rbp-88h]
	_QWORD* v53; // [rsp+80h] [rbp-80h]
	int v54; // [rsp+88h] [rbp-78h]
	char v55[8]; // [rsp+90h] [rbp-70h] BYREF
	int* v56; // [rsp+98h] [rbp-68h]
	__int64 v57; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v58)(); // [rsp+B0h] [rbp-50h] BYREF
	int v59; // [rsp+B8h] [rbp-48h]
	_QWORD* v60; // [rsp+C0h] [rbp-40h]
	int v61; // [rsp+C8h] [rbp-38h]
	__m128 v62; // [rsp+D0h] [rbp-30h] BYREF
	__int64(__fastcall * *v63)(); // [rsp+E0h] [rbp-20h] BYREF
	int v64; // [rsp+E8h] [rbp-18h]
	__int64 v65; // [rsp+F0h] [rbp-10h]
	__m128 v66; // [rsp+100h] [rbp+0h] BYREF
	char v67[8]; // [rsp+110h] [rbp+10h] BYREF
	int v68; // [rsp+118h] [rbp+18h]
	__int64 v69; // [rsp+120h] [rbp+20h]

	v1 = (_QWORD*)a1;
	v53 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v51 = off_140B569F0;
	v54 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v52 = v5;
	v6 = sub_14067B760(v1);
	v7 = v6;
	if (!v6 || (*(int(__fastcall**)(__int64))(*(_QWORD*)v6 + 208i64))(v6) < 2)
	{
		v39 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v40 = v1[2];
		*(_QWORD*)v40 = *v39;
		v9 = *((unsigned int*)v39 + 2);
		*(_DWORD*)(v40 + 8) = v9;
		goto LABEL_43;
	}
	if (*(_DWORD*)(**(_QWORD**)(v7 + 48) + 12i64) == 3)
	{
		v8 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v9 = v1[2];
		*(_QWORD*)v9 = *v8;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	LABEL_43:
		v1[2] += 16i64;
		goto LABEL_44;
	}
	v56 = sub_14018B280(40i64, 0);
	v57 = 0i64;
	*(_BYTE*)v56 = 0;
	v10 = 0i64;
	v43 = 0i64;
	*((_QWORD*)v56 + 1) = 0i64;
	v11 = 0i64;
	*((_QWORD*)v56 + 2) = v56;
	v42 = 0i64;
	*((_QWORD*)v56 + 3) = v56;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 56i64))(v7))
	{
		sub_14056C320((_QWORD*)v7, (__int64)&v42, 0);
		v11 = v42;
		v10 = v43;
	}
	v12 = 0;
	if (v10)
	{
		v13 = 0i64;
		do
		{
			if (sub_1403F8270(qword_140C65898, *(_DWORD*)(v11 + 4 * v13), 0))
			{
				v14 = (unsigned int*)sub_14024B980(*(_DWORD*)(v11 + 4 * v13));
				v15 = v14;
				if (v14)
				{
					v62 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v14[3], (__m128)v14[5]),
						_mm_unpacklo_ps((__m128)v14[4], (__m128)0i64));
					v16 = sub_14018B280(40i64, 0);
					v46 = 0i64;
					v45 = v16;
					*(_BYTE*)v16 = 0;
					*(_QWORD*)&v17 = v15[1];
					*((_QWORD*)v45 + 1) = 0i64;
					*((_QWORD*)v45 + 2) = v45;
					*((_QWORD*)v45 + 3) = v45;
					sub_140449B10(&v62, v17, (__int64)v44);
					if (v46)
					{
						v18 = v1[4];
						v60 = v1;
						v19 = *(_QWORD*)(v18 + 112);
						v58 = off_140B569F0;
						v61 = 1;
						if (*(_QWORD*)(v18 + 120) >= v19)
							sub_14005E2C0((__int64)v1);
						v20 = v1[2];
						v21 = sub_14005C1B0((__int64)v1, 0, 0);
						*(_DWORD*)(v20 + 8) = 5;
						*(_QWORD*)v20 = v21;
						v1[2] += 16i64;
						v22 = sub_1400578C0((__int64)v1);
						v23 = v1[4];
						v47 = off_140B569F0;
						v24 = v22;
						v25 = *(_QWORD*)(v23 + 112);
						v59 = v22;
						v26 = (__int64)v1;
						v49 = v1;
						v50 = 1;
						if (*(_QWORD*)(v23 + 120) >= v25)
							sub_14005E2C0((__int64)v1);
						v27 = v1[2];
						v28 = sub_14005C1B0((__int64)v1, 0, 0);
						*(_DWORD*)(v27 + 8) = 5;
						*(_QWORD*)v27 = v28;
						v1[2] += 16i64;
						v29 = sub_1400578C0((__int64)v1);
						v48 = v29;
						v30 = *((_QWORD*)v45 + 2);
						if ((int*)v30 != v45)
						{
							do
							{
								v66 = _mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v30 + 32)), _mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v30 + 36)), _mm_cvtsi32_si128(0))));
								sub_1400FA180((__int64)&v63, (__int64)v1, v66.m128_f32);
								sub_1400FB1D0((__int64)&v47);
								v63 = off_140B56A08;
								if (v65)
									sub_1400579E0(v65, v31, v64);
								v32 = *(_QWORD*)(v30 + 24);
								if (v32)
								{
									v30 = *(_QWORD*)(v30 + 24);
									for (i = *(_QWORD*)(v32 + 16); i; i = *(_QWORD*)(i + 16))
										v30 = i;
								}
								else
								{
									for (j = *(_QWORD*)(v30 + 8); v30 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
										v30 = j;
									if (*(_QWORD*)(v30 + 24) != j)
										v30 = j;
								}
							} while ((int*)v30 != v45);
							v26 = (__int64)v49;
							v29 = v48;
							v24 = v59;
							v11 = v42;
						}
						sub_1400FB2A0((__int64)&v58, (__int64)L"tHexes", v29);
						sub_1400FA3C0((__int64)v67, (__int64)v1, v62.m128_f32);
						v35 = v68;
						sub_1400FB2A0((__int64)&v58, (__int64)L"tIndicator", v68);
						sub_1400FB1D0((__int64)&v51);
						if (v69)
							sub_1400579E0(v69, v36, v35);
						if (v26)
							sub_1400579E0(v26, v36, v29);
						sub_1400579E0((__int64)v1, v36, v24);
						v10 = v43;
					}
					sub_140008410((__int64)v44);
					sub_14018B900((__int64)v45, 0);
				}
			}
			v13 = ++v12;
		} while (v12 < v10);
		v1 = v53;
		v5 = v52;
	}
	v37 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
	v38 = v1[2];
	*(_QWORD*)v38 = *v37;
	*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
	v1[2] += 16i64;
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	sub_140008410((__int64)v55);
	sub_14018B900((__int64)v56, 0);
LABEL_44:
	sub_1400579E0((__int64)v1, v9, v5);
	return 1i64;
}
// 14067D315: variable 'v31' is possibly undefined
// 14067D3D5: variable 'v36' is possibly undefined
// 14067D4C5: variable 'v9' is possibly undefined
// 140B31718: using guessed type wchar_t aThexes[7];
// 140B31728: using guessed type wchar_t aTindicator_1[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 14067CFD0: using guessed type char var_120[8];
// 14067CFD0: using guessed type char var_40[8];
// 14067CFD0: using guessed type char var_C0[8];

