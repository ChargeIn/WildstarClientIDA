//----- (0000000140918870) ----------------------------------------------------
__int64 __fastcall sub_140918870(int a1, char* a2, int a3, _QWORD* a4, int a5)
{
	char* v6; // rsi
	char* v7; // r11
	unsigned __int64 v9; // rdi
	signed __int64 v10; // r11
	unsigned __int16 v11; // ax
	int v12; // r9d
	int v13; // r10d
	unsigned __int64 v14; // r9
	__int16 v15; // cx
	__int16 v16; // ax

	v6 = a2;
	v7 = (char*)(a4[19] + 2i64 * *(int*)(a4[2] + 4i64 * a1));
	if (a3 < 0)
		return 0xFFFFFFFFi64;
	if (!a5)
	{
		if (a3 > 0)
		{
			v14 = a4[20];
			while (1)
			{
				--a3;
				if ((unsigned __int64)a2 >= v14)
					break;
				v15 = *(_WORD*)v7;
				v16 = *(_WORD*)a2;
				a2 += 2;
				v7 += 2;
				if (v15 != v16)
					return 0xFFFFFFFFi64;
				if (a3 <= 0)
					return (unsigned int)((a2 - v6) >> 1);
			}
			return 4294967294i64;
		}
		return (unsigned int)((a2 - v6) >> 1);
	}
	if (a3 <= 0)
		return (unsigned int)((a2 - v6) >> 1);
	v9 = a4[20];
	v10 = v7 - a2;
	while (1)
	{
		--a3;
		if ((unsigned __int64)a2 >= v9)
			break;
		v11 = *(_WORD*)&a2[v10];
		LOWORD(v12) = *(_WORD*)a2;
		if (v11 > 0xFFu)
			v13 = v11;
		else
			v13 = *(unsigned __int8*)(a4[8] + v11);
		if ((unsigned __int16)v12 > 0xFFu)
			v12 = (unsigned __int16)v12;
		else
			v12 = *(unsigned __int8*)(a4[8] + (unsigned __int16)v12);
		if (v13 != v12)
			return 0xFFFFFFFFi64;
		a2 += 2;
		if (a3 <= 0)
			return (unsigned int)((a2 - v6) >> 1);
	}
	return 4294967294i64;
}

