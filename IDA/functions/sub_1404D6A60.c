#include "../winhttp.h"

//----- (00000001404D6A60) ----------------------------------------------------
char __fastcall sub_1404D6A60(__int64 a1, int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v2 = qword_140C65A50;
	v3 = (*(__int64(__fastcall**)(int*))(qword_140C65A50 + 40))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 32) + 8 * (v3 % *(_QWORD*)(v2 + 24)));
	if (!v4)
		return 0;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 48))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0;
	}
	if (v4 == (_QWORD*)-24i64)
		return 0;
	else
		return *(_BYTE*)(v4[3] + 64i64);
}
// 140C65A50: using guessed type __int64 qword_140C65A50;

