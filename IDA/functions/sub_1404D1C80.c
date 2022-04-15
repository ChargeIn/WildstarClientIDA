#include "../winhttp.h"

//----- (00000001404D1C80) ----------------------------------------------------
__int64* __fastcall sub_1404D1C80(__int64 a1, __int64* a2)
{
	__int64 v2; // r14
	__int64 v4; // r14
	__int64 v5; // rbp
	__int64 v6; // rdi
	__int64 v7; // rsi
	__int64 v8; // r12
	int* v9; // rax
	int* v10; // r15
	__int64 v11; // rdi

	v2 = qword_140C65A38;
	a2[1] = 0i64;
	v4 = v2 + 184;
	*a2 = 0i64;
	v5 = 5i64;
	do
	{
		if (*(_QWORD*)v4)
		{
			v6 = a2[1];
			v7 = *(_QWORD*)(*(_QWORD*)v4 + 8i64);
			v8 = v6 + 1;
			v9 = sub_14018DB00(*a2, v6 + 1, 8i64);
			v10 = v9;
			*(_QWORD*)&v9[2 * v6] = v7;
			v11 = *a2;
			if ((int*)*a2 != v9)
			{
				sub_1407DB590(v9, (int*)*a2, 8 * a2[1]);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				*a2 = (__int64)v10;
			}
			a2[1] = v8;
		}
		v4 += 8i64;
		--v5;
	} while (v5);
	return a2;
}
// 140C65A38: using guessed type __int64 qword_140C65A38;

