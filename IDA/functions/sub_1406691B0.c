//----- (00000001406691B0) ----------------------------------------------------
__int64 __fastcall sub_1406691B0(_QWORD* a1)
{
	__int64* v2; // rdi
	_DWORD* v3; // rax
	signed int v4; // r10d
	__int64 v5; // rdi
	int v6; // r11d
	unsigned int v7; // r10d
	int v8; // eax
	int* v9; // rcx
	_DWORD* v10; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (v2 && v4 >= 0 && (v5 = *v2, v4 <= *(_DWORD*)(v5 + 16)))
	{
		v6 = 0;
		if ((unsigned int)v4 >= *(_DWORD*)(v5 + 16)
			|| (unsigned int)sub_140551840(v5, v4) <= 1
			|| (v8 = v6, (*(_DWORD*)(*(_QWORD*)(v5 + 8i64 * v7 + 24) + 8i64) & 0x400) != 0))
		{
			v8 = 1;
		}
		v9 = (int*)a1[2];
		LOBYTE(v6) = v8 == 0;
		v9[2] = 1;
		*v9 = v6;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14066923B: variable 'v6' is possibly undefined
// 140669233: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

