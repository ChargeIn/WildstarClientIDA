#include "../winhttp.h"

//----- (0000000140827B80) ----------------------------------------------------
_DWORD* __fastcall sub_140827B80(
	unsigned int a1,
	__int64 a2,
	unsigned int a3,
	__int64 a4,
	__int64 a5,
	unsigned int a6,
	__int64 a7,
	int a8)
{
	__int64* v8; // r10
	_DWORD* result; // rax
	_DWORD* v14; // rbx
	unsigned int v15; // esi
	__int64 v16; // [rsp+40h] [rbp-28h] BYREF
	int v17; // [rsp+48h] [rbp-20h]
	_DWORD* v18; // [rsp+50h] [rbp-18h]

	v8 = 0i64;
	if (a6)
	{
		v16 = 0i64;
		v17 = 0;
		result = sub_140827170(a6, a7);
		v14 = result;
		v18 = result;
		if (!result)
			return result;
		v8 = &v16;
	}
	else
	{
		v14 = v18;
	}
	v15 = sub_140827C50(a1, a2, a3, a4, a5, v8, a8);
	if (!v15)
	{
		if (a6)
			sub_140828460(v14);
	}
	return (_DWORD*)v15;
}

