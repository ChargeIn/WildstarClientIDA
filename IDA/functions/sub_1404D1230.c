#include "../winhttp.h"

//----- (00000001404D1230) ----------------------------------------------------
__int64 __fastcall sub_1404D1230(__int64 a1, __int64 a2)
{
	unsigned int v5; // ebp
	__int64 v6; // r8
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64* v10; // rax
	__int64 v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rbx
	int* v14; // rax
	int* v15; // r14
	int* v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF
	__int64 v19; // [rsp+60h] [rbp+18h] BYREF

	if (!*(_QWORD*)(a1 + 8))
		return 2147500037i64;
	v5 = 0;
	*(_QWORD*)(a1 + 24) = 0i64;
	if (*(_DWORD*)(a2 + 12))
	{
		while (1)
		{
			v6 = *(_QWORD*)(qword_140C65A38 + 48);
			v7 = *(_DWORD*)(*(_QWORD*)(a2 + 24) + 4i64 * v5);
			v8 = *(_QWORD*)(v6 + 8);
			v9 = v6;
			while (v8)
			{
				if (*(_DWORD*)(v8 + 32) < v7)
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v9 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			}
			if (v9 == v6 || v7 < *(_DWORD*)(v9 + 32))
			{
				v19 = *(_QWORD*)(qword_140C65A38 + 48);
				v10 = &v19;
			}
			else
			{
				v18 = v9;
				v10 = &v18;
			}
			v11 = *v10;
			if (v11 == v6)
				return 2147500037i64;
			v12 = *(_QWORD*)(v11 + 40);
			if (!v12)
				return 2147500037i64;
			v13 = *(_QWORD*)(a1 + 24);
			v14 = sub_14018DB00(*(_QWORD*)(a1 + 16), v13 + 1, 8i64);
			v15 = v14;
			*(_QWORD*)&v14[2 * v13] = v12;
			v16 = *(int**)(a1 + 16);
			if (v16 != v14)
			{
				sub_1407DB590(v14, v16, 8i64 * *(_QWORD*)(a1 + 24));
				v17 = *(_QWORD*)(a1 + 16);
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
				*(_QWORD*)(a1 + 16) = v15;
			}
			++v5;
			*(_QWORD*)(a1 + 24) = v13 + 1;
			if (v5 >= *(_DWORD*)(a2 + 12))
				goto LABEL_20;
		}
	}
	else
	{
	LABEL_20:
		*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 8);
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 4);
		*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 16);
		return 0i64;
	}
}
// 140C65A38: using guessed type __int64 qword_140C65A38;

