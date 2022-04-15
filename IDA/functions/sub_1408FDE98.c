//----- (00000001408FDE98) ----------------------------------------------------
float __fastcall sub_1408FDE98(float result, float a2)
{
	double v2; // r8
	double v3; // r9
	double v4; // r10
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rdx
	double v7; // xmm2_8
	double v8; // xmm3_8
	unsigned int v9; // r8d
	double v10; // xmm4_8
	int v11; // edx
	unsigned int v12; // edx
	__int64 v13; // rcx
	double v14; // xmm1_8
	double v15; // xmm2_8
	double v16; // xmm0_8
	int v17; // [rsp+30h] [rbp-28h]
	float v18; // [rsp+38h] [rbp-20h]
	float v19; // [rsp+60h] [rbp+8h]

	v19 = result;
	v2 = result;
	v3 = fabs(result);
	v4 = fabs(a2);
	v5 = (COERCE_UNSIGNED_INT64(result) >> 52) & 0x7FF;
	v6 = (COERCE_UNSIGNED_INT64(a2) >> 52) & 0x7FF;
	if (((COERCE_UNSIGNED_INT64(result) >> 52) & 0x7FF) != 0)
	{
		if (((COERCE_UNSIGNED_INT64(result) >> 52) & 0x7FF) == 2047)
			goto LABEL_20;
		if ((unsigned int)(v6 - 1) <= 0x7FD)
		{
			if (*(_QWORD*)&v3 == *(_QWORD*)&v4)
				return COERCE_DOUBLE(*(_QWORD*)&v2 & 0x8000000000000000ui64);
			v7 = v3;
			v8 = v4;
			if (*(_QWORD*)&v3 >= *(_QWORD*)&v4)
			{
				v9 = _mm_getcsr();
				if ((int)v5 > (int)v6)
				{
					v12 = (int)((unsigned __int64)(715827883i64 * ((int)v5 - (int)v6)) >> 32) >> 2;
					v11 = (v12 >> 31) + v12;
					v10 = 0.00000005960464477539062;
					v8 = COERCE_DOUBLE((__int64)(24 * v11 + 1023) << 52) * v4;
				}
				else
				{
					v10 = 1.0;
					v11 = 0;
				}
				if (v11 > 0)
				{
					v13 = (unsigned int)v11;
					do
					{
						v14 = (double)(int)(v7 / v8) * v8;
						v8 = v8 * v10;
						v7 = v7 - v14;
						--v13;
					} while (v13);
				}
				v15 = v7 - (double)(int)(v7 / v8) * v8;
				_mm_setcsr(v9);
				v16 = v15;
				if (v19 < 0.0)
					return -v15;
				return v16;
			}
			else
			{
				if (result < 0.0)
					return -v3;
				return v7;
			}
		}
	}
	if (((COERCE_UNSIGNED_INT64(result) >> 52) & 0x7FF) == 2047)
	{
	LABEL_20:
		v18 = a2;
		v17 = LODWORD(result);
		if ((*(_QWORD*)&v2 & 0xFFFFFFFFFFFFFi64) != 0)
			return sub_1407EFD48((__int64)"fmodf", 22, LODWORD(result) | 0x400000, 1, 0, 0x21u, SLODWORD(result), a2, 2);
		return sub_1407EFD48((__int64)"fmodf", 22, -4194304, 1, 8, 0x21u, v17, v18, 2);
	}
	if (((COERCE_UNSIGNED_INT64(a2) >> 52) & 0x7FF) != 2047)
	{
		if (((COERCE_UNSIGNED_INT64(result) >> 52) & 0x7FF) == 0 && ((COERCE_UNSIGNED_INT64(a2) >> 52) & 0x7FF) != 0)
			return result;
		v18 = a2;
		v17 = LODWORD(result);
		return sub_1407EFD48((__int64)"fmodf", 22, -4194304, 1, 8, 0x21u, v17, v18, 2);
	}
	if ((COERCE_UNSIGNED_INT64(a2) & 0xFFFFFFFFFFFFFi64) != 0)
		return sub_1407EFD48((__int64)"fmodf", 22, LODWORD(a2) | 0x400000, 1, 0, 0x21u, SLODWORD(result), a2, 2);
	return result;
}

