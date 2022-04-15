#include "../winhttp.h"

//----- (000000014039D9D0) ----------------------------------------------------
__int64 __fastcall sub_14039D9D0(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v5; // rcx
	__int64 v7; // rsi
	__int64 v9; // rdi
	unsigned int* v10; // rsi
	unsigned int v11; // ebx
	unsigned int v12; // ebp
	__int64 v13; // [rsp+50h] [rbp+18h] BYREF

	v5 = qword_140C65898;
	if (!qword_140C65898 || !a1)
		return 2147500037i64;
	v7 = *(_QWORD*)(a1 + 24);
	if (!v7)
		return 2147500037i64;
	v9 = 0i64;
	v10 = (unsigned int*)(v7 + 136);
	v11 = 0;
	while (1)
	{
		v12 = *v10;
		if ((unsigned int)sub_1403AC590(v5 + 160, 1030, *v10))
			return sub_14039D4A0(a1, a2, a3, a4);
		if (!v9)
			v9 = sub_14044FC40((_QWORD*)qword_140C65908, v12);
		++v11;
		++v10;
		if (v11 >= 2)
			break;
		v5 = qword_140C65898;
	}
	if (v9)
	{
		sub_1403FA580(qword_140C65898, v9);
	}
	else
	{
		v13 = 0x141DEF9E0i64;
		sub_1401A3130(109, 1, &v13);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;

