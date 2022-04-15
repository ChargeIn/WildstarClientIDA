#include "../winhttp.h"

//----- (00000001405CDE10) ----------------------------------------------------
void __fastcall sub_1405CDE10(__int64 a1, int* a2, _QWORD* a3)
{
	__m128 v3; // xmm0
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__m128 v6; // xmm3
	int v7; // eax
	double v9; // xmm3_8
	unsigned __int64 v10; // rdi
	unsigned __int64 v11; // rsi
	int* v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // r8
	int* v15; // r14
	__int64 v16; // r12
	int* v17; // rax
	int* v18; // rbp
	int* v19; // rax
	int* v20; // rbp
	int v21; // ebp
	int v22; // [rsp+20h] [rbp-78h] BYREF
	int v23; // [rsp+24h] [rbp-74h]
	int v24; // [rsp+28h] [rbp-70h]
	int v25; // [rsp+2Ch] [rbp-6Ch]
	int v26; // [rsp+30h] [rbp-68h]
	int v27; // [rsp+34h] [rbp-64h]
	int v28; // [rsp+38h] [rbp-60h]
	int v29; // [rsp+3Ch] [rbp-5Ch]
	int v30; // [rsp+40h] [rbp-58h]
	__int64 v32; // [rsp+B0h] [rbp+18h]

	v3 = (__m128)(unsigned int)a2[6];
	v4 = (__m128)(unsigned int)a2[5];
	v5 = (__m128)(unsigned int)a2[4];
	v22 = 15;
	v6 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, v3), _mm_unpacklo_ps(v4, (__m128)0i64));
	v23 = *a2;
	v7 = a2[3];
	v25 = v6.m128_i32[0];
	v3.m128_i32[0] = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
	*(_QWORD*)&v9 = _mm_shuffle_ps(v6, v6, 170).m128_u64[0];
	v26 = v3.m128_i32[0];
	v27 = LODWORD(v9);
	v24 = v7;
	v29 = a2[2];
	v28 = a2[1];
	v30 = a2[7];
	sub_1405CCF20(a1, (__int64)&v22, a3, v9);
	v10 = 0i64;
	v11 = 0i64;
	v12 = 0i64;
	v13 = sub_140248F00(a2[2]);
	v32 = v13;
	if (v13)
	{
		v15 = (int*)(v13 + 92);
		v16 = 6i64;
		do
		{
			if (*v15)
			{
				v17 = sub_14018DB00((__int64)v12, v11 + 1, 4i64);
				v14 = (_QWORD*)(4 * v11);
				v18 = v17;
				v17[v11] = *v15;
				if (v12 != v17)
				{
					sub_1407DB590(v17, v12, (unsigned __int64)v14);
					if (v12)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
					v12 = v18;
				}
				++v11;
			}
			++v15;
			--v16;
		} while (v16);
		if (*(_DWORD*)(v32 + 140))
		{
			v19 = sub_14018DB00((__int64)v12, v11 + 1, 4i64);
			v14 = (_QWORD*)(4 * v11);
			v20 = v19;
			v19[v11] = *(_DWORD*)(v32 + 140);
			if (v12 != v19)
			{
				sub_1407DB590(v19, v12, (unsigned __int64)v14);
				if (v12)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
				v12 = v20;
			}
			++v11;
		}
	}
	v22 = 34;
	if ((unsigned int)*a2 >= 0x3E8)
	{
		v21 = *a2 - 1000;
		v23 = v21;
	}
	else
	{
		v21 = 0;
		v23 = 0;
	}
	if (v11)
	{
		do
		{
			if (v12[v10])
			{
				v24 = v12[v10];
				if (v21)
				{
					sub_1405CCF20(a1, (__int64)&v22, v14, v9);
					v21 = v23;
				}
				else
				{
					sub_1405CF8E0(a1, (__int64)&v22);
				}
			}
			++v10;
		} while (v10 < v11);
	}
	if (v12)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
}
// 1405CDFEE: variable 'v14' is possibly undefined

