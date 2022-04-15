#include "../winhttp.h"

//----- (000000014033A780) ----------------------------------------------------
int** __fastcall sub_14033A780(__int64 a1, void(__fastcall**** a2)(_QWORD))
{
	__int64 v2; // rbx
	int* v4; // rdi
	void(__fastcall * **v5)(_QWORD); // rcx
	int** result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v4 = sub_14018B280(24i64, 0);
	if (v4 != (int*)-16i64)
	{
		v5 = *a2;
		*((_QWORD*)v4 + 2) = *a2;
		if (v5)
			(**v5)(v5);
	}
	*(_QWORD*)v4 = v2;
	*((_QWORD*)v4 + 1) = *(_QWORD*)(v2 + 8);
	result = *(int***)(v2 + 8);
	*result = v4;
	*(_QWORD*)(v2 + 8) = v4;
	return result;
}

