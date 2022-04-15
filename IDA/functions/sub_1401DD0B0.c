#include "../winhttp.h"

//----- (00000001401DD0B0) ----------------------------------------------------
__int64 __fastcall sub_1401DD0B0(__int64 a1, unsigned int a2, int** a3)
{
	int* v6; // rbx
	int* v8; // rax
	int v9; // edi

	v6 = *(int**)(a1 + 8i64 * a2 + 296);
	if (v6)
	{
		(**(void(__fastcall***)(_QWORD))v6)(*(_QWORD*)(a1 + 8i64 * a2 + 296));
	LABEL_3:
		*a3 = v6;
		return 0i64;
	}
	v8 = sub_14018B280(112i64, 0);
	v6 = v8;
	if (v8)
	{
		*(_QWORD*)v8 = off_140B602F0;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 8) = 0i64;
		*((_QWORD*)v8 + 9) = 0i64;
		*((_QWORD*)v8 + 10) = 0i64;
		*((_QWORD*)v8 + 11) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		v8[14] = 0;
		*((_QWORD*)v8 + 12) = 0i64;
		*((_QWORD*)v8 + 13) = 0i64;
		v8[2] = 1;
		*((_QWORD*)v8 + 2) = a1;
		v8[6] = a2;
	}
	else
	{
		v6 = 0i64;
	}
	v9 = sub_1401E65C0((__int64)v6);
	if (v9 >= 0)
		goto LABEL_3;
	if (v6)
	{
		sub_1401E6500(v6);
		sub_14018B900((__int64)v6, 0);
	}
	return (unsigned int)v9;
}
// 140B602F0: using guessed type __int64 (__fastcall *off_140B602F0[5])();

