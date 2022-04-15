#include "../winhttp.h"

//----- (00000001403C9DF0) ----------------------------------------------------
void __fastcall sub_1403C9DF0(__int64 a1)
{
	__int64 v2; // rax
	unsigned int v3; // ecx
	int v4; // [rsp+30h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 40))
	{
		v2 = *(_QWORD*)(a1 + 16);
		if (!v2 || (v3 = *(_DWORD*)(v2 + 8)) == 0 || dword_140C636A8 - *(_DWORD*)(a1 + 24) <= v3)
		{
			v4 = *(_DWORD*)(a1 + 48);
			sub_1403F4900(qword_140C65898, 0x7A5u, (__int64)&v4);
		}
	}
	if (*(_QWORD*)a1)
		sub_1403D6480(*(_QWORD*)a1, (_QWORD*)a1);
	sub_14018B900(a1, 0);
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

