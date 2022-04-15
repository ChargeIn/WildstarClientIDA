#include "../winhttp.h"

//----- (00000001403B59F0) ----------------------------------------------------
__int64 __fastcall sub_1403B59F0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	int v5; // eax
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // ebx

	v3 = sub_1401FA4A0(a2);
	if (!v3 || (v4 = *(_QWORD*)(v3 + 32)) == 0)
		v4 = 0x7FFFFFFFFFFFFFFFi64;
	v5 = dword_140DC2264;
	if ((dword_140DC2264 & 1) == 0)
	{
		dword_140DC2264 |= 1u;
		v6 = sub_140200220(0x45Bu);
		if (v6)
			v7 = *(_DWORD*)(v6 + 4);
		else
			v7 = 500000;
		dword_140DC2268 = v7;
		v5 = dword_140DC2264;
	}
	if ((v5 & 2) == 0)
	{
		dword_140DC2264 = v5 | 2;
		v8 = sub_140200220(0x45Cu);
		if (v8)
			v9 = *(_DWORD*)(v8 + 4);
		else
			v9 = 5000;
		dword_140DC226C = v9;
	}
	if (!(unsigned int)sub_1403D2140(qword_140C65898, 0xEu))
	{
		v10 = a2 - 1;
		if (!v10)
			return dword_140DC2268;
		if (v10 == 1)
			return dword_140DC226C;
	}
	return v4;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2264: using guessed type int dword_140DC2264;
// 140DC2268: using guessed type int dword_140DC2268;
// 140DC226C: using guessed type int dword_140DC226C;

