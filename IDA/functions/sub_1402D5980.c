#include "../winhttp.h"

//----- (00000001402D5980) ----------------------------------------------------
__int64 __fastcall sub_1402D5980(__int64 a1)
{
	int v1; // eax
	__int64 result; // rax
	__int64 v4; // rcx

	v1 = *(_DWORD*)(a1 + 24);
	if (v1 <= 2)
	{
		if (!v1)
			*(_DWORD*)(a1 + 24) = 1;
		if (*(_DWORD*)(a1 + 24) == 1)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40));
			if (!(_DWORD)result)
				return result;
			sub_1402D5AA0(a1);
			v4 = *(_QWORD*)(a1 + 40);
			if (v4)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			*(_DWORD*)(a1 + 24) = 2;
		}
	}
	return 1i64;
}

