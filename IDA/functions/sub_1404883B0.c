#include "../winhttp.h"

//----- (00000001404883B0) ----------------------------------------------------
__int64 __fastcall sub_1404883B0(__int64 a1, unsigned int* a2, unsigned int a3, _DWORD* a4)
{
	__m128* v7; // rbp
	__int64 result; // rax
	__int64 v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rax
	unsigned int* v12; // rax
	unsigned int* v13; // rcx
	__m128 v14; // xmm4
	__int64 v15; // rax
	__m128 v16; // xmm3
	__m128 v17; // xmm1
	__int64 v18; // [rsp+70h] [rbp+8h] BYREF

	v18 = a1;
	if (!qword_140C65898)
		return 0i64;
	v7 = *(__m128**)(qword_140C65898 + 25744);
	if (!v7)
		return 0i64;
	result = sub_14043ED60(a1, *(_DWORD*)(qword_140C65898 + 29932));
	v9 = result;
	if (result)
	{
		v10 = 0;
		do
		{
			v11 = *(_QWORD*)(v9 + 8);
			if (*(_DWORD*)(v11 + 24))
			{
				v12 = (unsigned int*)sub_14024B980(*(_DWORD*)(v11 + 24));
				v13 = v12;
				if (v12)
				{
					v14 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v12[3], (__m128)v12[5]),
						_mm_unpacklo_ps((__m128)v12[4], (__m128)0i64));
					if (a4)
						*a4 = 1;
					v15 = *(_QWORD*)(v9 + 8);
					if ((*(_BYTE*)(v15 + 28) & 1) != 0)
						return *(unsigned int*)(v15 + 24);
					v16 = _mm_sub_ps(v7[286], v14);
					v17 = _mm_mul_ps(v16, v16);
					if ((float)((float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
						+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0]) >= (float)(*((float*)v13 + 1) * *((float*)v13 + 1)))
						return *(unsigned int*)(v15 + 24);
					v10 = *v13;
				}
			}
			v9 = *(_QWORD*)(v9 + 16);
		} while (v9);
		LODWORD(v18) = 0;
		if (!*(_QWORD*)(qword_140C65898 + 120))
			return v10;
		sub_1403F7E50(qword_140C65898, a2, a3, (unsigned int*)&v18, 0i64, 0, 0i64);
		result = (unsigned int)v18;
		if (!(_DWORD)v18)
			return v10;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

