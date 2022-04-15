#include "../winhttp.h"

//----- (000000014046A300) ----------------------------------------------------
__int64 __fastcall sub_14046A300(__int64 a1, int a2, int a3, int a4)
{
	__int64 v4; // rbx

	v4 = *(_QWORD*)(a1 + 5584);
	if (v4)
	{
		while (a2 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4) != a2
			|| a3 && *(_DWORD*)(*(_QWORD*)(v4 + 80) + 92i64) != a3
			|| a4 && *(_DWORD*)(v4 + 100) != a4)
		{
			v4 = *(_QWORD*)(v4 + 48);
			if (!v4)
				goto LABEL_9;
		}
	}
	else
	{
	LABEL_9:
		v4 = *(_QWORD*)(a1 + 5592);
		if (!v4)
			return 0i64;
		while (a2 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4) != a2
			|| a3 && *(_DWORD*)(*(_QWORD*)(v4 + 80) + 92i64) != a3
			|| a4 && *(_DWORD*)(v4 + 100) != a4)
		{
			v4 = *(_QWORD*)(v4 + 64);
			if (!v4)
				return 0i64;
		}
	}
	return v4;
}

