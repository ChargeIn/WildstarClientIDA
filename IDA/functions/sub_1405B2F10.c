#include "../winhttp.h"

//----- (00000001405B2F10) ----------------------------------------------------
__int64 __fastcall sub_1405B2F10(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdi
	_QWORD* v3; // rbx
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	v5 = a1;
	if (!a2)
		return 0i64;
	v5 = a2;
	v2 = qword_140C4A3C0(&v5);
	v3 = *(_QWORD**)(qword_140C4A3B8 + 8 * (v2 % qword_140C4A3B0));
	if (!v3)
		return 0i64;
	while (v2 != *v3 || !(unsigned int)qword_140C4A3C8(&v5, v3 + 2))
	{
		v3 = (_QWORD*)v3[1];
		if (!v3)
			return 0i64;
	}
	if (v3 == (_QWORD*)-24i64)
		return 0i64;
	else
		return v3[3];
}
// 140C4A3B0: using guessed type __int64 qword_140C4A3B0;
// 140C4A3B8: using guessed type __int64 qword_140C4A3B8;
// 140C4A3C0: using guessed type __int64 (__fastcall *qword_140C4A3C0)(_QWORD);
// 140C4A3C8: using guessed type __int64 (__fastcall *qword_140C4A3C8)(_QWORD, _QWORD);

