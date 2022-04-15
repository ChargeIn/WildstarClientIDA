#include "../winhttp.h"

//----- (00000001401B2410) ----------------------------------------------------
void __fastcall sub_1401B2410(_QWORD* a1, __int64 a2)
{
	unsigned __int64 i; // r10
	unsigned __int16 v5; // cx
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	unsigned __int16 v9; // r9

	for (i = 0i64; i < a1[1]; ++i)
	{
		v5 = *(_WORD*)(*a1 + 2 * i);
		if (v5 >= 0x80u)
		{
			v6 = 0i64;
			v7 = 977i64;
			while (1)
			{
				v8 = v6 + ((v7 - v6) >> 1);
				v9 = word_140A41A80[v8];
				if (v5 >= v9)
				{
					if (v5 <= v9)
					{
						v5 = word_140A40AF0[v8];
						goto LABEL_13;
					}
					v6 = v8 + 1;
				}
				else
				{
					v7 = v6 + ((v7 - v6) >> 1);
				}
				if (v6 >= v7)
					goto LABEL_13;
			}
		}
		if ((unsigned __int16)(v5 - 65) <= 0x19u)
			v5 += 32;
	LABEL_13:
		*(_WORD*)(a2 + 2 * i) = v5;
	}
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

