#include "../winhttp.h"

//----- (00000001402F00C0) ----------------------------------------------------
__int64 __fastcall sub_1402F00C0(__int64 a1)
{
	int v2; // ecx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = *(_DWORD*)(a1 + 36) - 1;
	if (v2)
	{
		if (v2 == 1)
			return (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) + 488i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				a1 + 64);
	}
	else
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 496i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 32),
			*(_QWORD*)(a1 + 40),
			*(unsigned int*)(a1 + 48));
		v4 = *(_QWORD*)(a1 + 40);
		if (v4)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
	}
	return result;
}

