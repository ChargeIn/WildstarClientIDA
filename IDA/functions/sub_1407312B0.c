#include "../winhttp.h"

//----- (00000001407312B0) ----------------------------------------------------
__int64 __fastcall sub_1407312B0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rbx
	int v6; // r9d
	unsigned __int64 v7; // rsi
	__int64 v8; // r10
	_DWORD* v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64(__fastcall * *v13)(); // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]
	int v16; // [rsp+38h] [rbp-10h]
	double v17; // [rsp+50h] [rbp+8h]

	v1 = a1;
	v15 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v13 = off_140B569F0;
	v16 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v5 = 0i64;
	v6 = sub_1400578C0(v1);
	v7 = *(_QWORD*)(qword_140C658A0 + 64);
	v14 = v6;
	if (v7)
	{
		do
		{
			sub_1400FAD30((__int64)&v13);
			++v5;
		} while (v5 < v7);
		v1 = v15;
		v6 = v14;
	}
	v8 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v8 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v9 = *(_DWORD**)(v8 + 32);
		}
		else
		{
			v17 = (double)v6;
			v9 = (_DWORD*)(*(_QWORD*)(v8 + 32)
				+ 40 * ((unsigned int)(LODWORD(v17) + HIDWORD(v17)) % (((1i64 << *(_BYTE*)(v8 + 11)) - 1) | 1)));
		}
		while (v9[6] != 3 || (double)v6 != *((double*)v9 + 2))
		{
			v9 = (_DWORD*)*((_QWORD*)v9 + 4);
			if (!v9)
			{
				v9 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v9 = (_DWORD*)(*(_QWORD*)(v8 + 24) + 16i64 * (v6 - 1));
	}
	v10 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v10 = *(_QWORD*)v9;
	v11 = (unsigned int)v9[2];
	*(_DWORD*)(v10 + 8) = v11;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v11, v6);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658A0: using guessed type __int64 qword_140C658A0;

