#include "../winhttp.h"

//----- (000000014019C2E0) ----------------------------------------------------
__int64 __fastcall sub_14019C2E0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 24));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			v3 = *(_QWORD*)(a1 + 8);
			if (v3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

