#include "../winhttp.h"

//----- (000000014089B0A0) ----------------------------------------------------
__int64 __fastcall sub_14089B0A0(__int64 a1, int* a2)
{
	unsigned __int8 v3; // al
	unsigned int v5; // edi
	int* v6; // [rsp+20h] [rbp-18h] BYREF
	char v7; // [rsp+28h] [rbp-10h]
	int v8; // [rsp+40h] [rbp+8h] BYREF
	char v9; // [rsp+44h] [rbp+Ch]
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v3 = *(_BYTE*)(a1 + 98) & 0xF;
	v8 = *a2;
	v9 = 1;
	if (v3 > 1u || *(_QWORD*)(a1 + 16))
		return 2i64;
	*(_BYTE*)(a1 + 192) &= ~1u;
	v6 = &v8;
	v7 = 0;
	v5 = sub_140899EB0((_QWORD*)a1);
	v10 = sub_140898DF0(a1, v5);
	if (v10)
	{
		sub_140899FD0((_QWORD*)a1, v5, (__int64)&v6, &v10);
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 72i64))(v10);
	}
	return 1i64;
}

