#include "../winhttp.h"

//----- (000000014054F560) ----------------------------------------------------
__int64 __fastcall sub_14054F560(__int64 a1, int a2)
{
	__int64 v2; // r10
	unsigned int v3; // r9d
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 result; // rax
	int v7; // ecx
	__int64 v8; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	v3 = **(_DWORD**)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < v3)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v8 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v8 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
	result = v8;
	if (v8 != v2 && v8 != -40)
	{
		v7 = dword_140C636A8;
		*(_DWORD*)(v8 + 116) = dword_140C636A8;
		result = (unsigned int)(v7 + a2);
		*(_DWORD*)(v8 + 112) = result;
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65B80: using guessed type __int64 qword_140C65B80;

