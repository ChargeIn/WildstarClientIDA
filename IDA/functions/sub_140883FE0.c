#include "../winhttp.h"

//----- (0000000140883FE0) ----------------------------------------------------
__int64 __fastcall sub_140883FE0(__int64 a1, __int64 a2)
{
	__int64* v2; // r8
	__int64 v3; // r9
	__int64 v5; // r10
	unsigned __int64 v6; // rdx
	int v7; // edx
	__int64 v8; // rdi
	__int64 v9; // rdx
	__int64 result; // rax

	v2 = *(__int64**)(a2 + 8);
	v3 = *(unsigned int*)(a2 + 16);
	v5 = *v2;
	v6 = *(unsigned int*)(a1 + 148);
	if (*v2 + v3 >= v6 || v5 + (unsigned __int64)*((unsigned int*)v2 + 6) <= v6)
		v7 = *((_DWORD*)v2 + 6);
	else
		v7 = v6 - v5;
	v8 = *(_QWORD*)(a1 + 96);
	*(_DWORD*)(a1 + 156) -= v7 - v3;
	v9 = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a2 + 8) = 0i64;
	if (v9)
		sub_140889B30(v8 + 168, v9);
	result = *(_QWORD*)(v8 + 280);
	if (result)
	{
		*(_QWORD*)a2 = result;
		*(_QWORD*)(v8 + 280) = a2;
	}
	else
	{
		*(_QWORD*)(v8 + 280) = a2;
		*(_QWORD*)a2 = 0i64;
	}
	return result;
}

