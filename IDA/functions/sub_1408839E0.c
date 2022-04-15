#include "../winhttp.h"

//----- (00000001408839E0) ----------------------------------------------------
__int64 __fastcall sub_1408839E0(__int64 a1, char a2)
{
	bool v2; // zf

	v2 = (*(_BYTE*)(a1 + 117) & 0x20) == 0;
	*(_QWORD*)a1 = &off_1409A7A70;
	*(_QWORD*)(a1 + 120) = &off_1409A7AB0;
	if (!v2)
		sub_140889460(*(_QWORD*)(a1 + 96));
	*(_QWORD*)(a1 + 120) = &off_1409A78F0;
	sub_140883870(a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A78F0: using guessed type __int64 (__fastcall *off_1409A78F0)();
// 1409A7A70: using guessed type __int64 (__fastcall *off_1409A7A70)();
// 1409A7AB0: using guessed type __int64 (__fastcall *off_1409A7AB0)();

