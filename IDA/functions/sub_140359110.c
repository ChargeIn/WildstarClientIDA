#include "../winhttp.h"

//----- (0000000140359110) ----------------------------------------------------
__int64 __fastcall sub_140359110(__int64 a1, __int64 a2, __m128* a3, __m128* a4)
{
	unsigned int v6; // eax
	__m128 v7; // xmm1
	unsigned int v8; // r15d
	__m128 v9; // xmm2
	int v10; // ecx
	int v11; // r10d
	__m128 v12; // xmm2
	int v13; // ecx
	__m128 v14; // xmm3
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	int v18; // r8d
	__int64 v19; // rdx
	int v20; // eax
	unsigned __int64 v21; // rdi
	_QWORD* v22; // rbx
	_QWORD* v23; // rbx
	__int64 i; // rcx
	__int64 v25; // rdx
	__int64 v26; // rax
	__m128* v27; // rbx
	_QWORD* v28; // rcx
	__int8* v29; // rdi
	unsigned __int64 v30; // rcx
	unsigned __int64 v31; // rax
	__m128 v32; // xmm1
	__m128** v33; // rcx
	__m128* v35; // [rsp+20h] [rbp-40h] BYREF
	unsigned int v36; // [rsp+28h] [rbp-38h]
	int v37; // [rsp+2Ch] [rbp-34h]
	int v38; // [rsp+30h] [rbp-30h]
	int v39; // [rsp+34h] [rbp-2Ch]
	__m128 v40; // [rsp+40h] [rbp-20h]
	__m128 v41; // [rsp+50h] [rbp-10h]
	int v42; // [rsp+A8h] [rbp+48h] BYREF
	int v43; // [rsp+ACh] [rbp+4Ch]

	v6 = sub_140358D20(a1, a2, a3);
	v7 = (__m128)(unsigned int)dword_140C43FB8;
	v8 = v6;
	v9 = (__m128)(unsigned int)dword_140C43FB8;
	v9.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a4->m128_f32[0]) + 0.5) * 2048.0;
	v10 = (int)v9.m128_f32[0];
	if ((int)v9.m128_f32[0] != 0x80000000 && (float)v10 != v9.m128_f32[0])
		v9.m128_f32[0] = (float)(v10 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
	v11 = (int)v9.m128_f32[0];
	v12 = (__m128)(unsigned int)dword_140C43FB8;
	v12.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a4->m128_f32[2]) + 0.5) * 2048.0;
	v13 = (int)v12.m128_f32[0];
	if ((int)v12.m128_f32[0] != 0x80000000 && (float)v13 != v12.m128_f32[0])
		v12.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v14 = (__m128)(unsigned int)dword_140C43FB8;
	v14.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a4[1].m128_f32[0]) + 0.5) * 2048.0;
	v15 = (int)v14.m128_f32[0];
	if ((int)v14.m128_f32[0] != 0x80000000 && (float)v15 != v14.m128_f32[0])
		v14.m128_f32[0] = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps(v14, v14)) & 1));
	v7.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a4[1].m128_f32[2]) + 0.5) * 2048.0;
	v16 = (int)v7.m128_f32[0];
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v16 != v7.m128_f32[0])
		v7.m128_f32[0] = (float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	v17 = dword_140C44538;
	v18 = dword_140C4453C;
	v35 = 0i64;
	if ((int)v14.m128_f32[0] + 1 < dword_140C44538)
		v17 = (int)v14.m128_f32[0] + 1;
	v19 = (unsigned int)qword_140C44530;
	if ((int)v7.m128_f32[0] + 1 < dword_140C4453C)
		v18 = (int)v7.m128_f32[0] + 1;
	v20 = HIDWORD(qword_140C44530);
	if ((int)qword_140C44530 < v11)
		v19 = (unsigned int)v11;
	if (SHIDWORD(qword_140C44530) < (int)v12.m128_f32[0])
		v20 = (int)v12.m128_f32[0];
	if ((int)v19 >= v17 || v20 >= v18)
		return v8;
	v36 = v19;
	v37 = v20;
	v38 = v17;
	v39 = v18;
	v43 = v20;
	do
	{
		v42 = v19;
		if ((int)v19 < v17)
		{
			do
			{
				v21 = (*(__int64(__fastcall**)(int*))(a1 + 2384))(&v42);
				v22 = *(_QWORD**)(*(_QWORD*)(a1 + 2376) + 8 * (v21 % *(_QWORD*)(a1 + 2368)));
				if (v22)
				{
					while (v21 != *v22 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 2392))(&v42, v22 + 2))
					{
						v22 = (_QWORD*)v22[1];
						if (!v22)
							goto LABEL_37;
					}
					v23 = v22 + 3;
					if (v23)
					{
						if (*v23)
						{
							for (i = *(_QWORD*)(*v23 + 40i64); i; i = *(_QWORD*)(i + 24))
							{
								v25 = *(_QWORD*)(i + 8);
								if (!*(_QWORD*)(v25 + 304))
								{
									*(_QWORD*)(v25 + 304) = &v35;
									*(_QWORD*)(v25 + 312) = v35;
									v35 = (__m128*)v25;
									v26 = *(_QWORD*)(v25 + 312);
									if (v26)
										*(_QWORD*)(v26 + 304) = v25 + 312;
								}
							}
						}
					}
				}
			LABEL_37:
				v17 = v38;
				++v42;
			} while (v42 < v38);
			v18 = v39;
			v19 = v36;
			v20 = v43;
		}
		v43 = ++v20;
	} while (v20 < v18);
	while (v35)
	{
		v27 = v35;
		v28 = (_QWORD*)v35[19].m128_u64[0];
		if (v28)
			*v28 = v35[19].m128_u64[1];
		v29 = &v27[19].m128_i8[8];
		v30 = v27[19].m128_u64[1];
		if (v30)
			*(_QWORD*)(v30 + 304) = v27[19].m128_u64[0];
		v31 = v27->m128_u64[0];
		v27[19].m128_u64[0] = 0i64;
		*(_QWORD*)v29 = 0i64;
		if (!(*(unsigned int(__fastcall**)(__m128*, __int64))(v31 + 24))(v27, v19))
		{
			v32 = _mm_min_ps(v27[3], a4[1]);
			v40 = _mm_max_ps(v27[2], *a4);
			v41 = v32;
			if (v40.m128_f32[0] < v32.m128_f32[0] && v40.m128_f32[1] < v41.m128_f32[1] && v40.m128_f32[2] < v41.m128_f32[2])
			{
				v33 = (__m128**)(a1 + 5456);
				if (!v27[19].m128_u64[0])
				{
					v27[19].m128_u64[0] = (unsigned __int64)v33;
					*(_QWORD*)v29 = *v33;
					*v33 = v27;
					if (*(_QWORD*)v29)
						*(_QWORD*)(*(_QWORD*)v29 + 304i64) = v29;
				}
			}
		}
	}
	return v8;
}
// 1403593E7: variable 'v19' is possibly undefined
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;

