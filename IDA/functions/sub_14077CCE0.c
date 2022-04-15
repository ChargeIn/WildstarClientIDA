#include "../winhttp.h"

//----- (000000014077CCE0) ----------------------------------------------------
__int64 __fastcall sub_14077CCE0(_QWORD** a1, _DWORD* a2)
{
	__int64 v4; // rcx
	unsigned int v5; // eax
	int v6; // edx
	__int64 result; // rax
	__int64 v8; // rbp
	float v9; // xmm6_4
	_QWORD* v10; // rax
	_DWORD* v11; // r15
	_QWORD* v12; // rbx
	__m128 v13; // xmm7
	_DWORD* v14; // rdi
	__int64 v15; // rax
	__m128 v16; // xmm1
	__m128 v17; // xmm2
	float v18; // xmm2_4
	__int64 v19; // rax
	_QWORD* i; // rax
	__int64 j; // rcx

	v4 = *a1[6];
	v5 = *(_DWORD*)(v4 + 12);
	if (v5 > 0x1B)
		return 0i64;
	v6 = 134250504;
	if (!_bittest(&v6, v5))
		return 0i64;
	result = sub_140721EF0(v4, *(_DWORD*)(v4 + 20));
	v8 = result;
	if (result)
	{
		v9 = 3.4028235e38;
		v10 = *(_QWORD**)(result + 16);
		v11 = 0i64;
		v12 = (_QWORD*)v10[2];
		v13 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
		if (v12 != v10)
		{
			do
			{
				v14 = (_DWORD*)v12[5];
				if (!((unsigned int(__fastcall*)(_QWORD**, _QWORD))(*a1)[10])(a1, (unsigned int)v14[2]))
				{
					v15 = sub_14024B980(*(_DWORD*)(*(_QWORD*)v14 + 8i64));
					if (v15)
					{
						v16 = _mm_sub_ps(
							v13,
							_mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v15 + 12), (__m128) * (unsigned int*)(v15 + 20)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v15 + 16), (__m128)0i64)));
						v17 = _mm_mul_ps(v16, v16);
						v18 = fsqrt(
							(float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
							+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0])
							- *(float*)(v15 + 4);
						if (v18 < v9)
						{
							v9 = v18;
							v11 = v14;
							if (a2)
								*a2 = v14[2];
						}
					}
				}
				v19 = v12[3];
				if (v19)
				{
					v12 = (_QWORD*)v12[3];
					for (i = *(_QWORD**)(v19 + 16); i; i = (_QWORD*)i[2])
						v12 = i;
				}
				else
				{
					for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v12 = (_QWORD*)j;
					if (v12[3] != j)
						v12 = (_QWORD*)j;
				}
			} while (v12 != *(_QWORD**)(v8 + 16));
		}
		return (__int64)v11;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

