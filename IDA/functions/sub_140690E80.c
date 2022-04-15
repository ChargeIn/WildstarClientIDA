#include "../winhttp.h"

//----- (0000000140690E80) ----------------------------------------------------
__int64 __fastcall sub_140690E80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // edx
	__int64 v6; // rcx
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64)) != 0)
	{
		v5 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 328i64))(v4) + 76);
	}
	else
	{
		v5 = 0;
	}
	v6 = a1[2];
	result = 1i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)v5;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

