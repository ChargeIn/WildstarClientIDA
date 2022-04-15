#include "../winhttp.h"

//----- (00000001407E95A4) ----------------------------------------------------
void __fastcall sub_1407E95A4(unsigned __int16* a1, int a2, __int64 a3, _DWORD* a4, int* a5)
{
	int v6; // r15d
	int v8; // esi

	v6 = *a5;
	v8 = a2;
	if ((*(_BYTE*)(a3 + 24) & 0x40) == 0 || *(_QWORD*)(a3 + 16))
	{
		*a5 = 0;
		if (a2 <= 0)
			goto LABEL_10;
		do
		{
			--v8;
			sub_1407E9518(*a1++, a3, a4);
			if (*a4 == -1)
			{
				if (*a5 != 42)
					break;
				sub_1407E9518(0x3Fu, a3, a4);
			}
		} while (v8 > 0);
		if (!*a5)
			LABEL_10:
		*a5 = v6;
	}
	else
	{
		*a4 += a2;
	}
}

