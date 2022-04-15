//----- (00000001407972E0) ----------------------------------------------------
__int64 __fastcall sub_1407972E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	__m128i* v4; // rbp
	__int64 v5; // rsi
	unsigned __int64 v6; // rdi
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // r9
	_DWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // r14
	__int64 v13; // rax
	__int64 v14; // r9
	_DWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	int v19; // [rsp+28h] [rbp-20h]

	v2 = sub_140056BB0(a1, 1u, 0i64);
	v3 = a1[4];
	v4 = (__m128i*)v2;
	v5 = (__int64)(a1[2] - a1[3]) >> 4;
	v6 = -1i64;
	v7 = -1i64;
	do
		++v7;
	while (aLoaded_3[v7]);
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)aLoaded_3, v7);
	v9 = a1[2];
	v18 = v8;
	v19 = 4;
	sub_14005E8E0((__int64)a1, v3 + 160, (int*)&v18, v9);
	a1[2] += 16i64;
	sub_140058890((__int64)a1, v5 + 1);
	v10 = (_DWORD*)(a1[2] - 16i64);
	if (v10 == dword_140A12138 || v10[2] != 5)
	{
		a1[2] = v10;
		if (sub_140057390((__int64)a1, -10002, (unsigned __int64*)v4, 1))
			sub_140056830(a1, (unsigned __int64*)"name conflict for module '%s'", v4->m128i_i8);
		v11 = a1[2];
		*(_QWORD*)v11 = *(_QWORD*)(v11 - 16);
		*(_DWORD*)(v11 + 8) = *(_DWORD*)(v11 - 8);
		a1[2] += 16i64;
		sub_140058A40((__int64)a1, v5 + 1);
	}
	v12 = a1[2];
	do
		++v6;
	while (aName_38[v6]);
	v13 = sub_140062650((__int64)a1, (unsigned __int64*)aName_38, v6);
	v14 = a1[2];
	v18 = v13;
	v19 = 4;
	sub_14005E8E0((__int64)a1, v12 - 16, (int*)&v18, v14);
	a1[2] += 16i64;
	v15 = (_DWORD*)(a1[2] - 16i64);
	if (v15 == dword_140A12138 || v15[2])
	{
		a1[2] = v15;
	}
	else
	{
		a1[2] = v15;
		sub_140797150((__int64)a1, v4);
	}
	v16 = a1[2];
	*(_QWORD*)v16 = *(_QWORD*)(v16 - 16);
	*(_DWORD*)(v16 + 8) = *(_DWORD*)(v16 - 8);
	a1[2] += 16i64;
	sub_140796FC0(a1);
	sub_1407970D0((__int64)a1, v5);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

