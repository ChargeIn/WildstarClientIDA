#include "../winhttp.h"

//----- (00000001403B5400) ----------------------------------------------------
__int64 __fastcall sub_1403B5400(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v5; // rax

	v3 = a3;
	if (!a2 || (unsigned int)(*(_DWORD*)(a2 + 320) - 1) > 1)
		return 0i64;
	if (!a3)
		v3 = a2 + 8;
	if ((dword_140C8A704 & 1) != 0)
	{
		if (dword_140C8A6FC)
			return (unsigned int)(dword_140C8A6F8 + *(_DWORD*)(v3 + 4));
	}
	else
	{
		dword_140C8A704 |= 1u;
	}
	dword_140C8A6FC = 1;
	v5 = sub_140200220(0x22Fu);
	if (v5)
	{
		dword_140C8A6F8 = *(_DWORD*)(v5 + 8);
		return (unsigned int)(dword_140C8A6F8 + *(_DWORD*)(v3 + 4));
	}
	else
	{
		dword_140C8A6F8 = 0;
		return *(unsigned int*)(v3 + 4);
	}
}
// 140C8A6F8: using guessed type int dword_140C8A6F8;
// 140C8A6FC: using guessed type int dword_140C8A6FC;
// 140C8A704: using guessed type int dword_140C8A704;

