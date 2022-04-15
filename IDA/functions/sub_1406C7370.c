#include "../winhttp.h"

//----- (00000001406C7370) ----------------------------------------------------
__int64 __fastcall sub_1406C7370(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rcx
	__int128 v4; // [rsp+30h] [rbp-38h] BYREF
	__m128 v5[2]; // [rsp+40h] [rbp-28h] BYREF

	sub_1406C5D70(a1, v5);
	result = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(result + 3384) == a1)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v3 = *(_QWORD**)(a1 + 2376);
		v4 = xmmword_140B7B240;
		if (v3)
			return sub_140103E60(
				v3,
				v5,
				(__m128*) & v4,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2384)) * *(float*)(a1 + 2388)));
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 1406C7370: using guessed type __m128 var_28[2];

