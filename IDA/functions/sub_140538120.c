#include "../winhttp.h"

//----- (0000000140538120) ----------------------------------------------------
int* __fastcall sub_140538120(__int64 a1, int* a2)
{
	__int64 v2; // r8
	__int64 v5; // rax
	int* v6; // rbx
	__int64* v7; // rax
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned __int64 i; // rdi
	__int64 v11; // rsi
	int* v13; // [rsp+20h] [rbp-6D8h] BYREF
	int* v14; // [rsp+28h] [rbp-6D0h] BYREF
	__int64 v15[6]; // [rsp+30h] [rbp-6C8h] BYREF
	char v16[8]; // [rsp+60h] [rbp-698h] BYREF
	__int64 v17; // [rsp+68h] [rbp-690h]
	__int64 v18[46]; // [rsp+70h] [rbp-688h] BYREF
	__int64 v19[46]; // [rsp+1E0h] [rbp-518h] BYREF
	__int64 v20; // [rsp+350h] [rbp-3A8h]
	unsigned __int64 v21; // [rsp+358h] [rbp-3A0h]
	char v22[8]; // [rsp+360h] [rbp-398h] BYREF
	__int64 v23; // [rsp+368h] [rbp-390h]
	int v24[4]; // [rsp+380h] [rbp-378h] BYREF
	__int64 v25[106]; // [rsp+390h] [rbp-368h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v2 + 8);
	v6 = (int*)v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < (unsigned int)*a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = (int*)v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == (int*)v2 || *a2 < (unsigned int)v6[8])
	{
		v7 = sub_140771790(v15, 0i64);
		v24[0] = *a2;
		sub_1405382E0((__int64)v25, (__int64)v7);
		v14 = v6;
		sub_140538800(a1, &v13, (__int64*)&v14, v24);
		v6 = v13;
		sub_140771AD0(v25);
		sub_140774790((__int64)v15);
		v9 = v21;
		for (i = 0i64; i < v9; ++i)
		{
			v11 = *(_QWORD*)(v20 + 8 * i);
			if (v11)
			{
				sub_14076F7C0(*(_QWORD*)(v20 + 8 * i), v8);
				sub_14018B900(v11, 0);
				v9 = v21;
			}
		}
		v21 = 0i64;
		sub_140774990((__int64)v15);
		sub_140008410((__int64)v22);
		sub_14018B900(v23, 0);
		if (v20)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
		sub_140538480(v19);
		sub_140538480(v18);
		sub_140538520((__int64)v16);
		sub_14018B900(v17, 0);
	}
	return v6 + 12;
}
// 140538214: variable 'v8' is possibly undefined
// 140538120: using guessed type __int64 var_6C8[6];
// 140538120: using guessed type __int64 var_368[106];
// 140538120: using guessed type int var_378[4];
// 140538120: using guessed type char var_398[8];
// 140538120: using guessed type __int64 var_518[46];
// 140538120: using guessed type __int64 var_688[46];
// 140538120: using guessed type char var_698[8];

