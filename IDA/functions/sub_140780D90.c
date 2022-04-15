//----- (0000000140780D90) ----------------------------------------------------
void __fastcall sub_140780D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r9
	__int64 v5; // rcx
	__int64 v6; // r10
	__int64 v7; // rdi
	__int64 v8; // rsi
	float v9; // xmm9_4
	double v10; // xmm7_8
	__m128 v11; // xmm6
	float v12; // xmm0_4
	__m128 v13; // xmm1
	__int64 v14; // r9
	float v15; // xmm9_4
	__int128 v16; // xmm0
	int v17; // edx
	float v18; // xmm1_4
	float* v19; // r11
	float* v20; // rbx
	__int64 v21; // r9
	__int64 v22; // r10
	__int64 v23; // rcx
	__m128 v24; // [rsp+30h] [rbp-98h] BYREF
	__int128 v25; // [rsp+40h] [rbp-88h]
	__int128 v26; // [rsp+50h] [rbp-78h] BYREF
	__m128 v27; // [rsp+60h] [rbp-68h] BYREF
	__m128 v28[5]; // [rsp+70h] [rbp-58h] BYREF

	v4 = 32 * a4;
	v5 = ((_BYTE)a3 + 1) & 0x1F;
	v6 = a2;
	v7 = a3;
	v8 = a3;
	v9 = *(float*)(v4 + a2 + 60);
	v11 = (__m128) * (unsigned int*)(32 * a3 + a2 + 60);
	*(_QWORD*)&v10 = *(unsigned int*)(32 * a3 + a2 + 1084);
	v11.m128_f32[0] = v11.m128_f32[0] + 0.5;
	v13 = v11;
	v12 = (float)(*(float*)(32 * a3 + a2 + 60) - *(float*)&v10) + *(float*)(v4 + a2 + 1084);
	v13.m128_f32[0] = v11.m128_f32[0] * 2.0;
	v14 = v5;
	v15 = fminf(v9, v12);
	v25 = *(_OWORD*)(32 * a3 + a2 + 32);
	v16 = *(_OWORD*)(32 * (a3 + 33) + a2);
	v17 = (int)(float)(v11.m128_f32[0] * 2.0);
	v25 = v16;
	if (v17 != 0x80000000 && (float)v17 != v13.m128_f32[0])
		v13.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1) + v17);
	v18 = (float)(v13.m128_f32[0] * 0.5) - v11.m128_f32[0];
	v11.m128_f32[0] = v11.m128_f32[0] + v18;
	*(float*)&v10 = (float)(*(float*)&v10 + 0.5) + v18;
	if (v11.m128_f32[0] < v15)
	{
		v19 = (float*)(32 * v5 + v6 + 60);
		v20 = (float*)(32 * v5 + v6 + 1084);
		do
		{
			if (v11.m128_f32[0] > *v19)
			{
				do
				{
					v7 = v5;
					v5 = ((_BYTE)v5 + 1) & 0x1F;
				} while (v11.m128_f32[0] > *(float*)(32i64 * (unsigned int)v5 + v6 + 60));
			}
			for (; *(float*)&v10 > *v20; v20 = (float*)(32i64 * (unsigned int)v14 + v6 + 1084))
			{
				v8 = v14;
				v14 = ((_BYTE)v14 + 1) & 0x1F;
			}
			sub_140780A80(
				v5,
				(__m128*)(v6 + 32 * (v7 + 1)),
				(__m128*)(v6 + 32 * (v5 + 1)),
				*(double*)v11.m128_u64,
				&v24,
				&v27);
			sub_140780A80(v23, (__m128*)(v22 + 32 * (v8 + 33)), (__m128*)(v22 + 32 * (v21 + 33)), v10, (__m128*) & v26, v28);
			v11.m128_f32[0] = v11.m128_f32[0] + 0.5;
			*(float*)&v10 = *(float*)&v10 + 0.5;
			v25 = v26;
		} while (v11.m128_f32[0] < v15);
	}
}
// 140780EA3: variable 'v19' is possibly undefined
// 140780EB0: variable 'v5' is possibly undefined
// 140780EB6: variable 'v6' is possibly undefined
// 140780ED1: variable 'v14' is possibly undefined
// 140780F50: variable 'v23' is possibly undefined
// 140780F4D: variable 'v22' is possibly undefined
// 140780F28: variable 'v21' is possibly undefined
// 140780D90: using guessed type __m128 var_58[5];

