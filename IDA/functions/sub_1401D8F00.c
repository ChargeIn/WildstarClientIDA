#include "../winhttp.h"

//----- (00000001401D8F00) ----------------------------------------------------
__int64 __fastcall sub_1401D8F00(_QWORD* a1)
{
	_QWORD* v1; // rbx
	__int64 result; // rax
	__int64 v3; // rdx
	bool v4; // zf
	__int64 v5; // rax

	v1 = a1;
	if (*((_DWORD*)a1 + 42))
	{
		v5 = *a1;
		v3 = 2686648322i64;
	}
	else
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD*))(*(_QWORD*)a1[2] + 160i64))(a1[2], a1);
		v3 = (unsigned int)result;
		if ((int)result >= 0)
			return result;
		v4 = (_DWORD)result == -2147467263;
		v5 = *v1;
		a1 = v1;
		if (v4)
			return (*(__int64(__fastcall**)(_QWORD*, _QWORD))(v5 + 88))(v1, 0i64);
	}
	return (*(__int64(__fastcall**)(_QWORD*, __int64))(v5 + 96))(a1, v3);
}

