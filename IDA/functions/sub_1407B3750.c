#include "../winhttp.h"

//----- (00000001407B3750) ----------------------------------------------------
__int64 __fastcall sub_1407B3750(__int64 a1, unsigned __int64 a2, void(__fastcall*** a3)(_QWORD))
{
	_QWORD* v5; // rdi

	if (!a3 || a2 >= (__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 3)
		return 2147942487i64;
	v5 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * a2);
	if ((void(__fastcall***)(_QWORD)) * v5 != a3)
	{
		(**a3)(a3);
		if (*v5)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
		*v5 = a3;
	}
	return 0i64;
}

