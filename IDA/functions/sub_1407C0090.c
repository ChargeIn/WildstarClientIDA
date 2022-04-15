#include "../winhttp.h"

//----- (00000001407C0090) ----------------------------------------------------
void __fastcall sub_1407C0090(int** a1, unsigned int a2)
{
	__int64 v2; // rsi
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	int v8; // ecx
	int* v9; // rdi
	int* i; // rax
	__int64 v11; // rax
	unsigned __int64 v12; // rbx
	__int64 v13; // rcx

	v2 = a2;
	if (a2 == *(_DWORD*)a1)
		return;
	if (a2)
	{
		v4 = 24i64 * a2;
		if (!is_mul_ok(a2, 0x18ui64))
			v4 = -1i64;
		v5 = __CFADD__(v4, 8i64);
		v6 = v4 + 8;
		if (v5)
			v6 = -1i64;
		v7 = sub_14018B280(v6, 2u);
		if (v7)
		{
			v8 = v2 - 1;
			v9 = v7 + 2;
			*v7 = v2;
			for (i = v7 + 2; v8 >= 0; *((_QWORD*)i - 2) = 0i64)
			{
				--v8;
				i += 6;
				*((_QWORD*)i - 3) = 0i64;
			}
		}
		else
		{
			v9 = 0i64;
		}
		v11 = *(unsigned int*)a1;
		if ((unsigned int)v11 < (unsigned int)v2)
			goto LABEL_16;
	}
	else
	{
		v9 = 0i64;
	}
	v11 = v2;
LABEL_16:
	v12 = 24 * v11;
	sub_1407DB590(v9, a1[1], 24 * v11);
	sub_1407E4830(a1[1], 0i64, v12);
	v13 = (__int64)a1[1];
	if (v13)
		sub_1407C02B0(v13);
	a1[1] = v9;
	*(_DWORD*)a1 = v2;
}

