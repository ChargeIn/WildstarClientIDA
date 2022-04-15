#include "../winhttp.h"

//----- (00000001400B4C50) ----------------------------------------------------
char* __fastcall sub_1400B4C50(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v3; // r9
	__int64 v7; // r9
	__int64 v8; // r10
	char* result; // rax
	char* v10; // rcx
	char* v11; // rdx
	__int64 j; // r8
	__int64 v13; // rax
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64 v16; // r14
	int* v17; // rax
	_QWORD* v18; // r8
	int* v19; // rbp
	int* i; // rdx
	_QWORD* v21; // r8
	_QWORD* v22; // rbx
	_QWORD* v23; // rcx
	__int64 v24; // rcx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v14 = ((__int64)v3 - a1[1]) >> 4;
		v15 = 2 * v14;
		if (!v14)
			v15 = 1i64;
		v16 = sub_14018A3E0(16 * v15) & 0xFFFFFFFFFFFFFFF0ui64;
		v17 = sub_14018B280(v16, 0);
		v18 = (_QWORD*)a1[1];
		v19 = v17;
		for (i = v17; v18 != a2; i += 4)
		{
			if (i)
			{
				*(_QWORD*)i = *v18;
				*((_QWORD*)i + 1) = v18[1];
			}
			v18 += 2;
		}
		if (i)
		{
			*(_QWORD*)i = *a3;
			*((_QWORD*)i + 1) = a3[1];
		}
		v21 = (_QWORD*)a1[2];
		v22 = i + 4;
		if (a2 != v21)
		{
			v23 = a2;
			do
			{
				if (v22)
				{
					*v22 = *v23;
					v22[1] = v23[1];
				}
				v23 += 2;
				v22 += 2;
			} while (v23 != v21);
		}
		v24 = a1[1];
		if (v24)
			sub_14018B900(v24, 0);
		result = (char*)v19 + v16;
		a1[1] = v19;
		a1[2] = v22;
		a1[3] = (char*)v19 + v16;
	}
	else
	{
		if (v3)
		{
			*v3 = *(v3 - 2);
			v3[1] = *(v3 - 1);
		}
		a1[2] += 16i64;
		v7 = *a3;
		v8 = a3[1];
		result = (char*)a1[2];
		v10 = result - 32;
		v11 = result - 16;
		for (j = (result - 32 - (char*)a2) >> 4; j > 0; *((_QWORD*)v11 + 1) = result)
		{
			v13 = *((_QWORD*)v10 - 2);
			v10 -= 16;
			v11 -= 16;
			*(_QWORD*)v11 = v13;
			result = (char*)*((_QWORD*)v10 + 1);
			--j;
		}
		*a2 = v7;
		a2[1] = v8;
	}
	return result;
}

