#include "../winhttp.h"

//----- (0000000140789100) ----------------------------------------------------
__int64 __fastcall sub_140789100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v5; // rcx
	int v6; // [rsp+60h] [rbp+8h] BYREF
	int v7; // [rsp+64h] [rbp+Ch]

	if (!*(_DWORD*)(*(_QWORD*)(a1 + 24) + 1360i64))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 48);
	v6 = 0;
	v7 = 1065353216;
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, int*, int, __int64, _DWORD, _DWORD, _QWORD, int))(*(_QWORD*)v5 + 1328i64))(
		v5,
		a2,
		a3,
		&v6,
		2,
		a4,
		0,
		0,
		0i64,
		1);
}

