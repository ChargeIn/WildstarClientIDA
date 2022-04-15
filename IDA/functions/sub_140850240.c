//----- (0000000140850240) ----------------------------------------------------
__int64 __fastcall sub_140850240(__int64* a1, int** a2)
{
	unsigned __int8 v4; // bl
	unsigned int v5; // esi
	__int64 v6; // rax
	__int64 v7; // r14
	unsigned __int64 v9; // rbx

	v4 = *(_BYTE*)*a2;
	*a2 = (int*)((char*)*a2 + 1);
	if (v4)
	{
		v5 = (v4 + 4) & 0xFFFFFFFC;
		v6 = sub_1408819F0(dword_140C10F20, v5 + 8 * v4);
		v7 = v6;
		if (!v6)
			return 52i64;
		*(_BYTE*)v6 = v4;
		sub_1407DB590((int*)(v6 + 1), *a2, v4);
		*a2 = (int*)((char*)*a2 + v4);
		v9 = 8i64 * v4;
		sub_1407DB590((int*)(v7 + v5), *a2, v9);
		*a2 = (int*)((char*)*a2 + v9);
		*a1 = v7;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

