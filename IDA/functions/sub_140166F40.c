//----- (0000000140166F40) ----------------------------------------------------
__int64 __fastcall sub_140166F40(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebp
	int v4; // r14d
	char* v5; // rax
	_DWORD* v6; // rdi
	_DWORD* v7; // rax
	char* v8; // rax
	unsigned __int64 v9; // rcx
	__int64 v10; // r8
	unsigned int v11; // edx
	__int64 v12; // rbx
	__m128i* v13; // rdi
	__int64 v15; // [rsp+40h] [rbp-48h] BYREF
	void* v16; // [rsp+48h] [rbp-40h]
	__int64 v17; // [rsp+60h] [rbp-28h] BYREF
	__m128i* v18; // [rsp+68h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = sub_140056D60(a1, 3u) - 1;
	v5 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v15, v5);
	v6 = dword_140A12138;
	v7 = (_DWORD*)(a1[3] + 64i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
		v8 = (char*)&unk_1409D05DE;
	else
		v8 = (char*)sub_140056BB0(a1, 5u, 0i64);
	sub_14018F2D0(&v17, v8);
	v9 = a1[2];
	v10 = a1[3];
	v11 = -2;
	if ((int)((__int64)(v9 - v10) >> 4) >= 6)
	{
		if (v10 + 80 < v9)
			v6 = (_DWORD*)(v10 + 80);
		*(_QWORD*)v9 = *(_QWORD*)v6;
		*(_DWORD*)(v9 + 8) = v6[2];
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)a1);
	}
	v12 = (__int64)v16;
	v13 = v18;
	if (v3 >= 0 && v3 < *(_DWORD*)(v2 + 1160) && v4 >= 0 && v4 < *(_DWORD*)(v2 + 1144))
		sub_14015D4F0(
			*(__int64**)(*(_QWORD*)(v2 + 1152) + 8i64 * v3),
			v4,
			v16,
			(unsigned int*)(v2 + 2208),
			v18,
			0i64,
			v11);
	if (v13)
		sub_14018B900((__int64)v13, 0);
	if (v12)
		sub_14018B900(v12, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

