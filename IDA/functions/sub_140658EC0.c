#include "../winhttp.h"

//----- (0000000140658EC0) ----------------------------------------------------
__int64 __fastcall sub_140658EC0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	char* v6; // rax
	int* v7; // rdi
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int* v9; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, *v2);
		if (v3)
		{
			v4 = sub_14012A990((__int64)a1, 2);
			if (v4)
			{
				sub_1404760F0(v3, v4);
				return 0i64;
			}
			v6 = (char*)sub_140056BB0(a1, 2u, 0i64);
			sub_14018F2D0(&v8, v6);
			v7 = v9;
			sub_140475EF0(v3, v9, 0, 0.0);
			if (v7)
				sub_14018B900((__int64)v7, 0);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

