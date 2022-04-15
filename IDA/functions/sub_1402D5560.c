#include "../winhttp.h"

//----- (00000001402D5560) ----------------------------------------------------
__int64 __fastcall sub_1402D5560(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned __int64 v6; // rdx
	unsigned int v8; // r8d
	unsigned __int64 v9; // rcx
	__int64 v10; // rbp
	unsigned __int64 v11; // rax
	unsigned int v12; // ebx
	__int64 v13; // rdx
	__int64 result; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx

	v3 = *(_QWORD*)(a3 + 16);
	v6 = v3 + a2;
	if (v6 < *a1)
		return 2147500037i64;
	v8 = *(_DWORD*)(a3 + 8);
	v9 = (unsigned __int64)v8 << 7;
	if (a2 + v9 + v3 > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	v11 = 0i64;
	v12 = 0;
	if (v8)
		v11 = v6;
	*(_QWORD*)(a3 + 16) = v11;
	v13 = v11 + ((v9 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (!v8)
	{
	LABEL_8:
		v15 = *(_QWORD*)(a3 + 32);
		if (v15 + a2 >= *a1)
		{
			v16 = *(unsigned int*)(a3 + 24);
			if (a2 + v15 + 20 * v16 <= a1[1])
			{
				if ((_DWORD)v16)
					v10 = v15 + a2;
				result = 0i64;
				*(_QWORD*)(a3 + 32) = v10;
				return result;
			}
		}
		return 2147500037i64;
	}
	while (1)
	{
		result = sub_1402D54B0(a1, v13, a1[2] + *(_QWORD*)(a3 + 16) + ((unsigned __int64)v12 << 7));
		if ((int)result < 0)
			return result;
		if (++v12 >= *(_DWORD*)(a3 + 8))
			goto LABEL_8;
	}
}
// 1402D55E2: variable 'v13' is possibly undefined

