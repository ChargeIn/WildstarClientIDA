#include "../winhttp.h"

//----- (000000014077DD00) ----------------------------------------------------
__int64 __fastcall sub_14077DD00(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	__int64 v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v3 = (*(__int64(__fastcall**)(__int64*))(a1 + 24))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v3 % *(_QWORD*)(a1 + 8)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 32))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0i64;
	}
	if (v4 == (_QWORD*)-24i64)
		return 0i64;
	else
		return v4[3];
}

