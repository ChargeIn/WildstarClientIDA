#include "../winhttp.h"

//----- (000000014054D0F0) ----------------------------------------------------
__int64 __fastcall sub_14054D0F0(__int64 a1, int a2)
{
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 result; // rax
	int v6; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		v3 = *(_QWORD*)(a1 + 256);
		if (v3)
		{
			v6 = **(_DWORD**)(a1 + 48);
			sub_1400EE810(v3 + 576, &v6);
		}
		if (*(_QWORD*)a1)
			**(_QWORD**)a1 = *(_QWORD*)(a1 + 8);
		v4 = *(_QWORD**)(a1 + 8);
		if (v4)
			*v4 = *(_QWORD*)a1;
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_QWORD*)(a1 + 256) = 0i64;
	}
	if (*(_DWORD*)(a1 + 36) != 2)
	{
		result = (unsigned int)dword_140C636A8;
		*(_DWORD*)(a1 + 36) = 2;
		*(_DWORD*)(a1 + 76) = result;
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

