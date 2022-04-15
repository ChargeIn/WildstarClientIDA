#include "../winhttp.h"

//----- (000000014076A8C0) ----------------------------------------------------
__int64 __fastcall sub_14076A8C0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	int v4; // eax
	int v5; // edx
	unsigned int v6; // eax
	bool v7; // cf
	bool v8; // zf
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax
	_DWORD* v12; // rax

	v2 = sub_140215240(*(_DWORD*)(qword_140C65B98 + 264));
	if (v2 && (v3 = sub_140214E00(*(_DWORD*)(v2 + 16))) != 0 && qword_140C65898)
	{
		v4 = *(_DWORD*)(v3 + 12);
		v5 = 0;
		if (!v4 || (v6 = v4 - 3, v7 = v6 < 4, v8 = v6 == 4, v9 = 0, v7 || v8))
			v9 = 1;
		v10 = *(_DWORD**)(a1 + 16);
		v8 = v9 == 0;
		result = 1i64;
		LOBYTE(v5) = !v8;
		v10[2] = 1;
		*v10 = v5;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v12 = *(_DWORD**)(a1 + 16);
		*v12 = 0;
		v12[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

