#include "../winhttp.h"

//----- (00000001407D1EB0) ----------------------------------------------------
__int64 __fastcall sub_1407D1EB0(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // eax
	__int64 result; // rax

	v3 = *(_DWORD*)(a1 + 16);
	if (v3)
	{
		result = (unsigned int)(v3 - 1);
		*(_DWORD*)(a1 + 16) = result;
		if (!(_DWORD)result)
		{
			sub_140198370(a1 + 32, a1, (_QWORD*)(*(_QWORD*)(a1 + 24) + 1264i64));
			return 0i64;
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a1 + 120i64))(a1, 1i64, a3, a1);
		return 0i64;
	}
	return result;
}

