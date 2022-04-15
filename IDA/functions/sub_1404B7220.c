#include "../winhttp.h"

//----- (00000001404B7220) ----------------------------------------------------
__int64 __fastcall sub_1404B7220(__int64 a1, int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v2 = qword_140C659F0;
	v3 = (*(__int64(__fastcall**)(int*))(qword_140C659F0 + 400))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 392) + 8 * (v3 % *(_QWORD*)(v2 + 384)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 408))(&v6, v4 + 2))
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
// 140C659F0: using guessed type __int64 qword_140C659F0;

