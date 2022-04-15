#include "../winhttp.h"

//----- (0000000140520F80) ----------------------------------------------------
char __fastcall sub_140520F80(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rax
	int v5; // eax
	_DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

	if (dword_140C7D6BC)
	{
		v3 = dword_140C7D6B8;
	}
	else
	{
		dword_140C7D6BC = 1;
		v2 = sub_140200220(0x523u);
		if (v2)
		{
			v3 = *(_DWORD*)(v2 + 4);
			dword_140C7D6B8 = v3;
		}
		else
		{
			v3 = 0;
			dword_140C7D6B8 = 0;
		}
	}
	LOBYTE(v4) = v3;
	if ((unsigned __int64)v3 <= *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 280i64))
	{
		v4 = *(_QWORD*)(qword_140C65898 + 120);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 8);
			v7[1] = 64;
			v7[2] = 0;
			v7[0] = v5;
			sub_1403F4900(qword_140C65898, 0x15Au, (__int64)v7);
			LOBYTE(v4) = sub_1400D4040(
				*(_QWORD*)(a1 + 8),
				"WakeHereServiceTokenCompleted",
				*(char**)(a1 + 8),
				&byte_140B7B700);
		}
	}
	return v4;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7D6B8: using guessed type int dword_140C7D6B8;
// 140C7D6BC: using guessed type int dword_140C7D6BC;

