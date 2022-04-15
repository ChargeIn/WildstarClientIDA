//----- (0000000140854180) ----------------------------------------------------
__int64 __fastcall sub_140854180(_QWORD* a1, unsigned int a2, char a3)
{
	__int64 v4; // rcx
	__int64 v6; // rsi
	__int64 v7; // rax

	v4 = a1[6];
	v6 = a2;
	if (v4)
	{
	LABEL_7:
		*(_BYTE*)(8 * v6 + v4) = a3;
		if (a3)
		{
			if (*(_DWORD*)(8 * v6 + a1[6] + 4))
				sub_140853F00(a1, v6);
		}
		return 1i64;
	}
	if (a3)
	{
		v7 = sub_1408819F0(dword_140C10F20, 36i64);
		a1[6] = v7;
		if (v7)
		{
			*(_WORD*)v7 = 0;
			*(_DWORD*)(v7 + 4) = 0;
			*(_WORD*)(v7 + 8) = 0;
			*(_DWORD*)(v7 + 12) = 0;
			*(_WORD*)(v7 + 16) = 0;
			*(_DWORD*)(v7 + 20) = 0;
			*(_WORD*)(v7 + 24) = 0;
			*(_DWORD*)(v7 + 28) = 0;
			*(_BYTE*)(v7 + 32) = 0;
		}
		v4 = a1[6];
		if (!v4)
			return 52i64;
		goto LABEL_7;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

