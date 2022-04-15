#include "../winhttp.h"

//----- (0000000140157B70) ----------------------------------------------------
__int64 __fastcall sub_140157B70(__int64 a1, __m128* a2, float* a3, __m128* a4, __int64 a5)
{
	__int64 v9; // rax
	int v10; // r13d
	int v11; // r12d
	int v12; // r15d
	__int64 result; // rax
	int v14; // [rsp+80h] [rbp+18h]

	*a4 = 0i64;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v14 = (int)*a3;
	v10 = *(_DWORD*)(v9 + 8) - (int)a3[4];
	v11 = (int)a3[1];
	v12 = *(_DWORD*)(v9 + 12) - (int)a3[5];
	if (v14 <= v10)
		result = sub_140157DB0(a1, a2, (__int64)a3, a4, a5);
	else
		result = sub_140157CB0(a1, a2, (__int64)a3, a4, a5);
	if (!(_DWORD)result)
	{
		result = v11 >= v12 ? sub_140157FF0(a1, a2, (__int64)a3, a4, a5) : sub_140157EC0(a1, a2, (__int64)a3, a4, a5);
		if (!(_DWORD)result)
		{
			result = v14 <= v10 ? sub_140157CB0(a1, a2, (__int64)a3, a4, a5) : sub_140157DB0(a1, a2, (__int64)a3, a4, a5);
			if (!(_DWORD)result)
			{
				if (v11 >= v12)
					result = sub_140157EC0(a1, a2, (__int64)a3, a4, a5);
				else
					result = sub_140157FF0(a1, a2, (__int64)a3, a4, a5);
				if (!(_DWORD)result)
					*a4 = 0i64;
			}
		}
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

