#include "../winhttp.h"

//----- (0000000140395F00) ----------------------------------------------------
__int64 __fastcall sub_140395F00(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 40);
	if (!v2)
		return 1i64;
	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 16i64))(v2, a2, 0i64);
	if ((_DWORD)result)
		return 1i64;
	return result;
}

