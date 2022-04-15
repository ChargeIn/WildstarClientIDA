#include "../winhttp.h"

//----- (0000000140005040) ----------------------------------------------------
__int64 __fastcall sub_140005040(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	unsigned __int64 v4; // rcx
	__int64 v5; // rbp
	__int64 v6; // rdx
	_QWORD* i; // rax
	unsigned __int64 v9; // r14
	__int64 v10; // rcx
	unsigned __int64 v11; // rbp
	__int64 v12; // rdi
	__int64 v13; // rdx
	__int64 v14; // rcx
	int* v15; // rbp
	unsigned __int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // rcx

	v2 = 0i64;
	v4 = *(_QWORD*)(a1 + 128);
	v5 = 0i64;
	if (v4)
	{
		v6 = *(_QWORD*)(a2 + 8);
		for (i = *(_QWORD**)(a1 + 120); *i != v6; i += 8)
		{
			if (++v5 >= v4)
				return 0i64;
		}
		v9 = v4 - 1;
		v10 = *(_QWORD*)((v5 << 6) + *(_QWORD*)(a1 + 120) + 16);
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
		v11 = v5 + 1;
		if (v11 < *(_QWORD*)(a1 + 128))
		{
			v12 = v11 << 6;
			do
			{
				v13 = v12 + *(_QWORD*)(a1 + 120);
				if (v13 != 64)
					sub_140007A00(v13 - 64, v13);
				v14 = *(_QWORD*)(v12 + *(_QWORD*)(a1 + 120) + 16);
				if (v14)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
				++v11;
				v12 += 64i64;
			} while (v11 < *(_QWORD*)(a1 + 128));
		}
		v15 = sub_14018DB00(*(_QWORD*)(a1 + 120), v9, 64i64);
		if (*(int**)(a1 + 120) != v15)
		{
			if (v9)
			{
				v16 = v9;
				do
				{
					if (&v15[v2])
						sub_140007A00((__int64)&v15[v2], v2 * 4 + *(_QWORD*)(a1 + 120));
					v17 = *(_QWORD*)(v2 * 4 + *(_QWORD*)(a1 + 120) + 16);
					if (v17)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
					v2 += 16i64;
					--v16;
				} while (v16);
			}
			v18 = *(_QWORD*)(a1 + 120);
			if (v18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
			*(_QWORD*)(a1 + 120) = v15;
		}
		*(_QWORD*)(a1 + 128) = v9;
	}
	return 0i64;
}

