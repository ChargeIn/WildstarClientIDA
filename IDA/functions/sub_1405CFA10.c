#include "../winhttp.h"

//----- (00000001405CFA10) ----------------------------------------------------
int** __fastcall sub_1405CFA10(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbx
	int* v4; // r8
	__int64 v5; // rax
	int** result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v4 = sub_14018B280(72i64, 0);
	if (v4 != (int*)-16i64)
	{
		v5 = a2[4];
		*((_QWORD*)v4 + 2) = *a2;
		*((_QWORD*)v4 + 3) = a2[1];
		*((_QWORD*)v4 + 4) = a2[2];
		*((_QWORD*)v4 + 5) = a2[3];
		*((_QWORD*)v4 + 6) = v5;
		*((_QWORD*)v4 + 7) = a2[5];
		*((_QWORD*)v4 + 8) = a2[6];
	}
	*(_QWORD*)v4 = v2;
	*((_QWORD*)v4 + 1) = *(_QWORD*)(v2 + 8);
	result = *(int***)(v2 + 8);
	*result = v4;
	*(_QWORD*)(v2 + 8) = v4;
	return result;
}

