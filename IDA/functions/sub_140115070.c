//----- (0000000140115070) ----------------------------------------------------
__int64 __fastcall sub_140115070(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	__int64 v4; // rbx
	__int64 v5; // r9
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+30h] [rbp-18h]

	v2 = sub_140114A30(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v7, v3);
	v4 = v8;
	sub_14010EA70(v2, v8, (v9 - v8) >> 1, v5, v7, v8);
	if (v4)
		sub_14018B900(v4, 0);
	return 0i64;
}
// 1401150B7: variable 'v5' is possibly undefined

