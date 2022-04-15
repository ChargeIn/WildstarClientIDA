//----- (00000001408FD190) ----------------------------------------------------
float __fastcall sub_1408FD190(float a1, float a2)
{
	unsigned __int64 v2; // rbx
	double v3; // xmm6_8
	double v4; // xmm7_8
	unsigned __int64 v5; // rbp
	double v6; // rdx
	unsigned __int64 v7; // rdi
	double v8; // rcx
	BOOL v9; // r15d
	BOOL v10; // r12d
	int v11; // r14d
	float v13; // xmm6_4
	char v14; // cl
	__int64 v15; // xmm0_8
	float v16; // xmm0_4
	double v17; // rax
	unsigned __int64 v18; // r8
	int v19; // ecx
	unsigned __int64 v20; // rax
	int v21; // edx
	double v22; // xmm0_8
	double v23; // xmm4_8
	int v24; // eax
	double v25; // xmm3_8
	double v26; // xmm0_8
	float v27; // [rsp+B0h] [rbp+8h]

	v2 = 0i64;
	v3 = a1;
	v4 = a2;
	v5 = COERCE_UNSIGNED_INT64(a2) & 0x8000000000000000ui64;
	v6 = fabs(a1);
	v7 = COERCE_UNSIGNED_INT64(a1) & 0x8000000000000000ui64;
	v8 = fabs(a2);
	v9 = *(_QWORD*)&v8 == 0x7FF0000000000000i64;
	v10 = *(_QWORD*)&v6 == 0x7FF0000000000000i64;
	v11 = ((COERCE_UNSIGNED_INT64(a1) >> 52) & 0x7FF) - ((COERCE_UNSIGNED_INT64(a2) >> 52) & 0x7FF);
	if (*(_QWORD*)&v8 > 0x7FF0000000000000ui64)
	{
		v27 = a2;
		return sub_1407EFD48((__int64)"atan2f", 16, LODWORD(v27) | 0x400000, 1, 0, 0x21u, SLODWORD(a2), a1, 2);
	}
	if (*(_QWORD*)&v6 > 0x7FF0000000000000ui64)
	{
		v27 = a1;
		return sub_1407EFD48((__int64)"atan2f", 16, LODWORD(v27) | 0x400000, 1, 0, 0x21u, SLODWORD(a2), a1, 2);
	}
	if (v6 == 0.0)
	{
		if (v5)
		{
			if (v7)
				v13 = -*(double*)&qword_140C1ABC0;
			else
				v13 = *(double*)&qword_140C1ABC0;
			v14 = 32;
			goto LABEL_12;
		}
		return v3;
	}
	if (v8 == 0.0)
	{
		if (v7)
		{
			v15 = qword_140C1ABC8;
		LABEL_16:
			v13 = -*(double*)&v15;
		LABEL_24:
			v14 = 32;
		LABEL_12:
			sub_1407F662C(v14);
			return v13;
		}
		sub_1407F662C(32);
	}
	if (v11 > 26)
	{
		v15 = qword_140C1ABC8;
		goto LABEL_20;
	}
	if (v11 < -13 && !v5)
	{
		if (v11 < -150)
		{
			if (v7)
				v13 = -0.0;
			else
				v13 = 0.0;
			v14 = 48;
			goto LABEL_12;
		}
		if (v11 >= -126)
		{
			return v3 / v4;
		}
		else
		{
			v17 = fabs(1.267650600228229e30 * v3 / v4);
			v18 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v3 / v4) & 0x8000000000000000ui64;
			v19 = ((*(_QWORD*)&v17 >> 52) & 0x7FF) - 100;
			if (v19 <= 0)
			{
				v20 = *(_QWORD*)&v17 & 0x800FFFFFFFFFFFFFui64 | 0x10000000000000i64;
				if (1 - v19 <= 54)
					v2 = ((v20 >> -(char)v19) & 1) + (v20 >> -(char)v19 >> 1);
			}
			else
			{
				v2 = *(_QWORD*)&v17 & 0x800FFFFFFFFFFFFFui64 | ((__int64)v19 << 52);
			}
			*(_QWORD*)&v3 = v18 | v2;
			if (((v18 | v2) & 0x7FF0000000000000i64) == 0)
				sub_1407F662C(48);
		}
		return v3;
	}
	if (v11 < -26 && v5)
	{
		v15 = qword_140C1ABC0;
		if (v7)
			goto LABEL_16;
		goto LABEL_22;
	}
	if (v10 && v9)
	{
		if (v5)
			v15 = qword_140C1ABD8;
		else
			v15 = qword_140C1ABD0;
	LABEL_20:
		if (v7)
		{
			v16 = -*(double*)&v15;
		LABEL_23:
			v13 = v16;
			goto LABEL_24;
		}
	LABEL_22:
		v16 = *(double*)&v15;
		goto LABEL_23;
	}
	if (v5)
		v4 = -v4;
	if (v7)
		v3 = -v3;
	v21 = 0;
	LOBYTE(v21) = v3 > v4;
	if (v3 > v4)
	{
		v22 = v4;
		v4 = v3;
		v3 = v22;
	}
	v23 = v3 / v4;
	if (v3 / v4 > 0.0625)
	{
		v24 = (int)(v23 * 256.0 + 0.5);
		v25 = (v3 * 256.0 - (double)v24 * v4) / ((double)v24 * v3 + v4 * 256.0);
		v23 = v25 + dbl_1409C80F0[v24 - 16];
		v26 = v25 * v25 * v25 * 0.333333333332241;
	LABEL_60:
		v23 = v23 - v26;
		goto LABEL_61;
	}
	if (v23 >= 0.0001)
	{
		v26 = (0.3333333333333317 - (0.1999999999939322 - v23 * v23 * 0.1428571356180717) * (v23 * v23)) * (v23 * v23 * v23);
		goto LABEL_60;
	}
LABEL_61:
	if (v21)
		v23 = *(double*)&qword_140C1ABC8 - v23;
	if (v5)
		v23 = *(double*)&qword_140C1ABC0 - v23;
	if (v7)
		return -v23;
	return v23;
}
// 1409C80F0: using guessed type double dbl_1409C80F0[241];
// 140C1ABC0: using guessed type __int64 qword_140C1ABC0;
// 140C1ABC8: using guessed type __int64 qword_140C1ABC8;
// 140C1ABD0: using guessed type __int64 qword_140C1ABD0;
// 140C1ABD8: using guessed type __int64 qword_140C1ABD8;

