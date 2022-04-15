#include "../winhttp.h"

//----- (00000001400D62A0) ----------------------------------------------------
__int64 __fastcall sub_1400D62A0(_QWORD* a1, __int64 a2)
{
	_QWORD* v4; // r14
	int* v5; // rbx

	if (a2)
	{
		v4 = (_QWORD*)sub_140059170(a1, 0x10ui64);
		v5 = sub_14018B280(16i64, 0);
		if (v5)
		{
			*(_QWORD*)v5 = off_140B56558;
			(**(void(__fastcall***)(__int64))a2)(a2);
			*((_QWORD*)v5 + 1) = a2;
		}
		else
		{
			v5 = 0i64;
		}
		*v4 = 14672i64;
		v4[1] = v5;
		(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)a2 + 560i64))(a2, a1);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140B56558: using guessed type __int64 (__fastcall *off_140B56558[2])();

