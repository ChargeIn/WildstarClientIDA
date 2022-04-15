#include "../winhttp.h"

//----- (00000001407A1120) ----------------------------------------------------
__int64 __fastcall sub_1407A1120(__int64 a1, int a2)
{
	__int64 v3; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	if (!a2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 1352);
	v4 = (*(__int64(__fastcall**)(int*))(v3 + 24))(&v6);
	v5 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v4 % *(_QWORD*)(v3 + 8)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 32))(&v6, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	if (v5 == (_QWORD*)-24i64)
		return 0i64;
	else
		return v5[3];
}

