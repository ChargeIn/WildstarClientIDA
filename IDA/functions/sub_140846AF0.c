//----- (0000000140846AF0) ----------------------------------------------------
__m128* __fastcall sub_140846AF0(__m128* a1)
{
	sub_140846BB0((__int64)a1);
	a1[29].m128_i32[3] = 4;
	a1->m128_u64[0] = (unsigned __int64)off_1409A30C0;
	sub_140846A10((__int64)&a1[30], (__int64)a1);
	a1[44].m128_u64[0] = (unsigned __int64)off_1409A2FC0;
	a1[44].m128_u64[1] = 0i64;
	sub_1408717E0(a1 + 45);
	a1[58].m128_u64[0] = 0i64;
	a1[58].m128_u64[1] = 0i64;
	a1[59].m128_u64[0] = 0i64;
	a1[59].m128_u64[1] = 0i64;
	a1[60].m128_u64[1] = 0i64;
	a1[60].m128_u64[0] = (unsigned __int64)off_1409A2FC0;
	sub_1408717E0(a1 + 61);
	return a1;
}
// 1409A2FC0: using guessed type __int64 (__fastcall *off_1409A2FC0[17])();
// 1409A30C0: using guessed type __int64 (__fastcall *off_1409A30C0[15])();

