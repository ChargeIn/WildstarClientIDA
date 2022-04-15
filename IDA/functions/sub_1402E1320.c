#include "../winhttp.h"

//----- (00000001402E1320) ----------------------------------------------------
int* __fastcall sub_1402E1320(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rdi
	__int64 v6; // rcx
	int* result; // rax
	int* v8; // rsi
	unsigned __int64 i; // rdi
	int* v10; // rdx
	_QWORD* v11; // rcx
	__int64 v12; // rcx

	v2 = a1[1];
	if (v2 > a2)
	{
		v5 = a2;
		if (a2 < v2)
		{
			do
			{
				v6 = *(_QWORD*)(*a1 + 8 * v5);
				if (v6)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				++v5;
			} while (v5 < a1[1]);
		}
		a1[1] = a2;
	}
	result = sub_14018DBC0(*a1, a2, 8i64);
	v8 = result;
	if ((int*)*a1 != result)
	{
		for (i = 0i64; i < a1[1]; ++i)
		{
			v10 = &v8[2 * i];
			if (v10)
			{
				v11 = (_QWORD*)(*a1 + 8 * i);
				*(_QWORD*)v10 = *v11;
				*v11 = 0i64;
			}
			result = (int*)*a1;
			v12 = *(_QWORD*)(*a1 + 8 * i);
			if (v12)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v8;
	}
	return result;
}

