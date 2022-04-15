#include "../winhttp.h"

//----- (0000000140863360) ----------------------------------------------------
void __fastcall sub_140863360(__int64 a1)
{
	__int64 v2; // rsi
	_BYTE* v3; // rbx
	__int64 v4; // rcx
	char v5; // al

	if (*(_DWORD*)(a1 + 1064) == 1)
	{
		v2 = 4i64;
		v3 = (_BYTE*)(a1 + 920);
		do
		{
			if (*(_DWORD*)(a1 + 1064) == 1)
			{
				v4 = *((_QWORD*)v3 - 2);
				if (v4)
				{
					v5 = *v3 | *(_BYTE*)(a1 + 1048);
					if ((v5 & 1) != 0)
					{
						if ((v5 & 2) == 0)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
					}
					else
					{
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 56i64))(v4, a1 + 848);
					}
					*v3 ^= (*v3 ^ (2 * *v3)) & 2;
				}
			}
			v3 += 40;
			--v2;
		} while (v2);
	}
}

