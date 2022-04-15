//----- (0000000140792800) ----------------------------------------------------
void __fastcall __noreturn sub_140792800(_QWORD* a1)
{
	_DWORD* v2; // rdi
	_DWORD* v3; // rax
	int v4; // edx
	_DWORD* v5; // rcx
	unsigned __int64 v6; // rcx
	__int64 v7; // rcx

	v2 = dword_140A12138;
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = 1;
	else
		v4 = sub_140056D60(a1, 2u);
	for (; a1[2] < (unsigned __int64)(a1[3] + 16i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	v5 = (_DWORD*)a1[3];
	a1[2] = v5 + 4;
	if (v5 < v5 + 4 && v5 != dword_140A12138 && (unsigned int)(v5[2] - 3) <= 1 && v4 > 0)
	{
		sub_140056700(a1, v4);
		v6 = a1[2];
		if (a1[3] < v6)
			v2 = (_DWORD*)a1[3];
		*(_QWORD*)v6 = *(_QWORD*)v2;
		*(_DWORD*)(v6 + 8) = v2[2];
		v7 = a1[4];
		a1[2] += 16i64;
		if (*(_QWORD*)(v7 + 120) >= *(_QWORD*)(v7 + 112))
			sub_14005E2C0((__int64)a1);
		sub_14005F210((__int64)a1, 2, ((__int64)(a1[2] - a1[3]) >> 4) - 1);
		a1[2] -= 16i64;
	}
	sub_14005AB30((__int64)a1);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

