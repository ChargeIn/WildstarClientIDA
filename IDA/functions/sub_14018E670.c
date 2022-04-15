//----- (000000014018E670) ----------------------------------------------------
unsigned __int16* __fastcall sub_14018E670(unsigned __int16* a1)
{
	unsigned __int16 v2; // ax
	unsigned __int16 v3; // dx
	int v4; // r10d
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // r8
	__int64 v7; // rax
	unsigned __int16 v8; // r9

	v2 = sub_140056430(0x3Bu);
	v3 = *a1;
	v4 = v2;
	if (!*a1)
		return 0i64;
	while (1)
	{
		if (v3 >= 0x80u)
		{
			v5 = 0i64;
			v6 = 977i64;
			while (1)
			{
				v7 = v5 + ((v6 - v5) >> 1);
				v8 = word_140A41A80[v7];
				if (v3 >= v8)
				{
					if (v3 <= v8)
					{
						v3 = word_140A40AF0[v7];
						goto LABEL_13;
					}
					v5 = v7 + 1;
				}
				else
				{
					v6 = v5 + ((v6 - v5) >> 1);
				}
				if (v5 >= v6)
					goto LABEL_13;
			}
		}
		if ((unsigned __int16)(v3 - 65) <= 0x19u)
			v3 += 32;
	LABEL_13:
		if (v3 == v4)
			return a1;
		v3 = a1[1];
		++a1;
		if (!v3)
			return 0i64;
	}
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

