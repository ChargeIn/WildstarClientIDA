#include "../winhttp.h"

//----- (00000001401758C0) ----------------------------------------------------
__int64 __fastcall sub_1401758C0(__int64 a1)
{
	bool v2; // zf
	int v3; // esi
	int v4; // r12d
	int v5; // r14d
	int v6; // r15d
	int v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+24h] [rbp-24h]
	int v10; // [rsp+28h] [rbp-20h]
	int v11; // [rsp+2Ch] [rbp-1Ch]
	int v12; // [rsp+60h] [rbp+18h] BYREF

	if ((*(_BYTE*)(a1 + 664) & 8) == 0)
		return 0i64;
	v2 = *(_BYTE*)(a1 + 1041) == 0;
	v3 = *(_DWORD*)(a1 + 724);
	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 728);
	v6 = *(_DWORD*)(a1 + 716);
	v9 = v4;
	v8 = v6;
	if (v2)
	{
		v11 = v5;
		v10 = v6 + *sub_1400C3930((_QWORD**)(a1 + 1056), &v12);
		sub_1400C3AD0(a1 + 1056, &v8);
		v9 = v4;
		v10 = v3;
		v11 = v5;
		v8 = v3 - *sub_1400C3930((_QWORD**)(a1 + 1472), &v12);
	}
	else
	{
		v10 = v3;
		v11 = v4 + sub_1400C3930((_QWORD**)(a1 + 1056), &v12)[1];
		sub_1400C3AD0(a1 + 1056, &v8);
		v8 = v6;
		v10 = v3;
		v11 = v5;
		v9 = v5 - sub_1400C3930((_QWORD**)(a1 + 1472), &v12)[1];
	}
	sub_1400C3AD0(a1 + 1472, &v8);
	return 0i64;
}

