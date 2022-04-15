#include "../winhttp.h"

//----- (00000001403CC480) ----------------------------------------------------
void __fastcall sub_1403CC480(__int64 a1, int a2, int a3, int a4, int a5)
{
	int v5; // eax
	unsigned int v6; // eax
	unsigned int v7; // eax
	unsigned int v8; // eax
	unsigned int v9; // eax
	_DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF

	v5 = *(_DWORD*)(qword_140C65898 + 25384);
	if (a2)
		v6 = v5 | 0x20;
	else
		v6 = v5 & 0xFFFFFFDF;
	if (a3)
		v7 = v6 | 0x40;
	else
		v7 = v6 & 0xFFFFFFBF;
	if (a4)
		v8 = v7 | 0x80;
	else
		v8 = v7 & 0xFFFFFF7F;
	if (a5)
		v9 = v8 | 0x200;
	else
		v9 = v8 & 0xFFFFFDFF;
	if (v9 != *(_DWORD*)(qword_140C65898 + 25384))
	{
		v10[1] = a3;
		v10[0] = a2;
		v10[3] = a5;
		v10[2] = a4;
		sub_1403F4900(qword_140C65898, 0x10Cu, (__int64)v10);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

