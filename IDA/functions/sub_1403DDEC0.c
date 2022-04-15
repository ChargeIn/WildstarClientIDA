#include "../winhttp.h"

//----- (00000001403DDEC0) ----------------------------------------------------
__int64 __fastcall sub_1403DDEC0(__int64 a1, int* a2)
{
	__int64 v2; // rax
	int v5; // ebx
	int* v6; // rdi
	__int64 v7; // rcx
	int v8; // edx
	__int64 v9; // r14
	int* v10; // rax
	__int64 v11; // rcx
	int v12; // edx
	__int64 v13; // rcx
	__int16* v14; // rbx
	__int64* v15; // rax
	__int64 v16; // r15
	__int64 v17; // rsi
	__int64 v18; // rcx
	int* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int16* v22; // rbx
	__int16* v23; // rax
	__int16* v24; // rsi
	__int64* v25; // rax
	__int64 v27; // [rsp+30h] [rbp-48h] BYREF
	int* v28; // [rsp+38h] [rbp-40h]
	int* v29; // [rsp+40h] [rbp-38h]
	__int64 v30; // [rsp+48h] [rbp-30h]
	__int64 v31; // [rsp+50h] [rbp-28h] BYREF
	__int64 v32; // [rsp+58h] [rbp-20h]

	v2 = *(_QWORD*)(a1 + 120);
	if (v2)
		v5 = *(_DWORD*)(v2 + 8);
	else
		v5 = 0;
	v6 = sub_14018B280(2i64, 0);
	v28 = v6;
	v30 = (__int64)v6 + 2;
	sub_1407DB590(v6, dword_1409E7DAC, 0i64);
	v29 = v6;
	if (v6)
		*(_WORD*)v6 = 0;
	if (v5 == *a2 && v5)
	{
		*(_DWORD*)(a1 + 28388) = 2;
		v8 = a2[1];
		*(_DWORD*)(a1 + 28384) = v8;
		if (v8)
			v9 = sub_1403D90D0(a1, v8);
		else
			v9 = 0i64;
		v10 = (int*)sub_14034BDD0(v7, 431347);
		v11 = 0i64;
		if (*(_WORD*)v10)
		{
			do
				++v11;
			while (*((_WORD*)v10 + v11));
		}
	LABEL_21:
		if ((2 * v11) >> 1)
		{
			sub_14001C310(&v27, v10, (int*)((char*)v10 + 2 * v11));
			v6 = v28;
		}
		else
		{
			sub_1407DB590(v6, v10, 0i64);
		}
		if (v9)
		{
			v14 = &word_140B7B704;
			if (*(_QWORD*)(v9 + 16))
				v14 = *(__int16**)(v9 + 16);
		}
		else
		{
			v14 = sub_14034BDD0(v13, 108);
		}
		v15 = sub_14018EFA0(&v31, (__int64)v6, v14);
		if (v15 != &v27)
		{
			sub_14001C480((__int64)&v27, (int*)v15[1], (int*)v15[2]);
			v6 = v28;
		}
		if (v32)
			sub_14018B900(v32, 0);
		sub_14042CEA0(*(_QWORD*)(a1 + 29504));
		goto LABEL_53;
	}
	if (v5 == a2[1] && v5)
	{
		*(_DWORD*)(a1 + 28388) = 1;
		v12 = *a2;
		*(_DWORD*)(a1 + 28384) = *a2;
		if (v12)
			v9 = sub_1403D90D0(a1, v12);
		else
			v9 = 0i64;
		v10 = (int*)sub_14034BDD0(v7, 431343);
		v11 = 0i64;
		if (*(_WORD*)v10)
		{
			do
				++v11;
			while (*((_WORD*)v10 + v11));
		}
		goto LABEL_21;
	}
	v16 = sub_1403D90D0(qword_140C65898, *a2);
	v17 = sub_1403D90D0(qword_140C65898, a2[1]);
	v19 = (int*)sub_14034BDD0(v18, 431348);
	v20 = 0i64;
	if (*(_WORD*)v19)
	{
		do
			++v20;
		while (*((_WORD*)v19 + v20));
	}
	if ((2 * v20) >> 1)
	{
		sub_14001C310(&v27, v19, (int*)((char*)v19 + 2 * v20));
		v6 = v28;
	}
	else
	{
		sub_1407DB590(v6, v19, 0i64);
	}
	v22 = &word_140B7B704;
	if (v17)
	{
		v23 = *(__int16**)(v17 + 16);
		v24 = &word_140B7B704;
		if (v23)
			v24 = v23;
	}
	else
	{
		v24 = sub_14034BDD0(v21, 108);
	}
	if (v16)
	{
		if (*(_QWORD*)(v16 + 16))
			v22 = *(__int16**)(v16 + 16);
	}
	else
	{
		v22 = sub_14034BDD0(v21, 108);
	}
	v25 = sub_14018EFA0(&v31, (__int64)v6, v22, v24);
	if (v25 != &v27)
	{
		sub_14001C480((__int64)&v27, (int*)v25[1], (int*)v25[2]);
		v6 = v28;
	}
	if (v32)
		sub_14018B900(v32, 0);
LABEL_53:
	sub_140003890((__int64*)qword_140C658A0, 0xAu, 0i64, v6, 0, 0i64);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}
// 1403DDF66: variable 'v7' is possibly undefined
// 1403DE056: variable 'v13' is possibly undefined
// 1403DE0D8: variable 'v18' is possibly undefined
// 1403DE16E: variable 'v21' is possibly undefined
// 1409E7DAC: using guessed type int dword_1409E7DAC[16];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

