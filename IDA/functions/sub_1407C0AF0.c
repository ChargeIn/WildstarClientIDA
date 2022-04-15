#include "../winhttp.h"

//----- (00000001407C0AF0) ----------------------------------------------------
__int64 __fastcall sub_1407C0AF0(__int64 a1, __int16* a2)
{
	unsigned __int64 v3; // rbp
	unsigned __int64 v4; // rsi
	__int64 v5; // rdi
	__int16* i; // rbx
	unsigned __int16 v7; // r9
	__int16 v8; // r11
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rdx
	__int64 v11; // rax
	unsigned __int16 v12; // r8
	unsigned __int16 v13; // cx
	unsigned __int64 v14; // rdx
	unsigned __int64 v15; // r8
	__int64 v16; // rax
	unsigned __int16 v17; // r10

	if (*(int*)(a1 + 16) >= 2)
	{
		v3 = *(unsigned int*)(a1 + 36);
		v4 = 0i64;
		if (*(_DWORD*)(a1 + 36))
		{
			v5 = *(_QWORD*)(a1 + 88) - (_QWORD)a2;
			while (2)
			{
				for (i = a2; ; ++i)
				{
					v7 = *i;
					if ((unsigned __int16)*i >= 0x80u)
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
									goto LABEL_16;
								}
								v9 = v11 + 1;
							}
							else
							{
								v10 = v9 + ((v10 - v9) >> 1);
							}
							if (v9 >= v10)
								goto LABEL_14;
						}
					}
					if ((unsigned __int16)(v7 - 65) > 0x19u)
						LABEL_14:
					v8 = *i;
					else
						v8 = v7 + 32;
				LABEL_16:
					v13 = *(__int16*)((char*)i + v5);
					if (v13 >= 0x80u)
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
									goto LABEL_27;
								}
								v14 = v16 + 1;
							}
							else
							{
								v15 = v14 + ((v15 - v14) >> 1);
							}
							if (v14 >= v15)
								goto LABEL_27;
						}
					}
					if ((unsigned __int16)(v13 - 65) <= 0x19u)
						v13 += 32;
				LABEL_27:
					if ((unsigned __int16)v8 != v13)
						break;
					if (!v7)
						return v4;
				}
				++v4;
				v5 += 264i64;
				if (v4 < v3)
					continue;
				break;
			}
		}
	}
	return -1i64;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

