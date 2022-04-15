#include "../winhttp.h"

//----- (00000001407F09F8) ----------------------------------------------------
__int64 __fastcall sub_1407F09F8(
	_OWORD* a1,
	__int64 a2,
	unsigned int a3,
	const CHAR* a4,
	int a5,
	WCHAR* a6,
	int a7,
	UINT a8,
	int a9)
{
	__int64 result; // rax
	char v13[16]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v14; // [rsp+60h] [rbp-18h]
	char v15; // [rsp+68h] [rbp-10h]

	sub_1407DE348((__int64)v13, a1);
	result = sub_1407F0728((__int64)v13, a2, a3, a4, a5, a6, a7, a8, a9);
	if (v15)
		*(_DWORD*)(v14 + 200) &= ~2u;
	return result;
}

