#include "../winhttp.h"

//----- (00000001400B2DD0) ----------------------------------------------------
int __fastcall sub_1400B2DD0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = (__int64)(a1 + 85);
	*(_QWORD*)(v2 - 680) = off_140B560E0;
	*(_QWORD*)(v2 - 672) = off_140B56128;
	*(_QWORD*)(v2 - 256) = off_140B560C8;
	*(_QWORD*)(v2 - 248) = &off_140B560D0;
	*(_QWORD*)(v2 - 240) = off_140B560B8;
	*(_QWORD*)(v2 - 232) = off_140B560C0;
	*(_QWORD*)(v2 - 224) = off_140B560A8;
	*(_QWORD*)(v2 - 216) = off_140B560B0;
	*(_QWORD*)(v2 - 208) = off_140B56098;
	*(_QWORD*)(v2 - 200) = off_140B560A0;
	*(_QWORD*)(v2 - 192) = off_140B56088;
	*(_QWORD*)(v2 - 184) = off_140B56090;
	*(_QWORD*)(v2 - 176) = off_140B56078;
	*(_QWORD*)(v2 - 168) = off_140B56080;
	sub_14002C630(v2);
	v3 = a1[82];
	if (v3)
		sub_14018B900(v3, 0);
	v4 = a1[78];
	if (v4)
		sub_14018B900(v4, 0);
	v5 = a1[74];
	if (v5)
		sub_14018B900(v5, 0);
	v6 = a1[70];
	if (v6)
		sub_14018B900(v6, 0);
	v7 = a1[66];
	if (v7)
		sub_14018B900(v7, 0);
	return sub_1400B0F80((__int64)a1);
}
// 140B56078: using guessed type __int64 (__fastcall *off_140B56078[12])();
// 140B56080: using guessed type __int64 (__fastcall *off_140B56080[11])();
// 140B56088: using guessed type __int64 (__fastcall *off_140B56088[10])();
// 140B56090: using guessed type __int64 (__fastcall *off_140B56090[9])();
// 140B56098: using guessed type __int64 (__fastcall *off_140B56098[8])();
// 140B560A0: using guessed type __int64 (__fastcall *off_140B560A0[7])();
// 140B560A8: using guessed type __int64 (__fastcall *off_140B560A8[6])();
// 140B560B0: using guessed type __int64 (__fastcall *off_140B560B0[5])();
// 140B560B8: using guessed type __int64 (__fastcall *off_140B560B8[4])();
// 140B560C0: using guessed type __int64 (__fastcall *off_140B560C0[3])();
// 140B560C8: using guessed type __int64 (__fastcall *off_140B560C8[2])();
// 140B560D0: using guessed type __int64 (__fastcall *off_140B560D0)();
// 140B560E0: using guessed type __int64 (__fastcall *off_140B560E0[14])();
// 140B56128: using guessed type __int64 (__fastcall *off_140B56128[5])();

