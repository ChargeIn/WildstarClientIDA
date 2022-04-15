#include "../winhttp.h"

//----- (00000001407E7E54) ----------------------------------------------------
_BOOL8 __fastcall sub_1407E7E54(int a1, int a2)
{
	_QWORD* v4; // rsi
	int v5; // ebx
	__int16* v7; // rcx
	__int16 v8; // dx
	int LCData; // [rsp+30h] [rbp+8h] BYREF

	v4 = sub_1407E3D94();
	v5 = 0;
	if (!GetLocaleInfoW(a1 & 0x3FF | 0x400, 0x20000001u, (LPWSTR)&LCData, 2))
		return 0i64;
	if (a1 == LCData || !a2)
		return 1i64;
	v7 = (__int16*)v4[40];
	while (1)
	{
		v8 = *v7++;
		if ((unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u)
			break;
		++v5;
	}
	return v5 != (unsigned int)sub_1407E6CA0((_WORD*)v4[40]);
}

