//----- (00000001401150E0) ----------------------------------------------------
__int64 __fastcall sub_1401150E0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	_QWORD* v4; // rdi
	char* v5; // rax
	int* v6; // rbx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int* v9; // [rsp+28h] [rbp-20h]

	v2 = sub_140114A30(a1);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = (_QWORD*)v2;
	if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && (unsigned int)(*(_DWORD*)(a1[3] + 24i64) - 3) <= 1)
	{
		v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v8, v5);
		v6 = v9;
		sub_140110EE0(v4, v9);
		if (v6)
			sub_14018B900((__int64)v6, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

