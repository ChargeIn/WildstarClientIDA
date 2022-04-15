#include "../winhttp.h"

//----- (000000014073B8F0) ----------------------------------------------------
__int64 __fastcall sub_14073B8F0(_QWORD* a1)
{
	int* v2; // rax
	int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	int v7; // ecx
	int v8; // edx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // [rsp+30h] [rbp+8h]

	v2 = (int*)sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2)
		v3 = *v2;
	else
		v3 = 16;
	v4 = *(_QWORD*)(qword_140C65B98 + 72);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v11 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v11 = *(_QWORD*)(qword_140C65B98 + 72);
	if (v11 == v4 || v11 == -40)
		v7 = -1;
	else
		v7 = *(_DWORD*)(v11 + 68);
	if (v7 - dword_140C636A8 > 0)
		v8 = 0;
	else
		v8 = dword_140C636A8 - v7;
	v9 = a1[2];
	*(_DWORD*)(v9 + 8) = 3;
	result = 1i64;
	*(double*)v9 = (float)((float)v8 * 0.001);
	a1[2] += 16i64;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65B98: using guessed type __int64 qword_140C65B98;

