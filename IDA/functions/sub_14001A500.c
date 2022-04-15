#include "../winhttp.h"

//----- (000000014001A500) ----------------------------------------------------
int* __fastcall sub_14001A500(_QWORD* a1, int* a2, int* a3)
{
	_DWORD* v3; // r9
	int* result; // rax
	int v8; // r9d
	int* v9; // rdx
	int* v10; // r8
	__int64 j; // rcx
	__int64 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // r14
	int* v15; // rax
	int* v16; // r8
	int* v17; // rbp
	int* i; // rdx
	int* v19; // r8
	int* v20; // rbx
	int* v21; // rcx
	__int64 v22; // rcx

	v3 = (_DWORD*)a1[2];
	if (v3 == (_DWORD*)a1[3])
	{
		v12 = ((__int64)v3 - a1[1]) >> 2;
		v13 = 2 * v12;
		if (!v12)
			v13 = 1i64;
		v14 = (unsigned __int64)sub_14018A3E0(4 * v13) >> 2;
		v15 = sub_14018B280(v14 * 4, 0);
		v16 = (int*)a1[1];
		v17 = v15;
		for (i = v15; v16 != a2; ++i)
		{
			if (i)
				*i = *v16;
			++v16;
		}
		if (i)
			*i = *a3;
		v19 = (int*)a1[2];
		v20 = i + 1;
		if (a2 != v19)
		{
			v21 = a2;
			do
			{
				if (v20)
					*v20 = *v21;
				++v21;
				++v20;
			} while (v21 != v19);
		}
		v22 = a1[1];
		if (v22)
			sub_14018B900(v22, 0);
		result = &v17[v14];
		a1[1] = v17;
		a1[2] = v20;
		a1[3] = &v17[v14];
	}
	else
	{
		if (v3)
			*v3 = *(v3 - 1);
		a1[2] += 4i64;
		result = (int*)a1[2];
		v8 = *a3;
		v9 = result - 2;
		v10 = result - 1;
		for (j = result - 2 - a2; j > 0; *v10 = (int)result)
		{
			result = (int*)(unsigned int)*--v9;
			--v10;
			--j;
		}
		*a2 = v8;
	}
	return result;
}

