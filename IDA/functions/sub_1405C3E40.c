#include "../winhttp.h"

//----- (00000001405C3E40) ----------------------------------------------------
__int64 __fastcall sub_1405C3E40(__int64 a1, int* a2)
{
	__int64 v2; // rbx
	int* v3; // rsi
	int v5; // eax
	int v6; // eax
	__int64 v7; // rcx
	signed int v9; // [rsp+20h] [rbp-18h]

	v2 = qword_140C65B98;
	v3 = a2 + 3;
	sub_1405C0760(qword_140C65B98, *a2, a2 + 3, a2[1], v9);
	if (v3)
	{
		v5 = *(_DWORD*)(v2 + 268);
		if (v5 != 16 && a2[1] != v5)
		{
			v6 = dword_140C636A8;
			v7 = qword_140C65898;
			*(_DWORD*)(v2 + 288) = 52;
			*(_DWORD*)(v2 + 292) = v6;
			*(_DWORD*)(v2 + 300) = v6;
			*(_DWORD*)(v2 + 296) = 52;
			*(_DWORD*)(v2 + 304) = 0;
			*(_DWORD*)(v2 + 312) = 0;
			*(_QWORD*)(v2 + 320) = 0i64;
			*(_QWORD*)(v2 + 332) = 0i64;
			*(_DWORD*)(v2 + 340) = 0;
			*(_DWORD*)(v2 + 264) = 0;
			*(_DWORD*)(v2 + 328) = 0;
			*(_DWORD*)(v2 + 268) = 16;
			*(_DWORD*)(v2 + 272) = 16;
			*(_DWORD*)(v7 + 1368) = 1;
			Apollo_LUAEvent(*(_QWORD*)(v7 + 29504), "MatchLeft", &unk_1409D12A2);
		}
		*(_DWORD*)(v2 + 268) = a2[1];
		*(_DWORD*)(v2 + 272) = a2[2];
	}
	return 0i64;
}
// 1405C3F25: conditional instruction was optimized away because rsi.8!=0
// 1405C3E69: variable 'v9' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

