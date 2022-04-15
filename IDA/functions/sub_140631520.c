#include "../winhttp.h"

//----- (0000000140631520) ----------------------------------------------------
int* __fastcall sub_140631520(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v8; // rax
	int v9; // ecx
	int v10; // eax
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64(__fastcall * *v12)(); // [rsp+28h] [rbp-20h]
	int v13; // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+34h] [rbp-14h]
	int v15; // [rsp+3Ch] [rbp-Ch]
	__int64 v16; // [rsp+50h] [rbp+8h] BYREF
	int* v17; // [rsp+60h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v2 + 8);
	v6 = v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < *a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 != v2 && *a2 >= *(_DWORD*)(v6 + 32))
		return (int*)(v6 + 40);
	v8 = sub_140200220(0x4BDu);
	if (v8)
		v9 = *(_DWORD*)(v8 + 4);
	else
		v9 = 500000;
	v10 = *a2;
	v13 = v9;
	v11 = v10;
	v12 = off_140B68F20;
	v14 = 0i64;
	v15 = dword_140C636A8;
	v16 = v6;
	sub_140632090(a1, &v17, &v16, &v11);
	return v17 + 10;
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();
// 140C636A8: using guessed type int dword_140C636A8;

