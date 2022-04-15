#include "../winhttp.h"

//----- (00000001403AFA70) ----------------------------------------------------
__int64 __fastcall sub_1403AFA70(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // r9d
	_DWORD* v4; // r8
	unsigned int v5; // eax
	_DWORD* v7; // rax
	unsigned int v8; // ecx

	v3 = 133;
	if (a2 == a3)
	{
		v4 = *(_DWORD**)(a1 + 112);
		v5 = v4[31];
		if ((v5 > 7 || !_bittest(&v3, v5))
			&& (v4[6] != 3 || v4[39] || ((v5 - 4) & 0xFFFFFFFB) != 0)
			&& (v4[67] & 0x10000000) == 0)
		{
			return 32i64;
		}
	}
	v7 = *(_DWORD**)(a1 + 112);
	if ((v7[67] & 0x40000000) == 0)
		return 0i64;
	v8 = v7[31];
	if ((v8 > 7 || !_bittest(&v3, v8)) && (v7[6] != 3 || v7[39] || ((v8 - 4) & 0xFFFFFFFB) != 0))
		return 0i64;
	if (*(_DWORD*)(a2 + 264))
		return 0i64;
	else
		return 31i64;
}

