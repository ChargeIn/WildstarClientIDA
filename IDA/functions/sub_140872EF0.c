#include "../winhttp.h"

//----- (0000000140872EF0) ----------------------------------------------------
__int64 __fastcall sub_140872EF0(_BYTE* a1, __int64 a2)
{
	__int64 result; // rax

	if (a1[44])
	{
		*(_DWORD*)(a2 + 56) = 17;
		return (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 104i64))(a1);
	}
	return result;
}

