#include "../winhttp.h"

//----- (0000000140289040) ----------------------------------------------------
__int64 __fastcall sub_140289040(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 16));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B616B0;
			v3 = *(_QWORD*)(a1 + 8);
			if (v3)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
				*(_QWORD*)(a1 + 8) = 0i64;
			}
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B616B0: using guessed type __int64 (__fastcall *off_140B616B0[9])();

