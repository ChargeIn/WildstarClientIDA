//----- (0000000140881150) ----------------------------------------------------
char __fastcall sub_140881150(__int16* a1, _WORD* a2, int a3, unsigned int a4, unsigned int a5)
{
	int v5; // r15d
	__int64 v8; // rsi
	int v9; // ecx
	int v10; // r9d
	int v11; // edi
	_BYTE* v12; // r14
	_WORD* v13; // r11
	unsigned int v14; // eax
	unsigned int v15; // ebx
	int v16; // r8d
	int v17; // eax
	int v18; // r10d
	int v19; // eax
	int v20; // r8d
	__int64 v21; // rbx
	_WORD* v22; // r11
	int v23; // eax
	int v24; // eax
	int v25; // eax
	int v26; // ecx
	__int16 v27; // ax
	__int64 v29; // [rsp+48h] [rbp+10h]
	int v30; // [rsp+50h] [rbp+18h]

	v5 = a3;
	if (a3)
	{
		v8 = a5;
		v29 = a4;
		do
		{
			v9 = *((unsigned __int8*)a1 + 2);
			v10 = *a1;
			v11 = 31;
			v30 = v5 - 1;
			*a2 = *a1;
			v12 = a1 + 2;
			v13 = &a2[v8];
			do
			{
				v14 = (unsigned __int8)*v12++;
				v15 = v14;
				v16 = v14 & 0xF;
				v17 = (int)((2 * (v14 & 7) + 1) * word_1409A7790[v9]) / 8;
				if ((v16 & 8) != 0)
					v17 = -v17;
				v18 = v17 + v10;
				if ((__int16)(v17 + v10) != v17 + v10)
				{
					v19 = 0x7FFF;
					if (v18 < -32768)
						v19 = -32768;
					v18 = v19;
				}
				v20 = v9 + word_1409A7770[v16];
				if (v20 >= 0)
				{
					if (v20 >= 89)
						v20 = 88;
				}
				else
				{
					v20 = 0;
				}
				v21 = v15 >> 4;
				*v13 = v18;
				v22 = &v13[v8];
				v23 = (int)((2 * (v21 & 7) + 1) * word_1409A7790[v20]) / 8;
				if ((v21 & 8) != 0)
					v23 = (int)((2 * (v21 & 7) + 1) * word_1409A7790[v20]) / -8;
				v10 = v23 + v18;
				if ((__int16)(v23 + v18) != v23 + v18)
				{
					v24 = 0x7FFF;
					if (v10 < -32768)
						v24 = -32768;
					v10 = v24;
				}
				v9 = v20 + word_1409A7770[v21];
				if (v9 >= 0)
				{
					if (v9 >= 89)
						v9 = 88;
				}
				else
				{
					v9 = 0;
				}
				*v22 = v10;
				v13 = &v22[v8];
				--v11;
			} while (v11);
			--v5;
			v25 = (2 * (*v12 & 7) + 1) * word_1409A7790[v9] / 8;
			if ((*v12 & 8) != 0)
				v25 = (2 * (*v12 & 7) + 1) * word_1409A7790[v9] / -8;
			v26 = v25 + v10;
			if ((__int16)(v25 + v10) != v25 + v10)
			{
				v27 = 0x7FFF;
				if (v26 < -32768)
					v27 = 0x8000;
				LOWORD(v26) = v27;
			}
			*v13 = v26;
			a1 = (__int16*)((char*)a1 + v29);
			a2 = &v13[v8];
		} while (v30);
	}
	return 1;
}
// 1409A7770: using guessed type __int16 word_1409A7770[16];
// 1409A7790: using guessed type __int16 word_1409A7790[92];

