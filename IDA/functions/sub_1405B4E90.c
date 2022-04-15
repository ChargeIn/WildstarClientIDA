#include "../winhttp.h"

//----- (00000001405B4E90) ----------------------------------------------------
__int64 __fastcall sub_1405B4E90(__int64 a1, unsigned int a2, double a3)
{
	__int64 result; // rax
	__int64 i; // rbx

	sub_1405B4F50(a1, a2);
	sub_1405B5070(a1, a2);
	result = sub_1405B82A0(a1, a2, a3);
	for (i = *(_QWORD*)(a1 + 3848); i; i = *(_QWORD*)(i + 3864))
		result = sub_1405B4EF0(i, a2, a3);
	return result;
}

