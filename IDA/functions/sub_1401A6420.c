#include "../winhttp.h"

//----- (00000001401A6420) ----------------------------------------------------
_WORD* __fastcall sub_1401A6420(__int64 a1, _WORD* a2)
{
	_WORD* result; // rax
	__int64 v4; // rdi
	_QWORD* v5; // rax
	__int64 v6; // rdx
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	result = sub_1401A4D00(a1 + 24, a2, (__int64)L"-->", 2);
	if (!result)
	{
		v4 = *(_QWORD*)(a1 + 8);
		if (*(int*)(v4 + 92) >= 0)
		{
			*(_DWORD*)(v4 + 92) = -1603862516;
			v5 = sub_14018D540(&v7, (__int64)L"%0.8x", 2691104780i64);
			v6 = *(_QWORD*)(v4 + 104);
			*(_QWORD*)(v4 + 104) = *v5;
			*v5 = v6;
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			return 0i64;
		}
	}
	return result;
}
// 140A45318: using guessed type wchar_t a08x_2[6];
// 140A45348: using guessed type wchar_t asc_140A45348[4];

