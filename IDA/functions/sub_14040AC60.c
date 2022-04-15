#include "../winhttp.h"

//----- (000000014040AC60) ----------------------------------------------------
void __fastcall sub_14040AC60(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64 v4; // rsi

	v2 = *(_QWORD*)(a1 + 88);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v2 + 112i64))(
			v2,
			*(_QWORD*)(a1 + 104),
			*(_QWORD*)(a1 + 112) - *(_QWORD*)(a1 + 104),
			0i64,
			0i64);
		v3 = *(_QWORD*)(a1 + 112);
		v4 = *(_QWORD*)(a1 + 104);
		if (v4 != v3)
		{
			sub_1407DB590(*(int**)(a1 + 104), *(int**)(a1 + 112), 1ui64);
			*(_QWORD*)(a1 + 112) += v4 - v3;
		}
	}
	if (*(_QWORD*)(a1 + 144))
		sub_140195D70(a1 + 128);
}

