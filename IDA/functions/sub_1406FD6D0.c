#include "../winhttp.h"

//----- (00000001406FD6D0) ----------------------------------------------------
__int64 __fastcall sub_1406FD6D0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	unsigned int v4; // r14d
	int v5; // ebx
	unsigned int v6; // esi
	int v7; // ebp
	int v8; // ecx
	int v9; // r10d
	__int64 v10; // r9
	_DWORD* v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	_DWORD* v14; // rcx
	__int64 v15; // r8
	__int64 v16; // r10
	__int64 v17; // r9
	_DWORD* v18; // rdx
	double v20; // [rsp+60h] [rbp+8h]
	double v21; // [rsp+60h] [rbp+8h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = 0;
	v5 = sub_1400578C0(a1);
	v6 = v5 - 1;
	v7 = 1;
	do
	{
		v8 = dword_140C3B390;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
			v8 = *(_DWORD*)qword_140C63750;
		v9 = *((_DWORD*)&qword_140C3B3A0 + v8);
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if (v6 >= *(_DWORD*)(v10 + 56))
		{
			if ((double)v5 == 0.0)
			{
				v11 = *(_DWORD**)(v10 + 32);
			}
			else
			{
				v20 = (double)v5;
				v11 = (_DWORD*)(*(_QWORD*)(v10 + 32)
					+ 40 * ((unsigned int)(LODWORD(v20) + HIDWORD(v20)) % (((1i64 << *(_BYTE*)(v10 + 11)) - 1) | 1)));
			}
			while (v11[6] != 3 || (double)v5 != *((double*)v11 + 2))
			{
				v11 = (_DWORD*)*((_QWORD*)v11 + 4);
				if (!v11)
				{
					v11 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v11 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 16i64 * (v5 - 1));
		}
		v12 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v12 = *(_QWORD*)v11;
		*(_DWORD*)(v12 + 8) = v11[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v13 + 8) = 3;
		*(double*)v13 = (double)(int)++v4;
		*(_QWORD*)(a1 + 16) += 16i64;
		v14 = *(_DWORD**)(a1 + 16);
		v14[2] = 1;
		*v14 = (v7 & v9) != 0;
		v15 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v15;
		sub_14005EA50(a1, (__int64*)(v15 - 48), (int*)(v15 - 32), (unsigned int*)(v15 - 16));
		v7 = __ROL4__(v7, 1);
		v16 = *(_QWORD*)(a1 + 16) - 48i64;
		*(_QWORD*)(a1 + 16) = v16;
	} while (v4 < 0x1F);
	v17 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if (v6 >= *(_DWORD*)(v17 + 56))
	{
		if ((double)v5 == 0.0)
		{
			v18 = *(_DWORD**)(v17 + 32);
		}
		else
		{
			v21 = (double)v5;
			v18 = (_DWORD*)(*(_QWORD*)(v17 + 32)
				+ 40 * ((unsigned int)(LODWORD(v21) + HIDWORD(v21)) % (((1i64 << *(_BYTE*)(v17 + 11)) - 1) | 1)));
		}
		while (v18[6] != 3 || (double)v5 != *((double*)v18 + 2))
		{
			v18 = (_DWORD*)*((_QWORD*)v18 + 4);
			if (!v18)
			{
				v18 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v18 = (_DWORD*)(*(_QWORD*)(v17 + 24) + 16i64 * (v5 - 1));
	}
	*(_QWORD*)v16 = *(_QWORD*)v18;
	*(_DWORD*)(v16 + 8) = v18[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, (__int64)v18, v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3B390: using guessed type int dword_140C3B390;
// 140C3B3A0: using guessed type __int64 qword_140C3B3A0;
// 140C63750: using guessed type __int64 qword_140C63750;

