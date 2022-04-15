#include "../winhttp.h"

//----- (00000001406A04F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1406A04F0(__int64 a1)
{
	__int64 v2; // rax
	unsigned int v3; // eax
	unsigned int v4; // ecx

	if (*(_QWORD*)(a1 + 8))
		return 0i64;
	if ((dword_140DC4AFC & 1) != 0)
	{
		v3 = dword_140DC4B00;
	}
	else
	{
		dword_140DC4AFC |= 1u;
		v2 = sub_140200220(0x439u);
		if (v2)
		{
			v3 = *(_DWORD*)(v2 + 12);
			dword_140DC4B00 = v3;
		}
		else
		{
			v3 = 200;
			dword_140DC4B00 = 200;
		}
	}
	v4 = *(_DWORD*)(a1 + 20);
	return v4 && v4 <= v3 && *(_QWORD*)(a1 + 24) > 0i64;
}
// 140DC4AFC: using guessed type int dword_140DC4AFC;
// 140DC4B00: using guessed type int dword_140DC4B00;

