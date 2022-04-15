#include "../winhttp.h"

//----- (000000014047B500) ----------------------------------------------------
__int64 __fastcall sub_14047B500(__int64 a1, __int64* a2)
{
	__int64 v2; // rbx
	int* v4; // rax
	int* v5; // rdx
	int* v6; // r14
	__int64 v7; // rcx
	__int64 v9; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 14024);
	v9 = *a2;
	v4 = sub_14018DB00(*(_QWORD*)(a1 + 14016), v2 + 1, 8i64);
	*(_QWORD*)&v4[2 * v2] = v9;
	v5 = *(int**)(a1 + 14016);
	v6 = v4;
	if (v5 != v4)
	{
		sub_1407DB590(v4, v5, 8i64 * *(_QWORD*)(a1 + 14024));
		v7 = *(_QWORD*)(a1 + 14016);
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		*(_QWORD*)(a1 + 14016) = v6;
	}
	*(_QWORD*)(a1 + 14024) = v2 + 1;
	return 0i64;
}

