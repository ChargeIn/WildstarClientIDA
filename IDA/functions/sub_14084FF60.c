//----- (000000014084FF60) ----------------------------------------------------
__int64 __fastcall sub_14084FF60(_QWORD* a1, int a2, unsigned int a3)
{
	__int64 v3; // r9
	__int64 v4; // rsi
	__int64 v7; // rax
	__int64 i; // rcx

	v3 = a1[19];
	v4 = a3;
	if (!v3)
	{
		if (!a2)
			return 1i64;
		v7 = sub_1408819F0(dword_140C10F20, 16i64);
		a1[19] = v7;
		if (v7)
		{
			for (i = 0i64; i < 16; i += 4i64)
				*(_DWORD*)(i + v7) = 0;
		}
		v3 = a1[19];
		if (!v3)
			return 52i64;
	}
	*(_DWORD*)(v3 + 4 * v4) = a2;
	(*(void(__fastcall**)(_QWORD*))(*a1 + 408i64))(a1);
	return 1i64;
}
// 14084FFE0: conditional instruction was optimized away because r9.8==0
// 140C10F20: using guessed type int dword_140C10F20;

