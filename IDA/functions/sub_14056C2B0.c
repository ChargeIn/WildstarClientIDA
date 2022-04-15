#include "../winhttp.h"

//----- (000000014056C2B0) ----------------------------------------------------
__int64 __fastcall sub_14056C2B0(__int64* a1)
{
	__int64 v1; // rax
	unsigned int v2; // edi
	__int64 v4; // rbx
	int v5; // eax
	__int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v2 = 0;
	v4 = 0i64;
	v7[1] = 0i64;
	v7[0] = 0i64;
	if (!(*(unsigned int(__fastcall**)(__int64*))(v1 + 56))(a1))
	{
		v5 = sub_14056C320(a1, (__int64)v7, 1);
		v4 = v7[0];
		if (v5)
			v2 = *(_DWORD*)v7[0];
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	return v2;
}

