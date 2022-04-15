#include "../winhttp.h"

//----- (00000001400D2A60) ----------------------------------------------------
__int64 __fastcall sub_1400D2A60(__int64 a1, int a2, __int64 a3)
{
	char v3; // bp
	__int64 v4; // rsi
	__int64 v7; // r14
	unsigned __int16* v8; // rbx
	__int64 v9; // rdi
	unsigned __int16 v10; // r9
	__int16 v11; // r11
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rdx
	__int64 v14; // rax
	unsigned __int16 v15; // r8
	unsigned __int16 v16; // cx
	unsigned __int64 v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // rax
	unsigned __int16 v20; // r10

	v3 = 0;
	v4 = 0i64;
	v7 = a2;
	if (a2 > 0)
	{
		while (2)
		{
			v8 = *(unsigned __int16**)(a1 + 8 * v4);
			v9 = a3 - (_QWORD)v8;
			while (1)
			{
				v10 = *(unsigned __int16*)((char*)v8 + v9);
				if (v10 >= 0x80u)
				{
					v12 = 0i64;
					v13 = 977i64;
					while (1)
					{
						v14 = v12 + ((v13 - v12) >> 1);
						v15 = word_140A41A80[v14];
						if (v10 >= v15)
						{
							if (v10 <= v15)
							{
								v11 = word_140A40AF0[v14];
								goto LABEL_14;
							}
							v12 = v14 + 1;
						}
						else
						{
							v13 = v12 + ((v13 - v12) >> 1);
						}
						if (v12 >= v13)
							goto LABEL_12;
					}
				}
				if ((unsigned __int16)(v10 - 65) > 0x19u)
					LABEL_12:
				v11 = *(unsigned __int16*)((char*)v8 + v9);
				else
					v11 = v10 + 32;
			LABEL_14:
				v16 = *v8;
				if (*v8 >= 0x80u)
				{
					v17 = 0i64;
					v18 = 977i64;
					while (1)
					{
						v19 = v17 + ((v18 - v17) >> 1);
						v20 = word_140A41A80[v19];
						if (v16 >= v20)
						{
							if (v16 <= v20)
							{
								v16 = word_140A40AF0[v19];
								goto LABEL_25;
							}
							v17 = v19 + 1;
						}
						else
						{
							v18 = v17 + ((v18 - v17) >> 1);
						}
						if (v17 >= v18)
							goto LABEL_25;
					}
				}
				if ((unsigned __int16)(v16 - 65) <= 0x19u)
					v16 += 32;
			LABEL_25:
				if ((unsigned __int16)v11 != v16)
					break;
				if (!v10)
					return 1i64 << v3;
				++v8;
			}
			++v4;
			++v3;
			if (v4 < v7)
				continue;
			break;
		}
	}
	return 0i64;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

