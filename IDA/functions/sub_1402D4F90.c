#include "../winhttp.h"

//----- (00000001402D4F90) ----------------------------------------------------
__int64 __fastcall sub_1402D4F90(__int64* a1, __int64 a2, float* a3, float a4, __int64 a5)
{
	__m128 v5; // xmm0
	__m128 v7; // xmm4
	__m128 v8; // xmm2
	unsigned __int8 v11; // di
	unsigned int v12; // ebx
	__int64 result; // rax
	float v14; // xmm2_4
	__int64 v15; // rdx
	int v16; // r9d
	float* v17; // r9
	unsigned int v18; // r9d
	__int64 v19; // rax
	float v20; // xmm0_4
	unsigned int v21; // r10d
	float v22; // xmm1_4
	__int64 v23; // rax
	__int64 v24; // r8
	__int64 v25; // rcx
	__int128 v26; // [rsp+38h] [rbp-D0h] BYREF
	__int128 v27; // [rsp+48h] [rbp-C0h]
	unsigned __int64 v28; // [rsp+58h] [rbp-B0h]
	_OWORD v29[65]; // [rsp+68h] [rbp-A0h]

	v5 = (__m128)0x3F800000u;
	v7 = (__m128)0x3F800000u;
	v8 = (__m128)0x3F800000u;
	v5.m128_f32[0] = 1.0 / a3[2];
	*((_QWORD*)&v26 + 1) = *(_QWORD*)(*a1 + 8);
	v11 = 0;
	v7.m128_f32[0] = 1.0 / *a3;
	v8.m128_f32[0] = 1.0 / a3[1];
	v12 = 0;
	v29[0] = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v5), _mm_unpacklo_ps(v8, (__m128)0i64));
	result = sub_1401C9AA0((__int64)(a1 + 2), a2, a3, &v26);
	if ((_DWORD)result)
	{
		LODWORD(v14) = v26;
		if (a4 >= *(float*)&v26)
		{
			v15 = *((_QWORD*)&v26 + 1);
			do
			{
				v16 = *(_DWORD*)(v15 + 4);
				if (v16 >= 0)
				{
					v18 = v16 & 0x7FFFFFF8;
					v19 = *(_DWORD*)(v15 + 4) & 3;
					v20 = *(float*)(a2 + 4 * v19);
					if (v20 > *(float*)v15)
					{
						v21 = v18;
						v18 += 8;
					}
					else
					{
						v21 = v18 + 8;
					}
					v22 = (float)(*(float*)v15 - v20) * *((float*)v29 + v19);
					if (v22 < 0.0 || v22 > *((float*)&v26 + 1))
					{
						v15 = *(_QWORD*)(*a1 + 8) + v21;
					}
					else
					{
						v23 = *a1;
						if (v22 >= v14)
						{
							v24 = *(_QWORD*)(v23 + 8);
							v25 = v12++;
							*(_QWORD*)&v27 = __PAIR64__(LODWORD(v22), LODWORD(v14));
							v28 = __PAIR64__(DWORD1(v26), LODWORD(v22));
							*(_QWORD*)&v29[v25 + 1] = __PAIR64__(DWORD1(v26), LODWORD(v22));
							*((_QWORD*)&v29[v25 + 1] + 1) = v24 + v18;
							*((_QWORD*)&v27 + 1) = v24 + v21;
							v26 = v27;
							v15 = *((_QWORD*)&v27 + 1);
							LODWORD(v14) = v27;
						}
						else
						{
							v15 = *(_QWORD*)(v23 + 8) + v18;
						}
					}
				}
				else
				{
					v17 = (float*)(*(_QWORD*)(*a1 + 24) + (v16 & 0x7FFFFFF8));
					if ((unsigned __int8)sub_1402D3E70(
						a5,
						a2,
						(__int64)a3,
						a4,
						(unsigned int*)(*(_QWORD*)(*a1 + 40) + 4i64 * *(unsigned int*)v17),
						v17[1])
						|| v11)
					{
						v11 = 1;
					}
					if (!v12)
						return v11;
					v26 = v29[v12--];
					v15 = *((_QWORD*)&v26 + 1);
					LODWORD(v14) = v26;
				}
			} while (a4 >= v14);
		}
		return v11;
	}
	return result;
}

