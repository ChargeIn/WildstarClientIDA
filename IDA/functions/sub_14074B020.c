#include "../winhttp.h"

//----- (000000014074B020) ----------------------------------------------------
__int64 __fastcall sub_14074B020(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rcx
	int v10; // eax
	_DWORD* v11; // rcx
	bool v12; // sf
	__int64 result; // rax

	v1 = 0;
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
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v10 = sub_1403A6C50(v9, v8);
	v11 = *(_DWORD**)(a1 + 16);
	v12 = v10 < 0;
	v11[2] = 1;
	result = 1i64;
	LOBYTE(v1) = !v12;
	*v11 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 14074B07E: variable 'v9' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

