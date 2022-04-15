#include "../winhttp.h"

//----- (00000001403CA2F0) ----------------------------------------------------
void __fastcall sub_1403CA2F0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // [rsp+30h] [rbp+8h]
	unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		goto LABEL_12;
	v3 = *(_QWORD*)(qword_140C65898 + 25360);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v6 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v6 = *(_QWORD*)(qword_140C65898 + 25360);
	if (v6 != v3 && sub_1403D6D10(v6 + 40))
	{
	LABEL_12:
		v7 = a2;
		sub_1403F4900(qword_140C65898, 0x78Eu, (__int64)&v7);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

