#include "../winhttp.h"

//----- (000000014072AFA0) ----------------------------------------------------
int* __fastcall sub_14072AFA0(__int64 a1, _QWORD* a2)
{
	int* result; // rax
	__int64 v5; // rbx
	int* v6; // rax
	__int64 v7; // rbx

	result = (int*)*(unsigned int*)a2;
	if (*(_DWORD*)(a1 + 1460) != (_DWORD)result)
	{
		v5 = *(_QWORD*)(a1 + 1472);
		v6 = sub_14018B280(24i64, 0);
		if (v6 != (int*)-16i64)
			*((_QWORD*)v6 + 2) = 0i64;
		*(_QWORD*)v6 = v5;
		*((_QWORD*)v6 + 1) = *(_QWORD*)(v5 + 8);
		**(_QWORD**)(v5 + 8) = v6;
		*(_QWORD*)(v5 + 8) = v6;
		v7 = *(_QWORD*)(a1 + 1472);
		result = sub_14018B280(24i64, 0);
		if (result != (int*)-16i64)
			*((_QWORD*)result + 2) = *a2;
		*(_QWORD*)result = v7;
		*((_QWORD*)result + 1) = *(_QWORD*)(v7 + 8);
		**(_QWORD**)(v7 + 8) = result;
		*(_QWORD*)(v7 + 8) = result;
	}
	return result;
}

