#include "../winhttp.h"

//----- (00000001407F6CF8) ----------------------------------------------------
__int64 __fastcall sub_1407F6CF8(__int64 a1, __int64 a2, _BYTE* a3, __int64 a4)
{
	int v7; // eax
	__int64 v9; // [rsp+30h] [rbp-19h] BYREF
	__int16 v10; // [rsp+38h] [rbp-11h]
	__int64 v11; // [rsp+40h] [rbp-9h] BYREF
	__int16 v12; // [rsp+48h] [rbp-1h]
	__int16 v13; // [rsp+50h] [rbp+7h] BYREF
	char v14; // [rsp+52h] [rbp+9h]
	char v15[28]; // [rsp+54h] [rbp+Bh] BYREF

	v9 = a1;
	sub_1407F6C28((__int64)&v11, (unsigned int*)&v9);
	v9 = v11;
	v10 = v12;
	v7 = sub_1407F84B0((int*)&v9, 17, 0, (__int64)&v13);
	*(_DWORD*)a2 = v14;
	*(_DWORD*)(a2 + 4) = v13;
	*(_DWORD*)(a2 + 8) = v7;
	if ((unsigned int)sub_1407EA194(a3, a4, v15))
	{
		sub_1407DC390();
		JUMPOUT(0x1407F6DACi64);
	}
	*(_QWORD*)(a2 + 16) = a3;
	return a2;
}
// 1407F6DA7: control flows out of bounds to 1407F6DAC
// 1407F6CF8: using guessed type char var_4C[28];

