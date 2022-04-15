#include "../winhttp.h"

//----- (0000000140566020) ----------------------------------------------------
void __fastcall sub_140566020(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // r14
	int* v7; // rdx
	__int64 v8; // rcx

	if (a2)
	{
		v2 = qword_140C65B70;
		v4 = *(_QWORD*)(qword_140C65B70 + 2056);
		v5 = sub_14018DB00(*(_QWORD*)(qword_140C65B70 + 2048), v4 + 1, 8i64);
		v6 = v5;
		*(_QWORD*)&v5[2 * v4] = a2;
		v7 = *(int**)(v2 + 2048);
		if (v7 != v5)
		{
			sub_1407DB590(v5, v7, 8i64 * *(_QWORD*)(v2 + 2056));
			v8 = *(_QWORD*)(v2 + 2048);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			*(_QWORD*)(v2 + 2048) = v6;
		}
		*(_QWORD*)(v2 + 2056) = v4 + 1;
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

