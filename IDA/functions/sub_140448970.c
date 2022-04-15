#include "../winhttp.h"

//----- (0000000140448970) ----------------------------------------------------
__int64 __fastcall sub_140448970(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v3; // rdi
	__int64 v5; // rsi
	__int64 v6; // rax
	int v7; // ebp
	int v8; // edi
	__int64 v9; // r15
	__int64 v10; // rbx
	unsigned int v11; // esi
	__int64 result; // rax
	int v13; // ecx
	int v14; // edx
	int v15; // ecx

	v3 = qword_140C658F8;
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 72) + 32i64))(*(_QWORD*)(qword_140C658F8 + 72))
		+ 48 * a2;
	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 112) + 32i64))(*(_QWORD*)(v3 + 112));
	v7 = *(_DWORD*)(v5 + 16);
	v8 = *(_DWORD*)(v5 + 20) - 1;
	v9 = v6;
	while (v7 <= v8)
	{
		v10 = (v8 + v7) / 2;
		v11 = *(_DWORD*)(v9 + 4 * v10);
		if (qword_140C63848)
		{
			result = qword_140C63848(off_140A6B358, v11, qword_140C63858);
		}
		else if (dword_140C63E08)
		{
			result = 0i64;
		}
		else if ((int)sub_1402129A0() >= 0)
		{
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AB8 + 32i64))(qword_140C63AB8, v11);
		}
		else
		{
			result = 0i64;
		}
		v13 = *(_DWORD*)(result + 12);
		v14 = a3[1];
		if (v13 == v14)
		{
			v15 = *(_DWORD*)(result + 8);
			if (v15 <= *a3)
			{
				if (v15 >= *a3)
					return result;
			LABEL_17:
				v7 = v10 + 1;
				continue;
			}
			v8 = v10 - 1;
		}
		else if (v13 <= v14)
		{
			if (v13 < v14)
				goto LABEL_17;
		}
		else
		{
			v8 = v10 - 1;
		}
	}
	return 0i64;
}
// 140A6B358: using guessed type wchar_t *off_140A6B358[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AB8: using guessed type __int64 qword_140C63AB8;
// 140C63E08: using guessed type int dword_140C63E08;
// 140C658F8: using guessed type __int64 qword_140C658F8;

