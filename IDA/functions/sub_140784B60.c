//----- (0000000140784B60) ----------------------------------------------------
__m128* __fastcall sub_140784B60(__int64 a1, __m128* a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
	__m128 v7; // xmm2
	int* v8; // r9
	int v9; // edi
	int v10; // ebx
	int v11; // esi
	bool v14; // sf
	int v15; // eax
	int v16; // ecx
	int v17; // eax
	int v18; // ecx
	__int64 v19; // rdx
	int v20; // esi
	__int64 v21; // r11
	__int64 v22; // r9
	int v23; // r8d
	int v24; // edx
	__int64 v25; // r8
	unsigned int v26; // r11d
	__int64 v27; // r10
	unsigned int v28; // r9d
	int v29; // r8d
	unsigned int i; // edx
	__int64 v31; // r8
	__int64 v32; // rcx
	__m128 v33; // xmm0
	__int64 v34; // rax
	int v35; // ebx
	int v36; // edi
	__int64 v37; // r10
	__int64 v38; // r11
	__int64 v39; // r9
	__int64 v40; // rdx
	int v41; // r8d
	__m128 v42; // xmm7
	unsigned __int16* v43; // r10
	__int64 v44; // r10
	__int64 v45; // r10
	__m128 v46; // xmm5
	__m128 v47; // xmm3
	__m128 v48; // xmm0
	float v49; // xmm1_4
	__m128 v50; // xmm4
	__m128 v51; // xmm6
	__m128 v52; // xmm2
	__m128 v54; // [rsp+20h] [rbp-78h] BYREF
	__m128 v55; // [rsp+30h] [rbp-68h] BYREF
	__m128 v56; // [rsp+40h] [rbp-58h] BYREF
	__m128 v57; // [rsp+50h] [rbp-48h] BYREF

	v8 = *(int**)(a1 + 8);
	v9 = *v8;
	v10 = v8[*(_DWORD*)a1 - 1] - *v8;
	v11 = a3 + *(_DWORD*)(a1 + 48) - *v8;
	if (v10 <= 0)
	{
		if (a7 && *(_QWORD*)(a7 + 24))
			sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
	LABEL_37:
		v11 = 0;
	}
	else
	{
		switch (*(_DWORD*)(a1 + 44))
		{
		case 0:
		case 9:
			if (a7 && v11 >= v10 && *(_QWORD*)(a7 + 24))
				sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
			if (v11 < 0)
				goto LABEL_37;
			if (v11 > v10)
				v11 = v10;
			break;
		case 1:
		case 6:
		case 8:
			v16 = 2 * v10;
			if (v11 < 0)
			{
				v11 = v16 - (-1 - v11) % v16 - 1;
				goto LABEL_23;
			}
			v17 = v11;
			goto LABEL_22;
		case 2:
			if (v11 >= 0)
				v11 %= v10;
			else
				v11 = v10 - (-1 - v11) % v10 - 1;
			break;
		case 3:
		case 0xA:
			if (a7 && v11 >= v10 && *(_QWORD*)(a7 + 24))
				sub_14079AB20(*(_QWORD*)(a7 + 16), a7);
			v14 = v10 - v11 < 0;
			v15 = v10 - v11;
			v11 = v10 - v11;
			if (v14)
				goto LABEL_37;
			if (v15 > v10)
				v11 = v10;
			break;
		case 4:
		case 7:
			v16 = 2 * v10;
			if (v10 - v11 >= 0)
			{
				v17 = v10 - v11;
			LABEL_22:
				v11 = v17 % v16;
			}
			else
			{
				v11 = v16 - (-1 - (v10 - v11)) % v16 - 1;
			}
		LABEL_23:
			if (v11 >= v10)
				v11 = v16 - v11;
			break;
		case 5:
			v18 = v10 - v11;
			if (v10 - v11 >= 0)
				v11 = v18 % v10;
			else
				v11 = v10 - (-1 - v18) % v10 - 1;
			break;
		default:
			break;
		}
	}
	v19 = *(unsigned int*)(a1 + 4);
	v20 = v9 + v11;
	if ((_DWORD)v19 && (v21 = *(_QWORD*)(a1 + 8), v22 = (unsigned int)(v19 - 1), v20 - *(_DWORD*)(v21 + 4 * v22) < 0))
	{
		v23 = 1;
		v24 = v19 - 1;
		if ((int)v22 > 0)
		{
			do
			{
				if (v20 - *(_DWORD*)(v21 + 4i64 * (unsigned int)(v24 - 1)) >= 0)
					break;
				v23 *= 2;
				LODWORD(v22) = v24 - 1;
				v24 -= v23;
			} while (v24 > 0);
		}
		if (v24 < 0)
			v24 = 0;
		while (v24 < (unsigned int)v22)
		{
			v25 = (unsigned int)(v24 + v22) >> 1;
			if (v20 - *(_DWORD*)(v21 + 4 * v25) < 0)
				LODWORD(v22) = (unsigned int)(v24 + v22) >> 1;
			else
				v24 = v25 + 1;
		}
		*(_DWORD*)(a1 + 4) = v24;
	}
	else
	{
		v26 = *(_DWORD*)a1;
		if ((unsigned int)v19 < *(_DWORD*)a1)
		{
			v27 = *(_QWORD*)(a1 + 8);
			if (v20 - *(_DWORD*)(v27 + 4 * v19) >= 0)
			{
				v28 = v19 + 1;
				v29 = 1;
				for (i = v28; i < v26; i += v29)
				{
					if (v20 - *(_DWORD*)(v27 + 4i64 * i) < 0)
						break;
					v29 *= 2;
					v28 = i + 1;
				}
				if (i > v26)
					i = *(_DWORD*)a1;
				while (v28 < i)
				{
					v31 = (i + v28) >> 1;
					if (v20 - *(_DWORD*)(v27 + 4 * v31) < 0)
						i = (i + v28) >> 1;
					else
						v28 = v31 + 1;
				}
				*(_DWORD*)(a1 + 4) = v28;
			}
		}
	}
	if (*(_DWORD*)(a1 + 40))
	{
		v39 = *(unsigned int*)(a1 + 4);
		if (!(_DWORD)v39)
		{
			sub_1401ADB90((__m128i*) & v55, *(unsigned __int16**)(a1 + 24));
			v33 = v55;
			goto LABEL_75;
		}
		if ((unsigned int)v39 >= *(_DWORD*)a1)
		{
			sub_1401ADB90(
				(__m128i*) & v57,
				(unsigned __int16*)(*(_QWORD*)(a1 + 24) + 6i64 * (unsigned int)(*(_DWORD*)a1 - 1)));
			v33 = v57;
			goto LABEL_75;
		}
		v40 = *(_QWORD*)(a1 + 8);
		v41 = *(_DWORD*)(v40 + 4i64 * (unsigned int)(v39 - 1));
		v42 = 0i64;
		v42.m128_f32[0] = (float)(v20 - v41) / (float)(*(_DWORD*)(v40 + 4 * v39) - v41);
		sub_1401ADB90((__m128i*) & v55, (unsigned __int16*)(*(_QWORD*)(a1 + 24) + 6 * v39 + 6));
		sub_1401ADB90((__m128i*) & v54, v43);
		sub_1401ADB90((__m128i*) & v56, (unsigned __int16*)(v44 - 6));
		sub_1401ADB90((__m128i*) & v57, (unsigned __int16*)(v45 - 12));
		v46 = v42;
		v46.m128_f32[0] = v42.m128_f32[0] * v42.m128_f32[0];
		v47 = v46;
		v48 = v46;
		v48.m128_f32[0] = (float)(v42.m128_f32[0] * v42.m128_f32[0]) * 2.0;
		v49 = (float)(v42.m128_f32[0] * v42.m128_f32[0]) * 0.5;
		v47.m128_f32[0] = (float)(v42.m128_f32[0] * v42.m128_f32[0]) * v42.m128_f32[0];
		v50 = v47;
		v47.m128_f32[0] = v47.m128_f32[0] * 1.5;
		v42.m128_f32[0] = v42.m128_f32[0] * 0.5;
		v50.m128_f32[0] = v50.m128_f32[0] * 0.5;
		v51 = v50;
		v48.m128_f32[0] = (float)(v48.m128_f32[0] - v47.m128_f32[0]) + v42.m128_f32[0];
		v51.m128_f32[0] = v50.m128_f32[0] - v49;
		v52 = v48;
		v48.m128_f32[0] = v46.m128_f32[0] * 2.5;
		v46.m128_f32[0] = (float)(v46.m128_f32[0] - v50.m128_f32[0]) - v42.m128_f32[0];
		v47.m128_f32[0] = (float)(v47.m128_f32[0] - v48.m128_f32[0]) + 1.0;
		*a2 = _mm_add_ps(
			_mm_mul_ps(_mm_shuffle_ps(v51, v51, 0), v55),
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v54),
				_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v56), _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v57))));
	}
	else
	{
		v32 = *(unsigned int*)(a1 + 4);
		if (!(_DWORD)v32)
		{
			sub_1401ADB90((__m128i*) & v54, *(unsigned __int16**)(a1 + 24));
			v33 = v54;
		LABEL_75:
			*a2 = v33;
			return a2;
		}
		if ((unsigned int)v32 >= *(_DWORD*)a1)
		{
			sub_1401ADB90(
				(__m128i*) & v55,
				(unsigned __int16*)(*(_QWORD*)(a1 + 24) + 6i64 * (unsigned int)(*(_DWORD*)a1 - 1)));
			v33 = v55;
			goto LABEL_75;
		}
		v34 = *(_QWORD*)(a1 + 8);
		v35 = *(_DWORD*)(v34 + 4 * v32);
		v36 = *(_DWORD*)(v34 + 4i64 * (unsigned int)(v32 - 1));
		sub_1401ADB90((__m128i*) & v54, (unsigned __int16*)(*(_QWORD*)(a1 + 24) + 6 * v32));
		sub_1401ADB90((__m128i*) & v55, (unsigned __int16*)(v37 + 6 * v38));
		v7.m128_f32[0] = (float)(v20 - v36) / (float)(v35 - v36);
		*a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), _mm_sub_ps(v54, v55)), v55);
	}
	return a2;
}
// 140784E22: variable 'v37' is possibly undefined
// 140784E22: variable 'v38' is possibly undefined
// 140784E5A: variable 'v7' is possibly undefined
// 140784F18: variable 'v43' is possibly undefined
// 140784F1D: variable 'v44' is possibly undefined
// 140784F2B: variable 'v45' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;

