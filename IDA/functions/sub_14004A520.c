//----- (000000014004A520) ----------------------------------------------------
__int64 __fastcall sub_14004A520(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // edi
	__int64 v4; // rax
	__int64 v5; // rsi
	_DWORD* v6; // rax
	__int64 v7; // rax
	__int64* v8; // rbp
	_DWORD* v9; // rax

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2]) && (v4 = sub_140056AB0(a1, 1u)) != 0)
		v5 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	else
		v5 = 0i64;
	v6 = (_DWORD*)(a1[3] + 16i64);
	if (((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
		&& (v7 = sub_140056AB0(a1, 2u)) != 0)
	{
		v8 = *(__int64**)(*(_QWORD*)v7 + 16i64);
	}
	else
	{
		v8 = 0i64;
	}
	v9 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v9 < a1[2] && v9 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v2 = sub_140056D60(a1, 3u);
	if (v5)
		sub_140049900(v5, &ymmword_140C78390, v8, v2, 1);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C78390: using guessed type __m256 ymmword_140C78390;

