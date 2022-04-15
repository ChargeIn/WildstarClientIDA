#include "../winhttp.h"

//----- (0000000140673160) ----------------------------------------------------
void __fastcall sub_140673160(__int64 a1, __int64 a2)
{
	int v3; // eax
	__int64 v4; // rsi
	__int64 v5; // rdi
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // r14
	int v11; // r15d
	__int64 v12; // rdx
	unsigned __int64 v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // eax
	__int64 v17; // rcx
	int v18; // r12d
	__int64 v19; // rbx
	__int64 v20; // r12
	float v21; // xmm6_4
	__int64 v22; // r8
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64* v25; // rax
	__int64 v26; // rax
	__int64 v27; // rsi
	__int64 v28; // rcx
	__int64 v29; // rdi
	__int64 v30; // rax
	int v31; // eax
	float v32; // xmm3_4
	__int64 v33; // rcx
	int v34; // r8d
	int v35; // edi
	__int64 v36; // rax
	unsigned __int64 v37; // rax
	__int64(__fastcall * **v38)(); // rcx
	__int64 v39; // rdx
	__int64 v40; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v43; // r9
	__int64 v44; // rax
	__int64 v45; // rbx
	int* v46; // r8
	__int64 v47; // rax
	__int64 v48; // rcx
	int v49; // edx
	__int64* v50; // rax
	__int64 v51; // rsi
	__int64 v52; // rcx
	__int64 v53; // rdi
	__int64 v54; // rax
	int v55; // eax
	__int64 v56; // rcx
	int v57; // r8d
	int v58; // edi
	__int64 v59; // rax
	unsigned __int64 v60; // rax
	__int64 v61; // rcx
	__int64(__fastcall * **v62)(); // rcx
	__int64 v63; // rdx
	__int64 v64; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v67; // rsi
	__int64 v68; // rcx
	__int64 v69; // rbx
	__int64 v70; // rax
	int v71; // ebx
	__int64 v72; // rdx
	__int64 v73; // rdx
	int* v74; // rax
	__int64 v75; // rdi
	__int64 v76; // rbx
	int v77; // [rsp+30h] [rbp-D8h]
	int v78; // [rsp+30h] [rbp-D8h]
	float v79; // [rsp+38h] [rbp-D0h]
	__int64 v80; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v81; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v82; // [rsp+58h] [rbp-B0h] BYREF
	int* v83; // [rsp+60h] [rbp-A8h]
	__int64 v84; // [rsp+68h] [rbp-A0h]
	__int64(__fastcall * *v85)(); // [rsp+78h] [rbp-90h] BYREF
	int v86; // [rsp+80h] [rbp-88h]
	__int64 v87; // [rsp+88h] [rbp-80h]
	int v88; // [rsp+90h] [rbp-78h]
	__int64 v89; // [rsp+98h] [rbp-70h]
	__int64(__fastcall * *v90)(); // [rsp+A0h] [rbp-68h] BYREF
	int v91; // [rsp+A8h] [rbp-60h]
	__int64 v92; // [rsp+B0h] [rbp-58h]
	int v93; // [rsp+B8h] [rbp-50h]
	__int64(__fastcall * *v94)(); // [rsp+C0h] [rbp-48h] BYREF
	int v95; // [rsp+C8h] [rbp-40h]
	__int64 v96; // [rsp+D0h] [rbp-38h]
	int v97; // [rsp+D8h] [rbp-30h]
	char v98[16]; // [rsp+E0h] [rbp-28h] BYREF
	int v99; // [rsp+168h] [rbp+60h]
	int v101; // [rsp+178h] [rbp+70h]
	__int64 v102; // [rsp+180h] [rbp+78h]

	v3 = *(_DWORD*)(a1 + 152);
	v4 = a1 + 24;
	if (!v3)
		v4 = a1 + 56;
	v89 = v4;
	if (v3)
		v102 = a1 + 56;
	else
		v102 = a1 + 24;
	v83 = sub_14018B280(40i64, 0);
	v84 = 0i64;
	*(_BYTE*)v83 = 0;
	v99 = 0;
	v101 = 0;
	*((_QWORD*)v83 + 1) = 0i64;
	v90 = off_140B569F0;
	*((_QWORD*)v83 + 2) = v83;
	v93 = 1;
	*((_QWORD*)v83 + 3) = v83;
	v5 = *(_QWORD*)a1;
	v6 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v92 = *(_QWORD*)a1;
	if (*(_QWORD*)(v6 + 120) >= *(_QWORD*)(v6 + 112))
		sub_14005E2C0(v5);
	v7 = *(_QWORD*)(v5 + 16);
	v8 = sub_14005C1B0(v5, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(v5 + 16) += 16i64;
	v9 = sub_1400578C0(v5);
	v10 = *(_QWORD*)a1;
	v11 = v9;
	v91 = v9;
	v12 = *(_QWORD*)(v10 + 32);
	v94 = off_140B569F0;
	v97 = 1;
	v13 = *(_QWORD*)(v12 + 112);
	v96 = v10;
	if (*(_QWORD*)(v12 + 120) >= v13)
		sub_14005E2C0(v10);
	v14 = *(_QWORD*)(v10 + 16);
	v15 = sub_14005C1B0(v10, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	*(_QWORD*)(v10 + 16) += 16i64;
	v16 = sub_1400578C0(v10);
	v17 = *(_QWORD*)(v4 + 8);
	v18 = v16;
	v95 = v16;
	v19 = *(_QWORD*)(v17 + 16);
	if (v19 != v17)
	{
		v20 = 0x61800000080i64;
		do
		{
			v21 = 0.0;
			if (*(_DWORD*)(a1 + 16))
			{
				sub_1403ADDD0((__int64)&v82, (__int64)v98, (int*)(v19 + 32));
				v22 = *(_QWORD*)(v102 + 8);
				v23 = *(_QWORD*)(v22 + 8);
				v24 = v22;
				while (v23)
				{
					if (*(_DWORD*)(v23 + 32) < *(_DWORD*)(v19 + 32))
					{
						v23 = *(_QWORD*)(v23 + 24);
					}
					else
					{
						v24 = v23;
						v23 = *(_QWORD*)(v23 + 16);
					}
				}
				if (v24 == v22 || *(_DWORD*)(v19 + 32) < *(_DWORD*)(v24 + 32))
				{
					v81 = *(_QWORD*)(v102 + 8);
					v25 = &v81;
				}
				else
				{
					v80 = v24;
					v25 = &v80;
				}
				v26 = *v25;
				if (v26 != v22)
					v21 = *(float*)(v26 + 36);
			}
			v27 = *(_QWORD*)a1;
			v85 = off_140B569F0;
			v88 = 1;
			v28 = *(_QWORD*)(v27 + 32);
			v87 = v27;
			if (*(_QWORD*)(v28 + 120) >= *(_QWORD*)(v28 + 112))
				sub_14005E2C0(v27);
			v29 = *(_QWORD*)(v27 + 16);
			v30 = sub_14005C1B0(v27, 0, 0);
			*(_DWORD*)(v29 + 8) = 5;
			*(_QWORD*)v29 = v30;
			*(_QWORD*)(v27 + 16) += 16i64;
			v31 = sub_1400578C0(v27);
			v32 = *(float*)(v19 + 36);
			v33 = *(unsigned int*)(a1 + 16);
			v34 = *(_DWORD*)(v19 + 32);
			v77 = *(_DWORD*)(a1 + 16);
			v35 = v31;
			v86 = v31;
			sub_1406769C0(v33, (__int64)&v85, v34, v32, 1.0, v77, v21);
			if (*(_DWORD*)(a1 + 1344))
				v36 = *(_QWORD*)(a1 + 168);
			else
				v36 = 0i64;
			if (*(_DWORD*)(v36 + 320) == 33
				|| (v37 = *(int*)(v19 + 32), (unsigned int)v37 > 0x2A)
				|| !_bittest64(&v20, v37))
			{
				v101 = 1;
				v38 = &v94;
			}
			else
			{
				v99 = 1;
				v38 = &v90;
			}
			sub_1400FB1D0((__int64)v38);
			sub_1400579E0(v27, v39, v35);
			v40 = *(_QWORD*)(v19 + 24);
			if (v40)
			{
				v19 = *(_QWORD*)(v19 + 24);
				for (i = *(_QWORD*)(v40 + 16); i; i = *(_QWORD*)(i + 16))
					v19 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v19 + 8); v19 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v19 = j;
				if (*(_QWORD*)(v19 + 24) != j)
					v19 = j;
			}
		} while (v19 != *(_QWORD*)(v89 + 8));
		v5 = v92;
		v11 = v91;
		v10 = v96;
		v18 = v95;
	}
	if (*(_DWORD*)(a1 + 16))
	{
		v43 = v102;
		v44 = *(_QWORD*)(v102 + 8);
		v45 = *(_QWORD*)(v44 + 16);
		if (v45 != v44)
		{
			v46 = v83;
			do
			{
				v47 = *((_QWORD*)v46 + 1);
				v48 = (__int64)v46;
				if (!v47)
					goto LABEL_56;
				v49 = *(_DWORD*)(v45 + 32);
				do
				{
					if (*(_DWORD*)(v47 + 32) < v49)
					{
						v47 = *(_QWORD*)(v47 + 24);
					}
					else
					{
						v48 = v47;
						v47 = *(_QWORD*)(v47 + 16);
					}
				} while (v47);
				if ((int*)v48 == v46 || v49 < *(_DWORD*)(v48 + 32))
				{
				LABEL_56:
					v80 = (__int64)v46;
					v50 = &v80;
				}
				else
				{
					v81 = v48;
					v50 = &v81;
				}
				if (v46 == (int*)*v50)
				{
					v51 = *(_QWORD*)a1;
					v88 = 1;
					v52 = *(_QWORD*)(v51 + 32);
					v85 = off_140B569F0;
					v87 = v51;
					if (*(_QWORD*)(v52 + 120) >= *(_QWORD*)(v52 + 112))
						sub_14005E2C0(v51);
					v53 = *(_QWORD*)(v51 + 16);
					v54 = sub_14005C1B0(v51, 0, 0);
					*(_DWORD*)(v53 + 8) = 5;
					*(_QWORD*)v53 = v54;
					*(_QWORD*)(v51 + 16) += 16i64;
					v55 = sub_1400578C0(v51);
					v79 = *(float*)(v45 + 36);
					v56 = *(unsigned int*)(a1 + 16);
					v57 = *(_DWORD*)(v45 + 32);
					v78 = *(_DWORD*)(a1 + 16);
					v58 = v55;
					v86 = v55;
					sub_1406769C0(v56, (__int64)&v85, v57, 0.0, 1.0, v78, v79);
					if (*(_DWORD*)(a1 + 1344))
						v59 = *(_QWORD*)(a1 + 168);
					else
						v59 = 0i64;
					if (*(_DWORD*)(v59 + 320) == 33
						|| (v60 = *(int*)(v45 + 32), (unsigned int)v60 > 0x2A)
						|| (v61 = 0x61800000080i64, !_bittest64(&v61, v60)))
					{
						v101 = 1;
						v62 = &v94;
					}
					else
					{
						v99 = 1;
						v62 = &v90;
					}
					sub_1400FB1D0((__int64)v62);
					sub_1400579E0(v51, v63, v58);
					v46 = v83;
					v43 = v102;
				}
				v64 = *(_QWORD*)(v45 + 24);
				if (v64)
				{
					v45 = *(_QWORD*)(v45 + 24);
					for (k = *(_QWORD*)(v64 + 16); k; k = *(_QWORD*)(k + 16))
						v45 = k;
				}
				else
				{
					for (m = *(_QWORD*)(v45 + 8); v45 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
						v45 = m;
					if (*(_QWORD*)(v45 + 24) != m)
						v45 = m;
				}
			} while (v45 != *(_QWORD*)(v43 + 8));
			v5 = v92;
			v11 = v91;
			v10 = v96;
			v18 = v95;
		}
	}
	if (v99)
		sub_1400FB2A0(a2, (__int64)L"arInnateProperties", v11);
	if (v101)
		sub_1400FB2A0(a2, (__int64)L"arBudgetBasedProperties", v18);
	v67 = *(_QWORD*)a1;
	v88 = 1;
	v68 = *(_QWORD*)(v67 + 32);
	v85 = off_140B569F0;
	v87 = v67;
	if (*(_QWORD*)(v68 + 120) >= *(_QWORD*)(v68 + 112))
		sub_14005E2C0(v67);
	v69 = *(_QWORD*)(v67 + 16);
	v70 = sub_14005C1B0(v67, 0, 0);
	*(_DWORD*)(v69 + 8) = 5;
	*(_QWORD*)v69 = v70;
	*(_QWORD*)(v67 + 16) += 16i64;
	v71 = sub_1400578C0(v67);
	v86 = v71;
	if ((unsigned int)sub_140673800(a1, (__int64)&v85))
		sub_1400FB2A0(a2, (__int64)L"tUndefinedProperties", v71);
	sub_1400579E0(v67, v72, v71);
	if (v10)
		sub_1400579E0(v10, v73, v18);
	if (v5)
		sub_1400579E0(v5, v73, v11);
	if (v84)
	{
		v74 = v83;
		v75 = *((_QWORD*)v83 + 1);
		if (v75)
		{
			do
			{
				sub_1400083B0((__int64)&v82, *(_QWORD*)(v75 + 24));
				v76 = *(_QWORD*)(v75 + 16);
				sub_14018B900(v75, 0);
				v75 = v76;
			} while (v76);
			v74 = v83;
		}
		*((_QWORD*)v74 + 2) = v74;
		*((_QWORD*)v83 + 1) = 0i64;
		*((_QWORD*)v83 + 3) = v83;
		v84 = 0i64;
	}
	sub_14018B900((__int64)v83, 0);
}
// 140673428: variable 'v39' is possibly undefined
// 1406735F5: variable 'v63' is possibly undefined
// 14067373C: variable 'v72' is possibly undefined
// 140673754: variable 'v73' is possibly undefined
// 140B2FD60: using guessed type wchar_t aTundefinedprop[21];
// 140B2FDC8: using guessed type wchar_t aArinnateproper[19];
// 140B2FDF0: using guessed type wchar_t aArbudgetbasedp[24];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140673160: using guessed type char var_78[16];

