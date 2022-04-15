#include "../winhttp.h"

//----- (0000000140617E50) ----------------------------------------------------
__int64 __fastcall sub_140617E50(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v4; // r8
	__int64 v5; // r11
	__int64 v6; // r9
	unsigned int v7; // r10d
	unsigned int v8; // eax
	bool v9; // cf
	unsigned int v10; // ecx
	unsigned int v11; // eax
	bool v12; // cf
	__int64 v13; // rbx
	__int64 i; // rax
	__int64 v15; // rcx
	__int64 j; // rcx
	__int64 k; // rcx
	__int64 v19; // [rsp+30h] [rbp+8h] BYREF
	__int64 v20; // [rsp+40h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	v6 = v4;
	if (v4)
	{
		v7 = *a2;
		do
		{
			v8 = *(_DWORD*)(v6 + 32);
			v9 = v7 < v8;
			if (v7 == v8)
				v9 = a2[1] < *(_DWORD*)(v6 + 36);
			if (v9)
			{
				v5 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
			else
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
		} while (v6);
		v10 = *a2;
		do
		{
			v11 = *(_DWORD*)(v4 + 32);
			v12 = v11 < v10;
			if (v11 == v10)
				v12 = *(_DWORD*)(v4 + 36) < a2[1];
			if (v12)
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
	v13 = 0i64;
	for (i = v2; i != v5; ++v13)
	{
		v15 = *(_QWORD*)(i + 24);
		if (v15)
		{
			i = *(_QWORD*)(i + 24);
			for (j = *(_QWORD*)(v15 + 16); j; j = *(_QWORD*)(j + 16))
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
	v19 = v5;
	v20 = v2;
	sub_140618120(a1, (__int64)&v20, &v19);
	return v13;
}
// 140617EAC: conditional instruction was optimized away because r8.8!=0

