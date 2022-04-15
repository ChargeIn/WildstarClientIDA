#include "../winhttp.h"

//----- (00000001401C75D0) ----------------------------------------------------
__int64 __fastcall sub_1401C75D0(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD))
{
	sub_1401C5C80(a1, *(_DWORD*)a2, *(_DWORD*)(a2 + 32), a3);
	*(_QWORD*)a1 = off_140B5F780;
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 4);
	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 128) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 156) = 0;
	return a1;
}
// 140B5F780: using guessed type __int64 (__fastcall *off_140B5F780[16])();

