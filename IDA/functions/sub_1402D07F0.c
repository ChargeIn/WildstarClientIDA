#include "../winhttp.h"

//----- (00000001402D07F0) ----------------------------------------------------
__int64 __fastcall sub_1402D07F0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	unsigned __int64 v4; // rdx

	v2 = (__int64)(a1[47] - a1[46]) >> 2;
	v3 = (*(__int64 (**)(void))(*a1 + 24i64))();
	v4 = *(_QWORD*)(a1[1] + 64i64);
	if (v4 >= *(unsigned int*)(v3 + 216))
		return v2;
	else
		return v2 + *(unsigned int*)(*(_QWORD*)(v3 + 224) + 16 * v4);
}

