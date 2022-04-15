#include "../winhttp.h"

//----- (0000000140279E20) ----------------------------------------------------
__int64 __fastcall sub_140279E20(__int64 a1, __int64 a2, __int64* a3)
{
	int* v6; // rax
	__int64 v7; // rbx
	__int64 result; // rax

	if (a3)
	{
		v6 = sub_14018B280(424i64, 0);
		if (v6)
			v7 = sub_1402AE670((__int64)v6, a1);
		else
			v7 = 0i64;
		if (a2)
		{
			*(_QWORD*)(v7 + 64) = a2;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
			*(_DWORD*)(v7 + 88) = 27;
			*(_DWORD*)(v7 + 104) = 6;
			*(_DWORD*)(v7 + 48) = 0;
			result = 0i64;
			*a3 = v7;
			return result;
		}
		if (v7)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 16i64))(v7, 1i64);
	}
	return 2147942487i64;
}

