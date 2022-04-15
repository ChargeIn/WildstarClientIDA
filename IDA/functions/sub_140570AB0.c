#include "../winhttp.h"

//----- (0000000140570AB0) ----------------------------------------------------
__int64 __fastcall sub_140570AB0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rdi
	__int64 v6; // rax
	__int64 v7; // r14
	unsigned int v8; // eax
	__int64 v9; // rcx
	__int64 v11; // rax
	__int64 v12; // rdi
	unsigned int v13; // eax
	__int64 v14; // rcx

	v3 = qword_140C65970;
	if (!qword_140C65970
		|| *(_DWORD*)(qword_140C65970 + 8)
		|| !a2
		|| !*(_QWORD*)(a2 + 24)
		|| !*(_QWORD*)(qword_140C65970 + 88))
	{
		return 0i64;
	}
	v6 = sub_140573A30(qword_140C65970, a2);
	v7 = v6;
	if (v6 && (v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6), (unsigned int)sub_1404A1950(v9, v8)))
	{
		if (a3)
			*a3 = v7;
	}
	else
	{
		v11 = sub_140573BA0(v3, a2);
		v12 = v11;
		if (!v11)
			return 0i64;
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		if (!(unsigned int)sub_1404A1950(v14, v13))
			return 0i64;
		if (a3)
			*a3 = v12;
	}
	return 1i64;
}
// 140570B1E: variable 'v9' is possibly undefined
// 140570B67: variable 'v14' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

