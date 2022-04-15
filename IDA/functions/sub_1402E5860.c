#include "../winhttp.h"

//----- (00000001402E5860) ----------------------------------------------------
__int64 __fastcall sub_1402E5860(__int64 a1, unsigned __int64 a2, unsigned int* a3, void(__fastcall*** a4)(_QWORD))
{
	__int64 result; // rax
	unsigned __int64 v9; // rcx
	__int64 v10; // rax
	int* v11; // rax
	__int64 v12; // rsi
	unsigned int* v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 v15; // r10
	unsigned __int64 v16; // rbx
	__int64 v17; // rdi
	unsigned __int64 v18; // rcx
	unsigned __int64 v19; // rbx
	__int64 v20; // rdx
	__int64 v21; // rdi
	unsigned __int64 v22; // r9
	__int64 v23; // r8

	if (*(_QWORD*)(a1 + 504) || a2 < 4)
		return 2147500037i64;
	v9 = *a3;
	*(_QWORD*)(a1 + 496) = v9;
	v10 = 8 * v9;
	if (!is_mul_ok(v9, 8ui64))
		v10 = -1i64;
	v11 = sub_14018B280(v10, 1u);
	*(_QWORD*)(a1 + 504) = v11;
	if (!v11)
		return 2147942414i64;
	sub_1407E4830(v11, 0i64, 8i64 * *(_QWORD*)(a1 + 496));
	v12 = 0i64;
	v13 = a3 + 1;
	v14 = a2 - 4;
	if (!*(_QWORD*)(a1 + 496))
		return v14 != 0 ? 0x80004005 : 0;
	while (v14 >= 0x50)
	{
		v15 = (__int64)v13;
		v16 = v14 - 80;
		v17 = (__int64)(v13 + 20);
		v18 = 24i64 * *(unsigned int*)(v15 + 64);
		if (v16 < v18)
			break;
		v19 = v16 - v18;
		v20 = v17;
		v21 = v18 + v17;
		v22 = 72i64 * *(unsigned int*)(v15 + 68);
		if (v19 < v22)
			break;
		v14 = v19 - v22;
		v23 = v21;
		v13 = (unsigned int*)(v22 + v21);
		result = sub_1402DE8D0(v15, v20, v23, a4, (int**)(*(_QWORD*)(a1 + 504) + 8 * v12));
		if ((int)result < 0)
			return result;
		v12 = (unsigned int)(v12 + 1);
		if ((unsigned __int64)(unsigned int)v12 >= *(_QWORD*)(a1 + 496))
			return v14 != 0 ? 0x80004005 : 0;
	}
	return 2147500037i64;
}

