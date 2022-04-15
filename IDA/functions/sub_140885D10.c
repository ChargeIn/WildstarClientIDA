#include "../winhttp.h"

//----- (0000000140885D10) ----------------------------------------------------
void __fastcall sub_140885D10(__int64 a1, int a2)
{
	char v4; // al
	__int64 v5; // rcx
	char v6; // al
	__int64 v7; // rcx

	*(_DWORD*)(a1 + 176) &= 0xFFFFFFF0;
	*(_DWORD*)(a1 + 176) |= a2 & 0xF;
	if ((*(_BYTE*)(a1 + 117) & 8) != 0 && (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
		goto LABEL_5;
	if (a2 == 2)
	{
		*(_BYTE*)(a1 + 117) |= 0x40u;
	LABEL_5:
		v4 = *(_BYTE*)(a1 + 117);
		if ((v4 & 0x20) == 0)
		{
			v5 = *(_QWORD*)(a1 + 96);
			*(_BYTE*)(a1 + 117) = v4 | 0x20;
			sub_1408894A0(v5);
		}
		return;
	}
	*(_BYTE*)(a1 + 117) &= ~0x40u;
	v6 = *(_BYTE*)(a1 + 117);
	if ((v6 & 0x20) != 0)
	{
		v7 = *(_QWORD*)(a1 + 96);
		*(_BYTE*)(a1 + 117) = v6 & 0xDF;
		sub_140889460(v7);
	}
}

