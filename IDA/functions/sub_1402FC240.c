#include "../winhttp.h"

//----- (00000001402FC240) ----------------------------------------------------
__int64 __fastcall sub_1402FC240(__int64* a1, unsigned __int64 a2, __m128* a3)
{
	__int64 v3; // rax
	__int64 result; // rax
	unsigned __int64 v8; // rbp
	__m128* v9; // rdi
	unsigned __int16* v10; // rbp
	__m128* v11; // rax
	__m128* v12; // rcx
	__m128 v13; // xmm1
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18[2]; // [rsp+20h] [rbp-88h] BYREF
	__m128* v19[10]; // [rsp+30h] [rbp-78h] BYREF

	v3 = *a1;
	LODWORD(v18[0]) = -1;
	(*(void(__fastcall**)(__int64*, __int64*, _QWORD))(v3 + 16))(a1, v18, 0i64);
	if (a2 >= *(unsigned int*)(a1[8] + 792))
		return 2147942487i64;
	result = sub_140300DD0((__int64)a1, 0x4Au);
	if ((int)result >= 0)
	{
		v8 = a2;
		v9 = (__m128*)(a1[183] + 432 * a2);
		v10 = (unsigned __int16*)(*(_QWORD*)(a1[8] + 800) + 400 * v8);
		a3[4].m128_i32[2] = dword_140B60438[*v10];
		v18[0] = a1[103] + ((unsigned __int64)v10[1] << 6);
		v11 = (__m128*)(a1[2] + 304);
		v19[0] = (__m128*)v18[0];
		v18[1] = (__int64)v11;
		v19[1] = v11;
		sub_1401AFB10(v19, a3);
		if (*v10)
		{
			if (*v10 <= 2u)
			{
				a3[4].m128_i32[0] = v9->m128_i32[0];
			}
			else if (*v10 <= 4u)
			{
				a3[4].m128_i32[0] = v9[1].m128_i32[1];
				a3[4].m128_i32[1] = v9[2].m128_i32[2];
			}
		}
		v12 = (__m128*)(a1[62] + 96i64 * *(unsigned __int16*)(352i64 * v10[1] + *(_QWORD*)(a1[8] + 392) + 6));
		a3[5] = _mm_mul_ps(v9[4], *v12);
		v13 = _mm_mul_ps(v9[6], *v12);
		a3[6] = v13;
		a3[7] = v13;
		a3[4].m128_f32[3] = v9[8].m128_f32[0] * v12[2].m128_f32[0];
		if (*v10 != 1)
		{
			if (*v10 == 2)
			{
			LABEL_13:
				a3[8].m128_i32[0] = v9[9].m128_i32[1];
				a3[8].m128_i32[1] = v9[10].m128_i32[2];
				a3[8].m128_i32[2] = v9[11].m128_i32[3];
				a3[8].m128_i32[3] = v9[13].m128_i32[0];
				goto LABEL_15;
			}
			if (*v10 != 3)
			{
				if (*v10 != 4)
					goto LABEL_15;
				goto LABEL_13;
			}
		}
		a3[8].m128_i32[0] = v9[9].m128_i32[1];
		a3[8].m128_i32[1] = v9[10].m128_i32[2];
	LABEL_15:
		a3[9].m128_i32[0] = v9[14].m128_i32[1];
		a3[9].m128_i32[1] = v9[15].m128_i32[2];
		a3[9].m128_i32[2] = v9[16].m128_i32[3];
		a3[9].m128_i32[3] = v9[18].m128_i32[0];
		a3[10].m128_u64[0] = 0i64;
		v14 = v10[3];
		if ((unsigned int)v14 < *(_DWORD*)(a1[8] + 448))
		{
			v15 = *(_QWORD*)(a1[132] + 24 * v14 + 16);
			if (v15)
				a3[10].m128_u64[0] = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 56i64))(v15);
		}
		a3[10].m128_u64[1] = 0i64;
		v16 = v10[4];
		if ((unsigned int)v16 < *(_DWORD*)(a1[8] + 448))
		{
			v17 = *(_QWORD*)(a1[132] + 24 * v16 + 16);
			if (v17)
				a3[10].m128_u64[1] = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 56i64))(v17);
		}
		return 0i64;
	}
	return result;
}
// 140B60438: using guessed type _DWORD dword_140B60438[6];

