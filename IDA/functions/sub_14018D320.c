//----- (000000014018D320) ----------------------------------------------------
int** __fastcall sub_14018D320(int** a1, char* a2)
{
	unsigned __int64 v2; // rdi
	__int64 v4; // rsi
	__int64 v5; // rbp
	unsigned __int64 v7; // rdx
	char* v8; // r8
	char v9; // r9
	__int16 v10; // cx
	char v11; // r10
	char v12; // cl
	char v13; // r10
	int* v14; // rax
	int* v15; // r9
	char v16; // dl
	__int16 v17; // cx
	char v18; // r8
	char v19; // cl
	char v20; // r8
	int** result; // rax

	v2 = -1i64;
	v4 = 0i64;
	v5 = 0i64;
	v7 = -1i64;
	v8 = a2;
	do
	{
		v9 = *v8;
		if (*v8 < 0)
		{
			if (v7 > 1 && (v9 & 0xE0) == 0xC0 && (v11 = v8[1], (v11 & 0xC0) == 0x80))
			{
				v8 += 2;
				v10 = v11 & 0x3F | ((v9 & 0x1F) << 6);
				v7 -= 2i64;
			}
			else
			{
				if (v7 <= 2
					|| (v9 & 0xF0) != 0xE0
					|| (v12 = v8[1], (v12 & 0xC0) != 0x80)
					|| (v13 = v8[2], (v13 & 0xC0) != 0x80))
				{
					++v8;
					--v7;
					continue;
				}
				v8 += 3;
				v10 = v13 & 0x3F | (((unsigned __int16)(v9 << 6) | v12 & 0x3F) << 6);
				v7 -= 3i64;
			}
		}
		else
		{
			++v8;
			v10 = v9;
			--v7;
		}
		++v5;
		if (!v10)
			break;
	} while (v7);
	v14 = sub_14018B280(2 * (v5 - 1) + 18, 0);
	if (v14)
	{
		*((_QWORD*)v14 + 1) = v5 - 1;
		*(_QWORD*)v14 = off_140B55060;
	}
	else
	{
		v14 = 0i64;
	}
	v15 = v14 + 4;
	if (v14 != (int*)-16i64 || !v5)
	{
		do
		{
			v16 = *a2;
			if (*a2 < 0)
			{
				if (v2 > 1 && (v16 & 0xE0) == 0xC0 && (v18 = a2[1], (v18 & 0xC0) == 0x80))
				{
					a2 += 2;
					v17 = v18 & 0x3F | ((v16 & 0x1F) << 6);
					v2 -= 2i64;
				}
				else
				{
					if (v2 <= 2
						|| (v16 & 0xF0) != 0xE0
						|| (v19 = a2[1], (v19 & 0xC0) != 0x80)
						|| (v20 = a2[2], (v20 & 0xC0) != 0x80))
					{
						++a2;
						--v2;
						continue;
					}
					a2 += 3;
					v17 = v20 & 0x3F | (((unsigned __int16)(v16 << 6) | v19 & 0x3F) << 6);
					v2 -= 3i64;
				}
			}
			else
			{
				++a2;
				v17 = v16;
				--v2;
			}
			if (v5)
			{
				if (v4 == v5)
					break;
				*((_WORD*)v15 + v4) = v17;
			}
			++v4;
			if (!v17)
				break;
		} while (v2);
	}
	result = a1;
	*a1 = v15;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

