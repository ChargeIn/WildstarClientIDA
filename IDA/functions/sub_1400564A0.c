#include "../winhttp.h"

//----- (00000001400564A0) ----------------------------------------------------
__int64 __fastcall sub_1400564A0(unsigned __int16* a1)
{
	unsigned __int16 v1; // dx
	__int64 v2; // r10
	unsigned __int16* i; // r11
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // r8
	__int64 v6; // rax
	unsigned __int16 v7; // r9
	__int64 v8; // rcx

	v1 = *a1;
	v2 = 0i64;
	for (i = a1; *i; v2 = v8 + 2860486313i64 * v2)
	{
		if (v1 >= 0x80u)
		{
			v4 = 0i64;
			v5 = 977i64;
			while (1)
			{
				v6 = v4 + ((v5 - v4) >> 1);
				v7 = word_140A41A80[v6];
				if (v1 >= v7)
				{
					if (v1 <= v7)
					{
						v1 = word_140A40AF0[v6];
						goto LABEL_13;
					}
					v4 = v6 + 1;
				}
				else
				{
					v5 = v4 + ((v5 - v4) >> 1);
				}
				if (v4 >= v5)
					goto LABEL_13;
			}
		}
		if ((unsigned __int16)(v1 - 65) <= 0x19u)
			v1 += 32;
	LABEL_13:
		++i;
		v8 = v1;
		v1 = *i;
	}
	return v2;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

