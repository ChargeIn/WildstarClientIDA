#include "../winhttp.h"

//----- (0000000140597A20) ----------------------------------------------------
__int64 __fastcall sub_140597A20(__int64 a1)
{
	__int64 v1; // rbp
	int v3; // r15d
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	unsigned __int64 v7; // rsi
	int v8; // ebx
	unsigned int v9; // r14d
	__int64 v10; // r9
	int v11; // r10d
	_DWORD* v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rax
	__int64 v17; // r8
	__int64 v18; // r9
	_DWORD* v19; // r8
	__int64 v20; // rdx
	double v22; // [rsp+60h] [rbp+8h]
	double v23; // [rsp+60h] [rbp+8h]

	v1 = qword_140C65B90;
	v3 = 1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = sub_1400578C0(a1);
	v7 = 0i64;
	v8 = v6;
	if (*(_QWORD*)(v1 + 256))
	{
		v9 = v6 - 1;
		do
		{
			v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			v11 = *(_DWORD*)(*(_QWORD*)(v1 + 248) + 4 * v7);
			if (v9 >= *(_DWORD*)(v10 + 56))
			{
				if ((double)v8 == 0.0)
				{
					v12 = *(_DWORD**)(v10 + 32);
				}
				else
				{
					v22 = (double)v8;
					v12 = (_DWORD*)(*(_QWORD*)(v10 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v22) + HIDWORD(v22)) % (((1i64 << *(_BYTE*)(v10 + 11)) - 1) | 1)));
				}
				while (v12[6] != 3 || (double)v8 != *((double*)v12 + 2))
				{
					v12 = (_DWORD*)*((_QWORD*)v12 + 4);
					if (!v12)
					{
						v12 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v12 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 16i64 * (v8 - 1));
			}
			v13 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v13 = *(_QWORD*)v12;
			*(_DWORD*)(v13 + 8) = v12[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v14 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v14 + 8) = 3;
			v15 = v3++;
			*(double*)v14 = (double)v15;
			*(_QWORD*)(a1 + 16) += 16i64;
			v16 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v16 + 8) = 3;
			*(double*)v16 = (double)v11;
			v17 = *(_QWORD*)(a1 + 16) + 16i64;
			*(_QWORD*)(a1 + 16) = v17;
			sub_14005EA50(a1, (__int64*)(v17 - 48), (int*)(v17 - 32), (unsigned int*)(v17 - 16));
			*(_QWORD*)(a1 + 16) -= 48i64;
			++v7;
		} while (v7 < *(_QWORD*)(v1 + 256));
	}
	v18 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v18 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v19 = *(_DWORD**)(v18 + 32);
		}
		else
		{
			v23 = (double)v8;
			v19 = (_DWORD*)(*(_QWORD*)(v18 + 32)
				+ 40 * ((unsigned int)(LODWORD(v23) + HIDWORD(v23)) % (((1i64 << *(_BYTE*)(v18 + 11)) - 1) | 1)));
		}
		while (v19[6] != 3 || (double)v8 != *((double*)v19 + 2))
		{
			v19 = (_DWORD*)*((_QWORD*)v19 + 4);
			if (!v19)
			{
				v19 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v19 = (_DWORD*)(*(_QWORD*)(v18 + 24) + 16i64 * (v8 - 1));
	}
	v20 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v20 = *(_QWORD*)v19;
	*(_DWORD*)(v20 + 8) = v19[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v20, v8);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65B90: using guessed type __int64 qword_140C65B90;

