//----- (000000014018E2C0) ----------------------------------------------------
__int64 __fastcall sub_14018E2C0(__int64 a1, unsigned __int16* a2)
{
	unsigned __int16* v2; // rbx
	__int64 v3; // rdi
	unsigned __int16 v4; // r8
	unsigned __int16 v5; // r11
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 v8; // rax
	unsigned __int16 v9; // r9
	unsigned __int16 v10; // cx
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // r9
	__int64 v13; // rax
	unsigned __int16 v14; // r10
	unsigned int v15; // ecx

	v2 = a2;
	v3 = a1 - (_QWORD)a2;
	while (1)
	{
		v4 = *(unsigned __int16*)((char*)v2 + v3);
		if (v4 >= 0x80u)
		{
			v6 = 0i64;
			v7 = 977i64;
			while (1)
			{
				v8 = v6 + ((v7 - v6) >> 1);
				v9 = word_140A41A80[v8];
				if (v4 >= v9)
				{
					if (v4 <= v9)
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
					goto LABEL_11;
			}
		}
		if ((unsigned __int16)(v4 - 65) > 0x19u)
			LABEL_11:
		v5 = *(unsigned __int16*)((char*)v2 + v3);
		else
			v5 = v4 + 32;
	LABEL_13:
		v10 = *v2;
		if (*v2 >= 0x80u)
		{
			v11 = 0i64;
			v12 = 977i64;
			while (1)
			{
				v13 = v11 + ((v12 - v11) >> 1);
				v14 = word_140A41A80[v13];
				if (v10 >= v14)
				{
					if (v10 <= v14)
					{
						v10 = word_140A40AF0[v13];
						goto LABEL_24;
					}
					v11 = v13 + 1;
				}
				else
				{
					v12 = v11 + ((v12 - v11) >> 1);
				}
				if (v11 >= v12)
					goto LABEL_24;
			}
		}
		if ((unsigned __int16)(v10 - 65) <= 0x19u)
			v10 += 32;
	LABEL_24:
		v15 = v5 - v10;
		if (v15)
			return v15;
		if (!v4)
			return 0i64;
		++v2;
	}
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

