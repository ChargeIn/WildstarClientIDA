#include "../winhttp.h"

//----- (00000001408A2100) ----------------------------------------------------
void __fastcall sub_1408A2100(__int64 a1, __int64 a2)
{
	_DWORD* v4; // rax
	int v5[4]; // [rsp+20h] [rbp-28h] BYREF
	int v6; // [rsp+30h] [rbp-18h]
	int v7; // [rsp+34h] [rbp-14h]

	if (*(_WORD*)(a2 + 18))
	{
		v4 = *(_DWORD**)(a1 + 8);
		v5[0] = v4[2];
		v5[1] = v4[3];
		v5[2] = v4[4];
		v5[3] = v4[5];
		v6 = v4[6];
		v7 = v4[7];
		(*(void(__fastcall**)(__int64, __int64, int*))(a1 + 16))(a1, a2, v5);
		sub_1408A3370(
			a2,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 24)),
			COERCE_DOUBLE((unsigned __int64)v6),
			*(_BYTE*)(a1 + 72));
		*(_DWORD*)(a1 + 24) = v6;
	}
}

