#include "../winhttp.h"

//----- (000000014043F330) ----------------------------------------------------
int* __fastcall sub_14043F330(_QWORD* a1, unsigned int* a2)
{
	unsigned int v2; // ebx
	unsigned __int64 v4; // r14
	__int64* v5; // rsi
	__int64* v6; // rax
	int* v7; // rax
	__int64 v9; // [rsp+30h] [rbp+8h]

	v2 = *a2;
	v9 = *a2;
	sub_14043F640(a1, a1[5] + 1i64);
	v4 = 8 * (v2 % (unsigned __int64)((__int64)(a1[3] - a1[2]) >> 3));
	v5 = *(__int64**)(v4 + a1[2]);
	v6 = v5;
	if (v5)
	{
		while (*((_DWORD*)v6 + 2) != v2)
		{
			v6 = (__int64*)*v6;
			if (!v6)
				goto LABEL_4;
		}
		return (int*)v6 + 3;
	}
	else
	{
	LABEL_4:
		v7 = sub_14018B280(16i64, 0);
		*(_QWORD*)v7 = 0i64;
		if (v7 != (int*)-8i64)
			*((_QWORD*)v7 + 1) = v9;
		*(_QWORD*)v7 = v5;
		*(_QWORD*)(v4 + a1[2]) = v7;
		++a1[5];
		return v7 + 3;
	}
}

