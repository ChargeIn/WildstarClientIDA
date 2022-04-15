#include "../winhttp.h"

//----- (00000001406011C0) ----------------------------------------------------
__int64 __fastcall sub_1406011C0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx

	v2 = qword_140C65BB0;
	v4 = (*(__int64(__fastcall**)(__int64))(qword_140C65BB0 + 40))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(v2 + 32) + 8 * (v4 % *(_QWORD*)(v2 + 24)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 48))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		if (v5 != (_QWORD*)-24i64)
		{
			sub_140624200(v5[3]);
			sub_1400B6120(v2 + 16, a2);
		}
	}
	return 0i64;
}
// 140C65BB0: using guessed type __int64 qword_140C65BB0;

