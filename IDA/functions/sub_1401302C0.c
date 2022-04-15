#include "../winhttp.h"

//----- (00000001401302C0) ----------------------------------------------------
char __fastcall sub_1401302C0(__int64 a1, unsigned int a2, int a3, unsigned __int8 a4)
{
	__int64 v6; // rcx
	char v7; // dl

	sub_1400D4070(a1, a2, (char*)a1, byte_1409D87BC, a3, a4);
	if (a2 == 36)
	{
		v6 = *(_QWORD*)(a1 + 1560);
		if (v6 && (*(_BYTE*)(v6 + 28) & 1) != 0)
		{
			v7 = 1;
		LABEL_9:
			sub_1400D42F0(v6, v7, 0, 4.0);
		}
	}
	else if (a2 == 37)
	{
		v6 = *(_QWORD*)(a1 + 1560);
		if (v6)
		{
			if ((*(_BYTE*)(v6 + 28) & 1) != 0)
			{
				v7 = 0;
				goto LABEL_9;
			}
		}
	}
	return 1;
}
// 1409D87BC: using guessed type _BYTE byte_1409D87BC[24];

