#include "../winhttp.h"

//----- (000000014030C6A0) ----------------------------------------------------
__int64 __fastcall sub_14030C6A0(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx

	result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 56));
	if ((int)result >= 0)
	{
		result = sub_14030EB90(a1, v7, (unsigned int*)(a3 + 80));
		if ((int)result >= 0)
		{
			v9 = *(_QWORD*)(a3 + 144);
			if (v9 == -1)
			{
				*(_QWORD*)(a3 + 144) = 0i64;
			}
			else
			{
				v10 = v9 + v8;
				if (v9 + v8 < *a1 || v10 + 3792 > a1[1])
					return 2147500037i64;
				*(_QWORD*)(a3 + 144) = v10;
				result = sub_14030BCC0(a1, v10 + 3792, v10 + a1[2]);
				if ((int)result < 0)
					return result;
			}
			v11 = *(_QWORD*)(a3 + 152);
			if (v11 == -1)
			{
				*(_QWORD*)(a3 + 152) = 0i64;
				return 0i64;
			}
			v12 = v11 + a2;
			if (v11 + a2 >= *a1 && v12 + 1192 <= a1[1])
			{
				*(_QWORD*)(a3 + 152) = v12;
				result = sub_14030C3D0(a1, v12 + 1200, v12 + a1[2]);
				if ((int)result < 0)
					return result;
				return 0i64;
			}
			return 2147500037i64;
		}
	}
	return result;
}
// 14030C6D0: variable 'v7' is possibly undefined
// 14030C6EA: variable 'v8' is possibly undefined

