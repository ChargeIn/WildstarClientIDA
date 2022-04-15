#include "../winhttp.h"

//----- (00000001407B9670) ----------------------------------------------------
__int64 __fastcall sub_1407B9670(__m128* a1)
{
	__m128 v1; // xmm6
	float v2; // xmm8_4
	unsigned int v3; // r15d
	int v4; // xmm5_4
	__m128* v5; // r9
	__int64 v6; // r10
	int v8; // eax
	int v9; // esi
	__int64 v10; // rdx
	__m128* v11; // rcx
	__m128 v12; // xmm2
	__m128 v13; // xmm0
	int* v14; // rdx
	unsigned int v15; // r8d
	_DWORD* v16; // rcx
	int v17; // r12d
	int* v18; // rbx
	int v19; // r14d
	int v20; // eax
	__m128 v21; // xmm4
	__m128 v22; // xmm2
	int v23; // r9d
	unsigned int v24; // ecx
	unsigned int v25; // r8d
	unsigned int v26; // ebp
	int v27; // xmm6_4
	unsigned int v28; // ecx
	__int64 v29; // rax
	__int64 v30; // rax
	__m128 v31; // xmm3
	__m128 v32; // xmm4
	float v33; // xmm4_4
	int v34; // ecx
	int v35; // ecx
	int v36; // ecx
	int v37; // eax
	int v38; // ecx
	int v41; // [rsp+A0h] [rbp+8h] BYREF
	float v42; // [rsp+A4h] [rbp+Ch]
	int v43; // [rsp+A8h] [rbp+10h] BYREF
	int v44; // [rsp+ACh] [rbp+14h]

	v1 = a1[23];
	v2 = a1[72].m128_f32[0];
	v3 = 0;
	v4 = 0;
	v5 = a1 + 63;
	v6 = 9i64;
	v42 = v2;
	v41 = 0;
	v8 = 1;
	v9 = 0;
	v10 = 9i64;
	v11 = a1 + 63;
	do
	{
		v12 = _mm_mul_ps(v1, *v11);
		v13 = _mm_shuffle_ps(v12, v12, 85);
		if ((float)((float)((float)(v12.m128_f32[0] + v13.m128_f32[0]) + _mm_shuffle_ps(v12, v12, 170).m128_f32[0])
			+ v11->m128_f32[3]) >= 0.0)
			v9 |= v8;
		v8 = __ROL4__(v8, 1);
		++v11;
		--v10;
	} while (v10);
	v14 = (int*)&unk_140B53BFC;
	v15 = 0;
	v16 = &unk_140B53BFC;
	while (1)
	{
		v17 = 7;
		if ((v9 & v16[1]) == *v16)
			break;
		++v15;
		v16 += 13;
		if (v15 >= 7)
		{
			v15 = 7;
			break;
		}
	}
	v18 = (int*)((char*)&unk_140B53BD0 + 52 * (int)v15);
	if (v2 > 0.0000099999997)
	{
		v13.m128_f32[0] = v2;
		v19 = 0;
		v20 = 1;
		v21 = _mm_add_ps(_mm_mul_ps(a1[25], _mm_shuffle_ps(v13, v13, 0)), v1);
		do
		{
			v22 = _mm_mul_ps(v21, *v5);
			if ((float)((float)((float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
				+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0])
				+ v5->m128_f32[3]) >= 0.0)
				v19 |= v20;
			v20 = __ROL4__(v20, 1);
			++v5;
			--v6;
		} while (v6);
		v23 = v9 ^ v19;
		if (v9 != v19)
		{
			v24 = 0;
			while ((v19 & v14[1]) != *v14)
			{
				++v24;
				v14 += 13;
				if (v24 >= 7)
					goto LABEL_20;
			}
			v17 = v24;
		LABEL_20:
			if (v15 != v17)
			{
				do
				{
					v25 = v18[4];
					v26 = -1;
					*(float*)&v27 = v2;
					v28 = 0;
					if (v25)
					{
						v14 = v18 + 8;
						do
						{
							v29 = *v14;
							if (_bittest(&v23, v29))
							{
								v30 = v29 + 63;
								v31 = _mm_mul_ps(a1[25], a1[v30]);
								v32 = _mm_mul_ps(a1[23], a1[v30]);
								v33 = -(float)((float)((float)((float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
									+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0])
									+ a1[v30].m128_f32[3])
									/ (float)((float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
										+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0]));
								if (*(float*)&v27 > v33)
								{
									*(float*)&v27 = v33;
									v26 = v28;
								}
							}
							++v28;
							++v14;
						} while (v28 < v25);
					}
					if (v26 >= v25)
						break;
					v34 = *v18;
					v43 = v4;
					v44 = v27;
					v35 = v34 - 1;
					if (v35)
					{
						v36 = v35 - 1;
						if (v36)
						{
							if (v36 != 1)
								goto LABEL_35;
							v37 = sub_1407B9FB0(
								a1,
								(__int64)v14,
								(float*)&v43,
								(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[1]),
								a1 + 62);
						}
						else
						{
							v37 = sub_1407B9C40(
								a1,
								(__int64)v14,
								(__int64)&v43,
								(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[1]),
								(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[2]));
						}
					}
					else
					{
						v37 = sub_1407B9A40(
							a1,
							(__int64)v14,
							(float*)&v43,
							(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[1]));
					}
					if (v37)
						return 1i64;
				LABEL_35:
					v4 = v27;
					v38 = v18[v26 + 5];
					v41 = v27;
					v18 = (int*)((char*)&unk_140B53BD0 + 52 * v38);
					v9 = v18[11] | ~v18[12] & v9;
					v23 = v9 ^ v19;
				} while (v38 != v17);
			}
		}
	}
	switch (*v18)
	{
	case 1:
		return (unsigned int)sub_1407B9A40(
			a1,
			(__int64)v14,
			(float*)&v41,
			(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[1]));
	case 2:
		return (unsigned int)sub_1407B9C40(
			a1,
			(__int64)v14,
			(__int64)&v41,
			(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[1]),
			(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[2]));
	case 3:
		return (unsigned int)sub_1407B9FB0(
			a1,
			(__int64)v14,
			(float*)&v41,
			(__m128*)(a1[61].m128_u64[0] + 16i64 * (unsigned int)v18[1]),
			a1 + 62);
	}
	return v3;
}
// 1407B98D7: variable 'v14' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

