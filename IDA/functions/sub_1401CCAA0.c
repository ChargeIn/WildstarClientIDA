#include "../winhttp.h"

//----- (00000001401CCAA0) ----------------------------------------------------
__int64 __fastcall sub_1401CCAA0(__int64 a1, unsigned __int8* a2, int a3, unsigned __int16 a4)
{
	int v5; // ecx
	__int64 v7; // rdx
	__int16 v8; // ax
	__int64 v9; // rcx
	int v10; // eax

	v5 = *(_DWORD*)(a1 + 5908);
	if (v5 <= 13)
	{
		v10 = v5 + 3;
		*(_WORD*)(a1 + 5904) |= a4 << v5;
	}
	else
	{
		v7 = *(unsigned int*)(a1 + 40);
		v8 = a4 << v5;
		v9 = *(_QWORD*)(a1 + 16);
		*(_WORD*)(a1 + 5904) |= v8;
		*(_BYTE*)(v7 + v9) = *(_BYTE*)(a1 + 5904);
		*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
		LODWORD(v7) = *(_DWORD*)(a1 + 5908);
		++* (_DWORD*)(a1 + 40);
		v10 = v7 - 13;
		*(_WORD*)(a1 + 5904) = a4 >> (16 - v7);
	}
	*(_DWORD*)(a1 + 5908) = v10;
	return sub_1401CD2F0(a1, a2, a3);
}

