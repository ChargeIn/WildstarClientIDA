#include "../winhttp.h"

//----- (00000001400D2DF0) ----------------------------------------------------
void __fastcall sub_1400D2DF0(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v4; // rax
	_QWORD* v5; // rdi

	if (!*(_QWORD*)(a1 + 792) && a2)
	{
		v4 = (__int64)sub_14018B280(48i64, 0);
		if (v4)
			v4 = sub_1401095E0(v4);
		*(_QWORD*)(a1 + 792) = v4;
	}
	v5 = *(_QWORD**)(a1 + 792);
	if (v5)
	{
		if (a2 != (void(__fastcall***)(_QWORD)) * v5)
		{
			if (a2)
				(**a2)(a2);
			if (*v5)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
				*v5 = 0i64;
			}
			*v5 = a2;
		}
		*(_DWORD*)(*(_QWORD*)(a1 + 792) + 8i64) = dword_140C63664;
	}
}
// 140C63664: using guessed type int dword_140C63664;

