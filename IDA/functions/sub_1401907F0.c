//----- (00000001401907F0) ----------------------------------------------------
__int64 __fastcall sub_1401907F0(__int64 a1, char* a2, __int64 a3)
{
	int v3; // r9d
	unsigned int v4; // r10d
	__int64 v5; // rcx
	signed __int64 v6; // r9
	__int16 v7; // ax
	__int64 result; // rax

	v3 = 0;
	if ((unsigned __int64)(a3 - 1) > 0x7FFFFFFE)
		v3 = -2147024809;
	if (v3 < 0)
	{
		result = (unsigned int)v3;
		if (a3)
			*(_WORD*)a2 = 0;
	}
	else
	{
		v4 = 0;
		if (a3)
		{
			v5 = 2147483646 - a3;
			v6 = (char*)L"(unknown)" - a2;
			while (v5 + a3)
			{
				v7 = *(_WORD*)&a2[v6];
				if (!v7)
					break;
				*(_WORD*)a2 = v7;
				a2 += 2;
				if (!--a3)
				{
					*((_WORD*)a2 - 1) = 0;
					return 2147942522i64;
				}
			}
		}
		else
		{
			a2 -= 2;
			v4 = -2147024774;
		}
		result = v4;
		*(_WORD*)a2 = 0;
	}
	return result;
}
// 14019085A: conditional instruction was optimized away because r8.8!=0
// 140A41A68: using guessed type wchar_t aUnknown_17[10];

