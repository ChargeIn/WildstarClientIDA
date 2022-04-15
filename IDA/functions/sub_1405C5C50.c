#include "../winhttp.h"

//----- (00000001405C5C50) ----------------------------------------------------
int* __fastcall sub_1405C5C50(__int64 a1, _DWORD* a2)
{
	int* result; // rax
	int* v4; // rsi
	_DWORD* v5; // rdi

	result = sub_14018B280(80i64, 0);
	v4 = result;
	v5 = result + 8;
	if (result != (int*)-32i64)
	{
		*v5 = *a2;
		sub_1403B4F00((__int64*)result + 5, (__int64)(a2 + 2));
		v5[6] = a2[6];
		v5[7] = a2[7];
		v5[8] = a2[8];
		v5[9] = a2[9];
		v5[10] = a2[10];
		v5[11] = a2[11];
		return v4;
	}
	return result;
}

