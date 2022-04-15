#include "../winhttp.h"

//----- (00000001401E0410) ----------------------------------------------------
__int64 __fastcall sub_1401E0410(__int64 a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rsi
	__int64 result; // rax

	v2 = (_QWORD*)(a1 + 328);
	v3 = 72i64;
	do
	{
		if (*v2)
		{
			if (*(_DWORD*)(*v2 + 100i64))
				*(_DWORD*)(a1 + 3168) &= ~4u;
			if (*v2)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
				*v2 = 0i64;
			}
			*(_DWORD*)(a1 + 3168) &= 0xFFFFFF9D;
		}
		++v2;
		--v3;
	} while (v3);
	result = sub_1401E1350(a1);
	if ((int)result >= 0)
	{
		++* (_DWORD*)(a1 + 264);
		return 0i64;
	}
	return result;
}

