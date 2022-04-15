#include "../winhttp.h"

//----- (0000000140700340) ----------------------------------------------------
__int64 __fastcall sub_140700340(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int16 v3; // bp
	__int64 v4; // rax
	_DWORD* v5; // rcx
	int* v6; // rsi
	int v7; // edi
	char* v8; // rax
	__int64 v9; // rbx
	int v10; // eax
	__int64 v12; // [rsp+20h] [rbp-48h] BYREF
	__int64 v13; // [rsp+28h] [rbp-40h]
	__int64 v14; // [rsp+30h] [rbp-38h]
	__int64 v15; // [rsp+38h] [rbp-30h] BYREF
	__int64 v16; // [rsp+40h] [rbp-28h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 0;
	else
		v3 = sub_140056D60(a1, 1u);
	v4 = sub_1406622C0((__int64)a1, 2);
	v5 = (_DWORD*)(a1[3] + 32i64);
	v6 = (int*)v4;
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v7 = 0;
	else
		v7 = sub_140056D60(a1, 3u);
	v8 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v15, v8);
	v9 = v16;
	v10 = 0;
	v13 = 0i64;
	v14 = v16;
	v12 = v3;
	if (v6)
		v10 = *v6;
	HIDWORD(v12) = v10;
	LODWORD(v13) = v7;
	sub_1403F4900(qword_140C65898, 0x830u, (__int64)&v12);
	if (v9)
		sub_14018B900(v9, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

