#include "../winhttp.h"

//----- (0000000140880650) ----------------------------------------------------
__int64 __fastcall sub_140880650(__int64 a1, char a2)
{
	bool v2; // zf
	__int64 v5; // rdx
	__int64 v6; // rcx

	v2 = (*(_BYTE*)(a1 + 126) & 0x10) == 0;
	*(_QWORD*)a1 = off_1409A76B0;
	if (!v2)
	{
		v5 = *(_QWORD*)(a1 + 16);
		if (v5)
			sub_140881720(dword_140C10F28, v5);
	}
	v6 = *(_QWORD*)(a1 + 88);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 88) = 0i64;
		sub_1408803D0(a1);
	}
	sub_14087FF90((_QWORD*)a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A76B0: using guessed type __int64 (__fastcall *off_1409A76B0[10])();
// 140C10F28: using guessed type int dword_140C10F28;

