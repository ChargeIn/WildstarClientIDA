#include "../winhttp.h"

//----- (00000001405FA960) ----------------------------------------------------
void __fastcall sub_1405FA960(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v3; // r10
	__int64 v4; // r8
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rbx
	__int64 v8; // rcx
	_QWORD* v9; // rdx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = a1 + 416;
	v3 = *(_QWORD*)(a1 + 424);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < *a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v6 = *(_DWORD*)(v4 + 32), v10 = v4, *a2 < v6))
		v10 = v3;
	v7 = v10;
	if (v10 != *(_QWORD*)(a1 + 424))
	{
		v8 = *(_QWORD*)(v10 + 40);
		if (v8)
		{
			if (*(_QWORD*)v8)
				**(_QWORD**)v8 = *(_QWORD*)(v8 + 8);
			v9 = *(_QWORD**)(v8 + 8);
			if (v9)
				*v9 = *(_QWORD*)v8;
			*(_QWORD*)v8 = 0i64;
			*(_QWORD*)(v8 + 8) = 0i64;
			sub_14018B900(v8, 0);
		}
		v10 = v7;
		sub_1405FB140(v2, &v10);
	}
}

