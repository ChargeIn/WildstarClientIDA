#include "../winhttp.h"

//----- (0000000140873360) ----------------------------------------------------
__int64 __fastcall sub_140873360(__int64 a1, __int64 a2)
{
	bool v2; // zf
	__int64 result; // rax

	v2 = *(_BYTE*)(a1 + 44) == 0;
	result = *(unsigned __int16*)(a2 + 16);
	*(_WORD*)(a1 + 64) = result;
	if (v2)
	{
		if (*(_WORD*)(a1 + 90))
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 104i64))(a1);
	}
	else
	{
		*(_DWORD*)(a2 + 56) = 17;
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 104i64))(a1);
	}
	return result;
}

