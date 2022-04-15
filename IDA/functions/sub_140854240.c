#include "../winhttp.h"

//----- (0000000140854240) ----------------------------------------------------
__int64 __fastcall sub_140854240(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned int v5; // edx
	__int64 v7; // [rsp+20h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 48);
	if (v3)
		v5 = *(unsigned __int8*)(v3 + 32);
	else
		v5 = 0;
	LOBYTE(v7) = 1;
	return sub_140851A80(a1, v5, a2, a3, v7);
}
// 140854263: variable 'v7' is possibly undefined

