#include "../winhttp.h"

//----- (0000000140099290) ----------------------------------------------------
__int64 __fastcall sub_140099290(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_QWORD* v7; // rdi
	unsigned __int64 v8; // rbx

	if (!a3)
		return 2147500037i64;
	v7 = (_QWORD*)a3;
	v8 = 0i64;
	while (1)
	{
		result = sub_140336A40(a1, a2, v7);
		if ((int)result < 0)
			break;
		++v8;
		++v7;
		if (v8 >= 2)
			return sub_140337160(a1, (_BYTE*)(a3 + 16), 8i64);
	}
	return result;
}

