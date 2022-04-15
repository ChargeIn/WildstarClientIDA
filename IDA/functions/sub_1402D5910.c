#include "../winhttp.h"

//----- (00000001402D5910) ----------------------------------------------------
__int64 __fastcall sub_1402D5910(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	result = *(unsigned int*)(a1 + 24);
	v4[0] = 0;
	if ((int)result <= 1)
	{
		if (!(_DWORD)result)
			*(_DWORD*)(a1 + 24) = 1;
		if (*(_DWORD*)(a1 + 24) == 1)
		{
			result = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40), v4);
			if ((_DWORD)result)
			{
				result = (__int64)sub_1402D5AA0(a1);
				v3 = *(_QWORD*)(a1 + 40);
				if (v3)
				{
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
					*(_QWORD*)(a1 + 40) = 0i64;
				}
				*(_DWORD*)(a1 + 24) = 2;
			}
		}
	}
	return result;
}
// 1402D5910: using guessed type int var_18[6];

