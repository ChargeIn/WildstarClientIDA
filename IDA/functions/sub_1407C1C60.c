#include "../winhttp.h"

//----- (00000001407C1C60) ----------------------------------------------------
__int64 __fastcall sub_1407C1C60(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax
	int v5[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 24);
	v5[0] = -1;
	if (v2)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v2 + 32i64))(v2, v5))
		{
			v3 = *(_QWORD*)(a1 + 24);
			if (v3)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
				*(_QWORD*)(a1 + 24) = 0i64;
			}
		}
	}
	result = *(_QWORD*)(a1 + 40);
	if (result)
		return *(unsigned int*)(result + 48);
	return result;
}
// 1407C1C60: using guessed type int var_18[6];

