#include "../winhttp.h"

//----- (00000001401B2810) ----------------------------------------------------
__int64 __fastcall sub_1401B2810(__int64 a1, __m128* a2, __m128* a3, float* a4)
{
	__m128 v4; // xmm0
	unsigned __int64 v9; // r8
	float v10; // xmm2_4
	__int64 v11; // r9
	signed __int64 v12; // r10
	char* v13; // r11
	unsigned __int64 v14; // rdx
	float* v15; // rax
	char* v16; // rcx
	float v17; // xmm1_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	float v20; // xmm0_4
	float v21; // xmm0_4
	__m128 v23; // [rsp+0h] [rbp-18h] BYREF
	char v24[8]; // [rsp+28h] [rbp+10h] BYREF

	v4 = *a3;
	v9 = 0i64;
	v10 = -*(float*)&dword_140C3DAD8;
	v11 = a1 - (_QWORD)a2;
	v12 = (char*)a3 - (char*)a2;
	v23 = _mm_sub_ps(v4, *a2);
	v13 = (char*)((char*)&v23 - (char*)a2);
	v14 = 0i64;
	v15 = (float*)a2;
	v16 = (char*)(v24 - (char*)a2);
	do
	{
		v17 = *v15;
		v18 = *(float*)((char*)v15 + v11);
		if (*v15 >= v18)
		{
			v20 = *(float*)((char*)v15 + v11 + 16);
			if (v17 <= v20)
			{
				v19 = 0.0;
				*(float*)((char*)v15 + (_QWORD)v16) = 0.0;
			}
			else
			{
				if (v20 < *(float*)((char*)v15 + v12))
					return 0i64;
				v19 = (float)(v20 - v17) / *(float*)((char*)v15 + (_QWORD)v13);
				*(float*)((char*)v15 + (_QWORD)v16) = v19;
			}
		}
		else
		{
			if (v18 > *(float*)((char*)v15 + v12))
				return 0i64;
			v19 = (float)(v18 - v17) / *(float*)((char*)v15 + (_QWORD)v13);
			*(float*)((char*)v15 + (_QWORD)v16) = v19;
		}
		if (v10 < v19)
			v10 = v19;
		++v14;
		++v15;
	} while (v14 < 2);
	while (1)
	{
		if (v10 > *(float*)&v24[v9 * 4])
		{
			v21 = (float)(v10 * v23.m128_f32[v9]) + a2->m128_f32[v9];
			if (v21 < *(float*)(v9 * 4 + a1) || v21 > *(float*)&v24[v9 * 4 + 16 + a1 - (_QWORD)v24])
				break;
		}
		if (++v9 >= 2)
		{
			if (a4)
				*a4 = v10;
			return 1i64;
		}
	}
	return 0i64;
}
// 140C3DAD8: using guessed type int dword_140C3DAD8;
// 1401B2810: using guessed type char arg_8[8];

