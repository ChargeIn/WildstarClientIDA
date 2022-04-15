#include "../winhttp.h"

//----- (00000001403F7530) ----------------------------------------------------
void __fastcall sub_1403F7530(__int64 a1, char a2)
{
	__int64 v2; // rcx
	__int64 v3; // [rsp+40h] [rbp+18h] BYREF

	v2 = qword_140C65898;
	if (qword_140C65898)
	{
		if (a2)
			*(_DWORD*)(qword_140C65898 + 31648) |= 4u;
		else
			*(_DWORD*)(qword_140C65898 + 31648) &= ~4u;
		v3 = 0i64;
		HIDWORD(v3) = *(_DWORD*)(v2 + 31648);
		sub_1403F4900(v2, 0x12Bu, (__int64)&v3);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

