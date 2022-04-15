#include "../winhttp.h"

//----- (0000000140859890) ----------------------------------------------------
__int64 __fastcall sub_140859890(__int64* a1, unsigned int* a2)
{
	unsigned int v4; // esi
	_QWORD* v5; // rax

	v4 = (*(__int64(__fastcall**)(__int64*))(*a1 + 640))(a1);
	if (v4 == 1)
	{
		v5 = (_QWORD*)sub_140859140(a1 + 14, a2[6]);
		if (v5)
		{
			*v5 = a2;
			(*(void(__fastcall**)(unsigned int*, __int64*))(*(_QWORD*)a2 + 48i64))(a2, a1);
			(*(void(__fastcall**)(__int64*))(*a1 + 8))(a1);
		}
		else
		{
			v4 = 2;
		}
	}
	(*(void(__fastcall**)(unsigned int*))(*(_QWORD*)a2 + 16i64))(a2);
	return v4;
}

