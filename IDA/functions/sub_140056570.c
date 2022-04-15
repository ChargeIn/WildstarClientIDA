#include "../winhttp.h"

//----- (0000000140056570) ----------------------------------------------------
void __fastcall __noreturn sub_140056570(_QWORD* a1, unsigned int a2, const char* a3)
{
	unsigned __int64 v4; // rcx
	unsigned __int64 v6; // rax
	unsigned int v7; // edi
	const char* v8; // r9
	char v9[8]; // [rsp+30h] [rbp-A8h] BYREF
	const char* v10; // [rsp+38h] [rbp-A0h]
	const char* v11; // [rsp+40h] [rbp-98h]
	int v12; // [rsp+A4h] [rbp-34h]

	v4 = a1[5];
	v6 = a1[10];
	v7 = a2;
	if (v4 > v6)
	{
		v12 = ((int)v4 - (int)v6) / 40;
		sub_140059EF0((__int64)a1, byte_140C1D848, (__int64)v9);
		if (!strcmp(v11, aMethod) && !--v7)
			sub_140056830(a1, (unsigned __int64*)"calling '%s' on bad self (%s)", v10, a3);
		v8 = (const char*)&unk_140C1D3E8;
		if (v10)
			v8 = v10;
		v10 = v8;
		sub_140056830(a1, (unsigned __int64*)aBadArgumentDTo, v7);
	}
	sub_140056830(a1, (unsigned __int64*)"bad argument #%d (%s)", a2, a3);
}
// 140C1D848: using guessed type _BYTE byte_140C1D848[8];
// 140056570: using guessed type char var_A8[8];

