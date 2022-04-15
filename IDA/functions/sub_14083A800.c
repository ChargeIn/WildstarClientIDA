#include "../winhttp.h"

//----- (000000014083A800) ----------------------------------------------------
__int64 __fastcall sub_14083A800(__int64 a1, __int64 a2, unsigned __int16* a3)
{
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 result; // rax
	unsigned int v8; // esi

	if (*(_DWORD*)a2)
		return 2i64;
	if (*(_BYTE*)(a2 + 44))
	{
		sub_140867F60(a2);
		return 2i64;
	}
	v5 = *((_QWORD*)a3 + 1);
	if (v5)
	{
		*(_QWORD*)(a2 + 16) = v5;
		v6 = *a3;
		*(_WORD*)(a2 + 32) = v6;
		*(_QWORD*)(a2 + 24) = *(_QWORD*)(a2 + 8) + 24 * v6;
	}
	result = sub_140867C00(a2, qword_140C61B68[4].SpinCount);
	v8 = result;
	if ((*(_BYTE*)(a2 + 40) & 2) == 0)
	{
		sub_140867640(a2);
		*(_DWORD*)a3 = *(unsigned __int16*)(a2 + 32);
		*((_QWORD*)a3 + 1) = *(_QWORD*)(a2 + 16);
		return v8;
	}
	return result;
}

