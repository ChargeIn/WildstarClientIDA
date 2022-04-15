#include "../winhttp.h"

//----- (00000001403D2AA0) ----------------------------------------------------
__int64 __fastcall sub_1403D2AA0(__int64 a1, __int64 a2)
{
	int* v4; // rax
	bool v5; // zf
	__int64 v6; // rbx
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 i; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 j; // rax

	v4 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 8) = v4;
	*(_QWORD*)(a1 + 16) = 0i64;
	v5 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8i64) == 0i64;
	*(_BYTE*)v4 = 0;
	if (v5)
	{
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(v6 + 8) = sub_1403D59A0(a1, *(char**)(*(_QWORD*)(a2 + 8) + 8i64), v6);
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
	}
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	return a1;
}

