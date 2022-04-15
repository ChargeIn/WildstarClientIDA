#include "../winhttp.h"

//----- (00000001408901F0) ----------------------------------------------------
__int64 __fastcall sub_1408901F0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64*** v3; // rax
	__int64* v6; // r9
	__int64 result; // rax
	__int64 v8; // r8
	__int64 v9; // r9
	__int64** v10; // rax
	__int64* v11; // r10
	__int64 v12; // rcx

	v3 = *(__int64****)(a1 + 128);
	v6 = (__int64*)v3[3];
	if (v6)
	{
		v8 = (__int64)v3[1] + *((int*)v3 + 8);
		v9 = (__int64)v3[1] + *((int*)v6 + 36);
		v10 = *v3;
		while (v10)
		{
			v11 = v10[3];
			if (!v11)
				break;
			if ((__int64)v10[1] + *((int*)v10 + 8) < v8)
				v8 = (__int64)v10[1] + *((int*)v10 + 8);
			v12 = (__int64)v10[1] + *((int*)v11 + 36);
			v10 = (__int64**)*v10;
			if (v12 < v9)
				v9 = v12;
		}
		*a2 = v8 - *(unsigned int*)(a1 + 144);
		result = *(unsigned int*)(a1 + 144);
		*a3 = v9 - result;
	}
	else
	{
		result = 0i64;
		*a2 = 0i64;
		*a3 = 0i64;
	}
	return result;
}

