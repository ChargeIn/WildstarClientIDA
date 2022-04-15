//----- (000000014079B9E0) ----------------------------------------------------
__int64 __fastcall sub_14079B9E0(__int64 a1)
{
	unsigned __int64 v1; // rdi
	__int64 v2; // r10
	unsigned __int64 v3; // rbx
	unsigned __int16* v4; // r11
	unsigned __int16 v5; // cx
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	unsigned __int16 v9; // r9

	v1 = *(_QWORD*)(a1 + 8);
	v2 = 0i64;
	v3 = 0i64;
	if (!v1)
		return 0i64;
	v4 = *(unsigned __int16**)a1;
	do
	{
		v5 = *v4;
		if (!*v4)
			break;
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
						goto LABEL_15;
					}
					v6 = v8 + 1;
				}
				else
				{
					v7 = v6 + ((v7 - v6) >> 1);
				}
				if (v6 >= v7)
					goto LABEL_15;
			}
		}
		if ((unsigned __int16)(v5 - 65) <= 0x19u)
			v5 += 32;
	LABEL_15:
		++v3;
		++v4;
		v2 = v5 + 2860486313i64 * v2;
	} while (v3 < v1);
	return v2;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

