//----- (0000000140354300) ----------------------------------------------------
_QWORD* __fastcall sub_140354300(_QWORD* a1)
{
	__int64 v2; // rdi
	int i; // esi

	v2 = (__int64)(a1 + 36);
	a1[1] = 0i64;
	*a1 = 0i64;
	a1[3] = 0i64;
	a1[2] = 0i64;
	a1[14] = 0i64;
	a1[13] = 0i64;
	a1[27] = 0i64;
	a1[26] = 0i64;
	a1[29] = 0i64;
	a1[28] = 0i64;
	a1[31] = 0i64;
	a1[30] = 0i64;
	a1[33] = 0i64;
	a1[32] = 0i64;
	for (i = 15; i >= 0; --i)
	{
		sub_1400037C0(v2, 8i64, 6, (__int64(__fastcall*)(__int64))sub_14036F910);
		v2 += 64i64;
	}
	a1[162] = 0i64;
	a1[163] = 0i64;
	a1[164] = 0i64;
	a1[165] = 0i64;
	return a1;
}

