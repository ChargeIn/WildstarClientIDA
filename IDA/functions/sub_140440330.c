#include "../winhttp.h"

//----- (0000000140440330) ----------------------------------------------------
__int64 __fastcall sub_140440330(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax
	__int64* v7; // rdi
	__int64* i; // rbx

	v6 = sub_140441E90(a3, *(_QWORD*)(a1 + 16), a2);
	v7 = *(__int64**)(a1 + 16);
	for (i = (__int64*)v6; i != v7; i += 10)
		sub_1404400D0(i);
	*(_QWORD*)(a1 + 16) += 80 * ((a3 - a2) / -80);
	return a2;
}

