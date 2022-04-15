//----- (000000014033FD50) ----------------------------------------------------
__int64 __fastcall sub_14033FD50(__int64 a1, int a2, _DWORD* a3, char* a4)
{
	signed __int64 v4; // rdx
	__int64 v5; // rcx
	__int16 v6; // ax
	__int64 result; // rax

	*a3 = a2;
	v4 = (char*)L"Init.bnk" - a4;
	a3[1] = 0;
	v5 = 32i64;
	while (v5 != -2147483614)
	{
		v6 = *(_WORD*)&a4[v4];
		if (!v6)
			break;
		*(_WORD*)a4 = v6;
		a4 += 2;
		if (!--v5)
		{
			result = 0i64;
			*((_WORD*)a4 - 1) = 0;
			return result;
		}
	}
	*(_WORD*)a4 = 0;
	return 0i64;
}
// 14033FDA1: conditional instruction was optimized away because rcx.8!=0
// 140AF4420: using guessed type wchar_t aInitBnk_0[9];

