#include "../winhttp.h"

//----- (00000001402DF980) ----------------------------------------------------
__int64 __fastcall sub_1402DF980(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int* v4; // rbp
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // rsi
	unsigned int* v7; // rbp
	int* v8; // rax
	int* v9; // rdx
	int* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // r14
	int* v15; // rdx
	__int64 v16; // rcx

	v2 = *(_QWORD*)(a1 + 5344);
	if (!v2)
		return 0i64;
	v4 = (unsigned int*)(*(__int64 (**)(void))(*(_QWORD*)v2 + 24i64))();
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5344) + 16i64))(*(_QWORD*)(a1 + 5344));
	if (v5 < 4)
		return 2147500037i64;
	v6 = *v4;
	v7 = v4 + 1;
	if (v5 - 4 < 104 * v6)
		return 2147500037i64;
	if (*(_QWORD*)(a1 + 5360) > v6)
		*(_QWORD*)(a1 + 5360) = v6;
	v8 = sub_14018DBC0(*(_QWORD*)(a1 + 5352), v6, 8i64);
	v9 = *(int**)(a1 + 5352);
	v10 = v8;
	if (v9 != v8)
	{
		sub_1407DB590(v8, v9, 8i64 * *(_QWORD*)(a1 + 5360));
		v11 = *(_QWORD*)(a1 + 5352);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		*(_QWORD*)(a1 + 5352) = v10;
	}
	sub_1402E1320((__int64*)(a1 + 5368), v6);
	for (; v6; --v6)
	{
		v12 = *(_QWORD*)(a1 + 5360);
		v13 = sub_14018DB00(*(_QWORD*)(a1 + 5352), v12 + 1, 8i64);
		v14 = v13;
		*(_QWORD*)&v13[2 * v12] = v7;
		v15 = *(int**)(a1 + 5352);
		if (v15 != v13)
		{
			sub_1407DB590(v13, v15, 8i64 * *(_QWORD*)(a1 + 5360));
			v16 = *(_QWORD*)(a1 + 5352);
			if (v16)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
			*(_QWORD*)(a1 + 5352) = v14;
		}
		*(_QWORD*)(a1 + 5360) = v12 + 1;
		sub_1402E1400((__int64*)(a1 + 5368), (void(__fastcall****)(_QWORD))(a1 + 5344));
		v7 += 26;
	}
	return 0i64;
}

