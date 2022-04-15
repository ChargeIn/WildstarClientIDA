#include "../winhttp.h"

//----- (00000001402C7B40) ----------------------------------------------------
__int64 __fastcall sub_1402C7B40(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = (_QWORD*)(a1 + 56);
	*(v2 - 6) = 0i64;
	*(v2 - 5) = 0i64;
	*(v2 - 4) = 0i64;
	*(v2 - 3) = 0i64;
	*(v2 - 2) = 0i64;
	*(v2 - 1) = 0i64;
	sub_1402C8DB0(v2);
	sub_1402C8DB0((_QWORD*)(a1 + 96));
	sub_1402C8DB0((_QWORD*)(a1 + 136));
	sub_1407E4830((int*)(a1 + 416), 0i64, 0x310ui64);
	*(_QWORD*)(a1 + 1240) = 0i64;
	*(_QWORD*)(a1 + 1248) = 0i64;
	*(_QWORD*)(a1 + 1256) = 0i64;
	*(_QWORD*)(a1 + 1264) = 0i64;
	*(_QWORD*)(a1 + 1272) = 0i64;
	*(_QWORD*)(a1 + 1280) = 0i64;
	*(_QWORD*)(a1 + 1288) = 0i64;
	*(_QWORD*)(a1 + 1296) = 0i64;
	*(_QWORD*)(a1 + 1304) = 0i64;
	*(_QWORD*)(a1 + 1312) = 0i64;
	*(_QWORD*)(a1 + 1320) = 0i64;
	*(_QWORD*)(a1 + 1328) = 0i64;
	*(_QWORD*)(a1 + 1360) = off_140B627B0;
	*(_QWORD*)(a1 + 1376) = off_140B62790;
	return a1;
}
// 140B62790: using guessed type __int64 (__fastcall *off_140B62790[25])();
// 140B627B0: using guessed type __int64 (__fastcall *off_140B627B0[21])();

