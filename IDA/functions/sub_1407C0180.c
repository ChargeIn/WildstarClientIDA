#include "../winhttp.h"

//----- (00000001407C0180) ----------------------------------------------------
void __fastcall sub_1407C0180(unsigned int* a1, unsigned int a2)
{
	int* v4; // rax
	unsigned int v5; // ecx
	int* v6; // rbp
	unsigned int v7; // ebx

	if (a2 != *a1)
	{
		if (a2)
		{
			v4 = sub_14018B280(a2, 2u);
			v5 = *a1;
			v6 = v4;
			if (*a1 < a2)
				goto LABEL_7;
		}
		else
		{
			v6 = 0i64;
		}
		v5 = a2;
	LABEL_7:
		v7 = v5;
		sub_1407DB590(v6, *((int**)a1 + 1), v5);
		sub_1407E4830(*((int**)a1 + 1), 0i64, v7);
		sub_14018B900(*((_QWORD*)a1 + 1), 0);
		*((_QWORD*)a1 + 1) = v6;
		*a1 = a2;
	}
}

