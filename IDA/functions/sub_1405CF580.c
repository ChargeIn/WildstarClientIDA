#include "../winhttp.h"

//----- (00000001405CF580) ----------------------------------------------------
void __fastcall sub_1405CF580(__int64 a1, __int64 a2, double a3)
{
	int v3; // ebx
	int* v5; // rax
	unsigned int v6; // ecx
	int v7; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+24h] [rbp-44h]
	int* v9; // [rsp+30h] [rbp-38h]
	unsigned __int64 v10; // [rsp+38h] [rbp-30h] BYREF
	__int64 v11; // [rsp+40h] [rbp-28h]
	__int64 v12; // [rsp+48h] [rbp-20h]
	int* v13; // [rsp+50h] [rbp-18h]

	v3 = *(_DWORD*)(a2 + 12);
	v8 = 8i64;
	v5 = sub_14018C320(0i64, 0x240ui64, 8u);
	v10 = 0i64;
	v11 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	*v5 = 27;
	v5[2] = v3;
	v6 = *(_DWORD*)(a2 + 8);
	v9 = v5;
	v7 = 1;
	v10 = __PAIR64__(dword_140C636A8, v6);
	v11 = 0x100000001i64;
	LODWORD(v12) = 1;
	v13 = v5;
	sub_14057A830(qword_140C65898, (int*)&v10, a3);
	sub_14079A4F0((__int64)&v7);
	sub_14018B900((__int64)v9, 0);
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

