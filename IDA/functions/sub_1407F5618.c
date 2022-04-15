//----- (00000001407F5618) ----------------------------------------------------
__int64 __fastcall sub_1407F5618(int a1, void* a2)
{
	__int64 v3; // rsi
	__int64 v4; // rdi
	int v5; // ecx
	DWORD v6; // ecx

	if (a1 >= 0 && a1 < (unsigned int)dword_140DC523C)
	{
		v3 = (__int64)a1 >> 5;
		v4 = 88i64 * (a1 & 0x1F);
		if (*(_QWORD*)(v4 + qword_140C60410[v3]) == -1i64)
		{
			if (dword_140C5FB30 == 1)
			{
				if (!a1)
				{
					v6 = -10;
					goto LABEL_11;
				}
				v5 = a1 - 1;
				if (!v5)
				{
					v6 = -11;
					goto LABEL_11;
				}
				if (v5 == 1)
				{
					v6 = -12;
				LABEL_11:
					SetStdHandle(v6, a2);
				}
			}
			*(_QWORD*)(v4 + qword_140C60410[v3]) = a2;
			return 0i64;
		}
	}
	*(_DWORD*)sub_1407DE1B0() = 9;
	*(_DWORD*)sub_1407DE140() = 0;
	return 0xFFFFFFFFi64;
}
// 140C5FB30: using guessed type int dword_140C5FB30;
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

