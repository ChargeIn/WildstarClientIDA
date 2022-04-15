#include "../winhttp.h"

//----- (00000001407AC1A0) ----------------------------------------------------
int __fastcall sub_1407AC1A0(_DWORD* a1)
{
	int v2; // eax
	__int64 v3; // rdx
	int v4; // ebx
	int result; // eax

	v2 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 184i64))(a1);
	v3 = *(_QWORD*)a1;
	v4 = v2;
	a1[109085] = 1;
	result = (*(__int64(__fastcall**)(_DWORD*))(v3 + 184))(a1);
	if (v4 != result)
		return sub_1407AC000((__int64)a1);
	return result;
}

