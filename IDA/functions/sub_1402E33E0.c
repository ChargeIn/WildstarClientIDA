#include "../winhttp.h"

//----- (00000001402E33E0) ----------------------------------------------------
__int64 __fastcall sub_1402E33E0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx

	if (a1[3] != a3)
	{
		if (a3)
			(**(void(__fastcall***)(__int64))a3)(a3);
		v6 = a1[3];
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[3] = a3;
	}
	a1[4] = a2;
	if (*(_DWORD*)(a2 + 20))
		v7 = *(unsigned int*)(a2 + 20) + (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	else
		v7 = 0i64;
	a1[5] = v7;
	if (a1[6] != a3)
	{
		if (a3)
			(**(void(__fastcall***)(__int64))a3)(a3);
		v8 = a1[6];
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[6] = a3;
	}
	if (*(_DWORD*)(a2 + 24))
		a1[7] = *(unsigned int*)(a2 + 24) + (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	else
		a1[7] = 0i64;
	return 0i64;
}

