#include "../winhttp.h"

//----- (00000001400F92D0) ----------------------------------------------------
int* __fastcall sub_1400F92D0(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rdi
	int* v5; // rbx

	result = sub_14018B280(80i64, 0);
	v4 = result;
	v5 = result + 8;
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 5) = 0i64;
		*((_QWORD*)result + 6) = 0i64;
		*((_QWORD*)result + 7) = 0i64;
		sub_14001C1B0((_QWORD*)result + 4, *(int**)(a2 + 8), *(_QWORD*)(a2 + 16));
		*((_QWORD*)v5 + 4) = 0i64;
		*((_QWORD*)v5 + 5) = 0i64;
		*((_QWORD*)v5 + 5) = *(_QWORD*)(a2 + 40);
		*((_QWORD*)v5 + 4) = *(_QWORD*)(a2 + 32);
		return v4;
	}
	return result;
}

