#include "../winhttp.h"

//----- (000000014030AD40) ----------------------------------------------------
__int64 __fastcall sub_14030AD40(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rax

	result = sub_14030EBF0(a1, a2, (unsigned int*)(a3 + 16));
	if ((int)result >= 0)
	{
		result = sub_14030EBF0(a1, a2, (unsigned int*)(a3 + 40));
		if ((int)result >= 0)
		{
			result = sub_14030EBF0(a1, a2, (unsigned int*)(a3 + 64));
			if ((int)result >= 0)
			{
				result = sub_14030EBF0(a1, a2, (unsigned int*)(a3 + 88));
				if ((int)result >= 0)
				{
					v7 = *(_QWORD*)(a3 + 120);
					v8 = v7 + a2;
					if ((unsigned __int64)(v7 + a2) < *a1)
						return 2147500037i64;
					v9 = *(unsigned int*)(a3 + 112);
					if ((unsigned __int64)(a2 + v7 + 4 * v9) > a1[1])
						return 2147500037i64;
					v10 = 0i64;
					v11 = 0i64;
					if ((_DWORD)v9)
						v11 = v8;
					*(_QWORD*)(a3 + 120) = v11;
					v12 = *(_QWORD*)(a3 + 128);
					v13 = v12 + a2;
					if ((unsigned __int64)(v12 + a2) < *a1 || (unsigned __int64)(a2 + v12 + 8 * v9) > a1[1])
						return 2147500037i64;
					v14 = 0i64;
					if ((_DWORD)v9)
						v14 = v13;
					*(_QWORD*)(a3 + 128) = v14;
					v15 = *(_QWORD*)(a3 + 144);
					v16 = v15 + a2;
					if ((unsigned __int64)(v15 + a2) < *a1)
						return 2147500037i64;
					v17 = *(unsigned int*)(a3 + 136);
					if ((unsigned __int64)(a2 + v15 + 4 * v17) > a1[1])
						return 2147500037i64;
					v18 = 0i64;
					if ((_DWORD)v17)
						v18 = v16;
					*(_QWORD*)(a3 + 144) = v18;
					v19 = *(_QWORD*)(a3 + 152);
					if ((unsigned __int64)(v19 + a2) < *a1 || (unsigned __int64)(a2 + v19 + 8 * v17) > a1[1])
					{
						return 2147500037i64;
					}
					else
					{
						if ((_DWORD)v17)
							v10 = v19 + a2;
						*(_QWORD*)(a3 + 152) = v10;
						result = sub_14030EB00(a1, a2, (unsigned int*)(a3 + 160));
						if ((int)result >= 0)
						{
							result = sub_14030EB00(a1, a2, (unsigned int*)(a3 + 184));
							if ((int)result >= 0)
								return 0i64;
						}
					}
				}
			}
		}
	}
	return result;
}

