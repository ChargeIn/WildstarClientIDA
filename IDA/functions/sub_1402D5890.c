#include "../winhttp.h"

//----- (00000001402D5890) ----------------------------------------------------
__int64 __fastcall sub_1402D5890(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rcx
	int v5[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_DWORD*)(a1 + 24);
	v5[0] = -1;
	if (v1 > 1)
		return *(_QWORD*)(a1 + 48);
	if (!v1)
		*(_DWORD*)(a1 + 24) = 1;
	if (*(_DWORD*)(a1 + 24) != 1)
		return *(_QWORD*)(a1 + 48);
	if ((*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40), v5))
	{
		sub_1402D5AA0(a1);
		v3 = *(_QWORD*)(a1 + 40);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 24) = 2;
	}
	return *(_QWORD*)(a1 + 48);
}
// 1402D5890: using guessed type int var_18[6];

