#include "../winhttp.h"

//----- (00000001407C1F00) ----------------------------------------------------
__int64 __fastcall sub_1407C1F00(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v5; // rbp
	unsigned __int64 v6; // rdx
	__int64 result; // rax
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	unsigned int* v12; // r8
	__int64 v13; // rcx
	__int64 v14; // r8
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx

	v3 = *(_QWORD*)(a3 + 16);
	v5 = 0i64;
	v6 = v3 + a2;
	if (v6 < *a1)
		return 2147500037i64;
	v10 = *(unsigned int*)(a3 + 8);
	if (a2 + v3 + 2 * v10 > a1[1])
		return 2147500037i64;
	v11 = 0i64;
	if ((_DWORD)v10)
		v11 = v6;
	v12 = (unsigned int*)(a3 + 32);
	*((_QWORD*)v12 - 2) = v11;
	result = sub_1407C1E40(a1, a2, v12);
	if ((int)result >= 0)
	{
		v13 = *(_QWORD*)(a3 + 64);
		if (v13 + a2 < *a1)
			return 2147500037i64;
		v14 = *(unsigned int*)(a3 + 56);
		if (a2 + v13 + v14 > a1[1])
			return 2147500037i64;
		v15 = 0i64;
		if ((_DWORD)v14)
			v15 = v13 + a2;
		*(_QWORD*)(a3 + 64) = v15;
		v16 = *(_QWORD*)(a3 + 80);
		if (v16 + a2 >= *a1 && (v17 = *(unsigned int*)(a3 + 72), a2 + v16 + 4 * v17 <= a1[1]))
		{
			if ((_DWORD)v17)
				v5 = v16 + a2;
			result = 0i64;
			*(_QWORD*)(a3 + 80) = v5;
		}
		else
		{
			return 2147500037i64;
		}
	}
	return result;
}
// 1407C1F6C: conditional instruction was optimized away because eax.4<0

