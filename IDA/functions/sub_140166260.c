//----- (0000000140166260) ----------------------------------------------------
__int64 __fastcall sub_140166260(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebx
	char* v4; // rax
	__int64 v5; // rdi
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v7, v4);
	v5 = v8;
	sub_14015EFF0(v2, v3 - 1, v8);
	if (v5)
		sub_14018B900(v5, 0);
	return 0i64;
}

