#include "../winhttp.h"

//----- (000000014085FE50) ----------------------------------------------------
__int64 __fastcall sub_14085FE50(__int64 a1, __int64 a2)
{
	__int64 v2; // r10
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 result; // rax
	bool v7; // zf
	__int64 v8; // rcx
	__int64 v9; // rcx

	v2 = *(_QWORD*)(a1 + 56);
	v4 = 0i64;
	v5 = *(_QWORD*)(v2 + 24);
	result = v5;
	if (v5)
	{
		while (result != a2)
		{
			v4 = result;
			result = *(_QWORD*)(result + 32);
			if (!result)
				goto LABEL_9;
		}
		if (result)
		{
			v7 = result == v5;
			v8 = *(_QWORD*)(result + 32);
			if (v7)
				*(_QWORD*)(v2 + 24) = v8;
			else
				*(_QWORD*)(v4 + 32) = v8;
		}
	}
LABEL_9:
	v9 = *(_QWORD*)(a1 + 56);
	if (!*(_WORD*)(v9 + 72)
		&& !*(_WORD*)(v9 + 74)
		&& !*(_WORD*)(v9 + 76)
		&& !*(_WORD*)(v9 + 78)
		&& !*(_QWORD*)(v9 + 24))
	{
		result = *(_QWORD*)v9;
		if (*(_QWORD*)(v9 + 8) == *(_QWORD*)v9)
			return sub_1408520B0(a1);
	}
	return result;
}

