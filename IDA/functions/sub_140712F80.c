#include "../winhttp.h"

//----- (0000000140712F80) ----------------------------------------------------
_BOOL8 __fastcall sub_140712F80(__int64 a1, __int64 a2, _DWORD* a3)
{
	_DWORD* v5; // rax
	int v6; // ecx
	_BOOL8 result; // rax

	result = 0;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1))
	{
		v5 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
		if (*a3 >= *v5 && *a3 < v5[2])
		{
			v6 = a3[1];
			if (v6 >= v5[1] && v6 < v5[3])
				return 1;
		}
	}
	return result;
}

