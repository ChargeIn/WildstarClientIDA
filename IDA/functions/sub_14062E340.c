#include "../winhttp.h"

//----- (000000014062E340) ----------------------------------------------------
void __fastcall sub_14062E340(__int64* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rbx
	__int64 v4; // r14
	__int64 v5; // rcx
	__int64 v6; // r14
	__int64 v7; // rcx

	v1 = a1[9];
	if (v1)
	{
		v3 = 0i64;
		do
		{
			v4 = a1[8];
			v5 = *(_QWORD*)(v4 + v3 + 16);
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				*(_QWORD*)(v4 + v3 + 16) = 0i64;
			}
			v6 = a1[8];
			v7 = *(_QWORD*)(v6 + v3 + 8);
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				*(_QWORD*)(v6 + v3 + 8) = 0i64;
			}
			v3 += 24i64;
			--v1;
		} while (v1);
	}
	a1[9] = 0i64;
	sub_14062E3E0(a1, 0i64);
}

