#include "../winhttp.h"

//----- (000000014033A7E0) ----------------------------------------------------
__int64 __fastcall sub_14033A7E0(_QWORD* a1, unsigned __int64 a2)
{
	char* v2; // rbx
	__int64 result; // rax
	char* v5; // rsi
	__int64 v6; // r15
	__int64 v7; // r12
	int* v8; // rax
	int* v9; // r14
	signed __int64 v10; // rdx
	char* v11; // rcx
	__int64 v12; // rcx

	v2 = (char*)a1[1];
	result = 0x2AAAAAAAAAAAAAABi64 * (a1[3] - (_QWORD)v2);
	if ((a1[3] - (_QWORD)v2) / 24i64 < a2)
	{
		v5 = (char*)a1[2];
		v6 = (v5 - v2) / 24;
		v7 = 6 * a2;
		v8 = sub_14018B280(24 * a2, 0);
		v9 = v8;
		if (v2 != v5)
		{
			v10 = (char*)v8 - v2;
			do
			{
				v11 = &v2[v10];
				if (&v2[v10])
				{
					*(_QWORD*)v11 = *(_QWORD*)v2;
					*((_QWORD*)v11 + 1) = *((_QWORD*)v2 + 1);
					*((_QWORD*)v11 + 2) = *((_QWORD*)v2 + 2);
				}
				v2 += 24;
			} while (v2 != v5);
		}
		v12 = a1[1];
		if (v12)
			sub_14018B900(v12, 0);
		a1[1] = v9;
		result = (__int64)&v9[v7];
		a1[3] = &v9[v7];
		a1[2] = &v9[6 * v6];
	}
	return result;
}

