#include "../winhttp.h"

//----- (00000001402D5AA0) ----------------------------------------------------
int* __fastcall sub_1402D5AA0(__int64 a1)
{
	int v2; // eax
	__int64 v3; // rdx
	__int64 v4; // r8
	int v5; // r9d
	__int64 v6; // rax
	__int64 v7; // rdx
	int* result; // rax
	__int64 v9; // rcx
	__int64 v10; // rbx
	int* v11; // rax

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 40i64))(*(_QWORD*)(a1 + 40), 0i64);
	v5 = v2;
	if (v2 < 0
		|| (v6 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(
			*(_QWORD*)(a1 + 32),
			v3,
			v4,
			(unsigned int)v2),
			v7 = *(_QWORD*)(a1 + 32),
			*(_QWORD*)(a1 + 48) = v6,
			result = (int*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, v7),
			v5 = (int)result,
			(int)result < 0))
	{
		if (v5 != -1608318974)
			sub_1400035B0();
		v9 = *(_QWORD*)(a1 + 32);
		if (v9)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*(_QWORD*)(a1 + 32) = 0i64;
		}
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		sub_1401C5690(v10, (int**)(a1 + 32), 0);
		v11 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 48) = v11;
		return sub_1407E4830(v11, 0i64, v10);
	}
	return result;
}
// 1402D5AC3: variable 'v3' is possibly undefined
// 1402D5AC3: variable 'v4' is possibly undefined

