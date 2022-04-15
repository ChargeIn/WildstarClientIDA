#include "../winhttp.h"

//----- (00000001404507E0) ----------------------------------------------------
void __fastcall sub_1404507E0(__int64 a1, int a2, int a3, int a4, int a5, int a6, __int64* a7, __int64 a8)
{
	int v11; // ecx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // [rsp+20h] [rbp-68h]
	int v15[6]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v16; // [rsp+48h] [rbp-40h]
	__int64 v17; // [rsp+50h] [rbp-38h]
	int v18; // [rsp+58h] [rbp-30h]
	__int64 v19; // [rsp+68h] [rbp-20h]
	__int64 v20; // [rsp+70h] [rbp-18h]
	__int64 v21; // [rsp+78h] [rbp-10h]

	sub_1407E4830(v15, 0i64, 0x50ui64);
	v15[0] = a2;
	v15[2] = a5;
	v15[1] = a4;
	v11 = *(_DWORD*)(qword_140C7AAC0 + 8);
	v15[4] = a3;
	v15[3] = v11;
	if (qword_140C65898 && (v12 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
	{
		v14 = *(_QWORD*)(v12 + 416);
		v13 = *(_QWORD*)(v12 + 424);
	}
	else
	{
		v13 = 0i64;
		LODWORD(v14) = 0;
	}
	v16 = v14;
	v17 = v13;
	v18 = a6;
	v19 = *a7;
	v20 = a7[1];
	v21 = a8;
	sub_140016010(qword_140C635F0, 0x828u, (__int64)v15);
}
// 14045087A: variable 'v14' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

