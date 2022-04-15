#include "../winhttp.h"

//----- (000000014018E9C0) ----------------------------------------------------
int* __fastcall sub_14018E9C0(int* a1)
{
	__int64 v1; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	unsigned __int64 v5; // kr00_8
	int* v6; // rbx

	v1 = 0i64;
	if (*(_WORD*)a1)
	{
		do
			++v1;
		while (*((_WORD*)a1 + v1));
	}
	v3 = v1 + 1;
	v5 = v1 + 1;
	v4 = 2 * (v1 + 1);
	if (!is_mul_ok(v5, 2ui64))
		v4 = -1i64;
	v6 = sub_14018B280(v4, 0);
	sub_1407DB590(v6, a1, 2 * v3);
	return v6;
}

