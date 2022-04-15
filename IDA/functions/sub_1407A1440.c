#include "../winhttp.h"

//----- (00000001407A1440) ----------------------------------------------------
__int64 __fastcall sub_1407A1440(__int64 a1, int a2, unsigned __int8 a3)
{
	__int64 v5; // rsi
	unsigned __int64 v6; // rdi
	_QWORD* v7; // rbx
	_QWORD* v8; // rdx
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v9 = a2;
	if (!a3)
		return 0i64;
	v5 = *(_QWORD*)(qword_140C65B70 + 1560);
	v6 = (*(__int64(__fastcall**)(int*))(v5 + 24))(&v9);
	v7 = *(_QWORD**)(*(_QWORD*)(v5 + 16) + 8 * (v6 % *(_QWORD*)(v5 + 8)));
	if (!v7)
		return 0i64;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 32))(&v9, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			return 0i64;
	}
	if (v7 != (_QWORD*)-24i64 && (v8 = (_QWORD*)v7[3]) != 0i64 && (unsigned __int64)a3 <= v8[1])
		return *(unsigned int*)(*v8 + 4i64 * (a3 - 1));
	else
		return 0i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

