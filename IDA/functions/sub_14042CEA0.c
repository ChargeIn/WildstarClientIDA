#include "../winhttp.h"

//----- (000000014042CEA0) ----------------------------------------------------
__int64 __fastcall sub_14042CEA0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // edx
	__int64 v4; // rax
	int v6; // [rsp+20h] [rbp-18h]

	v1 = qword_140C65898;
	v3 = *(_DWORD*)(qword_140C65898 + 28384);
	if (v3)
	{
		v4 = sub_1403D90D0(qword_140C65898, v3);
		if (v4)
		{
			v6 = *(_DWORD*)(v4 + 8);
			return sub_1400EA3E0(a1, "DuelStateChanged", byte_1409ECC6C, *(unsigned int*)(qword_140C65898 + 28388), v6);
		}
		v1 = qword_140C65898;
	}
	return sub_1400EA3E0(a1, "DuelStateChanged", byte_1409ECAEC, *(unsigned int*)(v1 + 28388));
}
// 1409ECAEC: using guessed type _BYTE byte_1409ECAEC[4];
// 1409ECC6C: using guessed type _BYTE byte_1409ECC6C[4];
// 140C65898: using guessed type __int64 qword_140C65898;

