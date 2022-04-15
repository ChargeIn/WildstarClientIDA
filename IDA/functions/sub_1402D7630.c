#include "../winhttp.h"

//----- (00000001402D7630) ----------------------------------------------------
__int64 __fastcall sub_1402D7630(__int64 a1, __m128* a2, __m128* a3)
{
	__m128* v3; // rbx
	__int64 v6; // rdi
	__m128* v7; // rax
	char* v8; // rdx
	__int64 v9; // rcx
	__m128 v10; // xmm0
	__int32* v11; // r14
	unsigned __int64 v12; // rdx
	unsigned int v13; // r8d
	int v14; // eax
	__m128 v15; // xmm0
	__m128 v16; // xmm3
	__m128 v17; // xmm1
	signed __int64 v18; // rcx
	__m128 v19; // xmm0
	__int64 result; // rax
	__m128 v21; // [rsp+20h] [rbp-78h]
	__m128 v22; // [rsp+30h] [rbp-68h] BYREF
	__m128 v23; // [rsp+40h] [rbp-58h]
	int v24; // [rsp+50h] [rbp-48h]

	v3 = a3;
	v6 = 2i64;
	if (a2->m128_i8[0])
	{
		a2->m128_i8[0] = 0;
		v7 = a3;
		v8 = (char*)((char*)&a2[1] - (char*)a3);
		v9 = 2i64;
		do
		{
			v10 = *v7++;
			*(__m128*)((char*)v7 + (_QWORD)v8 - 16) = v10;
			--v9;
		} while (v9);
		v11 = (__int32*)&a3[2];
		a2[3].m128_i32[0] = a3[2].m128_i32[0];
	}
	else
	{
		v11 = (__int32*)&a3[2];
		v12 = (__int64)((unsigned __int128)(((__int64)a2 - a1) * (__int128)0x4924924924924925i64) >> 64) >> 5;
		v13 = *(_DWORD*)(*(_QWORD*)(a1 + 672) + 4 * ((v12 >> 63) + v12));
		v14 = v3[2].m128_i32[0] ^ a2[6].m128_i32[0];
		if (_bittest(&v14, v13))
		{
			v15 = _mm_sub_ps(*v3, a2[4]);
			v21 = _mm_div_ps(a2[(v13 >> 2) + 4], _mm_sub_ps(a2[(v13 >> 2) + 4], v3[v13 >> 2]));
			v16 = (__m128)v21.m128_u32[v13 & 3];
			v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v15), a2[4]);
			v17 = _mm_shuffle_ps(v22, v22, 255);
			v23 = _mm_sub_ps(_mm_shuffle_ps(v17, v17, 0), v22);
			v24 = _mm_movemask_ps(_mm_cmplt_ps(v22, (__m128)0i64)) | (16 * _mm_movemask_ps(_mm_cmplt_ps(v23, (__m128)0i64)));
			sub_1402D77E0(a1, (unsigned __int64)a2, (__int64)&v22);
		}
	}
	v18 = (char*)&a2[4] - (char*)v3;
	do
	{
		v19 = *v3++;
		*(__m128*)((char*)v3 + v18 - 16) = v19;
		--v6;
	} while (v6);
	a2[6].m128_i32[0] = *v11;
	result = a2[6].m128_u32[0];
	if (!_bittest((const int*)&result, *(_DWORD*)(*(_QWORD*)(a1 + 672) + 4 * (((__int64)a2 - a1) / 112))))
		return sub_1402D77E0(a1, (unsigned __int64)a2, (__int64)&a2[4]);
	return result;
}

