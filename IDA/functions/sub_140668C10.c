//----- (0000000140668C10) ----------------------------------------------------
__int64 __fastcall sub_140668C10(_QWORD* a1)
{
	__int64* v2; // rdi
	_DWORD* v3; // rax
	signed int v4; // eax
	int v5; // eax
	_DWORD* v6; // rcx
	_DWORD* v7; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (v2 && v4 >= 0 && v4 <= *(_DWORD*)(*v2 + 16))
	{
		v5 = sub_140553790(*v2, v4);
		v6 = (_DWORD*)a1[2];
		v6[2] = 1;
		*v6 = v5 != 0;
	}
	else
	{
		v7 = (_DWORD*)a1[2];
		*v7 = 0;
		v7[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

