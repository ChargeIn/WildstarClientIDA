#include "../winhttp.h"

//----- (000000014039D4A0) ----------------------------------------------------
__int64 __fastcall sub_14039D4A0(__int64 a1, __int64 a2, double a3, double a4)
{
	unsigned int v6; // edi
	int v7; // r8d
	int v8; // eax
	int v9; // ebx
	__int64 v10; // rax
	int v11; // [rsp+50h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 24))
		return 2147500037i64;
	if (*(_BYTE*)(a1 + 13548))
		sub_140437A10((_QWORD*)qword_140C658D8, 0x15Fu, 0, 0i64, 0, 0, 1);
	v6 = sub_14046C580(a1, *(_QWORD*)(qword_140C65898 + 120));
	if (v6)
	{
		sub_14055B0E0(qword_140C65898, *(_DWORD*)(a1 + 8), a3, a4);
		v8 = sub_14039C430(qword_140C65898, v6, v7);
		v9 = v8;
		if (v8 && v8 != 317)
		{
			v10 = sub_1403ACD90(qword_140C65B70, v6, *(_QWORD*)(qword_140C65898 + 25744));
			sub_1403A12A0(qword_140C65898, v9, v10, 0);
			return 0i64;
		}
	}
	else
	{
		v11 = *(_DWORD*)(a1 + 8);
		sub_1403F4900(qword_140C65898, 0xB3u, (__int64)&v11);
	}
	return 0i64;
}
// 14039D523: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B70: using guessed type __int64 qword_140C65B70;

