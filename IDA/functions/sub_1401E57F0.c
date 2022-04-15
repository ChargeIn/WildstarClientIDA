#include "../winhttp.h"

//----- (00000001401E57F0) ----------------------------------------------------
__int64 __fastcall sub_1401E57F0(__int64 a1, unsigned int a2)
{
	unsigned __int64 v2; // rax
	char v4; // bl
	__int64 v5; // r8
	__int64 v6; // r9
	int v7; // r15d
	__int64 i; // rdx
	__int64 v9; // rax
	int v10; // ecx
	unsigned __int64 v11; // r14
	_DWORD* v12; // r13
	unsigned int v13; // r12d
	unsigned int v14; // esi
	int v15; // edi
	__int64 v16; // rax
	unsigned __int64 v17; // rcx
	_WORD* v18; // rax
	int v19; // ebx
	int* v20; // rax
	int v21; // ecx
	int v22; // eax
	int* v23; // rbx
	int v24; // r14d
	int** v25; // rdx
	int* v26; // rcx
	__int64 v27; // rax
	__int64 v30; // [rsp+48h] [rbp-1A0h]
	unsigned __int64 v31[2]; // [rsp+50h] [rbp-198h] BYREF
	unsigned __int64 v32[2]; // [rsp+60h] [rbp-188h] BYREF
	__int64 v33; // [rsp+70h] [rbp-178h]
	int* v34; // [rsp+78h] [rbp-170h]
	unsigned __int64* v35; // [rsp+80h] [rbp-168h]
	int v36; // [rsp+88h] [rbp-160h]
	int v37; // [rsp+8Ch] [rbp-15Ch]
	int v38[72]; // [rsp+90h] [rbp-158h]

	v2 = *(_QWORD*)(a1 + 40);
	v4 = a2;
	v31[0] = 0i64;
	v31[1] = v2;
	sub_1401D3110(v32, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401E57C0, v31, a1 + 48, 2);
	v5 = *(_QWORD*)(a1 + 40);
	v6 = v33;
	v7 = 0;
	for (i = v5; i; v38[i] = v9)
	{
		v9 = *(_QWORD*)(v6 + 8 * i-- - 8);
		v10 = *(_DWORD*)(*(_QWORD*)(a1 + 16 * (v9 + 3)) + 144i64);
		LODWORD(v9) = v7 & v10;
		v7 |= v10;
	}
	v11 = 0i64;
	v30 = 0i64;
	if (!v5)
	{
	LABEL_41:
		v24 = 0;
		goto LABEL_42;
	}
LABEL_4:
	v12 = (_DWORD*)(a1 + 16 * (*(_QWORD*)(v6 + 8 * v11) + 3i64));
	v13 = v7 & *(_DWORD*)(*(_QWORD*)v12 + 144i64);
	v14 = 0;
	while (1)
	{
		v15 = 1 << v14;
		if (1 << v14 > v13)
		{
		LABEL_32:
			v30 = ++v11;
			if (v11 >= *(_QWORD*)(a1 + 40))
				goto LABEL_41;
			v6 = v33;
			goto LABEL_4;
		}
		if ((v15 & v13) != 0)
			break;
	LABEL_31:
		if (++v14 >= 0x20)
			goto LABEL_32;
	}
	if (qword_140C63840)
	{
		v16 = qword_140C63840(off_140A69B10, v14, qword_140C63858);
	}
	else
	{
		if (dword_140C651B0 || (int)sub_1401F5180() < 0)
			goto LABEL_31;
		v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65118 + 24i64))(qword_140C65118, v14);
	}
	if (!v16)
		goto LABEL_31;
	v17 = *(_QWORD*)(v16 + 8);
	if (!v17 || v17 > qword_140C3FE70 || !(v17 + qword_140C3FE68))
		goto LABEL_31;
	v18 = v17 <= qword_140C3FE70 ? (_WORD*)(v17 + qword_140C3FE68) : 0i64;
	if (!*v18)
		goto LABEL_31;
	v19 = 1 << v4;
	v20 = sub_1401DD2B0((unsigned int*)(a1 + 24), v14);
	LODWORD(v31[0]) = v19 - 1;
	v34 = v20 + 2;
	HIDWORD(v31[0]) = v19 - 1;
	v35 = v31;
	v36 = v19 - 1 + v20[2];
	v37 = v20[3] + v19 - 1;
	v21 = *v20 / v19;
	v22 = v20[1] / v19;
	if (v21 >= v36 / v19 || v22 >= v37 / v19)
	{
	LABEL_30:
		v4 = a2;
		goto LABEL_31;
	}
	v23 = sub_14018B280(56i64, 0);
	if (v23)
	{
		*((_QWORD*)v23 + 1) = 0i64;
		*((_QWORD*)v23 + 2) = 0i64;
		*((_QWORD*)v23 + 3) = 0i64;
		*((_QWORD*)v23 + 4) = 0i64;
		*((_QWORD*)v23 + 5) = 0i64;
		*((_QWORD*)v23 + 6) = 0i64;
	}
	else
	{
		v23 = 0i64;
	}
	v24 = sub_1401E4B60(
		(__int64)v23,
		*(_QWORD*)(a1 + 16),
		v12,
		v14,
		*(_DWORD*)(a1 + 28),
		*(_DWORD*)(a1 + 32),
		a2,
		v15 & (unsigned int)v38[v11]);
	if (v24 >= 0)
	{
		if (*((_QWORD*)v23 + 2) || *((_QWORD*)v23 + 4))
		{
			if (!*((_QWORD*)v23 + 1))
				v7 &= ~v15;
			v25 = (int**)(a1 + 1256);
			if (!*((_QWORD*)v23 + 5))
			{
				v11 = v30;
				*((_QWORD*)v23 + 5) = v25;
				v26 = v23 + 12;
				*((_QWORD*)v23 + 6) = *v25;
				*v25 = v23;
				v27 = *((_QWORD*)v23 + 6);
				v4 = a2;
				if (v27)
					*(_QWORD*)(v27 + 40) = v26;
				goto LABEL_31;
			}
		}
		else
		{
			sub_1401E50B0(v23);
			sub_14018B900((__int64)v23, 0);
		}
		v11 = v30;
		goto LABEL_30;
	}
	if (v23)
	{
		sub_1401E50B0(v23);
		sub_14018B900((__int64)v23, 0);
	}
LABEL_42:
	if (v32[0] < v32[1])
		sub_14018B900(v33 + 8 * v32[0], 0);
	return (unsigned int)v24;
}
// 1401E5991: conditional instruction was optimized away because rcx.8!=0
// 140A69B10: using guessed type wchar_t *off_140A69B10[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65118: using guessed type __int64 qword_140C65118;
// 140C651B0: using guessed type int dword_140C651B0;
// 1401E57F0: using guessed type int var_158[72];

