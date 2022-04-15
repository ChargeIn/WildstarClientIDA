#include "../winhttp.h"

//----- (00000001401039E0) ----------------------------------------------------
__int64 __fastcall sub_1401039E0(_QWORD* a1, _DWORD* a2, __m128* a3, double a4)
{
	_DWORD* v4; // r10
	int v7; // esi
	__int64 i; // rdi
	bool v9; // sf
	_QWORD* v10; // rcx
	__int64 result; // rax
	__int64 v12; // rax
	float v13; // [rsp+50h] [rbp+8h] BYREF
	_DWORD* v14; // [rsp+58h] [rbp+10h]

	v14 = a2;
	v4 = a2;
	if (!(unsigned int)((a1[8] - a1[7]) / 304i64))
	{
		v7 = 0;
		for (i = 0i64; v7 < (int)((__int64)(a1[12] - a1[11]) >> 3); ++i)
		{
			v9 = i < 0;
			if (i > 0)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				v4 = v14;
				v9 = i < 0;
			}
			if (v9)
			{
				v10 = 0i64;
			}
			else if (v7 < (int)((__int64)(a1[12] - a1[11]) >> 3))
			{
				v10 = *(_QWORD**)(a1[11] + 8 * i);
			}
			else
			{
				v10 = a1;
			}
			sub_1401039E0(v10, v4, a3);
			v4 = v14;
			++v7;
		}
		return 0i64;
	}
	v13 = 0.0;
	v12 = sub_140101260((__int64)a1, a4, &v13);
	if (!v12)
		return 2147942413i64;
	result = sub_1400FFEC0(v12, v14, a3, v13);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

