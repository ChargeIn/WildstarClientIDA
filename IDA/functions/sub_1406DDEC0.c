#include "../winhttp.h"

//----- (00000001406DDEC0) ----------------------------------------------------
__int64 __fastcall sub_1406DDEC0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6)
{
	int* v7; // rax
	__int64 v8; // rax

	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_QWORD*)a1 = off_140B71E70;
	*(_QWORD*)(a1 + 1032) = -1i64;
	*(_DWORD*)(a1 + 1168) = 0;
	v7 = sub_14018B280(392i64, 0);
	if (v7)
		v8 = sub_140503450((__int64)v7);
	else
		v8 = 0i64;
	*(_QWORD*)(a1 + 1176) = v8;
	*(_QWORD*)(a1 + 1192) = 0i64;
	*(_QWORD*)(a1 + 1184) = 0i64;
	*(_QWORD*)(a1 + 432) |= 0x800000ui64;
	*(_DWORD*)(a1 + 676) = 0;
	sub_1407E4830((int*)(a1 + 1040), 0i64, 0x80ui64);
	sub_1406DE010(a1, 1u, 0, 0, 0);
	sub_1406DE650(a1, 0i64);
	return a1;
}
// 140B71E70: using guessed type __int64 (__fastcall *off_140B71E70[25])();

