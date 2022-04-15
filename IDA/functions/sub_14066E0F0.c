#include "../winhttp.h"

//----- (000000014066E0F0) ----------------------------------------------------
float* __fastcall sub_14066E0F0(__int64 a1, __int64 a2, signed int a3, float a4)
{
	__int64 v4; // r10
	__int64 v5; // rcx
	float v6; // xmm6_4
	__int64 v7; // r9
	__int64 v8; // rax
	float* result; // rax
	float* v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+50h] [rbp+8h] BYREF
	float* v12; // [rsp+58h] [rbp+10h] BYREF

	v11 = a1;
	v4 = *(_QWORD*)(a2 + 8);
	v5 = *(_QWORD*)(v4 + 8);
	v6 = a4;
	v7 = v4;
	v8 = v5;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a3)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v4 || (v11 = v7, a3 < *(_DWORD*)(v7 + 32)))
		v11 = v4;
	result = (float*)v11;
	if (v11 == v4)
	{
		result = (float*)v4;
		while (v5)
		{
			if (*(_DWORD*)(v5 + 32) < a3)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				result = (float*)v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		}
		if (result == (float*)v4 || a3 < *((_DWORD*)result + 8))
		{
			v11 = (unsigned int)a3;
			v12 = result;
			sub_1403D3E70(a2, (int**)&v10, (__int64*)&v12, &v11);
			result = v10;
			v10[9] = a4;
			return result;
		}
	}
	else
	{
		v6 = a4 + *(float*)(v11 + 36);
	}
	result[9] = v6;
	return result;
}

