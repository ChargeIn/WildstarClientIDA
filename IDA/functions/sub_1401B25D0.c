//----- (00000001401B25D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401B25D0(__int64 a1, __m128* a2, __m128* a3, float* a4)
{
	unsigned __int64 result; // rax
	float v8; // xmm2_4
	__m128 v9; // xmm0
	__int64 v10; // r9
	char* v11; // r10
	unsigned __int64 v12; // rdx
	float* v13; // rcx
	char* v14; // r8
	float v15; // xmm1_4
	float v16; // xmm0_4
	float v17; // xmm3_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	float v20; // xmm3_4
	float v21; // xmm0_4
	__m128 v22; // [rsp+0h] [rbp-18h] BYREF
	char v23; // [rsp+28h] [rbp+10h] BYREF

	result = 0i64;
	v8 = -*(float*)&dword_140C3DAD8;
	v9 = _mm_sub_ps(*a3, *a2);
	v10 = a1 - (_QWORD)a2;
	v11 = (char*)((char*)&v22 - (char*)a2);
	v12 = 0i64;
	v22 = v9;
	v13 = (float*)a2;
	v14 = (char*)(&v23 - (char*)a2);
	do
	{
		v15 = *v13;
		v16 = *(float*)((char*)v13 + v10);
		if (*v13 >= v16)
		{
			v19 = *(float*)((char*)v13 + v10 + 16);
			if (v15 <= v19)
			{
				v18 = 0.0;
				*(float*)((char*)v13 + (_QWORD)v14) = 0.0;
			}
			else
			{
				v20 = *(float*)((char*)v13 + (_QWORD)v11);
				if (v20 >= 0.0)
					return result;
				v18 = (float)(v19 - v15) / v20;
				*(float*)((char*)v13 + (_QWORD)v14) = v18;
			}
		}
		else
		{
			v17 = *(float*)((char*)v13 + (_QWORD)v11);
			if (v17 <= 0.0)
				return result;
			v18 = (float)(v16 - v15) / v17;
			*(float*)((char*)v13 + (_QWORD)v14) = v18;
		}
		if (v8 < v18)
			v8 = v18;
		++v12;
		++v13;
	} while (v12 < 2);
	do
	{
		if (v8 > *(float*)(&v23 + result))
		{
			v21 = (float)(v8 * v22.m128_f32[result / 4]) + a2->m128_f32[result / 4];
			if (v21 < *(float*)(result + a1) || v21 > *(float*)(&v23 + result + a1 - (_QWORD)&v23 + 16))
				return 0i64;
		}
		result += 4i64;
	} while (result < 8);
	if (a4)
		*a4 = v8;
	return 1i64;
}
// 140C3DAD8: using guessed type int dword_140C3DAD8;

