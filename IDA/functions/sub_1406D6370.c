//----- (00000001406D6370) ----------------------------------------------------
__int64 __fastcall sub_1406D6370(_QWORD* a1)
{
	_DWORD* v2; // rdx
	_DWORD* v4; // rax
	int v5; // eax
	bool v6; // zf
	_DWORD* v7; // rax

	if (!sub_1406D5FA0(a1))
	{
		v2 = (_DWORD*)a1[2];
		*v2 = 0;
		v2[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 >= a1[2]
		|| v4 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v5 = sub_140056D60(a1, 2u), v6 = v5 == 0, v5 < 0))
	{
		v7 = (_DWORD*)a1[2];
		v7[2] = 1;
	}
	else
	{
		v7 = (_DWORD*)a1[2];
		v7[2] = 1;
		if (v6)
		{
			*v7 = 1;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	*v7 = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

