#include "../winhttp.h"

//----- (00000001401BFC10) ----------------------------------------------------
__int64 __fastcall sub_1401BFC10(__int64 a1, unsigned __int16* a2)
{
	unsigned __int16* v2; // rbx
	__int64 result; // rax
	__int64 v5; // r8
	unsigned __int64 v6; // rax
	unsigned __int16 v7; // dx
	char v9[272]; // [rsp+20h] [rbp-128h] BYREF

	v2 = a2;
	if ((*(_BYTE*)(a1 + 48) & 2) == 0)
		return 2147942405i64;
	if (!a2)
		return 2147942487i64;
	if (*(_DWORD*)(a1 + 64))
		return 2684551172i64;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
	if ((int)result >= 0)
	{
		v5 = -1i64;
		v6 = 0i64;
		do
		{
			v7 = *v2;
			if (*v2 >= 0x80u)
			{
				if (v7 >= 0x1000u)
				{
					if (v6 >= 0x102)
						return 2147942522i64;
					v9[v6] = (v7 >> 12) | 0xE0;
					v9[v6 + 1] = (v7 >> 6) & 0x3F | 0x80;
					v6 += 3i64;
					v9[v6 - 1] = *(_BYTE*)v2 & 0x3F | 0x80;
				}
				else
				{
					if (v6 >= 0x103)
						return 2147942522i64;
					v9[v6] = (v7 >> 6) | 0xC0;
					v6 += 2i64;
					v9[v6 - 1] = *(_BYTE*)v2 & 0x3F | 0x80;
				}
			}
			else
			{
				if (v6 >= 0x104)
					return 2147942522i64;
				v9[v6++] = v7;
			}
			if (!v7)
				break;
			++v2;
			--v5;
		} while (v5);
		result = sub_1401BE2C0(*(_QWORD*)(a1 + 72), a1, v9);
		if ((int)result >= 0)
			return 0i64;
	}
	return result;
}

