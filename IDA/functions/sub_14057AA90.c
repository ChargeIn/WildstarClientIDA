#include "../winhttp.h"

//----- (000000014057AA90) ----------------------------------------------------
__int64 __fastcall sub_14057AA90(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
	__int64 v5; // rcx

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	v5 = a1 + 160;
	*(_QWORD*)(v5 - 160) = off_140B6CCA0;
	*(_QWORD*)(v5 - 136) = 0i64;
	*(_QWORD*)(v5 - 144) = 0i64;
	*(_QWORD*)(v5 - 128) = 0i64;
	*(_QWORD*)(v5 - 120) = 0i64;
	*(_QWORD*)(v5 - 112) = 0i64;
	*(_QWORD*)(v5 - 104) = 0i64;
	*(_QWORD*)(v5 - 72) = 0i64;
	*(_QWORD*)(v5 - 64) = 0i64;
	*(_QWORD*)(v5 - 48) = 0i64;
	*(_QWORD*)(v5 - 40) = 0i64;
	*(_DWORD*)(v5 - 88) = 1414420037;
	*(_DWORD*)(v5 - 20) = 0;
	*(_QWORD*)v5 = 0i64;
	*(_QWORD*)(v5 - 8) = a2;
	*(_QWORD*)v5 = *a2;
	*a2 = a1;
	if (*(_QWORD*)v5)
		*(_QWORD*)(*(_QWORD*)v5 + 152i64) = v5;
	*(_QWORD*)(a1 + 64) = a3;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)a4;
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(a4 + 8);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a4 + 16);
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a4 + 24);
	sub_14058FE80((__int64*)(a1 + 16), *(int**)(a4 + 24), *(unsigned int*)(a4 + 20));
	*(_QWORD*)(a1 + 144) = 0i64;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B6CCA0: using guessed type __int64 (__fastcall *off_140B6CCA0[3])();

