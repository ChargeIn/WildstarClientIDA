//----- (0000000140934E10) ----------------------------------------------------
float __fastcall sub_140934E10(float a1)
{
	double v1; // xmm4_8
	unsigned __int64 v2; // rax
	unsigned __int64 v3; // rcx
	double v4; // xmm5_8
	float v6; // xmm6_4
	double v7; // xmm5_8

	v1 = a1;
	v2 = fabs(a1);
	v3 = COERCE_UNSIGNED_INT64(a1) & 0x8000000000000000ui64;
	if (COERCE__INT64(a1) < 0)
		v1 = -v1;
	if (v2 < 0x3FDC000000000000i64)
	{
		v4 = 0.0;
	LABEL_19:
		v7 = v4
			- (((v1 * v1 * 0.004706779342861492 + 0.1923245464021086) * (v1 * v1) + 0.2965285988192392)
				* (v1
					* v1
					* v1)
				/ ((v1 * v1 * 0.2993096999596597 + 1.110724999953995) * (v1 * v1) + 0.8895857968624323)
				- v1);
		if (v3)
			return -v7;
		return v7;
	}
	if (v2 < 0x3FE6000000000000i64)
	{
		v4 = 0.4636476090008061;
		v1 = (v1 * 2.0 - 1.0) / (v1 + 2.0);
		goto LABEL_19;
	}
	if (v2 < 0x3FF3000000000000i64)
	{
		v4 = 0.7853981633974483;
		v1 = (v1 - 1.0) / (v1 + 1.0);
		goto LABEL_19;
	}
	if (v2 < 0x4003800000000000i64)
	{
		v4 = 0.9827937232473291;
		v1 = (v1 - 1.5) / (v1 * 1.5 + 1.0);
		goto LABEL_19;
	}
	if (v2 > 0x7FF0000000000000i64)
		return sub_1407EFD48((__int64)"atanf", 15, LODWORD(a1) | 0x400000, 1, 0, 0x21u, SLODWORD(a1), 0.0, 1);
	if (v1 <= 5.512405943901487e18)
	{
		v4 = 1.570796326794897;
		v1 = -1.0 / v1;
		goto LABEL_19;
	}
	if (v3)
		v6 = -*(double*)&qword_140C5F4C8;
	else
		v6 = *(double*)&qword_140C5F4C8;
	sub_1407F662C(32);
	return v6;
}
// 140C5F4C8: using guessed type __int64 qword_140C5F4C8;

