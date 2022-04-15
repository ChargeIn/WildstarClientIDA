#include "../winhttp.h"

//----- (00000001408D40F0) ----------------------------------------------------
void __fastcall sub_1408D40F0(__int64 a1, double a2, char a3)
{
	unsigned int i; // ebx

	sub_1408D5260(a2, a3, (__int64)&unk_140C62B10, 256);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CE0(a1, (unsigned __int64)&unk_140C62B10, 256, 1176i64 * i + *(_QWORD*)(a1 + 8) + 80i64, 18);
}

