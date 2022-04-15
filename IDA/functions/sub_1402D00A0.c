#include "../winhttp.h"

//----- (00000001402D00A0) ----------------------------------------------------
__int64 __fastcall sub_1402D00A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v9; // r8
	__int64 v11; // rbp
	__int64 v12; // rbx
	__int64* v13; // rcx

	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24i64))(*(_QWORD*)(a1 + 8));
	if (a2 >= *(unsigned int*)(v9 + 64) || a3 >= (*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) / 192i64 || !a4)
		return 87i64;
	if (!a5)
		return 87i64;
	v11 = *(_QWORD*)(v9 + 72) + 88 * a2;
	v12 = 192 * a3;
	sub_1402CFD50(v12 + *(_QWORD*)(a1 + 304));
	v13 = (__int64*)(v12 + *(_QWORD*)(a1 + 304));
	if (v13)
		sub_1402D7AA0(v13, a1 + 344, v11, a4, (unsigned int*)(a1 + 344), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 488i64), a5);
	return 0i64;
}

