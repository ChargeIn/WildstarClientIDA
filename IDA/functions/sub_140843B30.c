#include "../winhttp.h"

//----- (0000000140843B30) ----------------------------------------------------
__int64 __fastcall sub_140843B30(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 i; // rdi
	__int64 v5; // rax
	int v6; // ebx

	result = qword_140C61F90;
	for (i = qword_140C61F90; qword_140C61F90; i = qword_140C61F90)
	{
		v5 = *(_QWORD*)(result + 24);
		if (v5)
		{
			qword_140C61F90 = v5;
		}
		else
		{
			qword_140C61F90 = 0i64;
			qword_140C61F98 = 0i64;
		}
		--dword_140C61F88;
		LOBYTE(a3) = 1;
		(**(void(__fastcall***)(__int64, _QWORD, __int64, _QWORD))i)(i, 0i64, a3, 0i64);
		sub_140858590(i);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)i + 24i64))(i, 0i64);
		v6 = dword_140C10F20;
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)i + 8i64))(i, 0i64);
		sub_140881720(v6, i);
		result = qword_140C61F90;
	}
	return result;
}
// 140843B8E: variable 'a3' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61F88: using guessed type int dword_140C61F88;
// 140C61F90: using guessed type __int64 qword_140C61F90;
// 140C61F98: using guessed type __int64 qword_140C61F98;

