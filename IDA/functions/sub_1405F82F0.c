#include "../winhttp.h"

//----- (00000001405F82F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405F82F0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	_BOOL8 result; // rax

	result = 1;
	if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1) + 36))
	{
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1);
		v3 = sub_14020FD40(*(_DWORD*)(v2 + 36));
		if (v3)
		{
			if ((*(_BYTE*)(v3 + 12) & 8) != 0)
				return 0;
		}
	}
	return result;
}

