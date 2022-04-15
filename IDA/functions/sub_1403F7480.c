#include "../winhttp.h"

//----- (00000001403F7480) ----------------------------------------------------
void __fastcall sub_1403F7480(__int64 a1, char a2)
{
	__int64 v2; // rcx
	int v3; // edx
	__int64 v4; // [rsp+40h] [rbp+18h] BYREF

	v2 = qword_140C65898;
	if (qword_140C65898)
	{
		if (a2)
		{
			*(_DWORD*)(qword_140C65898 + 31648) |= 2u;
		}
		else
		{
			*(_DWORD*)(qword_140C65898 + 31648) &= ~2u;
			v3 = dword_140C45E40;
			if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
				v3 = *(_DWORD*)qword_140C63750;
			sub_14001A6C0((__int64)&off_140C45E30, v3, 0);
			v2 = qword_140C65898;
		}
		v4 = 0i64;
		HIDWORD(v4) = *(_DWORD*)(v2 + 31648);
		sub_1403F4900(v2, 0x12Bu, (__int64)&v4);
		if (qword_140C63620)
		{
			if (*(_QWORD*)(qword_140C63620 + 24))
				sub_1400EA3E0(*(_QWORD*)(qword_140C63620 + 88), "OpenOptions", &unk_1409D0202);
		}
	}
}
// 140C45E30: using guessed type __int64 (__fastcall *off_140C45E30)();
// 140C45E40: using guessed type int dword_140C45E40;
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

