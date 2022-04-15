#include "../winhttp.h"

//----- (00000001401885A0) ----------------------------------------------------
__int64 __fastcall sub_1401885A0(_DWORD* a1, __int64 a2, float a3, float a4)
{
	double v6; // xmm0_8
	float v7; // xmm7_4
	BOOL v9; // ebx
	float v10; // xmm6_4
	float v11; // xmm0_4

	v6 = (*(double(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 32i64))(a1);
	v7 = *(float*)&v6;
	if (*(float*)&v6 <= 0.0)
		return 1i64;
	v9 = 0;
	if (a1[10] == 1)
	{
		v11 = sub_1408FDE98(a4, *(float*)&v6);
		v9 = sub_1408FDE98(a3, v7) > v11;
	}
	else if (a1[10] == 2)
	{
		v10 = sub_1408FDE98(a4, *(float*)&v6 * 2.0);
		v9 = sub_1408FDE98(a3, v7 * 2.0) > v10;
	}
	else if (a4 >= *(float*)&v6 && a3 < *(float*)&v6)
	{
		v9 = 1;
	}
	(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)a1 + 48i64))(a1, a2);
	return v9;
}

