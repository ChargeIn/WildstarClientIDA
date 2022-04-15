#include "../winhttp.h"

//----- (00000001402CDCE0) ----------------------------------------------------
__int64 __fastcall sub_1402CDCE0(_QWORD* a1, float* a2, __int64 a3, _QWORD* a4)
{
	__int64 v4; // rax
	unsigned int v7; // ebp
	float* v10; // rax
	float v11; // xmm0_4
	float v12; // xmm0_4
	__int64 v13; // rbx
	__int64 i; // rdi
	int v16[10]; // [rsp+30h] [rbp-28h] BYREF

	v4 = *a1;
	v7 = 0;
	v16[0] = -1;
	(*(void(__fastcall**)(_QWORD*, int*, __int64))(v4 + 64))(a1, v16, 5i64);
	v10 = (float*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 248i64))(a1);
	if (*a2 < *v10)
		return 0i64;
	if (*a2 >= v10[4])
		return 0i64;
	v11 = a2[1];
	if (v11 < v10[1])
		return 0i64;
	if (v11 >= v10[5])
		return 0i64;
	v12 = a2[2];
	if (v12 < v10[2] || v12 >= v10[6])
		return 0i64;
	v13 = 0i64;
	if (a1[32])
	{
		for (i = 0i64;
			!(*(unsigned int(__fastcall**)(__int64, float*, __int64, _QWORD, _DWORD))(*(_QWORD*)(i + a1[31]) + 176i64))(
				i + a1[31],
				a2,
				a3,
				0i64,
				0);
			i += 416i64)
		{
			if ((unsigned __int64)++v13 >= a1[32])
				return 0i64;
		}
		if (a4)
			*a4 = a1[31] + 416 * v13;
		return 1;
	}
	return v7;
}
// 1402CDCE0: using guessed type int var_28[10];

