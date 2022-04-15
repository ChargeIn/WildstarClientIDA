#include "../winhttp.h"

//----- (000000014049EE40) ----------------------------------------------------
__int64 __fastcall sub_14049EE40(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	_DWORD* v5; // rax
	int v6; // eax
	unsigned int v7; // ecx
	int v8; // ebx
	__int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF

	if (!a2 || !a4)
		return 0i64;
	v10[1] = a2;
	v10[0] = (__int64)off_140B66440;
	v5 = (_DWORD*)sub_1403B4A10((__int64)v10, a4);
	v6 = sub_1403B4A20((__int64)v10, v5);
	v7 = 0;
	v8 = a3 - 1;
	if (v8)
	{
		if (v8 == 1)
		{
			LOBYTE(v7) = v6 != 0;
			return v7;
		}
	}
	else
	{
		return v6 == 0;
	}
	return v7;
}
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();

