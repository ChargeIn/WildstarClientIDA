#include "../winhttp.h"

//----- (0000000140779270) ----------------------------------------------------
__int64 __fastcall sub_140779270(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r11
	__int64 v4; // rax
	__int64 v5; // r10
	__int64 v6; // r8
	__int64 v7; // rbx
	__int64 i; // rax
	__int64 v9; // rcx
	__int64 j; // rcx
	__int64 k; // rcx
	__int64 v13; // [rsp+30h] [rbp+8h] BYREF
	__int64 v14; // [rsp+40h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	v6 = v4;
	if (v4)
	{
		do
		{
			if (*a2 >= *(_DWORD*)(v6 + 32))
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v5 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		} while (v6);
		do
		{
			if (*(_DWORD*)(v4 + 32) < *a2)
			{
				v4 = *(_QWORD*)(v4 + 24);
			}
			else
			{
				v2 = v4;
				v4 = *(_QWORD*)(v4 + 16);
			}
		} while (v4);
	}
	v7 = 0i64;
	for (i = v2; i != v5; ++v7)
	{
		v9 = *(_QWORD*)(i + 24);
		if (v9)
		{
			i = *(_QWORD*)(i + 24);
			for (j = *(_QWORD*)(v9 + 16); j; j = *(_QWORD*)(j + 16))
				i = j;
		}
		else
		{
			for (k = *(_QWORD*)(i + 8); i == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
				i = k;
			if (*(_QWORD*)(i + 24) != k)
				i = k;
		}
	}
	v13 = v5;
	v14 = v2;
	sub_140779360(a1, (__int64)&v14, &v13);
	return v7;
}
// 1407792AE: conditional instruction was optimized away because rax.8!=0

