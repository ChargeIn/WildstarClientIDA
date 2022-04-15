#include "../winhttp.h"

//----- (0000000140631430) ----------------------------------------------------
int* __fastcall sub_140631430(__int64 a1, __int64 a2)
{
	int* v4; // rbx
	int v5; // r8d
	_WORD* v6; // r9
	unsigned __int16* v7; // r10
	__int64 v8; // r8
	int v9; // edx
	int v10; // ecx
	int v11; // eax
	char v13[8]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]
	int* v16; // [rsp+50h] [rbp+8h] BYREF
	int* v17; // [rsp+60h] [rbp+18h] BYREF

	sub_140631F70(a1, &v16, (int*)a2);
	v4 = v16;
	if (v16 == *(int**)(a1 + 8) || (v5 = v16[8], *(_DWORD*)a2 < v5))
	{
	LABEL_8:
		sub_14001AF60((__int64)v13, a2);
		v15 = 0i64;
		v16 = v4;
		sub_1406319F0(a1, &v17, (__int64*)&v16, (__int64)v13);
		v4 = v17;
		if (v15)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
		return v4 + 12;
	}
	if (v5 < *(_DWORD*)a2)
		return v4 + 12;
	v6 = *(_WORD**)(a2 + 8);
	v7 = (unsigned __int16*)*((_QWORD*)v16 + 5);
	v8 = 0i64;
	LOWORD(v9) = *v6;
	v10 = (unsigned __int16)*v6 - *v7;
	if (v10)
	{
	LABEL_7:
		if (v10 >= 0)
			return v4 + 12;
		goto LABEL_8;
	}
	while ((_WORD)v9)
	{
		v9 = (unsigned __int16)v6[v8 + 1];
		v11 = v7[++v8];
		v10 = v9 - v11;
		if (v9 != v11)
			goto LABEL_7;
	}
	return v4 + 12;
}
// 140631430: using guessed type char var_28[8];

