#include "../winhttp.h"

//----- (000000014030AED0) ----------------------------------------------------
__int64 __fastcall sub_14030AED0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // rdx

	v3 = *(_QWORD*)(a3 + 16);
	v6 = v3 + a2;
	if ((unsigned __int64)(v3 + a2) < *a1)
		return 2147500037i64;
	v9 = *(unsigned int*)(a3 + 8);
	if ((unsigned __int64)(a2 + v3 + 4 * v9) > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	v11 = 0i64;
	if ((_DWORD)v9)
		v11 = v6;
	v12 = *(_QWORD*)(a3 + 24);
	*(_QWORD*)(a3 + 16) = v11;
	if ((unsigned __int64)(v12 + a2) < *a1 || (unsigned __int64)(a2 + v12 + 6 * v9) > a1[1])
		return 2147500037i64;
	v13 = 0i64;
	if ((_DWORD)v9)
		v13 = v12 + a2;
	*(_QWORD*)(a3 + 24) = v13;
	v14 = *(_QWORD*)(a3 + 40);
	v15 = v14 + a2;
	if ((unsigned __int64)(v14 + a2) < *a1)
		return 2147500037i64;
	v16 = *(unsigned int*)(a3 + 32);
	if ((unsigned __int64)(a2 + v14 + 4 * v16) > a1[1])
		return 2147500037i64;
	v17 = 0i64;
	if ((_DWORD)v16)
		v17 = v15;
	v18 = *(_QWORD*)(a3 + 48);
	*(_QWORD*)(a3 + 40) = v17;
	if ((unsigned __int64)(v18 + a2) < *a1 || (unsigned __int64)(a2 + v18 + 6 * v16) > a1[1])
		return 2147500037i64;
	if ((_DWORD)v16)
		v10 = v18 + a2;
	*(_QWORD*)(a3 + 48) = v10;
	result = sub_14030EC80(a1, a2, (unsigned int*)(a3 + 56));
	if ((int)result >= 0)
	{
		result = sub_14030EC80(a1, v19, (unsigned int*)(a3 + 80));
		if ((int)result >= 0)
		{
			result = sub_14030EB00(a1, v20, (unsigned int*)(a3 + 104));
			if ((int)result >= 0)
			{
				result = sub_14030EB00(a1, a2, (unsigned int*)(a3 + 128));
				if ((int)result >= 0)
					return 0i64;
			}
		}
	}
	return result;
}
// 14030AFCA: variable 'v19' is possibly undefined
// 14030AFDA: variable 'v20' is possibly undefined

