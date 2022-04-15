#include "../winhttp.h"

//----- (00000001408566F0) ----------------------------------------------------
__int64 __fastcall sub_1408566F0(__int64 a1, int a2, _DWORD* a3)
{
	__int64 v6; // rdx
	__int64 result; // rax

	if ((*(_BYTE*)(a1 + 16) & 0x7C) == 4)
	{
		v6 = *(_QWORD*)(a1 + 24);
		if (v6)
		{
			sub_140881720(dword_140C10F20, v6);
			*(_QWORD*)(a1 + 24) = 0i64;
		}
	}
	*(_DWORD*)(a1 + 16) &= 0xFFFFF800;
	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 4) = -1;
	*(_DWORD*)(a1 + 16) &= ~0x80u;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = a2;
	*(_DWORD*)a1 = *a3;
	*(_DWORD*)(a1 + 4) = a3[1];
	*(_DWORD*)(a1 + 8) = a3[2];
	*(_DWORD*)(a1 + 12) = a3[3];
	result = (unsigned int)a3[4];
	*(_DWORD*)(a1 + 16) = result;
	*(_DWORD*)(a1 + 16) |= 0x80u;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

