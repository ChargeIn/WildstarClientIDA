#include "../winhttp.h"

//----- (00000001401E4300) ----------------------------------------------------
int* __fastcall sub_1401E4300(__int64 a1)
{
	int* v1; // rdi
	int* v2; // rbx
	int* result; // rax

	v1 = *(int**)(a1 + 16);
	v2 = *(int**)(a1 + 8);
	result = sub_1407DB590(v2, v1, 0i64);
	*(_QWORD*)(a1 + 16) += -4 * (v1 - v2);
	return result;
}

