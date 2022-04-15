#include "../winhttp.h"

//----- (00000001403A1090) ----------------------------------------------------
int* __fastcall sub_1403A1090(__int64 a1, unsigned int a2, int* a3)
{
	int v3; // eax
	int v4; // ebx
	int v5; // edi
	__int64 v6; // r8
	__int64 v7; // rcx
	int* result; // rax
	unsigned int v9; // [rsp+20h] [rbp-18h] BYREF
	__int64 v10; // [rsp+24h] [rbp-14h]
	int v11; // [rsp+2Ch] [rbp-Ch]
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF
	int* v13; // [rsp+50h] [rbp+18h] BYREF

	v12 = a1;
	v3 = a3[2];
	v4 = *a3;
	v5 = a3[1];
	v6 = *(_QWORD*)(qword_140C65898 + 26560);
	HIDWORD(v10) = v3;
	v7 = *(_QWORD*)(v6 + 8);
	result = (int*)v6;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			result = (int*)v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (result == (int*)v6 || a2 < result[8])
	{
		v9 = a2;
		v10 = 0i64;
		v11 = 0;
		v12 = (__int64)result;
		sub_1403AE630(qword_140C65898 + 26552, &v13, &v12, (int*)&v9);
		result = v13;
	}
	result[9] = v4;
	result[10] = v5;
	result[11] = 0;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

