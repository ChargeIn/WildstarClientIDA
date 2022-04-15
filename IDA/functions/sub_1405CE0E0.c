#include "../winhttp.h"

//----- (00000001405CE0E0) ----------------------------------------------------
void __fastcall sub_1405CE0E0(__int64 a1, unsigned int* a2, _QWORD* a3, double a4)
{
	int v6; // eax
	_DWORD* v7; // rax
	_QWORD* v8; // r8
	int v9; // ecx
	unsigned int v10; // eax
	int v11; // eax
	int v12; // [rsp+20h] [rbp-48h] BYREF
	unsigned int v13; // [rsp+24h] [rbp-44h]
	int v14; // [rsp+28h] [rbp-40h]
	unsigned int v15; // [rsp+2Ch] [rbp-3Ch]

	v13 = *a2;
	v6 = a2[1];
	v12 = 30;
	v14 = v6;
	v15 = a2[2];
	sub_1405CCF20(a1, (__int64)&v12, a3, a4);
	v7 = (_DWORD*)sub_140211280(a2[1]);
	if (v7)
	{
		if ((*(_DWORD*)(qword_140C63628 + 1524) & v7[6]) != 0
			&& *(_DWORD*)(qword_140C635F0 + 5784) == 1
			&& (v9 = v7[2]) != 0
			|| (v9 = v7[1]) != 0)
		{
			v10 = *a2;
			v12 = 34;
			if (v10 >= 0x3E8)
				v11 = v10 - 1000;
			else
				v11 = 0;
			v14 = v9;
			v13 = v11;
			if (v11)
				sub_1405CCF20(a1, (__int64)&v12, v8, a4);
			else
				sub_1405CF8E0(a1, (__int64)&v12);
		}
	}
}
// 1405CE181: variable 'v8' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;

