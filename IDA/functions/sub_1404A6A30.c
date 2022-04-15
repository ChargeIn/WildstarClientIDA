#include "../winhttp.h"

//----- (00000001404A6A30) ----------------------------------------------------
_QWORD* __fastcall sub_1404A6A30(_QWORD* a1)
{
	_QWORD* v2; // rbx
	int v3; // edi
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax

	sub_1404A6B90(a1);
	v2 = a1 + 30;
	v3 = 2;
	*a1 = off_140B68710;
	a1[29] = 0i64;
	do
	{
		sub_1404A6D20(v2);
		v2 += 32;
		--v3;
	} while (v3 >= 0);
	v4 = sub_14018B280(40i64, 0);
	a1[128] = 0i64;
	a1[127] = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(a1[127] + 8i64) = 0i64;
	*(_QWORD*)(a1[127] + 16i64) = a1[127];
	*(_QWORD*)(a1[127] + 24i64) = a1[127];
	v5 = sub_14018B280(40i64, 0);
	a1[132] = 0i64;
	a1[131] = v5;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(a1[131] + 8i64) = 0i64;
	*(_QWORD*)(a1[131] + 16i64) = a1[131];
	*(_QWORD*)(a1[131] + 24i64) = a1[131];
	v6 = sub_14018B280(40i64, 0);
	a1[135] = v6;
	a1[136] = 0i64;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(a1[135] + 8i64) = 0i64;
	*(_QWORD*)(a1[135] + 16i64) = a1[135];
	*(_QWORD*)(a1[135] + 24i64) = a1[135];
	return a1;
}
// 140B68710: using guessed type __int64 (__fastcall *off_140B68710[8])();

