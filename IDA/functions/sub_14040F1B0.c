#include "../winhttp.h"

//----- (000000014040F1B0) ----------------------------------------------------
_BOOL8 __fastcall sub_14040F1B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
	int v5; // r10d
	int v6; // eax
	int v7; // ebx
	int v8; // eax

	if (!a1)
		return 0i64;
	if (!a2)
		return 0i64;
	if (!a4)
		return 0i64;
	v5 = *(_DWORD*)(a1 + 332);
	if ((v5 & 0x4000) != 0 || (*(_DWORD*)(a2 + 332) & 0x4000) != 0 || *(_DWORD*)(a1 + 320) != 33)
		return 0i64;
	if (!a3)
		a3 = a2 + 8;
	if (a5 >= *(_DWORD*)(a3 + 304))
		return 0i64;
	v6 = *(_DWORD*)(a1 + 384);
	if (v6)
	{
		if ((v6 & *(_DWORD*)(a2 + 384)) == 0)
			return 0i64;
	}
	if ((*(_BYTE*)(a1 + 40) & 1) != 0 && (*(_BYTE*)(a3 + 32) & 1) == 0
		|| (v5 & 0x800) != 0 && (*(_BYTE*)(a3 + 32) & 1) != 0
		|| *(_DWORD*)(a3 + 4) < *(_DWORD*)(a1 + 356))
	{
		return 0i64;
	}
	v7 = *(_DWORD*)(a1 + 276);
	v8 = sub_14040F2B0(*(_BYTE*)(a5 + a4));
	if (!v7)
		return 0i64;
	if (v8 == 64)
		return 1i64;
	return (v8 & v7) != 0;
}

