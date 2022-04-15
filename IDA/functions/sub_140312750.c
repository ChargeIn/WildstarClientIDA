#include "../winhttp.h"

//----- (0000000140312750) ----------------------------------------------------
__int64 __fastcall sub_140312750(__int64 a1, __int64 a2, __int64 a3)
{
	const void*** v6; // rdx
	int v7; // ebx
	_QWORD v9[18]; // [rsp+40h] [rbp-B8h] BYREF

	sub_1407C1FE0(v9);
	v7 = (*(__int64(__fastcall**)(__int64, _QWORD*, __int64, __int64, int, int, _QWORD, _QWORD))(*(_QWORD*)a1 + 120i64))(
		a1,
		v9,
		a2,
		a3,
		514,
		3,
		0i64,
		0i64);
	if (v7 >= 0)
	{
		if (v9[8])
			sub_1407C2170(v9, 0, 0xFFFFFFFF);
		if (v9[9])
			sub_1407C2170(v9, 1, 0xFFFFFFFF);
		if (v9[13])
			sub_1407C2170(v9, 5, 0xFFFFFFFF);
		v7 = 0;
	}
	sub_1407C20B0((__int64)v9, v6);
	return (unsigned int)v7;
}
// 14031281A: variable 'v6' is possibly undefined

