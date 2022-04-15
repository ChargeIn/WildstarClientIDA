#include "../winhttp.h"

//----- (00000001406FEB50) ----------------------------------------------------
__int64 __fastcall sub_1406FEB50(__int64 a1)
{
	int v1; // edx
	__int64 v2; // rax

	v1 = *(_DWORD*)(qword_140C65898 + 28124);
	if (v1 == -1)
		v1 = *(_DWORD*)(qword_140C65898 + 28120);
	v2 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v2 + 8) = 3;
	*(double*)v2 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

