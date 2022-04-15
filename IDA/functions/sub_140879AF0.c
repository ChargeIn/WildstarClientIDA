#include "../winhttp.h"

//----- (0000000140879AF0) ----------------------------------------------------
__int64 __fastcall sub_140879AF0(__int64* a1, __int16* a2)
{
	__int64 v3; // rcx
	__int64 result; // rax

	v3 = a1[7];
	result = 45i64;
	if (v3)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 88i64))(v3);
		if (!(_DWORD)result)
			return sub_140861500(a1, a2);
	}
	return result;
}

