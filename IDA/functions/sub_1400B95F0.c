#include "../winhttp.h"

//----- (00000001400B95F0) ----------------------------------------------------
__int64 __fastcall sub_1400B95F0(__int64* a1)
{
	__int64 v1; // r15
	int* v3; // rbp
	int* v4; // rbx
	int* v5; // rcx
	unsigned __int64 v6; // rsi
	__int64* v7; // rbx
	__int64 v8; // r14
	_QWORD* v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 result; // rax

	v1 = a1[1];
	v3 = sub_14018DB00(*a1, v1 + 1, 32i64);
	v4 = &v3[8 * v1];
	if (v4)
	{
		*((_QWORD*)v4 + 1) = 0i64;
		*((_QWORD*)v4 + 2) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
		v5 = sub_14018B280(16i64, 0);
		*((_QWORD*)v4 + 1) = v5;
		*((_QWORD*)v4 + 2) = v5;
		*((_QWORD*)v4 + 3) = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
	}
	if ((int*)*a1 != v3)
	{
		v6 = 0i64;
		if (a1[1])
		{
			v7 = (__int64*)(v3 + 4);
			v8 = -16i64 - (_QWORD)v3;
			do
			{
				if (v7 != (__int64*)16)
				{
					v9 = (__int64*)((char*)v7 + v8 + *a1);
					*(v7 - 1) = 0i64;
					*v7 = 0i64;
					v7[1] = 0i64;
					*(v7 - 1) = v9[1];
					v9[1] = 0i64;
					v10 = *v7;
					*v7 = v9[2];
					v9[2] = v10;
					v11 = v7[1];
					v7[1] = v9[3];
					v9[3] = v11;
				}
				v12 = *(__int64*)((char*)v7 + v8 + *a1 + 8);
				if (v12)
					sub_14018B900(v12, 0);
				++v6;
				v7 += 4;
			} while (v6 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v3;
	}
	result = v1;
	a1[1] = v1 + 1;
	return result;
}

