#include "../winhttp.h"

//----- (00000001406E6AD0) ----------------------------------------------------
__int64 __fastcall sub_1406E6AD0(__int64 a1)
{
	int v2; // eax
	int v3; // eax
	__int64 v4; // rcx
	int v6[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+2Ch] [rbp-1Ch]
	__int64 v8; // [rsp+34h] [rbp-14h]
	int v9; // [rsp+3Ch] [rbp-Ch]

	if (*(_QWORD*)(a1 + 3800) && !*(_DWORD*)(a1 + 3824))
	{
		v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 3832) + 64i64))(
			*(_QWORD*)(a1 + 3832),
			0i64,
			3i64);
		v8 = 2i64;
		v6[2] = 1065353216;
		v3 = dword_140B3FC00[v2];
		v4 = *(_QWORD*)(a1 + 3800);
		*(_DWORD*)(a1 + 3824) = 1;
		v6[0] = v3;
		v6[1] = 0;
		v7 = 0i64;
		v9 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, v6);
	}
	return sub_14010B100((unsigned int*)(a1 + 2720));
}
// 140B3FC00: using guessed type int dword_140B3FC00[4];

