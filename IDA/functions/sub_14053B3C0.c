#include "../winhttp.h"

//----- (000000014053B3C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14053B3C0(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rbx
	unsigned __int64 v3; // rcx
	_QWORD* i; // rax
	_QWORD* v5; // rbx
	_QWORD* v6; // rax
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // rdx

	v1 = a1 + 3754;
	v2 = 0i64;
	v3 = (__int64)(a1[3757] - a1[3756]) >> 3;
	if (v3)
	{
		for (i = (_QWORD*)v1[2]; !*i; ++i)
		{
			if (++v2 >= v3)
				return sub_1403FC230(v1);
		}
		v5 = *(_QWORD**)(v1[2] + 8 * v2);
		if (v5)
		{
			do
			{
			LABEL_7:
				sub_14018B900(v5[2], 0);
				v6 = v5;
				v5 = (_QWORD*)*v5;
			} while (v5);
			v7 = (__int64)(v1[3] - v1[2]) >> 3;
			v8 = *((unsigned int*)v6 + 2) % v7;
			while (++v8 < v7)
			{
				v5 = *(_QWORD**)(v1[2] + 8 * v8);
				if (v5)
					goto LABEL_7;
			}
		}
	}
	return sub_1403FC230(v1);
}
// 14053B46A: conditional instruction was optimized away because rbx.8==0

