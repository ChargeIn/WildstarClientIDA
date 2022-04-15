#include "../winhttp.h"

//----- (0000000140065810) ----------------------------------------------------
__int64 __fastcall sub_140065810(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int* v3; // rcx
	__int64 result; // rax
	__int64 v6; // [rsp+20h] [rbp-18h] BYREF
	int v7; // [rsp+28h] [rbp-10h]

	v3 = *(unsigned int**)(a1 + 48);
	v6 = a3;
	v7 = 4;
	result = sub_14006A4A0(v3, (int*)&v6, (__int64)&v6);
	*(_QWORD*)(a2 + 16) = -1i64;
	*(_DWORD*)a2 = 4;
	*(_DWORD*)(a2 + 8) = result;
	return result;
}

