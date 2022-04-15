#include "../winhttp.h"

//----- (000000014013D040) ----------------------------------------------------
__int64 __fastcall sub_14013D040(__int64 a1, __int64 a2)
{
	__int64 v4; // rdx
	__int64 v6; // rdi
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 i; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 j; // rax

	if (a1 == a2)
		return a1;
	if (*(_QWORD*)(a1 + 16))
	{
		sub_140044CA0(a1, *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	*(_QWORD*)(a1 + 16) = 0i64;
	v4 = *(_QWORD*)(a2 + 8);
	if (*(_QWORD*)(v4 + 8))
	{
		v6 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(v6 + 8) = sub_14013D390(a1, *(_QWORD*)(v4 + 8), v6);
		v7 = *(_QWORD*)(a1 + 8);
		v8 = *(_QWORD*)(v7 + 8);
		for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
			v8 = i;
		*(_QWORD*)(v7 + 16) = v8;
		v10 = *(_QWORD*)(a1 + 8);
		v11 = *(_QWORD*)(v10 + 8);
		for (j = *(_QWORD*)(v11 + 24); j; j = *(_QWORD*)(j + 24))
			v11 = j;
		*(_QWORD*)(v10 + 24) = v11;
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
		return a1;
	}
	else
	{
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
		return a1;
	}
}

