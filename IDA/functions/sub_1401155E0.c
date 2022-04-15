//----- (00000001401155E0) ----------------------------------------------------
__int64 __fastcall sub_1401155E0(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	__int64 v4; // rsi
	int v5; // eax
	unsigned __int64 v6; // rdi
	_DWORD* v7; // rax
	int v8; // eax

	v2 = sub_140114A30(a1);
	v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = v2;
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v5 = 0;
	else
		v5 = sub_140056D60(a1, 2u);
	v6 = v5;
	v7 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v8 = 31744;
	else
		v8 = sub_140056D60(a1, 3u);
	sub_14010EF50(v4, v6, v8);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

