#include "../winhttp.h"

//----- (000000014085E370) ----------------------------------------------------
char __fastcall sub_14085E370(__int64 a1, char a2, __int64 a3, __int64 a4)
{
	char v5; // cl
	int v7; // eax
	char v8; // cl
	int v9; // edx
	int v10; // edx
	int v12; // [rsp+30h] [rbp+8h] BYREF
	__int64 v13; // [rsp+40h] [rbp+18h] BYREF

	v5 = *(_BYTE*)(a1 + 380);
	if ((v5 & 0x10) != 0)
	{
		v7 = *(unsigned __int8*)(a1 + 379) >> 5;
		v9 = v5 & 0xF;
		v12 = v7;
	}
	else
	{
		*(_BYTE*)(a1 + 380) = v5 | 0x10;
		v7 = sub_14084ECE0(*(_QWORD*)(a1 + 160), &v12);
		*(_BYTE*)(a1 + 379) &= 0x1Fu;
		v8 = v12;
		*(_BYTE*)(a1 + 380) &= 0xF0u;
		v9 = v7;
		*(_BYTE*)(a1 + 379) |= 32 * v8;
		*(_BYTE*)(a1 + 380) |= v7 & 0xF;
	}
	v10 = v9 - 1;
	if (v10)
	{
		if (v10 == 1)
			*(_BYTE*)(a1 + 383) |= 0x10u;
	}
	else
	{
		*(_BYTE*)(a1 + 382) &= 0xF1u;
		LOBYTE(a3) = 1;
		v13 = 0x400000000i64;
		*(_BYTE*)(a1 + 382) |= (unsigned __int8)(2 * (a2 & 7)) | 1;
		LOBYTE(v7) = sub_140860EA0(a1, &v13, a3, a4);
	}
	return v7;
}
// 14085E433: variable 'a3' is possibly undefined
// 14085E433: variable 'a4' is possibly undefined

