#include "../winhttp.h"

//----- (000000014071A150) ----------------------------------------------------
__int64 __fastcall sub_14071A150(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	int v9; // [rsp+30h] [rbp+8h] BYREF

	sub_140195D70(a1 + 56);
	sub_140195D70(a1 + 128);
	v2 = *(_QWORD**)(a1 + 24);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(a1 + 32);
	if (v3)
		*(_QWORD*)(v3 + 24) = *(_QWORD*)(a1 + 24);
	v4 = *(_QWORD**)(a1 + 8);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	if (v4)
		*v4 = *(_QWORD*)(a1 + 16);
	v5 = *(_QWORD*)(a1 + 16);
	if (v5)
		*(_QWORD*)(v5 + 8) = *(_QWORD*)(a1 + 8);
	v6 = qword_140C65898;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	if (v6)
	{
		v7 = *(_QWORD*)(v6 + 29080);
		if (v7)
		{
			v9 = *(_DWORD*)(a1 + 216);
			sub_140003460((__int64*)(v7 + 744), &v9);
		}
	}
	return (**(__int64(__fastcall***)(__int64, __int64))a1)(a1, 1i64);
}
// 140C65898: using guessed type __int64 qword_140C65898;

