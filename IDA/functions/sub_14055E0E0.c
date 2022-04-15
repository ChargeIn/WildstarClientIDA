#include "../winhttp.h"

//----- (000000014055E0E0) ----------------------------------------------------
__int64 sub_14055E0E0()
{
	__int64 v0; // rcx
	_QWORD* v1; // rsi
	__int64 result; // rax
	unsigned __int64 i; // rdi
	__int64 v4; // rdx
	__int64 v5; // rbx

	v0 = qword_140C65B70;
	v1 = (_QWORD*)qword_140C65B70;
	result = *(_QWORD*)(qword_140C65B70 + 1992);
	if (result)
	{
		do
		{
			sub_140561AD0((__int64)v1, result);
			result = v1[249];
		} while (result);
		v0 = qword_140C65B70;
	}
	for (i = 0i64; i < v1[245]; ++i)
	{
		v4 = *(_QWORD*)(v1[246] + 8 * i);
		if (v4)
		{
			do
			{
				v5 = *(_QWORD*)(v4 + 8);
				if (v0)
				{
					result = sub_140561AD0(v0, *(_QWORD*)(v4 + 24));
					v0 = qword_140C65B70;
				}
				v4 = v5;
			} while (v5);
		}
	}
	return result;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

