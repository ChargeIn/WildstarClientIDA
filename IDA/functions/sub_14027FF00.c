//----- (000000014027FF00) ----------------------------------------------------
_DWORD* __fastcall sub_14027FF00(_DWORD* a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
	__int64 v7; // r11
	_DWORD* result; // rax
	_DWORD* v9; // r9
	_DWORD* v10; // r8
	_DWORD* v11; // r11
	__int64 v12; // rdx

	v7 = a4;
	if (a2 != 1 || a3 || a4 || a5 != 1 || a6 || a7)
	{
		v9 = (_DWORD*)((char*)&unk_140AE8040 + 4 * a3);
		v10 = (_DWORD*)(0x140000000i64 + 4i64 * a2 + 11436096);
		v11 = &dword_140AE8090[v7];
		result = a1 + 1853;
		v12 = 4i64;
		do
		{
			*(result - 1) = 1;
			result += 8;
			*(result - 8) = *v10;
			*(result - 7) = *v9;
			*(result - 6) = *v11;
			*(result - 5) = *(_DWORD*)(0x140000000i64 + 4i64 * a5 + 11436136);
			*(result - 4) = *(_DWORD*)(0x140000000i64 + 4i64 * a6 + 11436136);
			*(result - 3) = dword_140AE8090[a7];
			--v12;
		} while (v12);
		a1[1794] |= 4u;
	}
	else
	{
		result = 0i64;
		a1[1852] = 0;
		a1[1860] = 0;
		a1[1868] = 0;
		a1[1876] = 0;
		a1[1794] |= 4u;
	}
	return result;
}
// 140AE8090: using guessed type _DWORD dword_140AE8090[8];

