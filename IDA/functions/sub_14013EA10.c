#include "../winhttp.h"

//----- (000000014013EA10) ----------------------------------------------------
__int64 __fastcall sub_14013EA10(__int64 a1, float a2)
{
	float v2; // xmm6_4
	__int64 v4; // rcx
	int* v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rsi
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // r14
	int* v11; // rdx
	__int64 v12; // rcx
	float v14; // [rsp+58h] [rbp+10h] BYREF

	v14 = a2;
	++* (_QWORD*)(a1 + 48);
	v2 = a2;
	v4 = *(_QWORD*)(a1 + 48);
	if (a2 == 0.0)
	{
		if (*(_QWORD*)(a1 + 88) > v4)
		{
			v2 = *(float*)(*(_QWORD*)(a1 + 80) + 4 * v4);
			v14 = v2;
		}
		if (v2 == 0.0)
		{
			v2 = 100.0;
			v14 = 100.0;
		}
	}
	if (v4 < *(_QWORD*)(a1 + 88))
		*(float*)(*(_QWORD*)(a1 + 80) + 4 * v4) = fmaxf(*(float*)(*(_QWORD*)(a1 + 80) + 4 * v4), v2);
	else
		sub_140003460((__int64*)(a1 + 80), (int*)&v14);
	v5 = sub_14018B280(864i64, 0);
	if (v5)
	{
		v6 = *(_QWORD*)(a1 + 8);
		if (v6)
			v6 = *(_QWORD*)(v6 + 16);
		v7 = sub_140140000((__int64)v5, v6, (int*)(a1 + 112), v2);
	}
	else
	{
		v7 = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 104);
	v9 = sub_14018DB00(*(_QWORD*)(a1 + 96), v8 + 1, 8i64);
	v10 = v9;
	*(_QWORD*)&v9[2 * v8] = v7;
	v11 = *(int**)(a1 + 96);
	if (v11 != v9)
	{
		sub_1407DB590(v9, v11, 8i64 * *(_QWORD*)(a1 + 104));
		v12 = *(_QWORD*)(a1 + 96);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		*(_QWORD*)(a1 + 96) = v10;
	}
	*(_QWORD*)(a1 + 104) = v8 + 1;
	++* (_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64 * *(_QWORD*)(a1 + 40));
	return v7;
}

