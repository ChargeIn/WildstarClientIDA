#include "../winhttp.h"

//----- (0000000140487C50) ----------------------------------------------------
_QWORD* __fastcall sub_140487C50(_QWORD* a1, __int64 a2)
{
	unsigned int v3; // r15d
	unsigned int* v4; // r14
	unsigned int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rdi
	int* v8; // rax
	_QWORD* v9; // rbp
	__int64 v10; // rdi
	int* v11; // rax
	int* v12; // rsi
	int* v13; // rdx
	__int64 v14; // rcx

	a1[2] = 0i64;
	a1[1] = 0i64;
	*a1 = a2;
	if (!a2)
		return a1;
	v3 = 0;
	v4 = (unsigned int*)(a2 + 8);
	do
	{
		v5 = *v4;
		if (qword_140C63840)
		{
			v6 = qword_140C63840(off_140A6C7E8, v5, qword_140C63858);
		}
		else
		{
			if (dword_140C63A18 || (int)sub_14022B920() < 0)
				return a1;
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D00 + 24i64))(qword_140C63D00, v5);
		}
		v7 = v6;
		if (!v6)
			break;
		v8 = sub_14018B280(40i64, 0);
		if (v8)
			v9 = sub_140487800(v8, v7);
		else
			v9 = 0i64;
		v10 = a1[2];
		v11 = sub_14018DB00(a1[1], v10 + 1, 8i64);
		v12 = v11;
		*(_QWORD*)&v11[2 * v10] = v9;
		v13 = (int*)a1[1];
		if (v13 != v11)
		{
			sub_1407DB590(v11, v13, 8i64 * a1[2]);
			v14 = a1[1];
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
			a1[1] = v12;
		}
		++v3;
		++v4;
		a1[2] = v10 + 1;
	} while (v3 < 0x10);
	return a1;
}
// 140A6C7E8: using guessed type wchar_t *off_140A6C7E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A18: using guessed type int dword_140C63A18;
// 140C63D00: using guessed type __int64 qword_140C63D00;

