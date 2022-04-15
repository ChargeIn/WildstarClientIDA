//----- (000000014018DD50) ----------------------------------------------------
int** __fastcall sub_14018DD50(int** a1, unsigned __int16* a2)
{
	__int64 v2; // r14
	unsigned __int64 v3; // rdi
	unsigned __int16* v4; // rsi
	unsigned __int64 v6; // rbx
	__int64 v7; // r8
	unsigned __int16 v8; // ax
	int* v9; // rax
	int* v10; // r8
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rdx
	unsigned __int16 v13; // ax

	v2 = -1i64;
	v3 = 0i64;
	v4 = a2;
	v6 = 0i64;
	v7 = -1i64;
	do
	{
		v8 = *a2;
		if (*a2 >= 0x80u)
		{
			if (v8 >= 0x1000u)
				v6 += 3i64;
			else
				v6 += 2i64;
		}
		else
		{
			++v6;
		}
		if (!v8)
			break;
		++a2;
		--v7;
	} while (v7);
	v9 = sub_14018B280(v6 - 1 + 17, 0);
	if (v9)
	{
		*((_QWORD*)v9 + 1) = v6 - 1;
		*(_QWORD*)v9 = off_140B55060;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = v9 + 4;
	if (v9 != (int*)-16i64 || !v6)
	{
		v11 = 2i64;
		v12 = 1i64;
		do
		{
			v13 = *v4;
			if (*v4 >= 0x80u)
			{
				if (v13 >= 0x1000u)
				{
					if (v6)
					{
						if (v11 >= v6)
							break;
						*((_BYTE*)v10 + v3) = (v13 >> 12) | 0xE0;
						*((_BYTE*)v10 + v3 + 1) = (*v4 >> 6) & 0x3F | 0x80;
						*((_BYTE*)v10 + v3 + 2) = *(_BYTE*)v4 & 0x3F | 0x80;
					}
					v3 += 3i64;
					v12 += 3i64;
					v11 += 3i64;
				}
				else
				{
					if (v6)
					{
						if (v12 >= v6)
							break;
						*((_BYTE*)v10 + v3) = (v13 >> 6) | 0xC0;
						*((_BYTE*)v10 + v3 + 1) = *(_BYTE*)v4 & 0x3F | 0x80;
					}
					v3 += 2i64;
					v12 += 2i64;
					v11 += 2i64;
				}
			}
			else
			{
				if (v6)
				{
					if (v3 >= v6)
						break;
					*((_BYTE*)v10 + v3) = v13;
				}
				++v3;
				++v12;
				++v11;
			}
			if (!*v4)
				break;
			++v4;
			--v2;
		} while (v2);
	}
	*a1 = v10;
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

