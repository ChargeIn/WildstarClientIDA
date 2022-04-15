#include "../winhttp.h"

//----- (0000000140883910) ----------------------------------------------------
__int64 __fastcall sub_140883910(__int64 a1, char a2)
{
	bool v2; // zf

	v2 = (*(_BYTE*)(a1 + 117) & 0x20) == 0;
	*(_QWORD*)a1 = &off_1409A7B20;
	*(_QWORD*)(a1 + 120) = off_1409A7B80;
	if (!v2)
		sub_140889050(*(_QWORD*)(a1 + 96));
	*(_QWORD*)(a1 + 120) = &off_1409A7960;
	sub_140883870(a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A7960: using guessed type __int64 (__fastcall *off_1409A7960)();
// 1409A7B20: using guessed type __int64 (__fastcall *off_1409A7B20)();
// 1409A7B80: using guessed type __int64 (__fastcall *off_1409A7B80[17])();

