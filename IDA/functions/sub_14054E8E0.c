#include "../winhttp.h"

//----- (000000014054E8E0) ----------------------------------------------------
int* __fastcall sub_14054E8E0(__int64 a1, __int64 a2)
{
	int* result; // rax

	result = sub_14018B280(72i64, 0);
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 4) = *(_QWORD*)a2;
		result[10] = *(_DWORD*)(a2 + 8);
		result[11] = *(_DWORD*)(a2 + 12);
		*((_BYTE*)result + 48) = *(_BYTE*)(a2 + 16);
		result[13] = *(_DWORD*)(a2 + 20);
		result[14] = *(_DWORD*)(a2 + 24);
		result[15] = *(_DWORD*)(a2 + 28);
		result[16] = *(_DWORD*)(a2 + 32);
		result[17] = *(_DWORD*)(a2 + 36);
	}
	return result;
}

