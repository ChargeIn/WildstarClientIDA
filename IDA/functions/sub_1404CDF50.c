#include "../winhttp.h"

//----- (00000001404CDF50) ----------------------------------------------------
void __fastcall sub_1404CDF50(_QWORD* a1, __int64* a2)
{
	__int64 v2; // r9
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	_QWORD* v8; // rbx
	__int64 v9; // rcx

	v2 = *a2;
	if (*a2)
	{
		v4 = *(unsigned int*)(v2 + 8) % (unsigned __int64)((__int64)(a1[3] - a1[2]) >> 3);
		v5 = a1[2];
		v6 = *(_QWORD**)(v5 + 8 * v4);
		if (v6 == (_QWORD*)v2)
		{
			*(_QWORD*)(v5 + 8 * v4) = *v6;
			v7 = v6[3];
			if (v7)
				sub_14018B900(v7, 0);
			sub_14018B900((__int64)v6, 0);
			--a1[5];
		}
		else
		{
			v8 = (_QWORD*)*v6;
			if (*v6)
			{
				while (v8 != (_QWORD*)v2)
				{
					v6 = v8;
					v8 = (_QWORD*)*v8;
					if (!v8)
						return;
				}
				*v6 = *v8;
				v9 = v8[3];
				if (v9)
					sub_14018B900(v9, 0);
				sub_14018B900((__int64)v8, 0);
				--a1[5];
			}
		}
	}
}

