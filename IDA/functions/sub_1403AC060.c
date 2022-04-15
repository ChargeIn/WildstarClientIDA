#include "../winhttp.h"

//----- (00000001403AC060) ----------------------------------------------------
float __fastcall sub_1403AC060(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // r10
	float result; // xmm0_4
	__int64 v5; // r9
	__int64 v6; // rax
	int v7; // ecx
	int v8; // eax
	int v9; // ecx
	__int64 v10; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 8);
	result = 1.0;
	v5 = v3;
	v6 = *(_QWORD*)(v3 + 8);
	while (v6)
	{
		v7 = *(_DWORD*)(v6 + 32);
		if (v7 < a2 || a2 >= v7 && *(_DWORD*)(v6 + 36) < a3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v3 || (v8 = *(_DWORD*)(v5 + 32), a2 < v8) || v8 >= a2 && a3 < *(_DWORD*)(v5 + 36))
		v10 = v3;
	else
		v10 = v5;
	if (v10 != v3)
	{
		v9 = *(_DWORD*)(v10 + 48);
		if (!v9 || v9 == 2)
			return *(float*)(v10 + 52);
	}
	return result;
}

