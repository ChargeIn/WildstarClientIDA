#include "../winhttp.h"

//----- (0000000140119CE0) ----------------------------------------------------
__int64 __fastcall sub_140119CE0(__int64 a1)
{
	__int64 v1; // rsi
	unsigned __int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // r8
	__int64 v6; // rdx
	_BYTE* v7; // rbp
	unsigned __int64 v8; // rdx
	_DWORD* v9; // rax
	_DWORD* v10; // rcx
	int v11; // ebx
	__int64 v12; // rdx
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	_BYTE* v15; // [rsp+28h] [rbp-20h]
	_BYTE* v16; // [rsp+30h] [rbp-18h]

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
	sub_1400F2540(v1 + 384, &v14, 1);
	v7 = v15;
	if (v15 != v16)
	{
		v8 = *(_QWORD*)(a1 + 16);
		v9 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
		if ((unsigned __int64)v9 < v8)
		{
			v10 = dword_140A12138;
			if (v9 != dword_140A12138 && *(_DWORD*)(*(_QWORD*)(a1 + 24) + 24i64) == 5)
			{
				if ((unsigned __int64)v9 < v8)
					v10 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
				*(_QWORD*)v8 = *(_QWORD*)v10;
				*(_DWORD*)(v8 + 8) = v10[2];
				*(_QWORD*)(a1 + 16) += 16i64;
				v11 = sub_1400578C0(a1);
				sub_1400EC060(v1, v7, v11);
				sub_1400579E0(a1, v12, v11);
			}
		}
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 0i64;
}
// 140119DB2: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

