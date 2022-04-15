#include "../winhttp.h"

//----- (00000001408676E0) ----------------------------------------------------
__int64 __fastcall sub_1408676E0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // ebx
	__int64 v4; // rdx
	unsigned int i; // r8d
	_DWORD* v7; // rcx

	v2 = a2;
	if (!*(_QWORD*)(a1 + 136))
	{
		v4 = sub_1408819F0(
			dword_140C10F20,
			36i64
			* (((a2 >> 7) & 1)
				+ ((a2 & 0x40) != 0)
				+ ((a2 & 0x20) != 0)
				+ ((a2 & 0x10) != 0)
				+ ((a2 & 8) != 0)
				+ ((a2 & 4) != 0)
				+ ((a2 & 2) != 0)
				+ (a2 & 1)));
		*(_QWORD*)(a1 + 136) = v4;
		if (!v4)
			return 2i64;
		for (i = 0; v2; v2 >>= 1)
		{
			if ((v2 & 1) != 0)
			{
				v7 = (_DWORD*)((char*)&unk_140C62050 + 128 * (unsigned __int64)i);
				v4 += 36i64;
				*(_DWORD*)(v4 - 36) = *v7;
				*(_DWORD*)(v4 - 32) = v7[3];
				*(_DWORD*)(v4 - 28) = v7[6];
				*(_DWORD*)(v4 - 24) = v7[1];
				*(_DWORD*)(v4 - 20) = v7[4];
				*(_DWORD*)(v4 - 16) = v7[7];
				*(_DWORD*)(v4 - 12) = v7[2];
				*(_DWORD*)(v4 - 8) = v7[5];
				*(_DWORD*)(v4 - 4) = v7[8];
			}
			++i;
		}
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

