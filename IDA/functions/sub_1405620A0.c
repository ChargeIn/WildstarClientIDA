#include "../winhttp.h"

//----- (00000001405620A0) ----------------------------------------------------
__int64 __fastcall sub_1405620A0(__int64 a1, __m128* a2, __int64 a3, unsigned int a4, unsigned __int32 a5)
{
	char v8; // r15
	unsigned __int64 v9; // rcx
	_DWORD* v10; // rax
	int* v11; // rax
	int* v12; // rdi
	_DWORD* v13; // rcx
	_DWORD* v14; // rcx
	__int64 result; // rax
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rbp
	__int32 v19; // eax
	unsigned __int64 v20; // rcx
	float* v21; // rax
	int* v22; // rax
	unsigned __int64 v23; // rcx
	unsigned __int64 v24; // rax
	float v25; // xmm2_4
	float v26; // xmm2_4
	unsigned __int64 v27; // rcx
	int* v28; // rax
	int* v29; // r14
	_DWORD* v30; // rcx
	_DWORD* v31; // rcx

	sub_14018B900(a2[3].m128_i64[1], 0);
	sub_14018B900(a2[9].m128_i64[0], 0);
	sub_1407E4830((int*)a2, 0i64, 0xA0ui64);
	v8 = 0;
	if (a3)
	{
		v9 = 0i64;
		a2->m128_i32[0] = *(_DWORD*)a3;
		a2->m128_i32[1] = *(_DWORD*)(a3 + 4);
		a2->m128_i32[2] = *(_DWORD*)(a3 + 8);
		a2->m128_i32[3] = *(_DWORD*)(a3 + 24);
		a2[1].m128_i32[0] = *(_DWORD*)(a3 + 12);
		v10 = (_DWORD*)(a3 + 76);
		while (!*(v10 - 12) && !*v10 && !*(v10 - 6))
		{
			++v9;
			++v10;
			if (v9 >= 6)
				goto LABEL_12;
		}
		v8 = 1;
		v11 = sub_14018B280(128i64, 0);
		v12 = v11;
		if (v11)
			sub_1407E4830(v11, 0i64, 0x80ui64);
		else
			v12 = 0i64;
		a2[9].m128_u64[0] = (unsigned __int64)v12;
		*v12 = *(_DWORD*)(a3 + 28);
		v12[1] = *(_DWORD*)(a3 + 32);
		v12[2] = *(_DWORD*)(a3 + 36);
		v12[3] = *(_DWORD*)(a3 + 40);
		v12[4] = *(_DWORD*)(a3 + 44);
		v12[5] = *(_DWORD*)(a3 + 48);
		v13 = (_DWORD*)a2[9].m128_u64[0];
		v13[6] = *(_DWORD*)(a3 + 76);
		v13[7] = *(_DWORD*)(a3 + 80);
		v13[8] = *(_DWORD*)(a3 + 84);
		v13[9] = *(_DWORD*)(a3 + 88);
		v13[10] = *(_DWORD*)(a3 + 92);
		v13[11] = *(_DWORD*)(a3 + 96);
		v14 = (_DWORD*)a2[9].m128_u64[0];
		v14[12] = *(_DWORD*)(a3 + 52);
		v14[13] = *(_DWORD*)(a3 + 56);
		v14[14] = *(_DWORD*)(a3 + 60);
		v14[15] = *(_DWORD*)(a3 + 64);
		v14[16] = *(_DWORD*)(a3 + 68);
		v14[17] = *(_DWORD*)(a3 + 72);
	LABEL_12:
		a2[9].m128_i32[2] = *(_DWORD*)(a3 + 100);
		a2[1].m128_i32[1] = *(_DWORD*)(a3 + 128);
		a2[3].m128_i32[0] = *(_DWORD*)(a3 + 132);
	}
	result = (__int64)qword_140C63840;
	if (qword_140C63840)
	{
		result = qword_140C63840(off_140A6DFF8, a4, qword_140C63858);
	}
	else
	{
		if (dword_140C64C04)
			return result;
		result = sub_140248CA0();
		if ((int)result < 0)
			return result;
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, a4);
	}
	v16 = result;
	if (!result)
		return result;
	if (qword_140C63840)
	{
		v17 = qword_140C63840(off_140A6DFF8, a5, qword_140C63858);
	}
	else
	{
		if (dword_140C64C04)
		{
			v18 = 0i64;
			goto LABEL_27;
		}
		if ((int)sub_140248CA0() < 0)
		{
			v18 = 0i64;
			goto LABEL_27;
		}
		v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, a5);
	}
	v18 = v17;
