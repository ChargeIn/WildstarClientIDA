#include "../winhttp.h"

//----- (00000001407AAF60) ----------------------------------------------------
__int64 __fastcall sub_1407AAF60(__int64 a1, unsigned int a2, int a3)
{
	unsigned int v4; // edi
	__int128 v7; // xmm0
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned int i; // ebx

	v4 = 0;
	*(_DWORD*)(a1 + 4i64 * a2 + 434016) = *(_DWORD*)(a1 + 96);
	*(_DWORD*)(a1 + 4i64 * a2 + 436092) = *(_DWORD*)(a1 + 436136);
	if (*(_DWORD*)(a1 + 436340))
		v7 = *(_OWORD*)(a1 + 436192);
	else
		v7 = 0i64;
	*(_OWORD*)(a1 + 16 * (a2 + 27263i64)) = v7;
	v8 = 88 * (*(unsigned int*)(a1 + 96) + 8i64 * a2) + a1 + 427040;
	*(_DWORD*)(v8 + 36) = *(_DWORD*)(v8 + 32);
	*(_DWORD*)(v8 + 32) = *(_DWORD*)(v8 + 28);
	*(_DWORD*)(v8 + 28) = sub_14018CDF0();
	if (!*(_QWORD*)(v8 + 56))
	{
		*(_QWORD*)(v8 + 56) = a1 + 436120;
		*(_QWORD*)(v8 + 64) = *(_QWORD*)(a1 + 436120);
		*(_QWORD*)(a1 + 436120) = v8;
		v9 = *(_QWORD*)(v8 + 64);
		if (v9)
			*(_QWORD*)(v9 + 56) = v8 + 64;
	}
	for (i = 0; i < 2; ++i)
	{
		if ((unsigned int)sub_1407AB070(a1, a2, a3, i) || v4)
			v4 = 1;
	}
	return v4;
}

