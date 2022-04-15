//----- (000000014004A620) ----------------------------------------------------
__int64 __fastcall sub_14004A620(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rax
	__int64 v6; // rax
	__int64* v7; // rsi
	_DWORD* v8; // rax
	int v9; // eax

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2]) && (v3 = sub_140056AB0(a1, 1u)) != 0)
		v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	else
		v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if (((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
		&& (v6 = sub_140056AB0(a1, 2u)) != 0)
	{
		v7 = *(__int64**)(*(_QWORD*)v6 + 16i64);
	}
	else
	{
		v7 = 0i64;
	}
	v8 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v9 = 0;
	else
		v9 = sub_140056D60(a1, 3u);
	if (v4)
		sub_140049900(v4, &ymmword_140C78390, v7, v9, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C78390: using guessed type __m256 ymmword_140C78390;

