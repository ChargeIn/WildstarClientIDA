#include "../winhttp.h"

//----- (0000000140701800) ----------------------------------------------------
__int64 __fastcall sub_140701800(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // eax
	int v4; // [rsp+38h] [rbp+10h] BYREF

	v1 = dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(_DWORD**)(a1 + 24);
	v2 = v1[2];
	if (v2 && (v2 != 1 || *v1))
	{
		sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
		v4 = 0;
		v4 = *(_DWORD*)(qword_140C65898 + 32132);
		sub_1403F4900(qword_140C65898, 0xD2u, (__int64)&v4);
	}
	*(_DWORD*)(qword_140C65898 + 32132) = 0;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

