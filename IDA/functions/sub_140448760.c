#include "../winhttp.h"

//----- (0000000140448760) ----------------------------------------------------
__int64 __fastcall sub_140448760(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rdi
	__int64 v5; // rsi
	__int64 v6; // rax
	unsigned __int64 v7; // rbx
	__int64 v8; // r14
	unsigned int v9; // edi
	__int64 v10; // rax

	v3 = qword_140C658F8;
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 72) + 32i64))(*(_QWORD*)(qword_140C658F8 + 72))
		+ 48 * a2;
	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 112) + 32i64))(*(_QWORD*)(v3 + 112));
	v7 = *(int*)(v5 + 24);
	v8 = v6;
	if (v7 >= *(int*)(v5 + 28))
		return 0i64;
	while (1)
	{
		v9 = *(_DWORD*)(v8 + 4 * v7);
		if (qword_140C63848)
		{
			v10 = qword_140C63848(off_140A6B4E0, v9, qword_140C63858);
		}
		else if (dword_140C652CC)
		{
			v10 = 0i64;
		}
		else
		{
			v10 = (int)sub_140214760() >= 0
				? (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65580 + 32i64))(qword_140C65580, v9)
				: 0i64;
		}
		if (*(_DWORD*)(v10 + 8) == a3)
			break;
		if (++v7 >= *(int*)(v5 + 28))
			return 0i64;
	}
	return 1i64;
}
// 140A6B4E0: using guessed type wchar_t *off_140A6B4E0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C652CC: using guessed type int dword_140C652CC;
// 140C65580: using guessed type __int64 qword_140C65580;
// 140C658F8: using guessed type __int64 qword_140C658F8;

