#include "../winhttp.h"

//----- (0000000140104100) ----------------------------------------------------
int* __fastcall sub_140104100(__int64 a1)
{
	_QWORD* v1; // rbx
	int* v3; // rdi
	int* v4; // rbx
	int* result; // rax

	v1 = *(_QWORD**)(a1 + 64);
	for (byte_140C63660 = 1; v1 != *(_QWORD**)(a1 + 72); ++v1)
	{
		if (*v1)
			(**(void(__fastcall***)(_QWORD, __int64)) * v1)(*v1, 1i64);
	}
	v3 = *(int**)(a1 + 72);
	v4 = *(int**)(a1 + 64);
	result = sub_1407DB590(v4, v3, 0i64);
	byte_140C63660 = 0;
	*(_QWORD*)(a1 + 72) += -8 * (((char*)v3 - (char*)v4) >> 3);
	return result;
}
// 140C63660: using guessed type char byte_140C63660;

