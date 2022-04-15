#include "../winhttp.h"

//----- (000000014015EED0) ----------------------------------------------------
bool __fastcall sub_14015EED0(__int64 a1, int a2, int a3)
{
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rdx

	v3 = a2;
	if (a3 < 0
		|| a3 >= *(_DWORD*)(a1 + 1144)
		|| a2 < 0
		|| a2 >= *(_DWORD*)(a1 + 1160)
		|| (v4 = *(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8i64 * a2), a3 >= *(_DWORD*)(v4 + 24)))
	{
		v5 = 0i64;
	}
	else
	{
		v5 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 8i64 * a3);
	}
	return *(_BYTE*)(v5 + 8) && *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8 * v3) + 8i64);
}

