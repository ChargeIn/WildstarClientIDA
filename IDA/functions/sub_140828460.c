#include "../winhttp.h"

//----- (0000000140828460) ----------------------------------------------------
__int64 __fastcall sub_140828460(_DWORD* a1)
{
	unsigned int i; // ebx
	__int64 v4; // rdx
	__int64 result; // rax

	if ((*a1)-- == 1)
	{
		for (i = 0; i < a1[1]; ++i)
		{
			v4 = *(_QWORD*)&a1[8 * i + 4];
			if (v4)
				sub_140881720(dword_140C10F20, v4);
		}
		return sub_140881720(dword_140C10F20, (__int64)a1);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

