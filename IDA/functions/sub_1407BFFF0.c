#include "../winhttp.h"

//----- (00000001407BFFF0) ----------------------------------------------------
void __fastcall sub_1407BFFF0(unsigned int* a1, unsigned int a2)
{
	__int64 v4; // rax
	int* v5; // rax
	unsigned int v6; // ecx
	int* v7; // rbp
	unsigned __int64 v8; // rbx

	if (a2 != *a1)
	{
		if (a2)
		{
			v4 = 2i64 * a2;
			if (!is_mul_ok(a2, 2ui64))
				v4 = -1i64;
			v5 = sub_14018B280(v4, 2u);
			v6 = *a1;
			v7 = v5;
			if (*a1 < a2)
				goto LABEL_9;
		}
		else
		{
			v7 = 0i64;
		}
		v6 = a2;
	LABEL_9:
		v8 = 2i64 * v6;
		sub_1407DB590(v7, *((int**)a1 + 1), v8);
		sub_1407E4830(*((int**)a1 + 1), 0i64, v8);
		sub_14018B900(*((_QWORD*)a1 + 1), 0);
		*((_QWORD*)a1 + 1) = v7;
		*a1 = a2;
	}
}

