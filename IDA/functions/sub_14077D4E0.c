#include "../winhttp.h"

//----- (000000014077D4E0) ----------------------------------------------------
__int64 __fastcall sub_14077D4E0(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	_QWORD* v6; // rdi
	_QWORD* v8; // rbx
	_QWORD* v9; // rsi
	__int64 v10; // rax
	unsigned int v11; // ebp
	__int64 v12; // rax
	unsigned int v13; // edx
	_DWORD* v14; // rax
	__int64 v15; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v19[7]; // [rsp+20h] [rbp-38h] BYREF

	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 88) + 16i64);
	v8 = (_QWORD*)v6[2];
	if (v8 == v6)
		return 0i64;
	while (1)
	{
		v9 = (_QWORD*)v8[5];
		if ((*(unsigned int(__fastcall**)(_QWORD*))(*v9 + 56i64))(v9))
			goto LABEL_16;
		v10 = v9[6];
		if (*(_DWORD*)(*(_QWORD*)v10 + 12i64) != 12)
			goto LABEL_16;
		v11 = *(_DWORD*)(*(_QWORD*)v10 + 20i64);
		if (qword_140C63840)
		{
			v12 = qword_140C63840(off_140A6BC18, v11, qword_140C63858);
		}
		else
		{
			if (dword_140C6467C || (int)sub_14021D3A0() < 0)
				goto LABEL_16;
			v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F68 + 24i64))(qword_140C64F68, v11);
		}
		if (v12)
			break;
	LABEL_16:
		v15 = v8[3];
		if (v15)
		{
			v8 = (_QWORD*)v8[3];
			for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
				v8 = i;
		}
		else
		{
			for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v8 = (_QWORD*)j;
			if (v8[3] != j)
				v8 = (_QWORD*)j;
		}
		if (v8 == v6)
			return 0i64;
	}
	v19[1] = a2;
	v19[0] = (__int64)off_140B66440;
	if (a3)
		v13 = *(_DWORD*)(v12 + 12);
	else
		v13 = *(_DWORD*)(v12 + 8);
	if (!v13 || (v14 = (_DWORD*)sub_1403B4A10((__int64)v19, v13), (unsigned int)sub_1403B4A20((__int64)v19, v14)))
	{
		v19[0] = (__int64)off_140B66400;
		goto LABEL_16;
	}
	if (a4)
		*a4 = v9;
	return 1i64;
}
// 140A6BC18: using guessed type wchar_t *off_140A6BC18[2];
// 140B66400: using guessed type __int64 (__fastcall *off_140B66400[2])();
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6467C: using guessed type int dword_140C6467C;
// 140C64F68: using guessed type __int64 qword_140C64F68;

