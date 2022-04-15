#include "../winhttp.h"

//----- (00000001400C86F0) ----------------------------------------------------
_QWORD* __fastcall sub_1400C86F0(_QWORD* a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx

	(*(void(__fastcall**)(_QWORD*))(*a1 + 216i64))(a1);
	result = (_QWORD*)a1[70];
	v3 = (_QWORD*)*result;
	if ((_QWORD*)*result != result)
	{
		do
		{
			result = (_QWORD*)sub_1400C86F0(v3[2]);
			v3 = (_QWORD*)*v3;
		} while (v3 != (_QWORD*)a1[70]);
	}
	return result;
}

