#include "../winhttp.h"

//----- (0000000140770DF0) ----------------------------------------------------
void __fastcall sub_140770DF0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	*(_QWORD*)a1 = off_140B76620;
	v3 = *(_QWORD*)(a1 + 32);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 368);
	*(_QWORD*)(a1 + 352) = off_140B56A08;
	if (v4)
		sub_1400579E0(v4, a2, *(_DWORD*)(a1 + 360));
	v5 = *(_QWORD*)(a1 + 296);
	if (v5)
		sub_14018B900(v5, 0);
	sub_140532D90((_QWORD*)(a1 + 48));
}
// 140770E3B: variable 'a2' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B76620: using guessed type __int64 (__fastcall *off_140B76620[4])();

