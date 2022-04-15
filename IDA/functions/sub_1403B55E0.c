#include "../winhttp.h"

//----- (00000001403B55E0) ----------------------------------------------------
void __fastcall sub_1403B55E0(_QWORD* a1)
{
	__int64 v1; // rdx
	__int64 v2; // rax
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdx
	double v9; // xmm0_8
	int v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v12)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	v1 = a1[15];
	v2 = (unsigned int)dword_140C636A8;
	a1[4023] = (unsigned int)dword_140C636A8;
	if (v1)
	{
		v4 = v1 + 1472;
		v5 = 197i64;
		do
		{
			v4 += 8i64;
			v2 = *(_QWORD*)(v4 - 8) + 2860486313i64 * v2;
			--v5;
		} while (v5);
	}
	a1[4022] = v2;
	a1[4024] = 0i64;
	a1[4025] = 0i64;
	a1[4026] = 0i64;
	a1[4027] = 0i64;
	a1[4028] = 0i64;
	if ((dword_140C8A6E0 & 1) != 0)
	{
		v6 = qword_140C8A6E8;
	}
	else
	{
		dword_140C8A6E0 |= 1u;
		v6 = 0x141CCCF9Ci64;
		qword_140C8A6E8 = 0x141CCCF9Ci64;
	}
	v7 = a1[4022];
	v8 = v7 ^ *(unsigned int*)(v6 - 19899968);
	a1[4025] = v8;
	a1[4024] = v7 ^ v8;
	*((_DWORD*)a1 + 8056) = *(_DWORD*)(qword_140C8A6E8 - 19899968);
	v9 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
	v10 = 0;
	v11 = sub_14001C280((__int64)a1);
	v13 = 0i64;
	v12 = sub_1405EF190;
	sub_140195960((__int64)(a1 + 4029), 1000 - (int)(v9 * -9001.0), (__int64)&v10, 4);
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C8A6E0: using guessed type int dword_140C8A6E0;
// 140C8A6E8: using guessed type __int64 qword_140C8A6E8;

