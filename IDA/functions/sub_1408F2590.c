//----- (00000001408F2590) ----------------------------------------------------
__m128* __fastcall sub_1408F2590(__int64 a1, __int64 a2)
{
	int v2; // r13d
	unsigned int v3; // edi
	__int64 v6; // rbp
	float* v7; // rdi
	float v8; // xmm6_4
	__int64 v9; // r14
	__int64 v10; // r15
	__int64 v11; // rax
	__m128* result; // rax
	__m128* v13; // rdi
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm0_4
	float v17; // xmm0_4
	unsigned int v18; // eax
	__int64 v19; // rcx
	float v20; // xmm0_4
	int v21; // eax
	float v22; // xmm1_4
	__int64 v23; // rax
	float v24; // xmm1_4
	float v25; // xmm1_4

	v2 = *(unsigned __int16*)(a2 + 16);
	v3 = 0;
	*(_DWORD*)(a2 + 12) = 45;
	for (*(_WORD*)(a2 + 18) = v2; v3 < *(_DWORD*)(a1 + 96); ++v3)
		sub_1407E4830(
			(int*)(*(_QWORD*)a2 + 4 * v3 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)),
			0i64,
			(unsigned int)(4 * v2));
	if (*(_DWORD*)(a1 + 292))
	{
		v6 = 0i64;
		v7 = (float*)(a1 + 136);
		v8 = *(float*)(a1 + 56) / *(float*)(a1 + 60);
		v9 = 0i64;
		v10 = 7i64;
		do
		{
			v11 = *(_QWORD*)(a1 + 8);
			if (*(_BYTE*)(v11 + v6 + 208))
				*v7 = sub_140835CA0((_DWORD*)(v9 + v11 + 8), v8 * *(float*)(a1 + 52), *((_DWORD*)v7 - 17), (_DWORD*)v7 - 17);
			else
				*v7 = 0.0;
			++v6;
			v9 += 16i64;
			++v7;
			--v10;
		} while (v10);
		sub_1408F4650(a1 + 96, v2, a1 + 304, *(_DWORD*)(*(_QWORD*)(a1 + 8) + 232i64));
		result = (__m128*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
			*(_QWORD*)(a1 + 16),
			4i64 * (unsigned int)((*(_DWORD*)(a1 + 96) << 12) + 1024));
		v13 = result;
		if (!result)
		{
			*(_DWORD*)(a2 + 12) = 2;
			return result;
		}
		sub_1408F4880((_DWORD*)(a1 + 96), (__int64*)a2, result);
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16), v13);
	}
	v14 = (double)v2 / (double)*(int*)(a1 + 288);
	v15 = *(float*)(a1 + 60);
	v16 = (float)(v14 * *(float*)(*(_QWORD*)(a1 + 8) + 148i64)) + *(float*)(a1 + 52);
	*(float*)(a1 + 52) = v16;
	if (v16 >= v15)
	{
		v17 = sub_1408FDE98(v16, v15);
		++* (_DWORD*)(a1 + 40);
		*(float*)(a1 + 52) = v17;
		*(_QWORD*)(a1 + 68) = 0i64;
		*(_QWORD*)(a1 + 76) = 0i64;
		*(_QWORD*)(a1 + 84) = 0i64;
		*(_DWORD*)(a1 + 92) = 0;
		v18 = *(_DWORD*)(a1 + 44);
		if (v18 && *(_DWORD*)(a1 + 40) >= v18)
		{
			*(_DWORD*)(a2 + 12) = 17;
		}
		else
		{
			v19 = *(_QWORD*)(a1 + 8);
			*(_DWORD*)(a1 + 56) = *(_DWORD*)(v19 + 120);
			v20 = *(float*)(v19 + 124);
			v21 = 214013 * *(_DWORD*)(a1 + 196) + 2531011;
			*(_DWORD*)(a1 + 196) = v21;
			v22 = (float)v21;
			v23 = *(_QWORD*)(a1 + 8);
			v24 = (float)((float)((float)(v22 * 2.3283064e-10) * 2.0) - 1.0) * v20;
			*(float*)(a1 + 64) = v24;
			v25 = v24 + *(float*)(v23 + 120);
			*(float*)(a1 + 60) = v25;
			if (v25 <= 0.1)
				v25 = 0.1;
			*(float*)(a1 + 60) = v25;
			*(_DWORD*)(v23 + 232) &= ~8u;
		}
	}
	result = *(__m128**)(a1 + 8);
	result[14].m128_i32[2] = 0;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

