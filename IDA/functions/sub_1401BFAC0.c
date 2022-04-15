#include "../winhttp.h"

//----- (00000001401BFAC0) ----------------------------------------------------
__int64 __fastcall sub_1401BFAC0(_QWORD** a1, unsigned __int16* a2, _QWORD* a3)
{
	unsigned __int16* v4; // rbx
	__int64 result; // rax
	__int64 v7; // r8
	unsigned __int64 v8; // rax
	unsigned __int16 v9; // dx
	char v11[272]; // [rsp+20h] [rbp-128h] BYREF

	v4 = a2;
	if (!a2)
		return 2147942487i64;
	result = ((__int64(__fastcall*)(_QWORD**))(*a1)[8])(a1);
	if ((int)result >= 0)
	{
		v7 = -1i64;
		v8 = 0i64;
		do
		{
			v9 = *v4;
			if (*v4 >= 0x80u)
			{
				if (v9 >= 0x1000u)
				{
					if (v8 >= 0x102)
						return 2147942522i64;
					v11[v8] = (v9 >> 12) | 0xE0;
					v11[v8 + 1] = (v9 >> 6) & 0x3F | 0x80;
					v8 += 3i64;
					v11[v8 - 1] = *(_BYTE*)v4 & 0x3F | 0x80;
				}
				else
				{
					if (v8 >= 0x103)
						return 2147942522i64;
					v11[v8] = (v9 >> 6) | 0xC0;
					v8 += 2i64;
					v11[v8 - 1] = *(_BYTE*)v4 & 0x3F | 0x80;
				}
			}
			else
			{
				if (v8 >= 0x104)
					return 2147942522i64;
				v11[v8++] = v9;
			}
			if (!v9)
				break;
			++v4;
			--v7;
		} while (v7);
		result = sub_1401BE1F0(a1[9], v11, a3);
		if ((int)result >= 0)
			return 0i64;
	}
	return result;
}

