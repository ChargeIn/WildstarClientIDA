#include "../winhttp.h"

//----- (0000000140889DC0) ----------------------------------------------------
__int64 __fastcall sub_140889DC0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax
	int v4; // ecx

	v1 = *(_QWORD*)(a1 + 48);
	if (v1)
	{
		*(_QWORD*)(a1 + 56) = v1;
		result = sub_140881720(dword_140C111C0, v1);
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_DWORD*)(a1 + 64) = 0;
	}
	if (*(_QWORD*)(a1 + 32))
	{
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 40) = 0i64;
		*(_DWORD*)(a1 + 24) = 0;
		result = sub_140881720(dword_140C111C0, *(_QWORD*)(a1 + 16));
	}
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 24) = 0;
	v4 = *(_DWORD*)(a1 + 72);
	if (v4 != -1)
	{
		sub_140881A80(v4, *(_QWORD**)(a1 + 8));
		result = sub_140881DD0(*(_DWORD*)(a1 + 72));
		*(_DWORD*)(a1 + 72) = -1;
	}
	return result;
}
// 140C111C0: using guessed type int dword_140C111C0;

