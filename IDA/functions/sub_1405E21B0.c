#include "../winhttp.h"

//----- (00000001405E21B0) ----------------------------------------------------
_QWORD* __fastcall sub_1405E21B0(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v5; // rbp
	unsigned __int64 v6; // r14
	unsigned __int64 v7; // rbx
	__int64 v8; // rdi
	unsigned __int16* v9; // rdx
	unsigned __int16* v10; // rsi

	v5 = *(_QWORD**)(qword_140C65898 + 27312);
	if (!v5)
		return 0i64;
	while (1)
	{
		v6 = v5[14];
		v7 = 0i64;
		if (v6)
			break;
	LABEL_9:
		v5 = (_QWORD*)v5[16];
		if (!v5)
			return 0i64;
	}
	v8 = v5[13];
	while (1)
	{
		v9 = *(unsigned __int16**)(*(_QWORD*)v8 + 48i64);
		if (v9)
		{
			v10 = *(unsigned __int16**)(*(_QWORD*)v8 + 56i64);
			if (v10)
			{
				if (!(unsigned int)sub_14018E2C0(a2, v9) && !(unsigned int)sub_14018E2C0(a3, v10))
					return v5;
			}
		}
		++v7;
		v8 += 8i64;
		if (v7 >= v6)
			goto LABEL_9;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

