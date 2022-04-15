#include "../winhttp.h"

//----- (00000001403D6640) ----------------------------------------------------
__int64 __fastcall sub_1403D6640(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rsi
	int v10; // eax
	int v11; // [rsp+30h] [rbp+8h] BYREF
	unsigned int v12; // [rsp+34h] [rbp+Ch]

	if (a2 >= *(_DWORD*)(a1 + 4))
		return 2147500037i64;
	v6 = *(_QWORD*)(a1 + 16);
	if (a3)
	{
		v9 = 8i64 * a2;
		if (!*(_QWORD*)(v6 + v9))
		{
			*(_QWORD*)(v6 + 8i64 * a2) = a3;
			(***(void(__fastcall****)(_QWORD))(v9 + *(_QWORD*)(a1 + 16)))(*(_QWORD*)(v9 + *(_QWORD*)(a1 + 16)));
			v10 = *(_DWORD*)a1;
			v12 = a2;
			v11 = v10;
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v9 + *(_QWORD*)(a1 + 16)) + 40i64))(
				*(_QWORD*)(v9 + *(_QWORD*)(a1 + 16)),
				&v11);
			return 0i64;
		}
	}
	else
	{
		v7 = 8i64 * a2;
		v8 = *(_QWORD*)(v7 + v6);
		if (v8)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			*(_QWORD*)(v7 + *(_QWORD*)(a1 + 16)) = 0i64;
			return 0i64;
		}
	}
	return 2147500037i64;
}

