#include "../winhttp.h"

//----- (000000014033CB10) ----------------------------------------------------
__int64 __fastcall sub_14033CB10(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax
	unsigned int v6; // ebx

	sub_140337F20((_QWORD*)(*a2 + 384i64), a3);
	do
	{
		result = sub_14033C7E0(a1, (_QWORD*)*a2, 0);
		v6 = result;
	} while (!(_DWORD)result);
	if (*a2)
	{
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
		return v6;
	}
	return result;
}

