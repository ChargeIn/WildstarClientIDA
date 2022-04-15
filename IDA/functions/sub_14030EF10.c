#include "../winhttp.h"

//----- (000000014030EF10) ----------------------------------------------------
__int64 __fastcall sub_14030EF10(unsigned __int64* a1, __int64 a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // rdx
	__int64 result; // rax
	unsigned __int64 v5; // r10
	unsigned int* v6; // r8
	__int64 v7; // rax
	unsigned __int64 v8; // r11
	__int64 v9; // r9
	__int64 v10; // rdx
	unsigned __int64 v11; // rax
	__int64 v12; // rax

	if (*a3 == -1i64)
	{
		result = 0i64;
		*a3 = 0i64;
	}
	else
	{
		v3 = *a3 + a2;
		if (v3 < *a1)
			return 2147500037i64;
		if (v3 + 24 > a1[1])
			return 2147500037i64;
		*a3 = v3;
		v5 = v3 + 32;
		v6 = (unsigned int*)(v3 + a1[2]);
		v7 = *((_QWORD*)v6 + 1);
		v8 = v7 + v3 + 32;
		if (v8 < *a1)
			return 2147500037i64;
		v9 = *v6;
		if (v5 + v7 + 4 * v9 > a1[1])
			return 2147500037i64;
		v10 = 0i64;
		v11 = 0i64;
		if ((_DWORD)v9)
			v11 = v8;
		*((_QWORD*)v6 + 1) = v11;
		v12 = *((_QWORD*)v6 + 2);
		if (v12 + v5 < *a1 || v5 + v12 + 2 * v9 > a1[1])
		{
			return 2147500037i64;
		}
		else
		{
			if ((_DWORD)v9)
				v10 = v12 + v5;
			result = 0i64;
			*((_QWORD*)v6 + 2) = v10;
		}
	}
	return result;
}

