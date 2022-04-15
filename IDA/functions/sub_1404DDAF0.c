#include "../winhttp.h"

//----- (00000001404DDAF0) ----------------------------------------------------
__int64 __fastcall sub_1404DDAF0(__int64 a1, int a2)
{
	sub_1400B6390((_QWORD*)a1);
	*(_DWORD*)(a1 + 88) = 1;
	*(_QWORD*)a1 = off_140B69170;
	sub_1400B6D70(a1, (__int64)L"name", a2);
	return a1;
}
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();

