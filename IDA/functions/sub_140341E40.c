#include "../winhttp.h"

//----- (0000000140341E40) ----------------------------------------------------
__int64 __fastcall sub_140341E40(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v2; // rbx

	if (a1[2])
		return a1[1];
	v2 = (_QWORD*)a1[10];
	if (!v2)
		return 0i64;
	while (1)
	{
		result = sub_140341E40(*v2);
		if (result)
			break;
		v2 = (_QWORD*)v2[3];
		if (!v2)
			return 0i64;
	}
	return result;
}

