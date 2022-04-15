#include "../winhttp.h"

//----- (0000000140028EC0) ----------------------------------------------------
__int64 __fastcall sub_140028EC0(__int64 a1)
{
	int v1; // ebx
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // r8
	__int64 v8; // r9
	_DWORD* v9; // rcx
	int v10; // ecx
	int v11; // eax
	__int64 v12; // rax

	v1 = 0;
	if (!*(_DWORD*)(qword_140C66DA8 + 576))
		goto LABEL_19;
	if (qword_140C63840)
	{
		v3 = qword_140C63840(off_140A6A248, 73i64, qword_140C63858);
	LABEL_7:
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 4);
			if (v4)
				goto LABEL_10;
		}
		goto LABEL_9;
	}
	if (!dword_140C63F1C && (int)sub_1401FDDC0() >= 0)
	{
		v3 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64018 + 24i64))(qword_140C64018, 73i64);
		goto LABEL_7;
	}
LABEL_9:
	v4 = -1;
LABEL_10:
	v5 = *(_QWORD*)(qword_140C635F0 + 5584);
	v6 = 0i64;
	v7 = *(_QWORD*)(v5 + 160);
	if (v7)
	{
		v8 = *(_QWORD*)(v5 + 152);
		v9 = (_DWORD*)(v8 + 8);
		while (*v9 != 73)
		{
			++v6;
			v9 += 4;
			if (v6 >= v7)
				goto LABEL_14;
		}
		v10 = *(_DWORD*)(v8 + 16 * v6 + 12);
	}
	else
	{
	LABEL_14:
		v10 = 0;
	}
	v11 = v4 - v10;
	if (v4 - v10 >= 0)
	{
		if (v11 > v4)
			v11 = v4;
		v1 = v11;
	}
LABEL_19:
	v12 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140A6A248: using guessed type wchar_t *off_140A6A248[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F1C: using guessed type int dword_140C63F1C;
// 140C64018: using guessed type __int64 qword_140C64018;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

