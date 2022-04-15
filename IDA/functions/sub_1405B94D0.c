#include "../winhttp.h"

//----- (00000001405B94D0) ----------------------------------------------------
__int64 __fastcall sub_1405B94D0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_OWORD* a4,
	__int64 a5,
	__int64 a6,
	void(__fastcall*** a7)(_QWORD))
{
	int* v8; // rax
	int* v9; // rax

	sub_1400C5920(a1, a2, a3, 0i64, a4, a5, a6);
	*(_QWORD*)a1 = off_140B6DAA0;
	*(_DWORD*)(a1 + 1024) = -1;
	*(_QWORD*)(a1 + 1032) = 0i64;
	sub_1401095E0(a1 + 1040);
	*(_QWORD*)(a1 + 1096) = 0i64;
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 1112) = 0i64;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1096) = v8;
	*(_QWORD*)(a1 + 1104) = v8;
	*(_QWORD*)(a1 + 1112) = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	*(_QWORD*)(a1 + 1128) = 0i64;
	*(_QWORD*)(a1 + 1136) = 0i64;
	*(_QWORD*)(a1 + 1144) = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1128) = v9;
	*(_QWORD*)(a1 + 1136) = v9;
	*(_QWORD*)(a1 + 1144) = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	*(_QWORD*)(a1 + 1168) = 0i64;
	*(_WORD*)(a1 + 1176) = 257;
	*(_BYTE*)(a1 + 1178) = 0;
	*(_DWORD*)(a1 + 1180) = 0;
	sub_1401095E0(a1 + 1184);
	sub_1401095E0(a1 + 1232);
	if (a7)
		(**a7)(a7);
	*(_QWORD*)(a1 + 432) |= 0x4000000ui64;
	*(_DWORD*)(a1 + 1152) = 0;
	*(_DWORD*)(a1 + 1160) = 0;
	*(_QWORD*)(a1 + 1168) = a7;
	return a1;
}
// 140B6DAA0: using guessed type __int64 (__fastcall *off_140B6DAA0[25])();

