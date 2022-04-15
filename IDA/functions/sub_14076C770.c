#include "../winhttp.h"

//----- (000000014076C770) ----------------------------------------------------
__int64 __fastcall sub_14076C770(__int64 a1)
{
	int v2; // edi
	__int64 v3; // rcx
	__int64 result; // rax

	v2 = sub_14076C830(a1, 0i64);
	if (v2 == 6)
		sub_1403CC530(qword_140C65898, 0x57u);
	v3 = *(_QWORD*)(a1 + 16);
	result = 1i64;
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = (double)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

