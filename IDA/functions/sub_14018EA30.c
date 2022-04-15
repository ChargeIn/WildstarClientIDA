#include "../winhttp.h"

//----- (000000014018EA30) ----------------------------------------------------
__int64 __fastcall sub_14018EA30(char* a1, unsigned __int64 a2, __int64 a3, __int64 a4, _QWORD* a5)
{
	__int64 v8; // r10
	char v9; // r9
	__int16 v10; // r8
	char v11; // r11
	char v12; // r8
	char v13; // r11

	if (!a3 && a4 || !a1 && a2)
		return 2147942487i64;
	v8 = 0i64;
	while (a2)
	{
		v9 = *a1;
		if (*a1 < 0)
		{
			if (a2 > 1 && (v9 & 0xE0) == 0xC0 && (v11 = a1[1], (v11 & 0xC0) == 0x80))
			{
				a1 += 2;
				v10 = v11 & 0x3F | ((v9 & 0x1F) << 6);
				a2 -= 2i64;
			}
			else
			{
				if (a2 <= 2
					|| (v9 & 0xF0) != 0xE0
					|| (v12 = a1[1], (v12 & 0xC0) != 0x80)
					|| (v13 = a1[2], (v13 & 0xC0) != 0x80))
				{
					++a1;
					--a2;
					continue;
				}
				a1 += 3;
				v10 = v13 & 0x3F | (((unsigned __int16)(v9 << 6) | v12 & 0x3F) << 6);
				a2 -= 3i64;
			}
		}
		else
		{
			++a1;
			v10 = v9;
			--a2;
		}
		if (a4)
		{
			if (v8 == a4)
				return 2147942522i64;
			*(_WORD*)(a3 + 2 * v8) = v10;
		}
		++v8;
		if (!v10)
			break;
	}
	if (a5)
		*a5 = v8;
	return 0i64;
}

