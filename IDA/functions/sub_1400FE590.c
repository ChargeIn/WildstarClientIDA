//----- (00000001400FE590) ----------------------------------------------------
_BOOL8 __fastcall sub_1400FE590(int* a1)
{
	__m128i* v1; // rbx
	__int64 v2; // rcx
	__int64 v3; // r8
	bool v4; // di
	__int64 v5; // rcx
	__int64 v6; // r8
	__int64 v8; // [rsp+30h] [rbp-658h] BYREF
	__m128i* v9; // [rsp+38h] [rbp-650h]
	_WORD v10[8]; // [rsp+50h] [rbp-638h] BYREF
	_WORD v11[256]; // [rsp+60h] [rbp-628h] BYREF
	__int16 v12[256]; // [rsp+260h] [rbp-428h] BYREF
	__m128i v13[33]; // [rsp+460h] [rbp-228h] BYREF

	sub_1400FE2E0(&v8, a1);
	v1 = v9;
	if ((unsigned int)sub_1401B58D0(v2, v9, v3))
	{
		v4 = 1;
	}
	else
	{
		sub_1407DF8DC(v1->m128i_i8, v10, v12, v11, 0i64);
		sub_1407DFBF8(v13, 0x104ui64, v10, v12, v11, L".tex");
		v4 = (unsigned int)sub_1401B58D0(v5, v13, v6) != 0;
	}
	if (v1)
		sub_14018B900((__int64)v1, 0);
	return v4;
}
// 1400FE5C4: variable 'v2' is possibly undefined
// 1400FE5C4: variable 'v3' is possibly undefined
// 1400FE632: variable 'v5' is possibly undefined
// 1400FE632: variable 'v6' is possibly undefined
// 140A1A9C8: using guessed type wchar_t aTex[5];
// 1400FE590: using guessed type _WORD var_628[256];
// 1400FE590: using guessed type __int16 var_428[256];
// 1400FE590: using guessed type _WORD var_638[8];
// 1400FE590: using guessed type __m128i var_228[33];

