#include "../winhttp.h"

//----- (00000001403D9160) ----------------------------------------------------
__int64 __fastcall sub_1403D9160(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // rbp
	unsigned __int64 v4; // r15
	__int64* i; // rsi
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rbx
	__int16* v9; // rcx

	v2 = 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 28432);
	if (!v4)
		return 0i64;
	for (i = *(__int64**)(qword_140C65898 + 28440); ; ++i)
	{
		v6 = *i;
		if (*i)
			break;
	LABEL_8:
		if (++v2 >= v4)
			return 0i64;
	}
	while (1)
	{
		v7 = *(_QWORD*)(v6 + 24);
		v8 = *(_QWORD*)(v6 + 8);
		v9 = &word_140B7B704;
		if (*(_QWORD*)(v7 + 16))
			v9 = *(__int16**)(v7 + 16);
		if (!(unsigned int)sub_14018E2C0((__int64)v9, a2))
			return *(_QWORD*)(v6 + 24);
		v6 = v8;
		if (!v8)
			goto LABEL_8;
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

