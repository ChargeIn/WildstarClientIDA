//----- (000000014010D990) ----------------------------------------------------
__int64* __fastcall sub_14010D990(__int64* a1, __int64 a2)
{
	__int64 v2; // rsi
	int* v4; // rdx
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	*a1 = a2;
	v2 = (__int64)(a1 + 9);
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	a1[8] = 0i64;
	sub_14010B5A0(a1 + 9, a2, (int*)L"DefaultSounds");
	v4 = (int*)a1[7];
	v6 = v2;
	if (v4 == (int*)a1[8])
	{
		sub_1400B9430(a1 + 5, v4, &v6);
		return a1;
	}
	else
	{
		if (v4)
			*(_QWORD*)v4 = v2;
		a1[7] += 8i64;
		return a1;
	}
}
// 140A1B570: using guessed type wchar_t aDefaultsounds[14];

