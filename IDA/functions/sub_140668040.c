//----- (0000000140668040) ----------------------------------------------------
__int64 __fastcall sub_140668040(_QWORD* a1)
{
	__int64* v2; // rdi
	_DWORD* v3; // rax
	signed int v4; // eax
	int v5; // eax
	__int64 v6; // r11
	__int64 v7; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (v2 && v4 >= 0 && v4 < *(_DWORD*)(*v2 + 16))
	{
		v5 = sub_1405536C0(*v2, v4);
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)v5;
	}
	else
	{
		v7 = a1[2];
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406680AF: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

