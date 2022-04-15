//----- (00000001405592F0) ----------------------------------------------------
__int64 __fastcall sub_1405592F0(__m128* a1, __int64 a2, int a3, __int64 a4, __int32 a5, int a6, int a7)
{
	int v10; // eax
	int v12; // eax
	__int32 v13; // eax

	if (a7)
	{
		v10 = dword_140C4D2A0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D2A0)
			v10 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&dword_140C4D2B0 + v10))
			return 2147500037i64;
	}
	else
	{
		v12 = dword_140C4D260;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D260)
			v12 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&dword_140C4D270 + v12))
			return 2147500037i64;
	}
	if (a3 >= 36 || !*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	sub_1405598D0((__int64)a1);
	a1->m128_i32[1] = 2;
	v13 = *(_DWORD*)(a2 + 8);
	a1[3].m128_i32[3] = a5;
	a1->m128_i32[3] = v13;
	a1[5].m128_i32[1] = a3;
	sub_140559920(a1);
	return 0i64;
}
// 140C4D260: using guessed type int dword_140C4D260;
// 140C4D270: using guessed type int dword_140C4D270;
// 140C4D2A0: using guessed type int dword_140C4D2A0;
// 140C4D2B0: using guessed type int dword_140C4D2B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

