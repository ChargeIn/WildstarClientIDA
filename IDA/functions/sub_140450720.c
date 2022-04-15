#include "../winhttp.h"

//----- (0000000140450720) ----------------------------------------------------
void __fastcall sub_140450720(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // [rsp+20h] [rbp-48h]
	int v9[3]; // [rsp+30h] [rbp-38h] BYREF
	int v10; // [rsp+3Ch] [rbp-2Ch]
	__int64 v11; // [rsp+40h] [rbp-28h]
	__int64 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+50h] [rbp-18h]
	__int64 v14; // [rsp+58h] [rbp-10h]

	v11 = 0i64;
	v10 = 0;
	v12 = 0i64;
	v13 = 0i64;
	v14 = 0i64;
	v9[0] = a2;
	v9[1] = a4;
	v9[2] = a5;
	v10 = *(_DWORD*)(qword_140C7AAC0 + 8);
	LODWORD(v11) = a3;
	if (qword_140C65898 && (v6 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
	{
		v8 = *(_QWORD*)(v6 + 416);
		v7 = *(_QWORD*)(v6 + 424);
	}
	else
	{
		v7 = 0i64;
		LODWORD(v8) = 0;
	}
	v12 = v8;
	v13 = v7;
	LODWORD(v14) = a6;
	sub_1400161D0(qword_140C635F0, 0x82Au, (__int64)v9);
}
// 1404507B0: variable 'v8' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

