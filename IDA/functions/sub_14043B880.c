#include "../winhttp.h"

//----- (000000014043B880) ----------------------------------------------------
void __fastcall sub_14043B880(__int64 a1, unsigned int* a2, __int64* a3)
{
	int* v5; // rax
	int* v6; // rdi
	int v7; // eax
	__int64 v8; // rax
	int* v9; // rdx
	__int64 v10; // rax
	int* v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // edx
	unsigned int v14; // ecx
	__int64 v15; // rax
	__int64 v16; // rdx
	int v17; // eax
	int v18; // eax
	int v19; // eax
	__int64 v20; // [rsp+30h] [rbp-68h] BYREF
	int v21; // [rsp+38h] [rbp-60h]
	__int64 v22; // [rsp+40h] [rbp-58h] BYREF
	int* v23; // [rsp+48h] [rbp-50h]
	int* v24; // [rsp+50h] [rbp-48h]
	int* v25; // [rsp+58h] [rbp-40h]
	__int64 v26; // [rsp+60h] [rbp-38h]
	int v27; // [rsp+68h] [rbp-30h]
	int v28; // [rsp+6Ch] [rbp-2Ch]
	unsigned int v29; // [rsp+70h] [rbp-28h]
	int v30; // [rsp+74h] [rbp-24h]
	unsigned int v31; // [rsp+78h] [rbp-20h]
	int v32; // [rsp+7Ch] [rbp-1Ch]
	int v33; // [rsp+80h] [rbp-18h]

	dword_140C7CD68 = 1;
	v5 = sub_14018B280(16i64, 0);
	v6 = v5;
	v23 = v5;
	v24 = v5;
	v25 = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	v7 = a2[6];
	v20 = 0i64;
	v21 = v7;
	v8 = *a3;
	v26 = 0i64;
	v9 = *(int**)((*(__int64(__fastcall**)(__int64*))(v8 + 176))(a3) + 8);
	v10 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	if ((2 * v10) >> 1)
		sub_14001C310(&v22, v9, (int*)((char*)v9 + 2 * v10));
	else
		sub_1407DB590(v6, v9, 0i64);
	if (a2[1])
	{
		v11 = (int*)sub_1403D90D0(qword_140C65898, a2[6]);
		v13 = a2[1];
		if (v11)
			v14 = sub_140612E30((unsigned int)v11[54], v13, v11[13], v11[55], v11[54]);
		else
			v14 = sub_140612E30(v12, v13, 3, 23, 17);
	}
	else
	{
		v14 = *a2;
	}
	v15 = sub_140211280(v14);
	v16 = v15;
	if (v15)
	{
		if ((*(_DWORD*)(v15 + 24) & *(_DWORD*)(qword_140C63628 + 1524)) == 0
			|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
			|| (v17 = *(_DWORD*)(v15 + 8)) == 0)
		{
			v17 = *(_DWORD*)(v16 + 4);
		}
	}
	else
	{
		v17 = 0;
	}
	v27 = v17;
	v29 = a2[7];
	v31 = a2[10];
	v18 = a2[8];
	v28 = 0;
	v32 = v18;
	v19 = a2[9];
	v30 = 0;
	v33 = v19;
	dword_140C7CD68 = 0;
	sub_14043BF30(dword_140C7CC70, (__int64)&v20);
	if (v23)
		sub_14018B900((__int64)v23, 0);
}
// 14043B9AB: variable 'v12' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CD68: using guessed type int dword_140C7CD68;

