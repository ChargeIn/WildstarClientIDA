#include "../winhttp.h"

//----- (000000014076B6E0) ----------------------------------------------------
__int64 __fastcall sub_14076B6E0(__int64 a1)
{
	int v1; // r8d
	__int64 v3; // rdx
	__int64 v4; // r9
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v1 = 0;
	if (*(_DWORD*)(qword_140C65B98 + 268) != 16 && !*(_DWORD*)(qword_140C65B98 + 340)
		|| (v3 = *(_QWORD*)(qword_140C65898 + 27728)) == 0
		|| !*(_QWORD*)(v3 + 96)
		|| (v4 = *(_QWORD*)(*(_QWORD*)(v3 + 88) + 8i64 * *(_QWORD*)(v3 + 104))) == 0
		|| *(_DWORD*)(v4 + 16) != *(_DWORD*)(v3 + 16)
		|| (v5 = 1, *(_QWORD*)(v4 + 24) != *(_QWORD*)(v3 + 24)))
	{
		v5 = 0;
	}
	v6 = *(_DWORD**)(a1 + 16);
	v7 = v5 == 0;
	result = 1i64;
	LOBYTE(v1) = !v7;
	v6[2] = 1;
	*v6 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

