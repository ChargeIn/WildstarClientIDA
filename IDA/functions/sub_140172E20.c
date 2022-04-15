//----- (0000000140172E20) ----------------------------------------------------
__int64 __fastcall sub_140172E20(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebx
	char* v4; // rax
	__int64 v5; // rdi
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	sub_140056D60(a1, 3u);
	v4 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v7, v4);
	v5 = v8;
	sub_140170AF0(v2, v3, v8);
	if (v5)
		sub_14018B900(v5, 0);
	return 0i64;
}

