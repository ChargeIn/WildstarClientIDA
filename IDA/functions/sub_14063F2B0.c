#include "../winhttp.h"

//----- (000000014063F2B0) ----------------------------------------------------
void __fastcall sub_14063F2B0(__int64 a1)
{
	unsigned __int16* v1; // rdx
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rax
	int v5; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(unsigned __int16**)(a1 + 8);
	if (((*(_QWORD*)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFFEui64) != 0)
	{
		v4 = sub_1403D9160(a1, v1);
	LABEL_6:
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 8);
			sub_1403F4900(qword_140C65898, 0x552u, (__int64)&v5);
		}
		return;
	}
	v2 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v2)
	{
		v3 = *(_DWORD*)(v2 + 264);
		if (v3)
		{
			v4 = sub_1403D90D0(qword_140C65898, v3);
			goto LABEL_6;
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

