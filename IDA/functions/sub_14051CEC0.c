#include "../winhttp.h"

//----- (000000014051CEC0) ----------------------------------------------------
char __fastcall sub_14051CEC0(__int64 a1)
{
	int v1; // eax
	int v4; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_DWORD*)(a1 + 16);
	if (v1)
	{
		v4 = *(_DWORD*)(a1 + 16);
		sub_1403F4900(qword_140C65898, 0x754u, (__int64)&v4);
		LOBYTE(v1) = sub_1400D4040(*(_QWORD*)(a1 + 8), "GenericMapNodeChosen", *(char**)(a1 + 8), &byte_140B7B700);
	}
	return v1;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C65898: using guessed type __int64 qword_140C65898;

