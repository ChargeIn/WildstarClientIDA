//----- (0000000140894DA0) ----------------------------------------------------
__int64 __fastcall sub_140894DA0(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
	__int64 v4; // rsi
	__int64 v5; // rdx
	__int64 v9; // rax

	v4 = a2;
	v5 = *(_QWORD*)(a1 + 224);
	if (v5)
	{
		*(_QWORD*)(a1 + 232) = v5;
		sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)(a1 + 224) = 0i64;
		*(_QWORD*)(a1 + 232) = 0i64;
		*(_DWORD*)(a1 + 240) = 0;
	}
	*(_DWORD*)(a1 + 216) = a4;
	if (!(_DWORD)v4)
		return 1i64;
	v9 = sub_1408819F0(dword_140C10F20, 24 * v4);
	*(_QWORD*)(a1 + 224) = v9;
	*(_QWORD*)(a1 + 232) = v9;
	if (v9)
	{
		*(_DWORD*)(a1 + 240) = v4;
		do
		{
			sub_140893DF0(a1, a3);
			a3 += 40i64;
			--v4;
		} while (v4);
		return 1i64;
	}
	return 2i64;
}
// 140894E2B: conditional instruction was optimized away because esi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

