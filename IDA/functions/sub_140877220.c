#include "../winhttp.h"

//----- (0000000140877220) ----------------------------------------------------
__int64 __fastcall sub_140877220(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rcx
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 56);
	if (!v4)
		return 2i64;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	if ((_DWORD)result == 1)
		*(_DWORD*)(a1 + 48) += a3;
	return result;
}

