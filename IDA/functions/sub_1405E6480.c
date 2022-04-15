#include "../winhttp.h"

//----- (00000001405E6480) ----------------------------------------------------
void sub_1405E6480()
{
	int v0; // xmm7_4
	__int64 v1; // rbx
	__int64 v2; // rax

	if (qword_140C65898)
	{
		v0 = 0;
		sub_1403D2140(qword_140C65898, 0x27u);
		v1 = qword_140C65898;
		if (!(unsigned int)sub_1403D2140(qword_140C65898, 0x16u))
		{
			sub_1403D2140(v1, 0x15u);
			return;
		}
		if ((dword_140DC3540 & 1) != 0)
		{
			if (dword_140DC354C)
				return;
		}
		else
		{
			dword_140DC3540 |= 1u;
		}
		dword_140DC354C = 1;
		v2 = sub_140200220(0x524u);
		if (v2)
			v0 = *(_DWORD*)(v2 + 24);
		dword_140DC3548 = v0;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3540: using guessed type int dword_140DC3540;
// 140DC3548: using guessed type int dword_140DC3548;
// 140DC354C: using guessed type int dword_140DC354C;

