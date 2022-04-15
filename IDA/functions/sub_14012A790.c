#include "../winhttp.h"

//----- (000000014012A790) ----------------------------------------------------
__int64 __fastcall sub_14012A790(_QWORD* a1)
{
	int* v2; // rax
	void(__fastcall * **v3)(_QWORD); // rax
	void(__fastcall * **v4)(_QWORD); // rdi

	v2 = sub_14018B280(872i64, 8u);
	if (v2 && (v3 = (void(__fastcall***)(_QWORD))sub_140129AF0((__int64)v2, 0i64), (v4 = v3) != 0i64))
	{
		(**v3)(v3);
		*(_QWORD*)sub_140059170(a1, 8ui64) = v4;
		((void(__fastcall*)(void(__fastcall***)(_QWORD), _QWORD*))(*v4)[3])(v4, a1);
		(*v4)[1](v4);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 0i64;
	}
}

