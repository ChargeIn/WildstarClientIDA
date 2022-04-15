#include "../winhttp.h"

//----- (000000014018F2D0) ----------------------------------------------------
_QWORD* __fastcall sub_14018F2D0(_QWORD* a1, char* a2)
{
	unsigned __int64 v2; // rsi
	__int64 v3; // rbp
	char* v4; // rdi
	char* v6; // r8
	unsigned __int64 v7; // r9
	unsigned __int64 v8; // r15
	char v9; // dl
	__int16 v10; // cx
	char v11; // r10
	char v12; // cl
	char v13; // r10
	unsigned __int64 v14; // r14
	int* v15; // r10
	char* v16; // r11
	int* v17; // r9
	char v18; // dl
	__int16 v19; // cx
	char v20; // r8
	char v21; // cl
	char v22; // r8
	int* v24; // rax

	v2 = -1i64;
	v3 = 0i64;
	v4 = a2;
	v6 = a2;
	v7 = -1i64;
	if (!a2)
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
		v24 = sub_14018B280(16i64, 0);
		a1[1] = v24;
		a1[2] = v24;
		a1[3] = v24 + 4;
		if (v24)
			*(_WORD*)v24 = 0;
		return a1;
	}
	v8 = 0i64;
	do
	{
		v9 = *v6;
		if (*v6 < 0)
		{
			if (v7 > 1 && (v9 & 0xE0) == 0xC0 && (v11 = v6[1], (v11 & 0xC0) == 0x80))
			{
				v6 += 2;
				v10 = v11 & 0x3F | ((v9 & 0x1F) << 6);
				v7 -= 2i64;
			}
			else
			{
				if (v7 <= 2
					|| (v9 & 0xF0) != 0xE0
					|| (v12 = v6[1], (v12 & 0xC0) != 0x80)
					|| (v13 = v6[2], (v13 & 0xC0) != 0x80))
				{
					++v6;
					--v7;
					continue;
				}
				v6 += 3;
				v10 = v13 & 0x3F | (((unsigned __int16)(v9 << 6) | v12 & 0x3F) << 6);
				v7 -= 3i64;
			}
		}
		else
		{
			++v6;
			v10 = v9;
			--v7;
		}
		++v8;
		if (!v10)
			break;
	} while (v7);
	v14 = v8 - 1;
	v15 = 0i64;
	v16 = 0i64;
	if (v8 <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v15 = sub_14018B280(2 * v8, 0);
		v16 = (char*)v15 + 2 * v8;
	}
	v17 = v15;
	if (v8 != 1)
	{
		do
		{
			if (v17)
				*(_WORD*)v17 = 0;
			v17 = (int*)((char*)v17 + 2);
			--v14;
		} while (v14);
	}
	if (v17)
		*(_WORD*)v17 = 0;
	if (v15 || !v8)
	{
		do
		{
			v18 = *v4;
			if (*v4 < 0)
			{
				if (v2 > 1 && (v18 & 0xE0) == 0xC0 && (v20 = v4[1], (v20 & 0xC0) == 0x80))
				{
					v4 += 2;
					v19 = v20 & 0x3F | ((v18 & 0x1F) << 6);
					v2 -= 2i64;
				}
				else
				{
					if (v2 <= 2
						|| (v18 & 0xF0) != 0xE0
						|| (v21 = v4[1], (v21 & 0xC0) != 0x80)
						|| (v22 = v4[2], (v22 & 0xC0) != 0x80))
					{
						++v4;
						--v2;
						continue;
					}
					v4 += 3;
					v19 = v22 & 0x3F | (((unsigned __int16)(v18 << 6) | v21 & 0x3F) << 6);
					v2 -= 3i64;
				}
			}
			else
			{
				++v4;
				v19 = v18;
				--v2;
			}
			if (v8)
			{
				if (v3 == v8)
					break;
				*((_WORD*)v15 + v3) = v19;
			}
			++v3;
			if (!v19)
				break;
		} while (v2);
	}
	a1[1] = v15;
	a1[2] = v17;
	a1[3] = v16;
	return a1;
}

