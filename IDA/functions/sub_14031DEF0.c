//----- (000000014031DEF0) ----------------------------------------------------
_DWORD* __fastcall sub_14031DEF0(__int64 a1)
{
	_DWORD** v1; // rsi
	unsigned int v3; // ebp
	float v4; // xmm6_4
	unsigned int v5; // ebx
	__int64 v6; // r14
	_DWORD* result; // rax
	__m128 v8; // xmm2
	__m128 v9; // xmm1
	float v10; // xmm1_4
	__int64 v11; // rcx
	unsigned int v12; // eax
	float v13; // xmm1_4
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rdx
	char v17[16]; // [rsp+20h] [rbp-38h] BYREF

	v1 = (_DWORD**)(a1 + 1376);
	sub_140052360((__int64*)(a1 + 1376), 4ui64);
	v3 = 0;
	v4 = 0.0;
	v5 = 0;
	v6 = 0i64;
	**v1 = 0;
	do
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 1216i64) + 848i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64),
			(unsigned int)dword_140AF1508[v6]);
		if (!(_DWORD)result)
			break;
		if (!*(_QWORD*)(a1 + 32))
			*(_QWORD*)(a1 + 32) = sub_14018B280(64i64, 0);
		*(_OWORD*)(*(_QWORD*)(a1 + 32) + 16i64 * v5) = *(_OWORD*)(*(__int64(__fastcall**)(_QWORD, char*, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 1216i64) + 856i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64),
			v17,
			(unsigned int)dword_140AF1508[v6],
			0i64);
		if (v5)
		{
			v8 = _mm_sub_ps(
				*(__m128*)(*(_QWORD*)(a1 + 32) + 16i64 * v5),
				*(__m128*)(*(_QWORD*)(a1 + 32) + 16i64 * (v5 - 1)));
			v9 = _mm_mul_ps(v8, v8);
			v4 = v4
				+ fsqrt((float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0]) + _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
		}
		result = *v1;
		++v5;
		*(float*)&(*v1)[v6++] = v4;
	} while (v5 < 4);
	*(_DWORD*)(a1 + 1372) = v5;
	if (v5 == 1)
		v10 = 1000000.0;
	else
		v10 = 1.0 / (float)(int)(v5 - 1);
	*(float*)(a1 + 1536) = v10;
	if (v5)
	{
		v11 = 0i64;
		if ((int)v5 >= 4)
		{
			v12 = ((v5 - 4) >> 2) + 1;
			v13 = 1.0 / v4;
			v14 = v12;
			v3 = 4 * v12;
			do
			{
				v11 += 4i64;
				*(float*)&(*v1)[v11 - 4] = v13 * *(float*)&(*v1)[v11 - 4];
				*(float*)&(*v1)[v11 - 3] = v13 * *(float*)&(*v1)[v11 - 3];
				*(float*)&(*v1)[v11 - 2] = v13 * *(float*)&(*v1)[v11 - 2];
				*(float*)&(*v1)[v11 - 1] = v13 * *(float*)&(*v1)[v11 - 1];
				--v14;
			} while (v14);
		}
		if (v3 < v5)
		{
			v15 = v11;
			v16 = v5 - v3;
			do
			{
				++v15;
				*(float*)&(*v1)[v15 - 1] = (float)(1.0 / v4) * *(float*)&(*v1)[v15 - 1];
				--v16;
			} while (v16);
		}
		result = *(_DWORD**)(a1 + 40);
		*(_QWORD*)(a1 + 16) = *((_QWORD*)result + 152);
	}
	return result;
}
// 140AF1508: using guessed type int dword_140AF1508[16];
// 14031DEF0: using guessed type char var_38[16];

