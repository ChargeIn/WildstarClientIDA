#include "../winhttp.h"

//----- (000000014053C0D0) ----------------------------------------------------
int* __fastcall sub_14053C0D0(__int64* a1)
{
	unsigned __int64 v2; // rdi
	int* result; // rax
	__int64 v4; // rcx
	int* v5; // r14
	unsigned __int64 i; // rdi
	int* v7; // rdx
	_QWORD* v8; // rcx
	__int64 v9; // rcx

	if (a1[1])
	{
		v2 = 0i64;
		do
		{
			result = (int*)*a1;
			v4 = *(_QWORD*)(*a1 + 8 * v2);
			if (v4)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			++v2;
		} while (v2 < a1[1]);
	}
	else
	{
		result = sub_14018DB00(*a1, 0i64, 8i64);
		v5 = result;
		if ((int*)*a1 != result)
		{
			for (i = 0i64; i < a1[1]; ++i)
			{
				v7 = &v5[2 * i];
				if (v7)
				{
					v8 = (_QWORD*)(*a1 + 8 * i);
					*(_QWORD*)v7 = *v8;
					*v8 = 0i64;
				}
				result = (int*)*a1;
				v9 = *(_QWORD*)(*a1 + 8 * i);
				if (v9)
					result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			}
			if (*a1)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v5;
		}
	}
	a1[1] = 0i64;
	return result;
}
// 14053C0F2: conditional instruction was optimized away because rax.8!=0

