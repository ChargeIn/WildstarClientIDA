//----- (00000001408B1470) ----------------------------------------------------
__int64 __fastcall sub_1408B1470(float* a1, float* a2, unsigned __int16 a3, __int64 a4, float a5)
{
	float v5; // ebp
	unsigned int v6; // r11d
	int v10; // esi
	float v12; // xmm1_4
	unsigned __int16 v13; // r8
	unsigned __int16 v14; // r9
	float v15; // xmm4_4
	float v16; // xmm3_4
	int v17; // edx
	float v18; // xmm3_4
	float v19; // xmm2_4
	__int64 v20; // rax
	__m128i v21; // xmm0

	v5 = *a1;
	v6 = *((_DWORD*)a1 + 1);
	v10 = *(_DWORD*)a1 - *((_DWORD*)a1 + 3);
	if (*(_DWORD*)a1 == *((_DWORD*)a1 + 3))
		return 0i64;
	v12 = a1[7];
	v13 = 0;
	v14 = 0;
	while (1)
	{
		if (v12 >= 0.0)
		{
			v17 = (int)v12;
			if ((unsigned __int16)(int)v12 >= a3 - 1)
			{
				if ((unsigned __int16)v17 <= a3 - 1)
				{
					a1[6] = a2[(unsigned __int16)v17];
					v21 = _mm_cvtsi32_si128((unsigned int)(unsigned __int16)v17 + 1);
				}
				else
				{
					v21 = _mm_cvtsi32_si128(a3);
				}
				v13 = a3;
				goto LABEL_20;
			}
			v15 = a2[(unsigned __int16)v17];
			v16 = a2[(unsigned __int16)v17 + 1];
		}
		else
		{
			v15 = a1[6];
			v16 = *a2;
		}
		if (v14 == v10)
			break;
		v18 = v16 - v15;
		if (v12 < 0.0)
			v19 = v12 + 1.0;
		else
			v19 = v12 - (float)(int)v12;
		v20 = v6++;
		++v14;
		v12 = v12 + a5;
		*(float*)(a4 + 4 * v20) = (float)(v19 * v18) + v15;
		if (v6 == LODWORD(v5))
			v6 = 0;
	}
	a1[6] = v15;
	if (v12 <= 0.0)
		goto LABEL_21;
	v13 = (int)v12 + 1;
	v21 = _mm_cvtsi32_si128((unsigned int)(unsigned __int16)(int)v12 + 1);
LABEL_20:
	v12 = v12 - _mm_cvtepi32_ps(v21).m128_f32[0];
LABEL_21:
	*((_DWORD*)a1 + 3) += v14;
	a1[7] = v12;
	*((_DWORD*)a1 + 1) = v6;
	return v13;
}

