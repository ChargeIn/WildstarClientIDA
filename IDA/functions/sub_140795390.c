#include "../winhttp.h"

//----- (0000000140795390) ----------------------------------------------------
__int64 __fastcall sub_140795390(__int64 a1)
{
	__int64 v1; // rdi
	unsigned __int64 v3; // r8
	__int64 v4; // rax
	__int64 v5; // r9
	_DWORD* v6; // rcx
	__int64 result; // rax
	int v8; // eax
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 16);
	v3 = -1i64;
	do
		++v3;
	while (aIsdst_0[v3]);
	v4 = sub_140062650(a1, (unsigned __int64*)aIsdst_0, v3);
	v5 = *(_QWORD*)(a1 + 16);
	v9 = v4;
	v10 = 4;
	sub_14005E8E0(a1, v1 - 16, (int*)&v9, v5);
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	if (v6 == dword_140A12138 || v6[2])
	{
		v8 = v6[2];
		if (v8 && (v8 != 1 || *v6))
		{
			result = 1i64;
			*(_QWORD*)(a1 + 16) = v6;
		}
		else
		{
			*(_QWORD*)(a1 + 16) = v6;
			return 0i64;
		}
	}
	else
	{
		result = 0xFFFFFFFFi64;
		*(_QWORD*)(a1 + 16) = v6;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

