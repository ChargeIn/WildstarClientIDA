#include "../winhttp.h"

//----- (0000000140644E10) ----------------------------------------------------
__int64 __fastcall sub_140644E10(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbp
	unsigned int*** v6; // rbx
	__int64(__fastcall * v7)(wchar_t**, _QWORD, __int64); // r9
	unsigned int** v8; // rsi
	unsigned int v9; // edi
	__int64 v10; // rax

	v3 = qword_140C65C28;
	v6 = *(unsigned int****)(qword_140C65C28 + 80);
	if (v6 == *(unsigned int****)(qword_140C65C28 + 88))
		return 0i64;
	v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	while (1)
	{
		v8 = *v6;
		v9 = (**v6)[9];
		if (v7)
			break;
		if (!dword_140C63E34)
		{
			if ((int)sub_140246220() >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64160 + 24i64))(qword_140C64160, v9);
				goto LABEL_8;
			}
		LABEL_11:
			v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		}
		if (++v6 == *(unsigned int****)(v3 + 88))
			return 0i64;
	}
	v10 = v7(off_140A6DDC8, v9, qword_140C63858);
LABEL_8:
	if (!v10 || *(_DWORD*)(v10 + 4) != a2 || *(_DWORD*)(v10 + 8) != a3)
		goto LABEL_11;
	return **v8;
}
// 140A6DDC8: using guessed type wchar_t *off_140A6DDC8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E34: using guessed type int dword_140C63E34;
// 140C64160: using guessed type __int64 qword_140C64160;
// 140C65C28: using guessed type __int64 qword_140C65C28;

