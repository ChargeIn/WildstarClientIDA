#include "../winhttp.h"

//----- (000000014045B940) ----------------------------------------------------
int* __fastcall sub_14045B940(__int64 a1, int* a2)
{
	__int64 v3; // rcx
	int* result; // rax
	__int64 v6; // r8
	bool v7; // zf
	char* v8; // rdi
	__int64 v9; // rax
	unsigned __int64 v10; // kr00_8
	int* v11; // rbx

	v3 = *(_QWORD*)(a1 + 144);
	if (v3)
		sub_14018B900(v3, 0);
	result = 0i64;
	v6 = 0i64;
	if (!*(_WORD*)a2)
		goto LABEL_10;
	do
		++v6;
	while (*((_WORD*)a2 + v6));
	if (v6)
	{
		do
		{
			v7 = *((_WORD*)a2 + (_QWORD)result + 1) == 0;
			result = (int*)((char*)result + 1);
		} while (!v7);
		v8 = (char*)result + 1;
		v10 = (unsigned __int64)result + 1;
		v9 = 2i64 * ((_QWORD)result + 1);
		if (!is_mul_ok(v10, 2ui64))
			v9 = -1i64;
		v11 = sub_14018B280(v9, 0);
		result = sub_1407DB590(v11, a2, 2i64 * (_QWORD)v8);
		*(_QWORD*)(a1 + 144) = v11;
	}
	else
	{
	LABEL_10:
		*(_QWORD*)(a1 + 144) = 0i64;
	}
	return result;
}

