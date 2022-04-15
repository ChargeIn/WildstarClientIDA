#include "../winhttp.h"

//----- (0000000140173030) ----------------------------------------------------
__int64 __fastcall sub_140173030(__int64 a1, __int64 a2)
{
	__int64 v2; // rdx
	int* v3; // r9
	__int64* v4; // r15
	unsigned __int64 v6; // rcx
	__int64 v7; // rbp
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned __int64 v11; // rcx
	int* v12; // r14
	__int64* v13; // rax
	__int64 v14; // rdi
	int* v15; // rbx
	__int64 v16; // rax
	int* v17; // rax
	__int64 v18; // rax
	__int64 result; // rax
	__int64 v20; // [rsp+48h] [rbp+10h] BYREF

	v20 = a2;
	v2 = *(_QWORD*)(a1 + 80);
	v3 = *(int**)(a1 + 48);
	v4 = (__int64*)(a1 + 16);
	v6 = *(_QWORD*)(a1 + 16);
	v20 = 1i64;
	v7 = (v2 - (__int64)v3) >> 3;
	v8 = v7 + 2;
	if (v6 <= 2 * (v7 + 2))
	{
		v13 = &v20;
		if (v6)
			v13 = v4;
		v14 = *v13 + v6 + 2;
		v15 = sub_14018B280(8 * v14, 0);
		v12 = &v15[2 * ((unsigned __int64)(v14 - v8) >> 1)];
		sub_1407DB590(
			v12,
			*(int**)(a1 + 48),
			(*(_QWORD*)(a1 + 80) - *(_QWORD*)(a1 + 48) + 8i64) & 0xFFFFFFFFFFFFFFF8ui64);
		sub_14018B900(*(_QWORD*)(a1 + 8), 0);
		*(_QWORD*)(a1 + 8) = v15;
		*v4 = v14;
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 8);
		v10 = v2 - (_QWORD)v3;
		v11 = (v6 - v8) >> 1;
		v12 = (int*)(v9 + 8 * v11);
		if (v12 >= v3)
			sub_1407DB590(&v12[2 * (v7 + 1 - ((v10 + 8) >> 3))], v3, 8 * ((v10 + 8) >> 3));
		else
			sub_1407DB590((int*)(v9 + 8 * v11), v3, (v10 + 8) & 0xFFFFFFFFFFFFFFF8ui64);
	}
	*(_QWORD*)(a1 + 48) = v12;
	v16 = *(_QWORD*)v12;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)v12;
	*(_QWORD*)(a1 + 40) = v16 + 496;
	v17 = &v12[2 * v7];
	*(_QWORD*)(a1 + 80) = v17;
	v18 = *(_QWORD*)v17;
	*(_QWORD*)(a1 + 64) = v18;
	result = v18 + 496;
	*(_QWORD*)(a1 + 72) = result;
	return result;
}

