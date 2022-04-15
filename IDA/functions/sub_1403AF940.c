#include "../winhttp.h"

//----- (00000001403AF940) ----------------------------------------------------
int* __fastcall sub_1403AF940(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rbx

	result = sub_14018B280(72i64, 0);
	v4 = result;
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 4) = *(_QWORD*)a2;
		result[10] = *(_DWORD*)(a2 + 8);
		result[11] = *(_DWORD*)(a2 + 12);
		result[12] = *(_DWORD*)(a2 + 16);
		result[13] = *(_DWORD*)(a2 + 20);
		sub_1403AF180((__int64*)result + 7, a2 + 24);
		return v4;
	}
	return result;
}

