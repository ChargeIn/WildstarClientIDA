#include "../winhttp.h"

//----- (00000001404825A0) ----------------------------------------------------
__int64 __fastcall sub_1404825A0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	int v7; // [rsp+38h] [rbp+10h] BYREF

	v3 = qword_140C65918;
	v7 = a3 + (a2 << 10);
	v4 = (*(__int64(__fastcall**)(int*))(qword_140C65918 + 168))(&v7);
	v5 = *(_QWORD**)(*(_QWORD*)(v3 + 160) + 8 * (v4 % *(_QWORD*)(v3 + 152)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 176))(&v7, v5 + 2))
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
// 140C65918: using guessed type __int64 qword_140C65918;

