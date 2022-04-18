#include "../winhttp.h"

//----- (00000001405C1A30) ----------------------------------------------------
__int64 __fastcall sub_1405C1A30(__int64 a1, unsigned int* a2)
{
	int v2; // eax
	unsigned int v4; // [rsp+20h] [rbp-28h]
	unsigned int v5; // [rsp+28h] [rbp-20h]
	unsigned int v6; // [rsp+30h] [rbp-18h]

	if (*(_QWORD*)(a1 + 96) != *(_QWORD*)(a1 + 104))
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 96) + 36i64) = a2[2];
		*(_DWORD*)(*(_QWORD*)(a1 + 96) + 76i64) = a2[3];
	}
	v2 = dword_140C636A8;
	*(_DWORD*)(a1 + 12) = 3;
	*(_DWORD*)(a1 + 20) = v2;
	v6 = a2[3];
	v5 = a2[2];
	v4 = a2[1];
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PVPMatchFinished", "iiii", *a2, v4, v5, v6);
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

