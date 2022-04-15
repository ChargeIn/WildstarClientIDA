#include "../winhttp.h"

//----- (000000014070EB50) ----------------------------------------------------
__int64 __fastcall sub_14070EB50(_QWORD* a1)
{
	int v2; // edi
	char* v3; // rax
	_DWORD* v4; // rdx
	_WORD* v5; // rbx
	__int64 v7; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+28h] [rbp-40h]
	__int64 v9; // [rsp+40h] [rbp-28h] BYREF
	_WORD* v10; // [rsp+48h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = (char*)sub_14018F0E0(&v7, word_1409F8A1C)[1];
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v9, v3);
	if (v8)
		sub_14018B900(v8, 0);
	v5 = v10;
	sub_1405DEE20(qword_140C65898 + 26680, v2, v10);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return 0i64;
}
// 1409F8A1C: using guessed type unsigned __int16 word_1409F8A1C[16];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

