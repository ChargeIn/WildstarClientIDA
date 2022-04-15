//----- (0000000140166AF0) ----------------------------------------------------
__int64 __fastcall sub_140166AF0(_QWORD* a1)
{
	__int64 v2; // rbp
	char* v3; // rax
	_DWORD* v4; // rdi
	_DWORD* v5; // rcx
	char* v6; // rax
	unsigned __int64 v7; // rcx
	__int64 v8; // rdx
	unsigned int v9; // r8d
	__int64 v10; // rdi
	int v11; // eax
	__int64 v12; // rdx
	__int64 v14; // [rsp+30h] [rbp-48h] BYREF
	__m128i* v15; // [rsp+38h] [rbp-40h]
	__int64 v16; // [rsp+50h] [rbp-28h] BYREF
	void* v17; // [rsp+58h] [rbp-20h]

	v2 = sub_1401657E0(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v16, v3);
	v4 = dword_140A12138;
	v5 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v6 = (char*)&unk_1409D05AF;
	else
		v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v14, v6);
	v7 = a1[2];
	v8 = a1[3];
	v9 = -2;
	if ((int)((__int64)(v7 - v8) >> 4) >= 4)
	{
		if (v8 + 48 < v7)
			v4 = (_DWORD*)(v8 + 48);
		*(_QWORD*)v7 = *(_QWORD*)v4;
		*(_DWORD*)(v7 + 8) = v4[2];
		a1[2] += 16i64;
		v9 = sub_1400578C0((__int64)a1);
	}
	v10 = (__int64)v17;
	v11 = sub_14015FD10(v2, v17, v15, 0i64, v9);
	v12 = a1[2];
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)(v11 + 1);
	a1[2] += 16i64;
	if (v15)
		sub_14018B900((__int64)v15, 0);
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

