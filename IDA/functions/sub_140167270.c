//----- (0000000140167270) ----------------------------------------------------
__int64 __fastcall sub_140167270(_QWORD* a1)
{
	__int64 v2; // r14
	int v3; // esi
	int v4; // eax
	_DWORD* v5; // rcx
	int v6; // ebp
	char* v7; // rax
	_DWORD* v8; // rax
	char* v9; // rax
	int* v10; // rbx
	int* v11; // rdi
	__int64 v13; // [rsp+30h] [rbp-48h] BYREF
	int* v14; // [rsp+38h] [rbp-40h]
	__int64 v15; // [rsp+50h] [rbp-28h] BYREF
	int* v16; // [rsp+58h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u);
	v5 = (_DWORD*)(a1[3] + 48i64);
	v6 = v4;
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v7 = (char*)&unk_1409D060F;
	else
		v7 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v15, v7);
	v8 = (_DWORD*)(a1[3] + 64i64);
	if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
		v9 = (char*)&unk_1409D060E;
	else
		v9 = (char*)sub_140056BB0(a1, 5u, 0i64);
	sub_14018F2D0(&v13, v9);
	v10 = v16;
	v11 = v14;
	sub_14015F0A0(v2, v3 - 1, v6 - 1, v16, v14);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

