//----- (00000001406D64F0) ----------------------------------------------------
__int64 __fastcall sub_1406D64F0(_QWORD* a1)
{
	_DWORD* v2; // rax
	int v3; // eax
	int v4; // ecx
	__int64 v5; // rax

	if (!sub_1406D5FA0(a1)
		|| (v2 = (_DWORD*)(a1[3] + 16i64), (unsigned __int64)v2 >= a1[2])
		|| v2 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v3 = sub_140056D60(a1, 2u), v3 < 1))
	{
		v5 = a1[2];
		*(_QWORD*)v5 = 0xBFF0000000000000ui64;
	}
	else
	{
		v4 = (unsigned __int8)(v3 + 16);
		v5 = a1[2];
		*(double*)v5 = (double)v4;
	}
	*(_DWORD*)(v5 + 8) = 3;
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

