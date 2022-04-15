#include "../winhttp.h"

//----- (0000000140345EC0) ----------------------------------------------------
__int64 __fastcall sub_140345EC0(__int64 a1, int a2)
{
	int v2; // eax
	unsigned int v3; // ecx
	int v5; // [rsp+38h] [rbp+10h] BYREF

	v5 = a2;
	v2 = sub_1408281C0(1, &v5, 1u);
	v3 = 0;
	if (v2 != 1)
		return (unsigned int)-2147467259;
	return v3;
}

