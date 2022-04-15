#include "../winhttp.h"

//----- (00000001401A6610) ----------------------------------------------------
_WORD* __fastcall sub_1401A6610(__int64 a1, _WORD* a2)
{
	_WORD* result; // rax
	__int64 v5; // rdi
	_QWORD* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF

	result = sub_1401A4D00(a1 + 24, a2, (__int64)L"?>", 2);
	if (!result)
	{
		v5 = *(_QWORD*)(a1 + 8);
		if (*(int*)(v5 + 92) >= 0)
		{
			*(_DWORD*)(v5 + 92) = -1603862515;
			if (a2)
			{
				v6 = sub_14018D540(&v11, (__int64)L"%0.8x %s", 2691104781i64, a2);
				v7 = *(_QWORD*)(v5 + 104);
				*(_QWORD*)(v5 + 104) = *v6;
				*v6 = v7;
				v8 = v11;
				if (v11)
				{
				LABEL_5:
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
					return 0i64;
				}
			}
			else
			{
				v9 = sub_14018D540(&v11, (__int64)L"%0.8x", 2691104781i64);
				v10 = *(_QWORD*)(v5 + 104);
				*(_QWORD*)(v5 + 104) = *v9;
				*v9 = v10;
				v8 = v11;
				if (v11)
					goto LABEL_5;
			}
			return 0i64;
		}
	}
	return result;
}
// 1409E454C: using guessed type wchar_t asc_1409E454C[3];
// 140A45318: using guessed type wchar_t a08x_2[6];
// 140A45328: using guessed type wchar_t a08xS[9];

