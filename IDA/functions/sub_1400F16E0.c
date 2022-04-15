#include "../winhttp.h"

//----- (00000001400F16E0) ----------------------------------------------------
__int64 __fastcall sub_1400F16E0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rax
	int* v16; // rax
	int* v17; // rax
	int* v18; // rax

	*(_WORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)a1 = &off_140B569D8;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v2 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 2096) = v2;
	*(_QWORD*)v2 = v2;
	*(_QWORD*)(*(_QWORD*)(a1 + 2096) + 8i64) = *(_QWORD*)(a1 + 2096);
	sub_1407E4830((int*)(a1 + 40), 0i64, 0x800ui64);
	v3 = sub_14018B280(8i64, 0);
	if (v3)
		*(_QWORD*)v3 = off_140B569C0;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v3);
	v4 = sub_14018B280(8i64, 0);
	if (v4)
		*(_QWORD*)v4 = off_140B56978;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v4);
	v5 = sub_14018B280(8i64, 0);
	if (v5)
		*(_QWORD*)v5 = off_140B56960;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v5);
	v6 = sub_14018B280(8i64, 0);
	if (v6)
		*(_QWORD*)v6 = off_140B569A8;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v6);
	v7 = sub_14018B280(8i64, 0);
	if (v7)
		*(_QWORD*)v7 = off_140B56990;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v7);
	v8 = sub_14018B280(8i64, 0);
	if (v8)
		*(_QWORD*)v8 = off_140B56918;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v8);
	v9 = sub_14018B280(8i64, 0);
	if (v9)
		*(_QWORD*)v9 = off_140B56900;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v9);
	v10 = sub_14018B280(8i64, 0);
	if (v10)
		*(_QWORD*)v10 = off_140B56948;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v10);
	v11 = sub_14018B280(8i64, 0);
	if (v11)
		*(_QWORD*)v11 = off_140B56930;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v11);
	v12 = sub_14018B280(8i64, 0);
	if (v12)
		*(_QWORD*)v12 = off_140B568B8;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v12);
	v13 = sub_14018B280(8i64, 0);
	if (v13)
		*(_QWORD*)v13 = off_140B568A0;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v13);
	v14 = sub_14018B280(8i64, 0);
	if (v14)
		*(_QWORD*)v14 = off_140B568E8;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v14);
	v15 = sub_14018B280(8i64, 0);
	if (v15)
		*(_QWORD*)v15 = off_140B568D0;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v15);
	v16 = sub_14018B280(8i64, 0);
	if (v16)
		*(_QWORD*)v16 = off_140B56870;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v16);
	v17 = sub_14018B280(8i64, 0);
	if (v17)
		*(_QWORD*)v17 = off_140B56858;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v17);
	v18 = sub_14018B280(8i64, 0);
	if (v18)
		*(_QWORD*)v18 = off_140B56888;
	sub_1400F1B30(a1, (char(__fastcall***)(_QWORD))v18);
	return a1;
}
// 140B56858: using guessed type __int64 (__fastcall *off_140B56858[49])();
// 140B56870: using guessed type __int64 (__fastcall *off_140B56870[46])();
// 140B56888: using guessed type __int64 (__fastcall *off_140B56888[43])();
// 140B568A0: using guessed type __int64 (__fastcall *off_140B568A0[40])();
// 140B568B8: using guessed type __int64 (__fastcall *off_140B568B8[37])();
// 140B568D0: using guessed type __int64 (__fastcall *off_140B568D0[34])();
// 140B568E8: using guessed type __int64 (__fastcall *off_140B568E8[31])();
// 140B56900: using guessed type __int64 (__fastcall *off_140B56900[28])();
// 140B56918: using guessed type __int64 (__fastcall *off_140B56918[25])();
// 140B56930: using guessed type __int64 (__fastcall *off_140B56930[22])();
// 140B56948: using guessed type __int64 (__fastcall *off_140B56948[19])();
// 140B56960: using guessed type __int64 (__fastcall *off_140B56960[16])();
// 140B56978: using guessed type __int64 (__fastcall *off_140B56978[13])();
// 140B56990: using guessed type __int64 (__fastcall *off_140B56990[10])();
// 140B569A8: using guessed type __int64 (__fastcall *off_140B569A8[7])();
// 140B569C0: using guessed type __int64 (__fastcall *off_140B569C0[4])();
// 140B569D8: using guessed type __int64 (__fastcall *off_140B569D8)();

