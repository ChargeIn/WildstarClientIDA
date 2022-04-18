#include "../winhttp.h"

//----- (0000000140403C80) ----------------------------------------------------
__int64 __fastcall sub_140403C80(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	unsigned __int64 v4; // rax
	__int64 v5; // rbp
	__int64* v6; // rbx
	__int64 v7; // r8
	BOOL v9; // [rsp+20h] [rbp-18h]
	BOOL v10; // [rsp+28h] [rbp-10h]

	v2 = (_QWORD*)qword_140C658A0;
	v4 = sub_140407590((__int64*)qword_140C658A0, (int*)a2);
	v5 = v4;
	if (v4 >= v2[1])
		return 0i64;
	v6 = *(__int64**)(*v2 + 8 * v4);
	v7 = v6[1];
	if (*(_DWORD*)v7 == *(_DWORD*)a2 && v6[2] == *(_QWORD*)(a2 + 8) && *(char*)(v7 + 52) < 0)
	{
		v10 = *(_DWORD*)(a2 + 16) == 2;
		v9 = *(_DWORD*)(a2 + 16) == 1;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChatLeave", "Hbb", v6, v9, v10);
		sub_140408580((__int64)v2, (__int64)v6);
		sub_140007270((__int64)v2, v5);
		sub_1404019F0(v6);
		sub_14018B900((__int64)v6, 0);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

