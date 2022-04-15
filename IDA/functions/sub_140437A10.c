#include "../winhttp.h"

//----- (0000000140437A10) ----------------------------------------------------
__int64 __fastcall sub_140437A10(_QWORD* a1, unsigned int a2, int a3, __int64 a4, int a5, int a6, int a7)
{
	__int64 result; // rax
	__int64 v10; // rdx
	int* v11; // rcx
	__int64 v12; // rax
	__int64 v13; // r13
	int* v14; // r8
	int* v15; // rax
	int* v16; // rcx
	unsigned __int64 v17; // rax
	int* v18; // rbx
	__int64 v19; // rax
	int* v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rdx
	int* v23; // rcx
	__int64 v24; // rax
	__int64 v25; // r14
	unsigned int* v26; // r8
	int v27; // eax
	int v28; // eax
	__int64 v29; // rdi
	int* v30; // rax
	int v31; // ebx
	int v32; // edi
	__int64* v33; // rax
	int v34; // ebx
	int v35; // edi
	__int64* v36; // rax
	__int64 v37; // [rsp+20h] [rbp-41h]
	__int64 v38; // [rsp+28h] [rbp-39h]
	__int64 v39; // [rsp+38h] [rbp-29h]
	__int64 v40; // [rsp+40h] [rbp-21h]
	__int64 v41; // [rsp+48h] [rbp-19h]
	int* v42; // [rsp+50h] [rbp-11h] BYREF
	__int64 v43; // [rsp+58h] [rbp-9h]
	char v44[16]; // [rsp+60h] [rbp-1h] BYREF
	unsigned int v45; // [rsp+B8h] [rbp+57h] BYREF
	int v46; // [rsp+C0h] [rbp+5Fh]
	__int64 v47; // [rsp+C8h] [rbp+67h]

	v47 = a4;
	v46 = a3;
	v45 = a2;
	if (!qword_140C65898)
		return 0i64;
	v10 = a1[5];
	v11 = (int*)v10;
	v12 = *(_QWORD*)(v10 + 8);
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < a2)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v11 = (int*)v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	if (v11 == (int*)v10 || (v42 = v11, a2 < v11[8]))
		v42 = (int*)v10;
	if (v42 != (int*)v10)
		return 0i64;
	v13 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v13)
		return 0i64;
	v14 = (int*)a1[9];
	v15 = (int*)*((_QWORD*)v14 + 1);
	v16 = v14;
	while (v15)
	{
		if (*((_QWORD*)v15 + 4) < *(_QWORD*)(v13 + 424))
		{
			v15 = (int*)*((_QWORD*)v15 + 3);
		}
		else
		{
			v16 = v15;
			v15 = (int*)*((_QWORD*)v15 + 2);
		}
	}
	if (v16 == v14 || (v17 = *((_QWORD*)v16 + 4), v42 = v16, *(_QWORD*)(v13 + 424) < v17))
		v42 = v14;
	v18 = v42;
	if (v42 != v14)
	{
		v19 = *(_QWORD*)(*((_QWORD*)v42 + 5) + 8i64);
		v20 = (int*)v19;
		v21 = *(_QWORD*)(v19 + 8);
		while (v21)
		{
			if (*(_DWORD*)(v21 + 32) < a2)
			{
				v21 = *(_QWORD*)(v21 + 24);
			}
			else
			{
				v20 = (int*)v21;
				v21 = *(_QWORD*)(v21 + 16);
			}
		}
		if (v20 == (int*)v19 || (v42 = v20, a2 < v20[8]))
			v42 = (int*)v19;
		if (v42 != (int*)v19)
			return 0i64;
	}
	v22 = a1[1];
	v23 = (int*)v22;
	v24 = *(_QWORD*)(v22 + 8);
	while (v24)
	{
		if (*(_DWORD*)(v24 + 32) < a2)
		{
			v24 = *(_QWORD*)(v24 + 24);
		}
		else
		{
			v23 = (int*)v24;
			v24 = *(_QWORD*)(v24 + 16);
		}
	}
	if (v23 == (int*)v22 || (v42 = v23, a2 < v23[8]))
		v42 = (int*)v22;
	if (v42 == (int*)v22)
		return 0i64;
	v25 = *((_QWORD*)v42 + 5);
	v26 = *(unsigned int**)v25;
	if ((*(_BYTE*)(*(_QWORD*)v25 + 4i64) & 2) == 0)
	{
		v27 = dword_140C3B390;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
			v27 = *(_DWORD*)qword_140C63750;
		v28 = *((_DWORD*)&qword_140C3B3A0 + v27);
		if (!_bittest(&v28, v26[2]))
			return 0i64;
	}
	if (*(_DWORD*)(v13 + 56) < v26[5])
		return 0i64;
	v29 = 0i64;
	if (!v26[6]
		|| (result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				v13,
				v26[6],
				0i64,
				0i64,
				0),
			(_DWORD)result))
	{
		if (v46 || (*(_BYTE*)(*(_QWORD*)v25 + 4i64) & 1) != 0)
		{
			v34 = *(_DWORD*)(*(_QWORD*)v25 + 16i64);
			v35 = *(_DWORD*)(*(_QWORD*)v25 + 4i64) & 2;
			v36 = (__int64*)sub_140439FC0(v25, &v42);
			LODWORD(v41) = a7;
			LODWORD(v40) = a6;
			LODWORD(v39) = a5;
			LODWORD(v38) = v35;
			LODWORD(v37) = v34;
			sub_140430D20(*(_QWORD*)(qword_140C65898 + 29504), a2, 1, *v36, v37, v38, v47, v39, v40, v41, (__int64)v42, v43);
			if (v42)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v42 - 2) + 8i64))(v42 - 4);
		}
		else
		{
			if (v18 == (int*)a1[9])
			{
				v30 = sub_14018B280(32i64, 0);
				if (v30)
					v29 = sub_140028FC0((__int64)v30);
				sub_1400293C0(v29, (__int64)&v42, (int*)&v45);
				v42 = *(int**)(v13 + 424);
				v43 = v29;
				sub_1400EEDD0((__int64)(a1 + 8), (__int64)v44, (unsigned __int64*)&v42);
			}
			else
			{
				sub_1400293C0(*((_QWORD*)v18 + 5), (__int64)&v42, (int*)&v45);
			}
			v31 = *(_DWORD*)(*(_QWORD*)v25 + 16i64);
			v32 = *(_DWORD*)(*(_QWORD*)v25 + 4i64) & 2;
			v33 = (__int64*)sub_140439FC0(v25, &v42);
			LODWORD(v41) = a7;
			LODWORD(v40) = a6;
			LODWORD(v39) = a5;
			LODWORD(v38) = v32;
			LODWORD(v37) = v31;
			sub_140430D20(*(_QWORD*)(qword_140C65898 + 29504), a2, 0, *v33, v37, v38, v47, v39, v40, v41, (__int64)v42, v43);
			if (v42)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v42 - 2) + 8i64))(v42 - 4);
			sub_140438F60((__int64)a1);
		}
		return 1i64;
	}
	return result;
}
// 140437D02: variable 'v37' is possibly undefined
// 140437D02: variable 'v38' is possibly undefined
// 140437D02: variable 'v39' is possibly undefined
// 140437D02: variable 'v40' is possibly undefined
// 140437D02: variable 'v41' is possibly undefined
// 140C3B390: using guessed type int dword_140C3B390;
// 140C3B3A0: using guessed type __int64 qword_140C3B3A0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140437A10: using guessed type char var_40[16];

