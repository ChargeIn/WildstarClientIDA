#include "../winhttp.h"

//----- (000000014062DC90) ----------------------------------------------------
void __fastcall sub_14062DC90(__int64 a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // r15
	__int64 v5; // rdi
	unsigned __int64 v6; // rbp
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // rsi
	__int64 v10; // rcx
	int* v11; // rax
	int* v12; // rdx
	int* v13; // rdi
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 v16; // rdx

	v2 = *(_QWORD*)(a1 + 72);
	if (a2 < v2)
	{
		v5 = 24 * a2;
		v6 = v2 - a2;
		do
		{
			v7 = *(_QWORD*)(a1 + 64);
			v8 = *(_QWORD*)(v7 + v5 + 16);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v7 + v5 + 16) = 0i64;
			}
			v9 = *(_QWORD*)(a1 + 64);
			v10 = *(_QWORD*)(v9 + v5 + 8);
			if (v10)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
				*(_QWORD*)(v9 + v5 + 8) = 0i64;
			}
			v5 += 24i64;
			--v6;
		} while (v6);
	}
	if (*(_QWORD*)(a1 + 72) <= a2)
	{
		v11 = sub_14018DB00(*(_QWORD*)(a1 + 64), a2, 24i64);
		v12 = *(int**)(a1 + 64);
		v13 = v11;
		if (v12 != v11)
		{
			sub_1407DB590(v11, v12, 24i64 * *(_QWORD*)(a1 + 72));
			v14 = *(_QWORD*)(a1 + 64);
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
			*(_QWORD*)(a1 + 64) = v13;
		}
	}
	*(_QWORD*)(a1 + 72) = a2;
	if (v2 < a2)
	{
		v15 = 24 * v2;
		v16 = a2 - v2;
		do
		{
			v15 += 24i64;
			*(_DWORD*)(v15 + *(_QWORD*)(a1 + 64) - 24) = 0;
			*(_QWORD*)(v15 + *(_QWORD*)(a1 + 64) - 16) = 0i64;
			*(_QWORD*)(v15 + *(_QWORD*)(a1 + 64) - 8) = 0i64;
			--v16;
		} while (v16);
	}
}