LABEL_27:
	v19 = *(_DWORD*)v16;
	a2[1].m128_i32[3] = a5;
	v20 = 0i64;
	a2[1].m128_i32[2] = v19;
	a2[2].m128_i32[0] = *(_DWORD*)(v16 + 4);
	a2[2].m128_i32[1] = *(_DWORD*)(v16 + 8);
	a2[2].m128_i32[2] = *(_DWORD*)(v16 + 12);
	a2[2].m128_i32[3] = *(_DWORD*)(v16 + 148);
	a2[3].m128_i32[1] = *(_DWORD*)(v16 + 88);
	v21 = (float*)(v16 + 68);
	while (*v21 == 0.0)
	{
		++v20;
		++v21;
		if (v20 >= 5)
			goto LABEL_32;
	}
	v22 = sub_14018B280(20i64, 0);
	a2[3].m128_u64[1] = (unsigned __int64)v22;
	*v22 = *(_DWORD*)(v16 + 68);
	*(_DWORD*)(a2[3].m128_u64[1] + 4) = *(_DWORD*)(v16 + 72);
	*(_DWORD*)(a2[3].m128_u64[1] + 8) = *(_DWORD*)(v16 + 76);
	*(_DWORD*)(a2[3].m128_u64[1] + 12) = *(_DWORD*)(v16 + 80);
	*(_DWORD*)(a2[3].m128_u64[1] + 16) = *(_DWORD*)(v16 + 84);
LABEL_32:
	a2[4].m128_i32[0] = *(_DWORD*)(v16 + 40);
	a2[4].m128_i32[1] = *(_DWORD*)(v16 + 44);
	a2[4].m128_i32[2] = *(_DWORD*)(v16 + 48);
	a2[4].m128_i32[3] = *(_DWORD*)(v16 + 16);
	a2[5].m128_i32[0] = *(_DWORD*)(v16 + 20);
	a2[5].m128_i32[1] = *(_DWORD*)(v16 + 32);
	v23 = *(_QWORD*)(v16 + 24);
	if (v23)
	{
		if (v23 <= qword_140C3FE70)
			v24 = v23 + qword_140C3FE68;
		else
			v24 = 0i64;
	}
	else
	{
		v24 = 0i64;
	}
	v25 = *(float*)&dword_140C3B438;
	a2[5].m128_u64[1] = v24;
	a2[6].m128_i32[0] = *(_DWORD*)(v16 + 52);
	v26 = v25 * 0.0055555557;
	a2[6].m128_f32[1] = v26 * *(float*)(v16 + 56);
	a2[6].m128_f32[2] = v26 * *(float*)(v16 + 60);
	a2[6].m128_f32[3] = v26 * *(float*)(v16 + 64);
	a2[8].m128_i32[2] = *(_DWORD*)(v16 + 152);
	if (a3)
	{
		a2[6].m128_f32[0] = *(float*)(a3 + 120) * a2[6].m128_f32[0];
		a2[7] = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 108), (__m128) * (unsigned int*)(a3 + 116)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 112), (__m128)0i64));
		a2[8].m128_i32[0] = *(_DWORD*)(a3 + 104);
		a2[8].m128_i32[1] = *(_DWORD*)(a3 + 124);
	}
	else
	{
		a2[8].m128_i32[0] = -1;
	}
	if (v18)
		v16 = v18;
	if (!v8)
	{
		if (!*(_DWORD*)(v16 + 140) && !*(_DWORD*)(v16 + 144))
		{
			v27 = 0i64;
			result = v16 + 92;
			while (!*(_DWORD*)(result + 24) && !*(_DWORD*)result)
			{
				++v27;
				result += 4i64;
				if (v27 >= 6)
					goto LABEL_55;
			}
		}
		v28 = sub_14018B280(128i64, 0);
		v29 = v28;
		if (v28)
			sub_1407E4830(v28, 0i64, 0x80ui64);
		else
			v29 = 0i64;
		a2[9].m128_u64[0] = (unsigned __int64)v29;
	}
	v30 = (_DWORD*)a2[9].m128_u64[0];
	v30[18] = *(_DWORD*)(v16 + 116);
	v30[19] = *(_DWORD*)(v16 + 120);
	v30[20] = *(_DWORD*)(v16 + 124);
	v30[21] = *(_DWORD*)(v16 + 128);
	v30[22] = *(_DWORD*)(v16 + 132);
	v30[23] = *(_DWORD*)(v16 + 136);
	v31 = (_DWORD*)a2[9].m128_u64[0];
	v31[24] = *(_DWORD*)(v16 + 92);
	v31[25] = *(_DWORD*)(v16 + 96);
	v31[26] = *(_DWORD*)(v16 + 100);
	v31[27] = *(_DWORD*)(v16 + 104);
	v31[28] = *(_DWORD*)(v16 + 108);
	v31[29] = *(_DWORD*)(v16 + 112);
	*(_DWORD*)(a2[9].m128_u64[0] + 120) = *(_DWORD*)(v16 + 140);
	result = *(unsigned int*)(v16 + 144);
	*(_DWORD*)(a2[9].m128_u64[0] + 124) = result;
LABEL_55:
	if (v18)
	{
		a2[3].m128_i32[1] &= 0xFFFFDFF7;
		result = *(_DWORD*)(v18 + 88) & 0x2008;
		a2[3].m128_i32[1] |= result;
	}
	if (a3)
	{
		if ((*(_BYTE*)(a3 + 12) & 8) != 0)
			a2[3].m128_i32[1] |= 1u;
		if ((*(_DWORD*)(a3 + 12) & 0x800) != 0)
			a2[3].m128_i32[1] |= 0x200u;
	}
	return result;
}
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;

