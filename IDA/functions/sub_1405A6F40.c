#include "../winhttp.h"

//----- (00000001405A6F40) ----------------------------------------------------
float __fastcall sub_1405A6F40(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 v4; // r8
	unsigned int v5; // r10d
	__int64 v6; // r11
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	float v11; // xmm6_4
	__int64 v12; // [rsp+40h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v2)
		return 100.0;
	v4 = sub_1407A16F0(a1, a2);
	if (!v4)
		return 100.0;
	v7 = *(_QWORD*)(v6 + 28064);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v5)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v12 = v8, v5 < *(_DWORD*)(v8 + 32)))
		v12 = *(_QWORD*)(v6 + 28064);
	if (v12 == v7)
		return 100.0;
	v10 = *(_QWORD*)(v12 + 40);
	if (!*(_QWORD*)(v10 + 24))
		return 0.0;
	v11 = (float)*(int*)(v4 + 4) * *(float*)(v2 + 2564);
	return (float)(int)sub_140195F70(v10 + 8) / v11;
}
// 1405A6F78: variable 'v6' is possibly undefined
// 1405A6F94: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

