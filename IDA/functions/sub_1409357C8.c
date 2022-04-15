//----- (00000001409357C8) ----------------------------------------------------
void __fastcall sub_1409357C8(double a1, double a2)
{
	unsigned __int64 v2; // r8
	unsigned __int64 v3; // r11
	__int64 v4; // rcx
	__int64 v5; // rdx
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // rax
	double v9; // xmm7_8
	double v10; // xmm8_8
	unsigned int v11; // r11d
	int v12; // r10d
	double v13; // xmm10_8
	__int64 v14; // rcx
	double v15; // xmm0_8
	char v16; // [rsp+20h] [rbp-98h]
	__int64 v17; // [rsp+30h] [rbp-88h]
	__int64 v18; // [rsp+38h] [rbp-80h]

	v2 = *(_QWORD*)&a2 & 0x7FFFFFFFFFFFFFFFi64;
	v3 = *(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64;
	v4 = (*(_QWORD*)&a1 >> 52) & 0x7FFi64;
	v5 = (*(_QWORD*)&a2 >> 52) & 0x7FFi64;
	if (((*(_QWORD*)&a1 >> 52) & 0x7FF) == 0)
		goto LABEL_6;
	if (((*(_QWORD*)&a1 >> 52) & 0x7FF) == 2047)
		goto LABEL_7;
	if ((unsigned int)(v5 - 1) > 0x7FD)
	{
	LABEL_6:
		if (((*(_QWORD*)&a1 >> 52) & 0x7FF) != 2047)
		{
			if (((*(_QWORD*)&a2 >> 52) & 0x7FF) == 2047)
			{
				if ((*(_QWORD*)&a2 & 0xFFFFFFFFFFFFFi64) == 0)
					return;
				v18 = *(_QWORD*)&a2;
				v17 = *(_QWORD*)&a1;
				v16 = 0;
				v6 = *(_QWORD*)&a2 | 0x8000000000000i64;
			}
			else
			{
				if (v3)
				{
					if (*(double*)&v2 != 0.0)
					{
						if (((*(_QWORD*)&a1 >> 52) & 0x7FF) == 0)
						{
							v7 = *(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64;
							if (v3 < 0x10000000000000i64)
							{
								do
								{
									v7 *= 2i64;
									LODWORD(v4) = v4 - 1;
								} while (v7 < 0x10000000000000i64);
							}
						}
						if (((*(_QWORD*)&a2 >> 52) & 0x7FF) == 0)
						{
							v8 = *(_QWORD*)&a2 & 0x7FFFFFFFFFFFFFFFi64;
							if (v2 < 0x10000000000000i64)
							{
								do
								{
									v8 *= 2i64;
									LODWORD(v5) = v5 - 1;
								} while (v8 < 0x10000000000000i64);
							}
						}
						goto LABEL_24;
					}
				}
				else if (*(double*)&v2 != 0.0)
				{
					return;
				}
				v18 = *(_QWORD*)&a2;
				v17 = *(_QWORD*)&a1;
				v6 = 0xFFF8000000000000ui64;
				v16 = 8;
			}
		LABEL_9:
			sub_1407EFC20((__int64)"fmod", 22, v6, 1, v16, 0x21u, v17, v18, 2);
			return;
		}
	LABEL_7:
		v18 = *(_QWORD*)&a2;
		v17 = *(_QWORD*)&a1;
		if ((*(_QWORD*)&a1 & 0xFFFFFFFFFFFFFi64) == 0)
		{
			sub_1407EFC20((__int64)"fmod", 22, 0xFFF8000000000000ui64, 1, 8, 0x21u, *(__int64*)&a1, *(__int64*)&a2, 2);
			return;
		}
		v16 = 0;
		v6 = *(_QWORD*)&a1 | 0x8000000000000i64;
		goto LABEL_9;
	}
	if (v3 == v2)
		return;
LABEL_24:
	*(_QWORD*)&v9 = *(_QWORD*)&a1 & 0x7FFFFFFFFFFFFFFFi64;
	*(_QWORD*)&v10 = *(_QWORD*)&a2 & 0x7FFFFFFFFFFFFFFFi64;
	if (v3 < v2)
		return;
	v11 = _mm_getcsr();
	if ((int)v4 > (int)v5)
	{
		v12 = ((int)v4 - (int)v5) / 52;
		if (v12)
		{
			v10 = COERCE_DOUBLE((52 * v12 / 3 + 1023i64) << 52)
				* *(double*)&v2
				* COERCE_DOUBLE(((52 * v12 - 52 * v12 / 3) / 2 + 1023i64) << 52)
				* COERCE_DOUBLE((52 * v12 - (52 * v12 - 52 * v12 / 3) / 2 - 52 * v12 / 3 + 1023i64) << 52);
			v13 = 2.220446049250313e-16;
			goto LABEL_30;
		}
	}
	else
	{
		v12 = 0;
	}
	v13 = 1.0;
LABEL_30:
	if (v12 > 0)
	{
		v14 = (unsigned int)v12;
		do
		{
			v15 = (double)(int)(v9 / v10);
			v9 = v9
				- (v9
					- v15 * v10)
				- v15 * v10
				- (COERCE_DOUBLE(*(_QWORD*)&v15 & 0xFFFFFFFFF8000000ui64)
					* COERCE_DOUBLE(*(_QWORD*)&v10 & 0xFFFFFFFFF8000000ui64)
					- v15 * v10
					+ (v15 - COERCE_DOUBLE(*(_QWORD*)&v15 & 0xFFFFFFFFF8000000ui64))
					* COERCE_DOUBLE(*(_QWORD*)&v10 & 0xFFFFFFFFF8000000ui64)
					+ COERCE_DOUBLE(*(_QWORD*)&v15 & 0xFFFFFFFFF8000000ui64)
					* (v10 - COERCE_DOUBLE(*(_QWORD*)&v10 & 0xFFFFFFFFF8000000ui64))
					+ (v15 - COERCE_DOUBLE(*(_QWORD*)&v15 & 0xFFFFFFFFF8000000ui64))
					* (v10 - COERCE_DOUBLE(*(_QWORD*)&v10 & 0xFFFFFFFFF8000000ui64)))
				+ v9
				- v15 * v10;
			if (v9 < 0.0)
				v9 = v9 + v10;
			v10 = v10 * v13;
			--v14;
		} while (v14);
	}
	_mm_setcsr(v11);
}

