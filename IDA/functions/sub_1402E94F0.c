#include "../winhttp.h"

//----- (00000001402E94F0) ----------------------------------------------------
__int64 __fastcall sub_1402E94F0(_QWORD* a1, __int64 a2, int* a3)
{
	__int64 result; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rbx
	unsigned __int64 v10; // rbp
	int** v11; // r14
	int* v12; // rax
	int* v13; // rcx

	result = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD*))(**(_QWORD**)(a2 + 16) + 112i64))(
		*(_QWORD*)(a2 + 16),
		a3,
		a1 + 3);
	if ((int)result >= 0)
	{
		a1[2] = a2;
		_InterlockedIncrement((volatile signed __int32*)(a2 + 12));
		v7 = (_QWORD*)(a1[2] + 32i64);
		if (!a1[265])
		{
			a1[265] = v7;
			a1[266] = *v7;
			*v7 = a1;
			v8 = a1[266];
			if (v8)
				*(_QWORD*)(v8 + 2120) = a1 + 266;
		}
		v9 = a1[2];
		if (*(_QWORD*)(v9 + 40) == *(_QWORD*)(v9 + 48))
			sub_1400290D0(v9 + 40);
		v10 = (*(__int64(__fastcall**)(int*))(v9 + 64))(a3);
		v11 = (int**)(*(_QWORD*)(v9 + 56) + 8 * (v10 % *(_QWORD*)(v9 + 48)));
		v12 = sub_14018B280(32i64, 0);
		if (v12)
		{
			v13 = *v11;
			*(_QWORD*)v12 = v10;
			*((_QWORD*)v12 + 1) = v13;
			v12[4] = *a3;
			v12[5] = a3[1];
			*((_QWORD*)v12 + 3) = a1;
		}
		*v11 = v12;
		++* (_QWORD*)(v9 + 40);
		return 0i64;
	}
	return result;
}

