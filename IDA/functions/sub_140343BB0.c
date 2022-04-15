#include "../winhttp.h"

//----- (0000000140343BB0) ----------------------------------------------------
void __fastcall sub_140343BB0(__int64 a1)
{
	bool v1; // sf
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	v1 = *(int*)(a1 + 544) < 0;
	*(_QWORD*)a1 = off_140B64F30;
	if (!v1)
	{
		sub_1400035B0();
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65858 + 336i64))(
			qword_140C65858,
			*(unsigned int*)(a1 + 528));
	}
	v3 = *(_QWORD**)(a1 + 616);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 624);
	v4 = *(_QWORD*)(a1 + 624);
	if (v4)
		*(_QWORD*)(v4 + 616) = *(_QWORD*)(a1 + 616);
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	sub_140349D80(a1 + 536);
}
// 140B64F30: using guessed type __int64 (__fastcall *off_140B64F30[17])();
// 140C65858: using guessed type __int64 qword_140C65858;

