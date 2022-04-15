#include "../winhttp.h"

//----- (0000000140282940) ----------------------------------------------------
__int64 __fastcall sub_140282940(__int64 a1, __int64 a2, char a3)
{
	__int64 v3; // rdx
	int* v4; // r9
	__int64* v5; // r15
	unsigned __int64 v7; // rcx
	__int64 v9; // rbp
	__int64 v10; // r14
	__int64 v11; // rdx
	unsigned __int64 v12; // rcx
	__int64 v13; // rax
	int* v14; // r14
	__int64* v15; // rax
	__int64 v16; // rdi
	int* v17; // rbx
	__int64 v18; // rax
	int* v19; // rax
	__int64 v20; // rax
	__int64 result; // rax
	__int64 v22; // [rsp+58h] [rbp+10h] BYREF

	v22 = a2;
	v3 = *(_QWORD*)(a1 + 80);
	v4 = *(int**)(a1 + 48);
	v5 = (__int64*)(a1 + 16);
	v7 = *(_QWORD*)(a1 + 16);
	v22 = 1i64;
	v9 = (v3 - (__int64)v4) >> 3;
	v10 = v9 + 2;
	if (v7 <= 2 * (v9 + 2))
	{
		v15 = &v22;
		if (v7)
			v15 = v5;
		v16 = *v15 + v7 + 2;
		v17 = sub_14018B280(8 * v16, 0);
		v14 = &v17[2 * (a3 != 0) + 2 * ((unsigned __int64)(v16 - v10) >> 1)];
		sub_1407DB590(
			v14,
			*(int**)(a1 + 48),
			(*(_QWORD*)(a1 + 80) - *(_QWORD*)(a1 + 48) + 8i64) & 0xFFFFFFFFFFFFFFF8ui64);
		sub_14018B900(*(_QWORD*)(a1 + 8), 0);
		*(_QWORD*)(a1 + 8) = v17;
		*v5 = v16;
	}
	else
	{
		v11 = v3 - (_QWORD)v4;
		v12 = (a3 != 0) + ((v7 - v10) >> 1);
		v13 = *(_QWORD*)(a1 + 8);
		v14 = (int*)(v13 + 8 * v12);
		if (v14 >= v4)
			sub_1407DB590(&v14[2 * (v9 + 1 - ((v11 + 8) >> 3))], v4, 8 * ((v11 + 8) >> 3));
		else
			sub_1407DB590((int*)(v13 + 8 * v12), v4, (v11 + 8) & 0xFFFFFFFFFFFFFFF8ui64);
	}
	*(_QWORD*)(a1 + 48) = v14;
	v18 = *(_QWORD*)v14;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)v14;
	*(_QWORD*)(a1 + 40) = v18 + 496;
	v19 = &v14[2 * v9];
	*(_QWORD*)(a1 + 80) = v19;
	v20 = *(_QWORD*)v19;
	*(_QWORD*)(a1 + 64) = v20;
	result = v20 + 496;
	*(_QWORD*)(a1 + 72) = result;
	return result;
}

