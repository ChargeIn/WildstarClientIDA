#include "../winhttp.h"

//----- (00000001400F2540) ----------------------------------------------------
_QWORD* __fastcall sub_1400F2540(__int64 a1, _QWORD* a2, int a3)
{
	_DWORD* v4; // rax
	unsigned int v5; // r10d
	_QWORD* v6; // r11
	int* v7; // rax
	__int64 v8; // r8
	int* v10; // rdi

	v4 = sub_1400580E0(*(_QWORD*)(a1 + 16), a3);
	if (v4 == dword_140A12138 || (int)v4[2] <= 0 || (v7 = (int*)sub_140056BB0(v6, v5, 0i64)) == 0i64)
	{
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v10 = sub_14018B280(1i64, 0);
		a2[1] = v10;
		a2[3] = (char*)v10 + 1;
		a2[2] = v10;
		sub_1407DB590(v10, (int*)&unk_1409D037E, 0i64);
		a2[2] = v10;
		if (v10)
			*(_BYTE*)v10 = 0;
		return a2;
	}
	else
	{
		v8 = -1i64;
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		do
			++v8;
		while (*((_BYTE*)v7 + v8));
		sub_14001B240(a2, v7, (__int64)v7 + v8);
		return a2;
	}
}
// 1400F2576: variable 'v6' is possibly undefined
// 1400F2576: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

