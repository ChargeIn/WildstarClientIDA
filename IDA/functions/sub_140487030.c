#include "../winhttp.h"

//----- (0000000140487030) ----------------------------------------------------
__int64 __fastcall sub_140487030(__int64 a1, unsigned int a2, __int32* a3, __int64* a4)
{
	int* v8; // rax
	__int64 v9; // rdx
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	int** v13; // rdx
	__int64 v14; // rcx

	v8 = sub_14018B280(176i64, 0);
	v10 = v8;
	if (v8)
	{
		*((_QWORD*)v8 + 1) = 0i64;
		*((_QWORD*)v8 + 2) = 0i64;
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 7) = 10i64;
		v8[16] = 0;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		v11 = qword_140C59420;
		*((_QWORD*)v10 + 9) = qword_140C59420;
		qword_140C59420 = v11 + 1;
		*(_QWORD*)v10 = off_140B67148;
		*((_QWORD*)v10 + 11) = 0i64;
		*((_QWORD*)v10 + 10) = 0i64;
		*((_QWORD*)v10 + 12) = 0i64;
		*((_QWORD*)v10 + 13) = 0i64;
		*((_OWORD*)v10 + 7) = 0i64;
		*((_OWORD*)v10 + 8) = 0i64;
		*((_OWORD*)v10 + 9) = 0i64;
		*((_QWORD*)v10 + 20) = 0i64;
		v10[42] = 0;
	}
	else
	{
		v10 = 0i64;
	}
	sub_1404866D0((__m128*)v10, v9, a2, a3);
	v12 = *a4;
	if (!v10[24])
	{
		*((_QWORD*)v10 + 11) = a4[1];
		*((_QWORD*)v10 + 10) = v12;
	}
	v13 = (int**)(a1 + 8);
	if (!*((_QWORD*)v10 + 3))
	{
		*((_QWORD*)v10 + 3) = v13;
		*((_QWORD*)v10 + 4) = *v13;
		*v13 = v10;
		v14 = *((_QWORD*)v10 + 4);
		if (v14)
			*(_QWORD*)(v14 + 24) = v10 + 8;
	}
	return *((_QWORD*)v10 + 9);
}
// 1404870F1: variable 'v9' is possibly undefined
// 140B67148: using guessed type __int64 (__fastcall *off_140B67148[11])();
// 140C59420: using guessed type __int64 qword_140C59420;

