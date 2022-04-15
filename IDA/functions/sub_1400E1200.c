#include "../winhttp.h"

//----- (00000001400E1200) ----------------------------------------------------
int* __fastcall sub_1400E1200(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rbx

	result = sub_14018B280(64i64, 0);
	v4 = result;
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 5) = 0i64;
		*((_QWORD*)result + 6) = 0i64;
		*((_QWORD*)result + 7) = 0i64;
		sub_14001B240((_QWORD*)result + 4, *(int**)(a2 + 8), *(_QWORD*)(a2 + 16));
		return v4;
	}
	return result;
}

