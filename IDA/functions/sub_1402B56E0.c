//----- (00000001402B56E0) ----------------------------------------------------
__int64 __fastcall sub_1402B56E0(_DWORD* a1, __int64 a2, _DWORD* a3)
{
	int v3; // r11d
	unsigned __int64 v4; // r10
	unsigned __int64 v6; // r9
	int* i; // rax
	int v8; // ecx
	bool v9; // zf
	int v10; // ecx

	v3 = a1[1];
	v4 = 0i64;
	v6 = 0i64;
	for (i = (int*)&unk_140C4086C; ; i += 10)
	{
		v8 = *i;
		if ((*i & v3) != 0)
		{
			if ((v8 & 4) != 0)
			{
				v9 = a1[2] == i[1];
			}
			else
			{
				v9 = (v8 & 0x20) == 0;
				v10 = i[2];
				if (v9)
				{
					if (a1[3] != v10 || a1[4] != i[3] || a1[5] != i[4] || a1[6] != i[5])
						goto LABEL_13;
					v9 = a1[7] == i[6];
				}
				else
				{
					v9 = a1[3] == v10;
				}
			}
			if (v9)
				break;
		}
	LABEL_13:
		v6 += 40i64;
		++v4;
		if (v6 >= 0x6E0)
			return 0i64;
	}
	if (v4 >= 0x2C)
		return 0i64;
	*a3 = *((_DWORD*)&unk_140C40860 + 10 * v4 + 1);
	return *((unsigned int*)&unk_140C40860 + 10 * v4);
}

