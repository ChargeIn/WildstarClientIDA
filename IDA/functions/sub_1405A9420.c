#include "../winhttp.h"

//----- (00000001405A9420) ----------------------------------------------------
__int64 __fastcall sub_1405A9420(__int64 a1, int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v2 = qword_140C65B80;
	v3 = (*(__int64(__fastcall**)(int*))(qword_140C65B80 + 120))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 112) + 8 * (v3 % *(_QWORD*)(v2 + 104)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 128))(&v6, v4 + 2))
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
// 140C65B80: using guessed type __int64 qword_140C65B80;

