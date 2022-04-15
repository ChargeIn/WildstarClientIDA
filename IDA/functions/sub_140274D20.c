#include "../winhttp.h"

//----- (0000000140274D20) ----------------------------------------------------
__int64 __fastcall sub_140274D20(__int64 a1)
{
	unsigned __int64 v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 6648);
	if (v2)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 6640) + 8 * (*(unsigned int*)(a1 + 240) % v2));
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 48i64))(v3, 1i64);
	}
	++* (_DWORD*)(a1 + 240);
	return result;
}

