#include "../winhttp.h"

//----- (00000001407A1590) ----------------------------------------------------
char __fastcall sub_1407A1590(__int64 a1, int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	__int64 v6; // rax
	int v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	v2 = *(_QWORD*)(qword_140C65B70 + 1560);
	v3 = (*(__int64(__fastcall**)(int*))(v2 + 24))(&v7);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v3 % *(_QWORD*)(v2 + 8)));
	if (!v4)
		return 0;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 32))(&v7, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0;
	}
	if (v4 != (_QWORD*)-24i64 && (v6 = v4[3]) != 0)
		return *(_BYTE*)(v6 + 8);
	else
		return 0;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

