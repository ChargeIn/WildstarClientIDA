#include "../winhttp.h"

//----- (00000001401A8BB0) ----------------------------------------------------
char __fastcall sub_1401A8BB0(__int64 a1, _BYTE* a2)
{
	char v2; // si
	_WORD* v5; // rax

	v2 = a2[88];
	if ((*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a2 + 48i64))(a2))
		v5 = 0i64;
	else
		v5 = (_WORD*)sub_1401A4F40((__int64)(a2 + 24));
	sub_1401A8860(a1, v5, v2);
	return 1;
}

