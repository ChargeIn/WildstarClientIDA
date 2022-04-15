#include "../winhttp.h"

//----- (00000001405C1850) ----------------------------------------------------
__int64 __fastcall sub_1405C1850(__int64 a1)
{
	int v1; // eax
	__int64 v2; // rcx

	v1 = dword_140C636A8;
	*(_DWORD*)(a1 + 24) = 52;
	*(_DWORD*)(a1 + 32) = 52;
	*(_DWORD*)(a1 + 28) = v1;
	*(_DWORD*)(a1 + 36) = v1;
	*(_DWORD*)(a1 + 40) = 0;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 68) = 0i64;
	*(_DWORD*)(a1 + 76) = 0;
	*(_DWORD*)a1 = 0;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 4) = 16;
	*(_DWORD*)(a1 + 8) = 16;
	v2 = qword_140C65898;
	*(_DWORD*)(qword_140C65898 + 1368) = 1;
	sub_1400EA3E0(*(_QWORD*)(v2 + 29504), "MatchLeft", &unk_1409D12A2);
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

