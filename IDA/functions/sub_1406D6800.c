//----- (00000001406D6800) ----------------------------------------------------
__int64 __fastcall sub_1406D6800(_QWORD* a1)
{
	_DWORD* v2; // rdi
	_DWORD* v3; // rax
	int v4; // ecx
	int v5; // eax

	v2 = (_DWORD*)sub_1406D5FA0(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = 4;
		else
			v4 = sub_140056D60(a1, 2u);
		v5 = 1;
		if (v4 > 1)
			v5 = v4;
		v2[500] = v5;
		sub_1406D0EC0(v2);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

