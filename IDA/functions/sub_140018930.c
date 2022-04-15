#include "../winhttp.h"

//----- (0000000140018930) ----------------------------------------------------
__int64 __fastcall sub_140018930(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rcx

	v3 = (_QWORD*)(a1 + 24);
	*((_DWORD*)v3 - 6) = *(_DWORD*)a2;
	*((_DWORD*)v3 - 5) = *(_DWORD*)(a2 + 4);
	*((_DWORD*)v3 - 4) = *(_DWORD*)(a2 + 8);
	*((_DWORD*)v3 - 3) = *(_DWORD*)(a2 + 12);
	*((_BYTE*)v3 - 8) = *(_BYTE*)(a2 + 16);
	v3[1] = 0i64;
	v3[2] = 0i64;
	v3[3] = 0i64;
	sub_14001B240(v3, *(int**)(a2 + 32), *(_QWORD*)(a2 + 40));
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 56);
	*(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_WORD*)(a1 + 76) = *(_WORD*)(a2 + 76);
	*(_QWORD*)(a1 + 78) = *(_QWORD*)(a2 + 78);
	*(_QWORD*)(a1 + 86) = *(_QWORD*)(a2 + 86);
	*(_QWORD*)(a1 + 94) = *(_QWORD*)(a2 + 94);
	*(_QWORD*)(a1 + 102) = *(_QWORD*)(a2 + 102);
	*(_QWORD*)(a1 + 110) = *(_QWORD*)(a2 + 110);
	*(_DWORD*)(a1 + 118) = *(_DWORD*)(a2 + 118);
	return a1;
}

