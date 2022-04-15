#include "../winhttp.h"

//----- (00000001401A8480) ----------------------------------------------------
__int64 sub_1401A8480(__int64 a1, __int64 a2, ...)
{
	unsigned __int64 v3; // rcx
	__int64 result; // rax
	int v5; // edi
	__int64 v6; // rdx
	__int64 v7; // rcx
	va_list va; // [rsp+70h] [rbp+18h] BYREF

	va_start(va, a2);
	v3 = *(_QWORD*)(a1 + 120);
	if (v3)
		return sub_1407E13FC(v3, a2, (__int64)va);
	result = sub_1407DFF50(a2, (__int64)va);
	v5 = result;
	if ((_DWORD)result != -1)
	{
		sub_1401A8D80(a1 + 272, result + *(_DWORD*)(a1 + 324));
		v6 = *(int*)(a1 + 324);
		v7 = *(_QWORD*)(a1 + 272) + 2 * v6;
		*(_DWORD*)(a1 + 324) = v6 + v5;
		return sub_1407E0010((_BYTE*)(v7 - 2), v5 + 1, 0xFFFFFFFFFFFFFFFFui64, a2, (__int64)va);
	}
	return result;
}

