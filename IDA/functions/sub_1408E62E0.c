//----- (00000001408E62E0) ----------------------------------------------------
void __fastcall sub_1408E62E0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbp
	int v5; // ecx
	unsigned int v8; // ecx
	_OWORD* v9; // rsi
	unsigned int v10; // edx
	unsigned int v11; // r9d
	__int64 i; // rdx
	__int64 v13; // rax
	__m128* v14; // r15
	__m128* v15; // rdx
	_OWORD* v16; // rcx
	__int64 v17; // rbx
	unsigned __int8 v18; // bl
	int v19; // ecx
	float v20; // xmm0_4
	float v21; // xmm1_4

	v3 = *(unsigned __int16*)(a2 + 18);
	v5 = *(_DWORD*)(a1 + 460);
	if (((v5 - 4) & 0xFFFFFFFB) == 0)
	{
		if (v5 == 8)
		{
			v20 = *(float*)(a1 + 240);
			v21 = *(float*)(a1 + 192);
		}
		else
		{
			v20 = *(float*)(a1 + 228);
			v21 = *(float*)(a1 + 180);
		}
		sub_1408A6050(
			*(_OWORD**)a2,
			*(__m128**)a3,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
			v20 * *(float*)(a1 + 248),
			v21 * *(float*)(a1 + 200),
			v3);
		return;
	}
	v8 = v5 & 0xFFFFFFF7;
	v9 = 0i64;
	v10 = 0;
	v11 = v8;
	if (!v8)
		goto LABEL_6;
	do
	{
		++v10;
		v11 &= v11 - 1;
	} while (v11);
	if (v10 > 2)
	{
		i = 2i64;
	}
	else
	{
	LABEL_6:
		for (i = 0i64; v8; v8 &= v8 - 1)
			i = (unsigned int)(i + 1);
	}
	v13 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 488) + 8i64))(*(_QWORD*)(a1 + 488), 4 * v3 * i);
	v14 = (__m128*)v13;
	if (v13)
	{
		if ((*(_DWORD*)(a1 + 460) & 7) == 3)
		{
			v17 = v13 + 4 * v3;
			sub_1408E7F90(
				*(float**)a3,
				(float*)(*(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16)),
				v13,
				v17,
				v3,
				*(float*)(a1 + 216),
				*(float*)(a1 + 168));
			sub_1408A6050(
				*(_OWORD**)a2,
				v14,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
				*(float*)(a1 + 248) * *(float*)(a1 + 228),
				*(float*)(a1 + 200) * *(float*)(a1 + 180),
				v3);
			v16 = (_OWORD*)(*(_QWORD*)a2 + 4i64 * *(unsigned __int16*)(a2 + 16));
			v15 = (__m128*)v17;
		}
		else
		{
			if ((*(_DWORD*)(a1 + 460) & 7) != 4)
			{
				if ((*(_DWORD*)(a1 + 460) & 7) == 7)
				{
					sub_1408A5DE0(
						*(__m128**)a3,
						(float*)(*(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16)),
						v13,
						COERCE_DOUBLE(1055437881i64),
						0.45449999,
						0.45449999,
						0.45449999,
						v3);
					sub_1408A6050(
						(_OWORD*)(*(_QWORD*)a2 + 8i64 * *(unsigned __int16*)(a2 + 16)),
						v14,
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
						*(float*)(a1 + 236) * *(float*)(a1 + 248),
						*(float*)(a1 + 188) * *(float*)(a1 + 200),
						v3);
					sub_1408A5DE0(
						*(__m128**)a3,
						(float*)(*(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16)),
						(unsigned __int64)v14,
						COERCE_DOUBLE(1063390282i64),
						0.88300002,
						-0.117,
						-0.117,
						v3);
					sub_1408A5DE0(
						(__m128*)(*(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16)),
						*(float**)a3,
						(unsigned __int64)v14->m128_u64 + 4 * v3,
						COERCE_DOUBLE(1063390282i64),
						0.88300002,
						-0.117,
						-0.117,
						v3);
					sub_1408E7BD0(v14->m128_f32, &v14->m128_f32[v3], v3, *(float*)(a1 + 216), *(float*)(a1 + 168));
					sub_1408A6050(
						*(_OWORD**)a2,
						v14,
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
						*(float*)(a1 + 248) * *(float*)(a1 + 228),
						*(float*)(a1 + 200) * *(float*)(a1 + 180),
						v3);
					sub_1408A6050(
						(_OWORD*)(*(_QWORD*)a2 + 4i64 * *(unsigned __int16*)(a2 + 16)),
						(__m128*)((char*)v14 + 4 * v3),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
						COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
						*(float*)(a1 + 248) * *(float*)(a1 + 228),
						*(float*)(a1 + 200) * *(float*)(a1 + 180),
						v3);
				}
				goto LABEL_16;
			}
			v15 = *(__m128**)a3;
			v16 = *(_OWORD**)a2;
		}
		sub_1408A6050(
			v16,
			v15,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
			*(float*)(a1 + 248) * *(float*)(a1 + 228),
			*(float*)(a1 + 200) * *(float*)(a1 + 180),
			v3);
	LABEL_16:
		if ((*(_BYTE*)(a1 + 460) & 0x30) != 0)
		{
			sub_1407DB590((int*)v14, *(int**)a3, (unsigned int)(4 * v3));
			sub_1407DB590(
				&v14->m128_i32[v3],
				(int*)(*(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16)),
				(unsigned int)(4 * v3));
			if (*(_DWORD*)(a1 + 400))
				sub_1408ADCB0((int*)(a1 + 400), (__int128*)v14, v3);
			if (*(_DWORD*)(a1 + 424))
				sub_1408ADCB0((int*)(a1 + 424), (__int128*)&v14->m128_f32[v3], v3);
			sub_1408E7BD0(v14->m128_f32, &v14->m128_f32[v3], v3, *(float*)(a1 + 216), *(float*)(a1 + 168));
			v18 = ((*(_DWORD*)(a1 + 460) & 4) != 0) | 2;
			sub_1408A6050(
				(_OWORD*)(*(_QWORD*)a2 + 4 * v18 * (unsigned __int64)*(unsigned __int16*)(a2 + 16)),
				v14,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
				*(float*)(a1 + 248) * *(float*)(a1 + 232),
				*(float*)(a1 + 200) * *(float*)(a1 + 184),
				v3);
			sub_1408A6050(
				(_OWORD*)(*(_QWORD*)a2 + 4 * *(unsigned __int16*)(a2 + 16) * (unsigned __int64)((unsigned int)v18 + 1)),
				(__m128*)((char*)v14 + 4 * v3),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
				*(float*)(a1 + 248) * *(float*)(a1 + 232),
				*(float*)(a1 + 200) * *(float*)(a1 + 184),
				v3);
		}
		if ((*(_BYTE*)(a1 + 460) & 8) != 0)
		{
			v19 = *(_DWORD*)(a2 + 8);
			if ((v19 & 8) != 0)
			{
				for (; v19; v19 &= v19 - 1)
					LODWORD(v9) = (_DWORD)v9 + 1;
				v9 = (_OWORD*)(*(_QWORD*)a2
					+ 4 * *(unsigned __int16*)(a2 + 16) * (unsigned __int64)(unsigned int)((_DWORD)v9 - 1));
			}
			sub_1408A6050(
				v9,
				*(__m128**)a3,
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 244)),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 196)),
				*(float*)(a1 + 248) * *(float*)(a1 + 240),
				*(float*)(a1 + 200) * *(float*)(a1 + 192),
				v3);
		}
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 488) + 16i64))(*(_QWORD*)(a1 + 488), v14);
	}
}

