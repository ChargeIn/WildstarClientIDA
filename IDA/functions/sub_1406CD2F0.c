#include "../winhttp.h"

//----- (00000001406CD2F0) ----------------------------------------------------
__int64 __fastcall sub_1406CD2F0(_QWORD* a1)
{
	_QWORD* v2; // rbx
	char* v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	char* v6; // rax
	__int64 v7; // rcx
	char* v8; // rax
	__int64 v9; // rcx
	char* v10; // rax
	__int64 v11; // rcx
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]
	__int64 v16; // [rsp+38h] [rbp-10h]

	v2 = (_QWORD*)sub_1406CD790(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v13, v3);
	v4 = v2[184];
	v5 = v16;
	v2[184] = v14;
	v2[185] = v15;
	v2[186] = v5;
	if (v4)
		sub_14018B900(v4, 0);
	v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v13, v6);
	v7 = v2[188];
	v2[188] = v14;
	v2[189] = v15;
	v2[190] = v16;
	if (v7)
		sub_14018B900(v7, 0);
	v8 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v13, v8);
	v9 = v2[192];
	v2[192] = v14;
	v2[193] = v15;
	v2[194] = v16;
	if (v9)
		sub_14018B900(v9, 0);
	v10 = (char*)sub_140056BB0(a1, 5u, 0i64);
	sub_14018F2D0(&v13, v10);
	v11 = v2[196];
	v2[196] = v14;
	v2[197] = v15;
	v2[198] = v16;
	if (v11)
		sub_14018B900(v11, 0);
	return 0i64;
}

