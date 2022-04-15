#include "../winhttp.h"

//----- (0000000140359490) ----------------------------------------------------
__int64 __fastcall sub_140359490(__int64 a1, __m128* a2)
{
	__m128** v2; // rdi
	__m128* i; // rcx
	_QWORD* v6; // r8
	unsigned __int64 v7; // rdx
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	int v10; // ecx
	int v11; // r10d
	__m128 v12; // xmm3
	int v13; // ecx
	int v14; // r9d
	__m128 v15; // xmm1
	int v16; // ecx
	int v17; // ecx
	int v18; // ecx
	__int64 v19; // r8
	int v20; // eax
	__int64 v21; // rdx
	__int64 result; // rax
	unsigned __int64 v23; // rsi
	_QWORD* v24; // rbx
	_QWORD* v25; // rbx
	__int64 j; // rdx
	__m128* v27; // rcx
	__int64 v28; // rax
	__m128* v29; // rbx
	__m128* v30; // rdi
	__int64* v31; // rcx
	unsigned __int64 v32; // rcx
	unsigned int v33; // [rsp+20h] [rbp-30h]
	int v34; // [rsp+28h] [rbp-28h]
	unsigned int v35; // [rsp+2Ch] [rbp-24h]
	__m128 v36; // [rsp+30h] [rbp-20h]
	__m128 v37; // [rsp+40h] [rbp-10h]
	int v38; // [rsp+80h] [rbp+30h] BYREF
	int v39; // [rsp+84h] [rbp+34h]

	v2 = (__m128**)(a1 + 5456);
	for (i = *v2; *v2; i = *v2)
	{
		v6 = (_QWORD*)i[19].m128_u64[0];
		if (v6)
			*v6 = i[19].m128_u64[1];
		v7 = i[19].m128_u64[1];
		if (v7)
			*(_QWORD*)(v7 + 304) = i[19].m128_u64[0];
		i[19].m128_u64[0] = 0i64;
		i[19].m128_u64[1] = 0i64;
	}
	v8 = (__m128)(unsigned int)dword_140C43FB8;
	v9 = (__m128)(unsigned int)dword_140C43FB8;
	v9.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2->m128_f32[0]) + 0.5) * 2048.0;
	v10 = (int)v9.m128_f32[0];
	if ((int)v9.m128_f32[0] != 0x80000000 && (float)v10 != v9.m128_f32[0])
		v9.m128_f32[0] = (float)(v10 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
	v12 = (__m128)(unsigned int)dword_140C43FB8;
	v11 = (int)v9.m128_f32[0];
	v12.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2->m128_f32[2]) + 0.5) * 2048.0;
	v13 = (int)v12.m128_f32[0];
	if ((int)v12.m128_f32[0] != 0x80000000 && (float)v13 != v12.m128_f32[0])
		v12.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v15 = (__m128)(unsigned int)dword_140C43FB8;
	v14 = (int)v12.m128_f32[0];
	v15.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2[1].m128_f32[0]) + 0.5) * 2048.0;
	v16 = (int)v15.m128_f32[0];
	if ((int)v15.m128_f32[0] != 0x80000000 && (float)v16 != v15.m128_f32[0])
		v15.m128_f32[0] = (float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v15, v15)) & 1));
	v8.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a2[1].m128_f32[2]) + 0.5) * 2048.0;
	v17 = (int)v8.m128_f32[0];
	if ((int)v8.m128_f32[0] != 0x80000000 && (float)v17 != v8.m128_f32[0])
		v8.m128_f32[0] = (float)(v17 - (_mm_movemask_ps(_mm_unpacklo_ps(v8, v8)) & 1));
	v18 = dword_140C44538;
	v19 = (unsigned int)dword_140C4453C;
	v20 = (int)v8.m128_f32[0] + 1;
	if ((int)v15.m128_f32[0] + 1 < dword_140C44538)
		v18 = (int)v15.m128_f32[0] + 1;
	v21 = (unsigned int)dword_140C44530;
	if (v20 < dword_140C4453C)
		v19 = (unsigned int)v20;
	result = (unsigned int)dword_140C44534;
	if (dword_140C44530 < v11)
		v21 = (unsigned int)v11;
	if (dword_140C44534 < v14)
		result = (unsigned int)v14;
	if ((int)v21 < v18 && (int)result < (int)v19)
	{
		v33 = v21;
		v34 = v18;
		v35 = v19;
		v39 = result;
		do
		{
			v38 = v21;
			if ((int)v21 < v18)
			{
				do
				{
					v23 = (*(__int64(__fastcall**)(int*))(a1 + 2384))(&v38);
					v24 = *(_QWORD**)(*(_QWORD*)(a1 + 2376) + 8 * (v23 % *(_QWORD*)(a1 + 2368)));
					if (v24)
					{
						while (v23 != *v24 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 2392))(&v38, v24 + 2))
						{
							v24 = (_QWORD*)v24[1];
							if (!v24)
								goto LABEL_43;
						}
						v25 = v24 + 3;
						if (v25)
						{
							if (*v25)
							{
								for (j = *(_QWORD*)(*v25 + 40i64); j; j = *(_QWORD*)(j + 24))
								{
									v27 = *(__m128**)(j + 8);
									if (!v27[19].m128_u64[0])
									{
										v27[19].m128_u64[0] = (unsigned __int64)v2;
										v27[19].m128_u64[1] = (unsigned __int64)*v2;
										*v2 = v27;
										v28 = v27[19].m128_i64[1];
										if (v28)
											*(_QWORD*)(v28 + 304) = (char*)v27 + 312;
									}
								}
							}
						}
					}
				LABEL_43:
					v18 = v34;
					++v38;
				} while (v38 < v34);
				v19 = v35;
				v21 = v33;
				LODWORD(result) = v39;
			}
			result = (unsigned int)(result + 1);
			v39 = result;
		} while ((int)result < (int)v19);
	}
	v29 = *v2;
	if (*v2)
	{
		do
		{
			v30 = (__m128*)v29[19].m128_u64[1];
			result = (*(__int64(__fastcall**)(__m128*, __int64, __int64))(v29->m128_u64[0] + 24))(v29, v21, v19);
			if (!(_DWORD)result
				|| (v36 = _mm_max_ps(v29[2], *a2), v37 = _mm_min_ps(v29[3], a2[1]), v36.m128_f32[0] >= v37.m128_f32[0])
				|| v36.m128_f32[1] >= v37.m128_f32[1]
				|| v36.m128_f32[2] >= v37.m128_f32[2])
			{
				v31 = (__int64*)v29[19].m128_u64[0];
				if (v31)
				{
					result = v29[19].m128_i64[1];
					*v31 = result;
				}
				v32 = v29[19].m128_u64[1];
				if (v32)
				{
					result = v29[19].m128_i64[0];
					*(_QWORD*)(v32 + 304) = result;
				}
				v29[19].m128_u64[0] = 0i64;
				v29[19].m128_u64[1] = 0i64;
			}
			v29 = v30;
		} while (v30);
	}
	return result;
}
// 1403597AD: variable 'v21' is possibly undefined
// 1403597AD: variable 'v19' is possibly undefined
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44530: using guessed type int dword_140C44530;
// 140C44534: using guessed type int dword_140C44534;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;

