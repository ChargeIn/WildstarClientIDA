//----- (0000000140346580) ----------------------------------------------------
__m128 __fastcall sub_140346580(__int64 a1, int a2)
{
	int v4; // ecx
	int v5; // ecx
	__int128 v6; // xmm4
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 2352))
		return (__m128)0x3F800000u;
	v4 = 0;
	v7 = 0i64;
	if (a2)
	{
		if (a2 != 1)
			goto LABEL_8;
		v5 = *(_DWORD*)(a1 + 104);
	}
	else
	{
		v5 = dword_140C10F20;
	}
	sub_140881810(v5, &v7);
	v4 = v7;
LABEL_8:
	if (!v4)
		return (__m128)0x3F800000u;
	v6 = 0i64;
	*(float*)&v6 = fmaxf(0.0, fminf((float)SHIDWORD(v7) / (float)v4, 1.0));
	return (__m128)v6;
}
// 140C10F20: using guessed type int dword_140C10F20;

