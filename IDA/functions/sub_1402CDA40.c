//----- (00000001402CDA40) ----------------------------------------------------
__int64 __fastcall sub_1402CDA40(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // rax
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v6[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, __int64))(v2 + 64))(a1, v6, 5i64);
	if (a2 < a1[34])
		return a1[33] + 384 * a2;
	else
		return 0i64;
}
// 1402CDA40: using guessed type int var_18[6];

