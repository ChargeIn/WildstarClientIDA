#include "../winhttp.h"

//----- (0000000140880530) ----------------------------------------------------
void __fastcall sub_140880530(__int64 a1, unsigned int a2, int a3, int a4)
{
	_DWORD* v7; // rdx
	int v8; // eax
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	sub_1408815D0(a1 + 64, *(_QWORD*)(a1 + 24), a2, a2 + a3);
	v7 = *(_DWORD**)(a1 + 24);
	if ((v7[2] & 0x10000) != 0)
	{
		v8 = v7[48];
		v9[0] = a2;
		v9[2] = a4;
		v9[3] = v8;
		v9[1] = 1065353216;
		sub_140845660(qword_140C61B60, v7[30], v9, a1);
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61B60: using guessed type __int64 qword_140C61B60;

