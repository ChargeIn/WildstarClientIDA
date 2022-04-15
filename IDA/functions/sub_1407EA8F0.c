#include "../winhttp.h"

//----- (00000001407EA8F0) ----------------------------------------------------
__int64 __fastcall sub_1407EA8F0(
	_OWORD* a1,
	__int64 a2,
	unsigned int a3,
	const CHAR* a4,
	int a5,
	const CHAR* a6,
	int a7,
	UINT a8)
{
	__int64 result; // rax
	char v12[16]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v13; // [rsp+50h] [rbp-18h]
	char v14; // [rsp+58h] [rbp-10h]

	sub_1407DE348((__int64)v12, a1);
	result = sub_1407EA5A8((__int64)v12, a2, a3, a4, a5, a6, a7, a8);
	if (v14)
		*(_DWORD*)(v13 + 200) &= ~2u;
	return result;
}

