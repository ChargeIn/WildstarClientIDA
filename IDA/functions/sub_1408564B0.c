#include "../winhttp.h"

//----- (00000001408564B0) ----------------------------------------------------
__int64 __fastcall sub_1408564B0(__int64 a1, int a2)
{
	__int64 v4; // rdx
	int v5; // eax
	__int64 result; // rax

	if ((*(_BYTE*)(a1 + 16) & 0x7C) == 4)
	{
		v4 = *(_QWORD*)(a1 + 24);
		if (v4)
		{
			sub_140881720(dword_140C10F20, v4);
			*(_QWORD*)(a1 + 24) = 0i64;
		}
	}
	*(_DWORD*)(a1 + 16) &= 0xFFFFF800;
	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 4) = -1;
	*(_DWORD*)(a1 + 16) &= ~0x80u;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = -1;
	v5 = *(_DWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)a1 = a2;
	result = v5 & 0xFFFFF800 | 8;
	*(_DWORD*)(a1 + 4) = -1;
	*(_DWORD*)(a1 + 16) = result;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

