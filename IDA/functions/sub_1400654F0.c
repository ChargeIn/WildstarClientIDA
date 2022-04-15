#include "../winhttp.h"

//----- (00000001400654F0) ----------------------------------------------------
__int64 __fastcall sub_1400654F0(__int64 a1, __int64 a2, __int64 a3, char* a4)
{
	char v4; // r10
	char* v6; // rax
	__int64 v7; // rax
	__int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

	v4 = *a4;
	if (*a4 == 64 || v4 == 61)
	{
		v6 = a4 + 1;
	}
	else
	{
		v6 = aBinaryString;
		if (v4 != byte_140C1E4F0)
			v6 = a4;
	}
	v9[0] = a1;
	v9[3] = (__int64)v6;
	v9[1] = a2;
	v9[2] = a3;
	sub_140065380((__int64)v9);
	v7 = sub_140062650(a1, (unsigned __int64*)asc_140C1E3D4, 2ui64);
	return sub_140065210((__int64)v9, v7);
}
// 140C1E4F0: using guessed type char byte_140C1E4F0;

