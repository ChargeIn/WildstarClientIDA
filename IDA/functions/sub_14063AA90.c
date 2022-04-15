#include "../winhttp.h"

//----- (000000014063AA90) ----------------------------------------------------
__int64 __fastcall sub_14063AA90(__int64 a1, int a2, int a3, int a4, _DWORD* a5)
{
	__int64 v5; // rax
	__int64 v6; // r11
	unsigned int v8; // r9d
	int v9; // r8d

	v5 = *(_QWORD*)(a1 + 320);
	v6 = v5 + 20i64 * *(_QWORD*)(a1 + 328);
	if (v5 == v6)
		return 0i64;
	while (*(_DWORD*)v5 != a2
		|| *(_DWORD*)(v5 + 4) != a3
		|| *(unsigned __int8*)(v5 + 12) != a4
		|| *(_DWORD*)(v5 + 8) != *a5)
	{
		v5 += 20i64;
		if (v5 == v6)
			return 0i64;
	}
	v8 = 0;
	v9 = 0;
	if (*(_BYTE*)(v5 + 12) == 1)
		goto LABEL_11;
	if (*(_BYTE*)(v5 + 12) != 2)
	{
		if (*(_BYTE*)(v5 + 12) != 3)
		{
		LABEL_12:
			LOBYTE(v8) = (v9 & *(_DWORD*)(v5 + 16)) != 0;
			return v8;
		}
	LABEL_11:
		v9 = 1;
		goto LABEL_12;
	}
	LOBYTE(v8) = *(int*)(v5 + 16) < 0;
	return v8;
}

