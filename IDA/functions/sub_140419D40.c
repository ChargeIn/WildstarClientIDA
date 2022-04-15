//----- (0000000140419D40) ----------------------------------------------------
__int64 __fastcall sub_140419D40(_QWORD* a1)
{
	unsigned int v2; // eax
	_DWORD* v3; // rdx
	__int64 result; // rax
	int* v5; // rax
	int v6; // eax
	_DWORD* v7; // rcx
	bool v8; // zf

	v2 = sub_140417B50(a1, 1u);
	if (v2)
	{
		v5 = sub_1400B5DF0(qword_140C658F0, v2, 0i64);
		v6 = sub_1403AD020(qword_140C65898, (unsigned int*)v5, 0i64);
		v7 = (_DWORD*)a1[2];
		v8 = v6 == 0;
		v7[2] = 1;
		result = 1i64;
		*v7 = v8;
		a1[2] += 16i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

