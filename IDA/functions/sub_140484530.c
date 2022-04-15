#include "../winhttp.h"

//----- (0000000140484530) ----------------------------------------------------
__int64 __fastcall sub_140484530(__int64 a1, int a2, __int64 a3)
{
	__int64 v4; // rsi
	unsigned __int64 v5; // rdi
	__int64 result; // rax
	_QWORD* v7; // rbx
	int v8; // [rsp+38h] [rbp+10h] BYREF

	v8 = a2;
	v4 = *(_QWORD*)(qword_140C65918 + 24);
	v5 = (*(__int64(__fastcall**)(int*))(v4 + 24))(&v8);
	result = v5 / *(_QWORD*)(v4 + 8);
	v7 = *(_QWORD**)(*(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8)));
	if (v7)
	{
		while (1)
		{
			if (v5 == *v7)
			{
				result = (*(__int64(__fastcall**)(int*, _QWORD*))(v4 + 32))(&v8, v7 + 2);
				if ((_DWORD)result)
					break;
			}
			v7 = (_QWORD*)v7[1];
			if (!v7)
				return result;
		}
		result = (__int64)(v7 + 3);
		if (v7 != (_QWORD*)-24i64)
		{
			result = *(_QWORD*)result;
			*(_QWORD*)(result + 472) = a3;
		}
	}
	return result;
}
// 140C65918: using guessed type __int64 qword_140C65918;

