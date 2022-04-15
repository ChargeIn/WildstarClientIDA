#include "../winhttp.h"

//----- (000000014013B810) ----------------------------------------------------
__int64 __fastcall sub_14013B810(__int64 a1)
{
	__int64 v1; // r9
	unsigned __int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // r8
	__int64 v6; // rdx
	_DWORD* v7; // rax
	unsigned __int64 v8; // r8
	_DWORD* v9; // rdi
	_DWORD* v10; // rdx
	__int64 v11; // rax
	unsigned __int64 v12; // rdx
	__int64* v13; // rsi
	_DWORD* v14; // rcx
	int v15; // eax

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = *(_DWORD**)(a1 + 24);
	v8 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)v7 < v8)
	{
		v9 = dword_140A12138;
		if (v7 != dword_140A12138 && v7[2] == 5)
		{
			v10 = dword_140A12138;
			if ((unsigned __int64)v7 < v8)
				v10 = *(_DWORD**)(a1 + 24);
			*(_QWORD*)v8 = *(_QWORD*)v10;
			*(_DWORD*)(v8 + 8) = v10[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v11 = sub_14013A580(v1 + 2496, a1, 1);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v12 = *(_QWORD*)(a1 + 16);
			v13 = (__int64*)v11;
			if (v11)
			{
				v14 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
				if ((unsigned __int64)v14 < v12 && v14 != dword_140A12138 && *(_DWORD*)(*(_QWORD*)(a1 + 24) + 24i64) == 5)
				{
					if ((unsigned __int64)v14 < v12)
						v9 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
					*(_QWORD*)v12 = *(_QWORD*)v9;
					*(_DWORD*)(v12 + 8) = v9[2];
					*(_QWORD*)(a1 + 16) += 16i64;
					v15 = sub_1400578C0(a1);
					sub_140137C20(v13, v15, 0, 0, dword_1409D912C);
				}
			}
		}
	}
	return 0i64;
}
// 1409D912C: using guessed type int dword_1409D912C[6];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

