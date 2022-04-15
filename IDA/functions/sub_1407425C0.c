#include "../winhttp.h"

//----- (00000001407425C0) ----------------------------------------------------
__int64 __fastcall sub_1407425C0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rax

	v1 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v1)
		LODWORD(v1) = *(_DWORD*)(v1 + 80);
	v2 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v2 + 8) = 3;
	*(double*)v2 = (double)(int)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

