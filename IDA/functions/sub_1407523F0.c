//----- (00000001407523F0) ----------------------------------------------------
__int64 __fastcall sub_1407523F0(_QWORD* a1)
{
	char* v2; // rax
	__int64 v3; // rcx
	int v4; // eax
	__int64 v5; // rdx
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	int* v8; // [rsp+28h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v7, v2);
	v4 = sub_1403F6F80(v3, v8);
	v5 = a1[2];
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)v4;
	a1[2] += 16i64;
	if (v8)
		sub_14018B900((__int64)v8, 0);
	return 1i64;
}
// 140752417: variable 'v3' is possibly undefined

