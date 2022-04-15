#include "../winhttp.h"

//----- (00000001400F6A90) ----------------------------------------------------
__int64 __fastcall sub_1400F6A90(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	unsigned int* v6; // rbx
	__int64 v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	v3 = (*(__int64(__fastcall**)(__int64*))(a1 + 72))(&v7);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 64) + 8 * (v3 % *(_QWORD*)(a1 + 56)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 80))(&v7, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0i64;
	}
	v6 = (unsigned int*)(v4 + 3);
	if (v6)
		return *v6;
	else
		return 0i64;
}

