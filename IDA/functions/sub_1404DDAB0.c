#include "../winhttp.h"

//----- (00000001404DDAB0) ----------------------------------------------------
__int64 __fastcall sub_1404DDAB0(__int64 a1, float a2)
{
	sub_1400B6390((_QWORD*)a1);
	*(_QWORD*)a1 = off_140B69300;
	*(float*)(a1 + 12) = a2;
	*(_DWORD*)(a1 + 8) = (int)a2;
	return a1;
}
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();

