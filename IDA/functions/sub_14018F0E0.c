//----- (000000014018F0E0) ----------------------------------------------------
_QWORD* __fastcall sub_14018F0E0(_QWORD* a1, unsigned __int16* a2)
{
	__int64 v2; // r12
	unsigned __int64 v3; // rdi
	unsigned __int16* v4; // rsi
	__int64 v6; // r8
	unsigned __int64 v7; // rbx
	unsigned __int16 v8; // ax
	unsigned __int64 v9; // r15
	int* v10; // rbp
	char* v11; // r14
	_BYTE* v12; // r8
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rdx
	unsigned __int16 v15; // ax
	int* v17; // rax

	v2 = -1i64;
	v3 = 0i64;
	v4 = a2;
	v6 = -1i64;
	if (a2)
	{
		v7 = 0i64;
		do
		{
			v8 = *a2;
			if (*a2 >= 0x80u)
			{
				if (v8 >= 0x1000u)
					v7 += 3i64;
				else
					v7 += 2i64;
			}
			else
			{
				++v7;
			}
			if (!v8)
				break;
			++a2;
			--v6;
		} while (v6);
		v9 = v7 - 1;
		v10 = 0i64;
		if (v7 == -1i64)
		{
			v11 = 0i64;
		}
		else
		{
			v10 = sub_14018B280(v7, 0);
			v11 = (char*)v10 + v7;
		}
		sub_1407E4830(v10, 0i64, v7 - 1);
		v12 = (char*)v10 + v9;
		if ((int*)((char*)v10 + v9))
			*v12 = 0;
		if (v10 || !v7)
		{
			v13 = 2i64;
			v14 = 1i64;
			do
			{
				v15 = *v4;
				if (*v4 >= 0x80u)
				{
					if (v15 >= 0x1000u)
					{
						if (v7)
						{
							if (v13 >= v7)
								break;
							*((_BYTE*)v10 + v3) = (v15 >> 12) | 0xE0;
							*((_BYTE*)v10 + v3 + 1) = (*v4 >> 6) & 0x3F | 0x80;
							*((_BYTE*)v10 + v3 + 2) = *(_BYTE*)v4 & 0x3F | 0x80;
						}
						v3 += 3i64;
						v14 += 3i64;
						v13 += 3i64;
					}
					else
					{
						if (v7)
						{
							if (v14 >= v7)
								break;
							*((_BYTE*)v10 + v3) = (v15 >> 6) | 0xC0;
							*((_BYTE*)v10 + v3 + 1) = *(_BYTE*)v4 & 0x3F | 0x80;
						}
						v3 += 2i64;
						v14 += 2i64;
						v13 += 2i64;
					}
				}
				else
				{
					if (v7)
					{
						if (v3 >= v7)
							break;
						*((_BYTE*)v10 + v3) = v15;
					}
					++v3;
					++v14;
					++v13;
				}
				if (!*v4)
					break;
				++v4;
				--v2;
			} while (v2);
		}
		a1[1] = v10;
		a1[3] = v11;
		a1[2] = v12;
		return a1;
	}
	else
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v17 = sub_14018B280(8i64, 0);
		a1[1] = v17;
		a1[2] = v17;
		a1[3] = v17 + 2;
		if (v17)
			*(_BYTE*)v17 = 0;
		return a1;
	}
}

