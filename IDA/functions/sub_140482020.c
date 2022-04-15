//----- (0000000140482020) ----------------------------------------------------
_DWORD* __fastcall sub_140482020(__int64 a1, __int64 a2, _DWORD* a3)
{
	_DWORD* v4; // rsi
	__int64 v5; // rdx
	__int64 v6; // rbp
	int** v7; // rbx
	__int64 v8; // rdi
	int v9; // eax

	v4 = a3;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x6666666666666667i64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 4);
	if (v6 > 0)
	{
		v7 = (int**)(a2 + 16);
		v8 = (__int64)(a3 + 2);
		do
		{
			v9 = *((_DWORD*)v7 - 14);
			v7 -= 5;
			v4 -= 10;
			*v4 = v9;
			v8 -= 40i64;
			if (v7 - 1 != (int**)v8)
				sub_14001C480(v8, *v7, v7[1]);
			--v6;
		} while (v6 > 0);
	}
	return v4;
}

