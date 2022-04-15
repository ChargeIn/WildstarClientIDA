//----- (000000014018E3E0) ----------------------------------------------------
__int64 __fastcall sub_14018E3E0(__int64 a1, unsigned __int16* a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rdi
	unsigned __int16* v5; // rbx
	__int64 v6; // rsi
	unsigned __int16 v7; // r9
	unsigned __int16 v8; // r11
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rdx
	__int64 v11; // rax
	unsigned __int16 v12; // r8
	unsigned __int16 v13; // cx
	unsigned __int64 v14; // rdx
	unsigned __int64 v15; // r8
	__int64 v16; // rax
	unsigned __int16 v17; // r10
	unsigned int v18; // ecx

	v3 = 0i64;
	v5 = a2;
	if (!a3)
		return 0i64;
	v6 = a1 - (_QWORD)a2;
	while (1)
	{
		v7 = *(unsigned __int16*)((char*)v5 + v6);
		if (v7 >= 0x80u)
		{
			v9 = 0i64;
			v10 = 977i64;
			while (1)
			{
				v11 = v9 + ((v10 - v9) >> 1);
				v12 = word_140A41A80[v11];
				if (v7 >= v12)
				{
					if (v7 <= v12)
					{
						v8 = word_140A40AF0[v11];
						goto LABEL_14;
					}
					v9 = v11 + 1;
				}
				else
				{
					v10 = v9 + ((v10 - v9) >> 1);
				}
				if (v9 >= v10)
					goto LABEL_12;
			}
		}
		if ((unsigned __int16)(v7 - 65) > 0x19u)
			LABEL_12:
		v8 = *(unsigned __int16*)((char*)v5 + v6);
		else
			v8 = v7 + 32;
	LABEL_14:
		v13 = *v5;
		if (*v5 >= 0x80u)
		{
			v14 = 0i64;
			v15 = 977i64;
			while (1)
			{
				v16 = v14 + ((v15 - v14) >> 1);
				v17 = word_140A41A80[v16];
				if (v13 >= v17)
				{
					if (v13 <= v17)
					{
						v13 = word_140A40AF0[v16];
						goto LABEL_25;
					}
					v14 = v16 + 1;
				}
				else
				{
					v15 = v14 + ((v15 - v14) >> 1);
				}
				if (v14 >= v15)
					goto LABEL_25;
			}
		}
		if ((unsigned __int16)(v13 - 65) <= 0x19u)
			v13 += 32;
	LABEL_25:
		v18 = v8 - v13;
		if (v18)
			return v18;
		if (v7)
		{
			++v3;
			++v5;
			if (v3 < a3)
				continue;
		}
		return 0i64;
	}
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

