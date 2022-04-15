#include "../winhttp.h"

//----- (0000000140554170) ----------------------------------------------------
__int64 __fastcall sub_140554170(__int64* a1, __int64 a2)
{
	__int64 v2; // r15
	int* v5; // rbp
	int* v6; // rcx
	unsigned __int64 v7; // rsi
	__int64* v8; // rbx
	__int64 v9; // r14
	_QWORD* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 32i64);
	v6 = &v5[8 * v2];
	if (v6)
	{
		*((_QWORD*)v6 + 1) = 0i64;
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 3) = 0i64;
		sub_14001C1B0(v6, *(int**)(a2 + 8), *(_QWORD*)(a2 + 16));
	}
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = (__int64*)(v5 + 4);
			v9 = -16i64 - (_QWORD)v5;
			do
			{
				if (v8 != (__int64*)16)
				{
					v10 = (__int64*)((char*)v8 + v9 + *a1);
					*(v8 - 1) = 0i64;
					*v8 = 0i64;
					v8[1] = 0i64;
					*(v8 - 1) = v10[1];
					v10[1] = 0i64;
					v11 = *v8;
					*v8 = v10[2];
					v10[2] = v11;
					v12 = v8[1];
					v8[1] = v10[3];
					v10[3] = v12;
				}
				v13 = *(__int64*)((char*)v8 + v9 + *a1 + 8);
				if (v13)
					sub_14018B900(v13, 0);
				++v7;
				v8 += 4;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

