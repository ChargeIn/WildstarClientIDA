#include "../winhttp.h"

//----- (0000000140420910) ----------------------------------------------------
_DWORD* __fastcall sub_140420910(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	_DWORD* result; // rax
	_QWORD* v5; // r11
	int v6; // ecx

	*a4 += 8i64;
	result = sub_1400580E0(a2, a3);
	v6 = result[2];
	if (v6 == 2)
	{
		result = *(_DWORD**)result;
		*v5 = result;
	}
	else if (v6 == 7)
	{
		result = (_DWORD*)(*(_QWORD*)result + 48i64);
		*v5 = result;
	}
	else
	{
		*v5 = 0i64;
	}
	return result;
}
// 140420937: variable 'v5' is possibly undefined

