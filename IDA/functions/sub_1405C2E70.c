#include "../winhttp.h"

//----- (00000001405C2E70) ----------------------------------------------------
__int64 __fastcall sub_1405C2E70(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v4; // rdi
	unsigned int v5; // ebx
	__int64 v6; // rsi
	__int64 v7; // rax

	v2 = *a2;
	v4 = a1 + 40;
	v5 = *(_DWORD*)(a1 + 8 * v2);
	v6 = a1 + 8 * v2;
	if ((signed int)v5 >= *(_DWORD*)(v6 + 4))
		return v4;
	while (1)
	{
		if (qword_140C63848)
		{
			v7 = qword_140C63848(off_140A6C6D0, v5, qword_140C63858);
			goto LABEL_7;
		}
		if (dword_140C65418 || (int)sub_14022A3E0() < 0)
			return 0i64;
		v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64EE8 + 32i64))(qword_140C64EE8, v5);
	LABEL_7:
		if (!v7)
			return 0i64;
		if (*(_DWORD*)(v7 + 12) <= (unsigned int)a2[1])
		{
			++v5;
			v4 = v7;
			if ((signed int)v5 < *(_DWORD*)(v6 + 4))
				continue;
		}
		return v4;
	}
}
// 140A6C6D0: using guessed type wchar_t *off_140A6C6D0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64EE8: using guessed type __int64 qword_140C64EE8;
// 140C65418: using guessed type int dword_140C65418;

