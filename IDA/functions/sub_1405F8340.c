#include "../winhttp.h"

//----- (00000001405F8340) ----------------------------------------------------
__int64 __fastcall sub_1405F8340(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 i; // rax
	__int64 j; // rax

	a1[4] = 0i64;
	a1[3] = 0i64;
	v2 = (_QWORD*)a1[1];
	if (v2)
		*v2 = a1[2];
	v3 = a1[2];
	if (v3)
		*(_QWORD*)(v3 + 8) = a1[1];
	v4 = a1[12];
	a1[1] = 0i64;
	a1[2] = 0i64;
	v5 = *(_QWORD*)(v4 + 16);
	if (v5 != v4)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v5 + 40) + 24i64))(*(_QWORD*)(v5 + 40));
			v6 = *(_QWORD*)(v5 + 24);
			if (v6)
			{
				v5 = *(_QWORD*)(v5 + 24);
				for (i = *(_QWORD*)(v6 + 16); i; i = *(_QWORD*)(i + 16))
					v5 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v5 + 8); v5 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = j;
				if (*(_QWORD*)(v5 + 24) != j)
					v5 = j;
			}
		} while (v5 != a1[12]);
	}
	a1[16] = 0i64;
	if (a1[6])
		(*(void(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
	return 0i64;
}

