//----- (0000000140370470) ----------------------------------------------------
void __fastcall sub_140370470(__int64 a1, unsigned __int64* a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rax
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rbx
	__int64 v6; // rsi
	unsigned __int64 v7; // r11
	unsigned __int64 v8; // rdi
	unsigned __int64 i; // rcx
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // r9
	unsigned __int64 j; // r8
	unsigned __int64 v13; // r11
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rbx
	unsigned __int64 v16; // rax
	unsigned __int64 v17; // r9

	if (a3 == 2)
	{
		v3 = a2[1];
		v4 = *a2;
		if (*a2 > v3)
		{
			*a2 = v3;
			a2[1] = v4;
		}
	}
	else if (a3 > 1)
	{
		v5 = a3 >> 1;
		if (a3 >> 1)
		{
			v6 = 2 * v5 + 1;
			do
			{
				v7 = a2[--v5];
				v6 -= 2i64;
				v8 = v5;
				for (i = v6; i < a3; i = 2 * i + 1)
				{
					v10 = a2[i];
					v11 = i + 1;
					if (i + 1 < a3 && a2[v11] > v10)
					{
						++i;
						v10 = a2[v11];
					}
					if (v10 <= v7)
						break;
					a2[v8] = v10;
					v8 = i;
				}
				a2[v8] = v7;
			} while (v5);
		}
		for (j = a3 - 1; j; --j)
		{
			v13 = a2[j];
			v14 = 1i64;
			v15 = 0i64;
			for (a2[j] = *a2; v14 < j; v14 = 2 * v14 + 1)
			{
				v16 = a2[v14];
				v17 = v14 + 1;
				if (v14 + 1 < j && a2[v17] > v16)
				{
					++v14;
					v16 = a2[v17];
				}
				if (v16 <= v13)
					break;
				a2[v15] = v16;
				v15 = v14;
			}
			a2[v15] = v13;
		}
	}
}

