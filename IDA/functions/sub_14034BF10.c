//----- (000000014034BF10) ----------------------------------------------------
__int64 __fastcall sub_14034BF10(__int64* a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // rcx
	int v5; // eax
	unsigned int v6; // ecx
	__m128i v7[33]; // [rsp+20h] [rbp-228h] BYREF

	result = sub_14001B370(v7, 260i64, L"%s.bin", a2);
	if ((int)result >= 0)
	{
		v5 = sub_1401B6D00(v4, v7, a1);
		v6 = 0;
		if (v5 < 0)
			return (unsigned int)v5;
		return v6;
	}
	return result;
}
// 14034BF53: variable 'v4' is possibly undefined
// 140AF4830: using guessed type wchar_t aSBin[7];
// 14034BF10: using guessed type __m128i var_228[33];

