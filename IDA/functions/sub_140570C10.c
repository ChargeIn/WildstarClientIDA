#include "../winhttp.h"

//----- (0000000140570C10) ----------------------------------------------------
__int64 __fastcall sub_140570C10(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rsi
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	char v7[24]; // [rsp+20h] [rbp-18h] BYREF

	v2 = qword_140C65970;
	result = sub_140617410(a1, *a2);
	v5 = result;
	if (result)
	{
		sub_1400293C0(v2 + 96, (__int64)v7, (int*)a2);
		result = sub_1406167B0(v5, (__int64)a2);
		v6 = *(_QWORD*)(v2 + 88);
		if (v6)
		{
			result = sub_140572E80(v6, *a2, 0);
			if (result)
				return sub_14056B530(*(_QWORD*)(result + 48));
		}
	}
	return result;
}
// 140C65970: using guessed type __int64 qword_140C65970;
// 140570C10: using guessed type char var_18[24];

