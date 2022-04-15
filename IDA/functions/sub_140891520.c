#include "../winhttp.h"

//----- (0000000140891520) ----------------------------------------------------
__int64 __fastcall sub_140891520(_QWORD* a1)
{
	_QWORD* i; // rbx

	for (i = (_QWORD*)a1[21]; i != (_QWORD*)a1[22]; ++i)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 328i64))(*i);
	return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 688i64))(a1);
}

