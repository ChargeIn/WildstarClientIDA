#include "../winhttp.h"

//----- (00000001404CFCC0) ----------------------------------------------------
int* __fastcall sub_1404CFCC0(__int64* a1)
{
	unsigned __int64 v1; // rdi
	int* result; // rax
	int* v4; // rsi
	_QWORD* v5; // rcx
	__int64 v6; // r8
	_QWORD* v7; // rdx

	v1 = 0i64;
	if (a1[1])
		a1[1] = 0i64;
	result = sub_14018DBC0(*a1, 0i64, 16i64);
	v4 = result;
	if ((int*)*a1 != result)
	{
		if (a1[1])
		{
			v5 = result;
			v6 = -(__int64)result;
			do
			{
				if (v5)
				{
					v7 = (_QWORD*)((char*)v5 + v6 + *a1);
					*v5 = *v7;
					result = (int*)v7[1];
					v5[1] = result;
				}
				++v1;
				v5 += 2;
			} while (v1 < a1[1]);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v4;
	}
	return result;
}

