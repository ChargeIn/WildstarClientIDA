#include "../winhttp.h"

//----- (0000000140069AA0) ----------------------------------------------------
void __fastcall sub_140069AA0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // [rsp+20h] [rbp-38h] BYREF
	int v4; // [rsp+28h] [rbp-30h] BYREF
	int v5; // [rsp+30h] [rbp-28h]

	v1 = *(_QWORD*)(a1 + 48);
	sub_140067740(a1, &v4);
	if (v4 == 13)
	{
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 24i64) + 4i64 * v5) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 24i64)
			+ 4i64 * v5) & 0xFF803FFF | 0x4000;
	}
	else
	{
		v3 = 0i64;
		sub_1400680D0(a1, (__int64)&v3, 1);
	}
}

