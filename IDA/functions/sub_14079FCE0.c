#include "../winhttp.h"

//----- (000000014079FCE0) ----------------------------------------------------
int* __fastcall sub_14079FCE0(__int16* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rdx
	__int16* v5; // rax
	__int16* v6; // rdi
	__int64 v7; // rax
	int* result; // rax
	int* v9; // rdx
	int* v10; // rcx
	__int16 v11; // ax

	v2 = 0i64;
	v3 = 0i64;
	if (*a1)
	{
		do
			++v3;
		while (a1[v3]);
	}
	v4 = v3 + 1;
	v5 = a1;
	v6 = &a1[v4];
	if (a1 < v6)
	{
		do
		{
			if (*v5 == 36)
				++v2;
			++v5;
		} while (v5 < v6);
	}
	v7 = 2 * (v4 + v2);
	if (!is_mul_ok(v4 + v2, 2ui64))
		v7 = -1i64;
	result = sub_14018B280(v7, 0);
	v9 = result;
	v10 = result;
	if (a1 < v6)
	{
		do
		{
			if (*a1 == 36)
			{
				*(_WORD*)v10 = 36;
				v10 = (int*)((char*)v10 + 2);
			}
			v11 = *a1++;
			v10 = (int*)((char*)v10 + 2);
			*((_WORD*)v10 - 1) = v11;
		} while (a1 < v6);
		return v9;
	}
	return result;
}

