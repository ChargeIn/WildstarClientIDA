#include "../winhttp.h"

//----- (000000014010DC00) ----------------------------------------------------
__int64 __fastcall sub_14010DC00(__int64 a1, unsigned __int16* a2)
{
	__int64 v3; // rsi
	__int64 v4; // r14
	unsigned __int16* i; // rbx
	unsigned __int16 v6; // r9
	__int16 v7; // r11
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rdx
	__int64 v10; // rax
	unsigned __int16 v11; // r8
	unsigned __int16 v12; // cx
	unsigned __int64 v13; // rdx
	unsigned __int64 v14; // r8
	__int64 v15; // rax
	unsigned __int16 v16; // r10

	if (!a2 || !*a2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 48);
	v4 = *(_QWORD*)(a1 + 56);
	if (v3 != v4)
	{
		while (2)
		{
			for (i = a2; ; ++i)
			{
				v6 = *(unsigned __int16*)((char*)i + *(_QWORD*)(*(_QWORD*)v3 + 8i64) - (_QWORD)a2);
				if (v6 >= 0x80u)
				{
					v8 = 0i64;
					v9 = 977i64;
					while (1)
					{
						v10 = v8 + ((v9 - v8) >> 1);
						v11 = word_140A41A80[v10];
						if (v6 >= v11)
						{
							if (v6 <= v11)
							{
								v7 = word_140A40AF0[v10];
								goto LABEL_16;
							}
							v8 = v10 + 1;
						}
						else
						{
							v9 = v8 + ((v9 - v8) >> 1);
						}
						if (v8 >= v9)
							goto LABEL_14;
					}
				}
				if ((unsigned __int16)(v6 - 65) > 0x19u)
					LABEL_14:
				v7 = *(unsigned __int16*)((char*)i + *(_QWORD*)(*(_QWORD*)v3 + 8i64) - (_QWORD)a2);
				else
					v7 = v6 + 32;
			LABEL_16:
				v12 = *i;
				if (*i >= 0x80u)
				{
					v13 = 0i64;
					v14 = 977i64;
					while (1)
					{
						v15 = v13 + ((v14 - v13) >> 1);
						v16 = word_140A41A80[v15];
						if (v12 >= v16)
						{
							if (v12 <= v16)
							{
								v12 = word_140A40AF0[v15];
								goto LABEL_27;
							}
							v13 = v15 + 1;
						}
						else
						{
							v14 = v13 + ((v14 - v13) >> 1);
						}
						if (v13 >= v14)
							goto LABEL_27;
					}
				}
				if ((unsigned __int16)(v12 - 65) <= 0x19u)
					v12 += 32;
			LABEL_27:
				if ((unsigned __int16)v7 != v12)
					break;
				if (!v6)
					return *(_QWORD*)v3;
			}
			v3 += 8i64;
			if (v3 != v4)
				continue;
			break;
		}
	}
	return 0i64;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

