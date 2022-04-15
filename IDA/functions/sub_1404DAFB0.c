#include "../winhttp.h"

//----- (00000001404DAFB0) ----------------------------------------------------
__int64 __fastcall sub_1404DAFB0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

	if (qword_140C65898)
	{
		v4 = a2;
		sub_1403F4900(qword_140C65898, 0x63Bu, (__int64)&v4);
		return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerMovementSpeedUpdate", L"i", a2);
	}
	return result;
}
// 1409EE90C: using guessed type wchar_t aI_10[2];
// 140C65898: using guessed type __int64 qword_140C65898;

