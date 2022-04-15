#include "../winhttp.h"

//----- (000000014089B140) ----------------------------------------------------
__int64 __fastcall sub_14089B140(__int64 a1, _DWORD* a2)
{
	signed int v3; // edx
	unsigned __int8 v4; // al
	unsigned int v6; // edi
	int* v7; // [rsp+20h] [rbp-18h] BYREF
	char v8; // [rsp+28h] [rbp-10h]
	int v9; // [rsp+40h] [rbp+8h] BYREF
	char v10; // [rsp+44h] [rbp+Ch]
	__int64 v11; // [rsp+48h] [rbp+10h] BYREF

	v10 = 0;
	v3 = *a2 * (dword_140C110B4 / 0x3E8u);
	if (v3 < 0)
		v3 = 0;
	v4 = *(_BYTE*)(a1 + 98) & 0xF;
	v9 = v3;
	if (v4 > 1u || *(_QWORD*)(a1 + 16))
		return 2i64;
	*(_BYTE*)(a1 + 192) &= ~1u;
	v7 = &v9;
	v8 = 0;
	v6 = sub_140899EB0((_QWORD*)a1);
	v11 = sub_140898DF0(a1, v6);
	if (v11)
	{
		sub_140899FD0((_QWORD*)a1, v6, (__int64)&v7, &v11);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 72i64))(v11);
	}
	return 1i64;
}
// 140C110B4: using guessed type int dword_140C110B4;

