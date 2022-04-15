#include "../winhttp.h"

//----- (000000014075CFE0) ----------------------------------------------------
__int64 __fastcall sub_14075CFE0(__int64 a1)
{
	_QWORD* v1; // r14
	int v3; // r15d
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	unsigned __int64 v7; // r12
	unsigned __int64 v8; // rsi
	int v9; // ebx
	unsigned int v10; // ebp
	__int64 v11; // r9
	int v12; // r10d
	_DWORD* v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rcx
	int v16; // eax
	__int64 v17; // rax
	__int64 v18; // r8
	__int64 v19; // r9
	_DWORD* v20; // r8
	__int64 v21; // rdx
	double v23; // [rsp+60h] [rbp+8h]
	double v24; // [rsp+60h] [rbp+8h]

	v1 = (_QWORD*)xmmword_140C7DE30;
	v3 = 1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = sub_1400578C0(a1);
	v7 = v1[1];
	v8 = 0i64;
	v9 = v6;
	if (v7)
	{
		v10 = v6 - 1;
		do
		{
			v11 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			v12 = *(_DWORD*)(*v1 + 4 * v8);
			if (v10 >= *(_DWORD*)(v11 + 56))
			{
				if ((double)v9 == 0.0)
				{
					v13 = *(_DWORD**)(v11 + 32);
				}
				else
				{
					v23 = (double)v9;
					v13 = (_DWORD*)(*(_QWORD*)(v11 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v23) + HIDWORD(v23)) % (((1i64 << *(_BYTE*)(v11 + 11)) - 1) | 1)));
				}
				while (v13[6] != 3 || (double)v9 != *((double*)v13 + 2))
				{
					v13 = (_DWORD*)*((_QWORD*)v13 + 4);
					if (!v13)
					{
						v13 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v13 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64 * (v9 - 1));
			}
			v14 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v14 = *(_QWORD*)v13;
			*(_DWORD*)(v14 + 8) = v13[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v15 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v15 + 8) = 3;
			v16 = v3++;
			*(double*)v15 = (double)v16;
			*(_QWORD*)(a1 + 16) += 16i64;
			v17 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v17 + 8) = 3;
			*(double*)v17 = (double)v12;
			v18 = *(_QWORD*)(a1 + 16) + 16i64;
			*(_QWORD*)(a1 + 16) = v18;
			sub_14005EA50(a1, (__int64*)(v18 - 48), (int*)(v18 - 32), (unsigned int*)(v18 - 16));
			*(_QWORD*)(a1 + 16) -= 48i64;
			++v8;
		} while (v8 < v7);
	}
	v19 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v19 + 56))
	{
		if ((double)v9 == 0.0)
		{
			v20 = *(_DWORD**)(v19 + 32);
		}
		else
		{
			v24 = (double)v9;
			v20 = (_DWORD*)(*(_QWORD*)(v19 + 32)
				+ 40 * ((unsigned int)(LODWORD(v24) + HIDWORD(v24)) % (((1i64 << *(_BYTE*)(v19 + 11)) - 1) | 1)));
		}
		while (v20[6] != 3 || (double)v9 != *((double*)v20 + 2))
		{
			v20 = (_DWORD*)*((_QWORD*)v20 + 4);
			if (!v20)
			{
				v20 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v20 = (_DWORD*)(*(_QWORD*)(v19 + 24) + 16i64 * (v9 - 1));
	}
	v21 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v21 = *(_QWORD*)v20;
	*(_DWORD*)(v21 + 8) = v20[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v21, v9);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C7DE30: using guessed type __int128 xmmword_140C7DE30;

