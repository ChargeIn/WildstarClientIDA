#include "../winhttp.h"

//----- (0000000140508A90) ----------------------------------------------------
__int64 __fastcall sub_140508A90(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rcx

	*(_QWORD*)a1 = *(_QWORD*)a2;
	v3 = (_QWORD*)(a1 + 16);
	*(v3 - 1) = *(_QWORD*)(a2 + 8);
	v3[1] = 0i64;
	v3[2] = 0i64;
	v3[3] = 0i64;
	sub_14001C1B0(v3, *(int**)(a2 + 24), *(_QWORD*)(a2 + 32));
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 52);
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	sub_14001C1B0((_QWORD*)(a1 + 56), *(int**)(a2 + 64), *(_QWORD*)(a2 + 72));
	return a1;
}

