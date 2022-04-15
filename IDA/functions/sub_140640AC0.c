//----- (0000000140640AC0) ----------------------------------------------------
__int64 __fastcall sub_140640AC0(__int64 a1, __int64 a2, unsigned __int16* a3, _DWORD* a4)
{
	int v6; // ebp
	wchar_t** v7; // rsi
	unsigned __int16* i; // rbx
	unsigned __int16 v9; // r9
	__int16 v10; // r11
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rdx
	__int64 v13; // rax
	unsigned __int16 v14; // r8
	unsigned __int16 v15; // cx
	unsigned __int64 v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rax
	unsigned __int16 v19; // r10

	v6 = 0;
	v7 = off_140B29AB8;
	do
	{
		if (*v7)
		{
			for (i = a3; ; ++i)
			{
				v9 = *(unsigned __int16*)((char*)i + (char*)*v7 - (char*)a3);
				if (v9 >= 0x80u)
				{
					v11 = 0i64;
					v12 = 977i64;
					while (1)
					{
						v13 = v11 + ((v12 - v11) >> 1);
						v14 = word_140A41A80[v13];
						if (v9 >= v14)
						{
							if (v9 <= v14)
							{
								v10 = word_140A40AF0[v13];
								goto LABEL_15;
							}
							v11 = v13 + 1;
						}
						else
						{
							v12 = v11 + ((v12 - v11) >> 1);
						}
						if (v11 >= v12)
							goto LABEL_13;
					}
				}
				if ((unsigned __int16)(v9 - 65) > 0x19u)
					LABEL_13:
				v10 = *(unsigned __int16*)((char*)i + (char*)*v7 - (char*)a3);
				else
					v10 = v9 + 32;
			LABEL_15:
				v15 = *i;
				if (*i >= 0x80u)
				{
					v16 = 0i64;
					v17 = 977i64;
					while (1)
					{
						v18 = v16 + ((v17 - v16) >> 1);
						v19 = word_140A41A80[v18];
						if (v15 >= v19)
						{
							if (v15 <= v19)
							{
								v15 = word_140A40AF0[v18];
								goto LABEL_26;
							}
							v16 = v18 + 1;
						}
						else
						{
							v17 = v16 + ((v17 - v16) >> 1);
						}
						if (v16 >= v17)
							goto LABEL_26;
					}
				}
				if ((unsigned __int16)(v15 - 65) <= 0x19u)
					v15 += 32;
			LABEL_26:
				if ((unsigned __int16)v10 != v15)
					break;
				if (!v9)
				{
					if (a4)
						*a4 = v6;
					return 1i64;
				}
			}
		}
		++v7;
		++v6;
	} while ((__int64)v7 < (__int64)L"avg(us)");
	return 0i64;
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];
// 140B29AB8: using guessed type wchar_t *off_140B29AB8[5];
// 140B29AE0: using guessed type wchar_t aAvgUs[8];

