#include "../winhttp.h"

//----- (000000014003D510) ----------------------------------------------------
__int64 __fastcall sub_14003D510(__int64 a1, __int64* a2, __int64* a3)
{
	__int64 v4; // rdx
	__int64 result; // rax
	__int64 v8; // rax
	__int64 i; // rcx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	result = *a2;
	if (*a2 == *(_QWORD*)(v4 + 16) && *a3 == v4)
	{
		if (*(_QWORD*)(a1 + 16))
		{
			sub_140019A80(a1, *(_QWORD**)(v4 + 8));
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
			result = *(_QWORD*)(a1 + 8);
			*(_QWORD*)(result + 24) = result;
			*(_QWORD*)(a1 + 16) = 0i64;
		}
	}
	else if (result != *a3)
	{
		do
		{
			v10 = *a2;
			v8 = *(_QWORD*)(v10 + 24);
			if (v8)
			{
				for (*a2 = v8; *(_QWORD*)(v8 + 16); *a2 = v8)
					v8 = *(_QWORD*)(v8 + 16);
			}
			else
			{
				for (i = *(_QWORD*)(*a2 + 8); *a2 == *(_QWORD*)(i + 24); i = *(_QWORD*)(i + 8))
					*a2 = i;
				if (*(_QWORD*)(*a2 + 24) != i)
					*a2 = i;
			}
			sub_14003D650(a1, &v10);
			result = *a3;
		} while (*a2 != *a3);
	}
	return result;
}

