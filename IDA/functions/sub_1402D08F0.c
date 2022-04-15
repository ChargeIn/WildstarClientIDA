#include "../winhttp.h"

//----- (00000001402D08F0) ----------------------------------------------------
void __fastcall sub_1402D08F0(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rdi
	__int64 i; // rbx
	__int64 v5; // rax
	unsigned __int64 v6; // rcx
	__m128* v7; // r8
	__int64 v8; // rax
	__m128* v9; // rdx
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	unsigned __int64 v12; // rax
	int v13[4]; // [rsp+20h] [rbp-28h] BYREF

	v1 = *(_QWORD**)(a1 + 24);
	v13[0] = -1;
	if (*v1)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD, int*))(*(_QWORD*)*v1 + 32i64))(*v1, v13))
		{
			sub_1402D3300(v1);
			if (*v1)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 8i64))(*v1);
				*v1 = 0i64;
			}
		}
	}
	v3 = v1[2];
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(v3 + 248); i = (unsigned int)(i + 1))
	{
		v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 416i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(*(_QWORD*)(v3 + 256) + 4 * i));
		v6 = 0i64;
		v7 = (__m128*)v5;
		v8 = qword_140C657F0;
		v9 = (__m128*)(qword_140C657F0 + 304);
		while (1)
		{
			v10 = _mm_cmplt_ps((__m128)0i64, *v9);
			v11 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v10, v7[18]), _mm_and_ps(v10, v7[17])), *v9);
			if ((float)((float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
				+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0])
				+ v9->m128_f32[3]) > 0.0)
				break;
			++v6;
			++v9;
			if (v6 >= 6)
			{
				if (!v7[23].m128_u64[0])
				{
					v7[23].m128_u64[0] = qword_140C657F0 + 1256;
					v7[23].m128_u64[1] = *(_QWORD*)(v8 + 1256);
					*(_QWORD*)(v8 + 1256) = v7;
					v12 = v7[23].m128_u64[1];
					if (v12)
						*(_QWORD*)(v12 + 368) = (char*)v7 + 376;
				}
				break;
			}
		}
	}
}
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 1402D08F0: using guessed type int var_28[4];

