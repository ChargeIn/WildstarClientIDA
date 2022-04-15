//----- (00000001407404A0) ----------------------------------------------------
__int64 __fastcall sub_1407404A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int v4; // ecx
	__int64 v5; // rcx
	_DWORD* v6; // rax
	int* v7; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_10;
	}
	v4 = sub_140056D60(a1, 2u);
	if ((unsigned int)(v4 - 1) > 5)
	{
		if (v4 != 20)
			goto LABEL_5;
		v5 = 6i64;
	LABEL_8:
		v7 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v3 + 4 * v5 + 24), 0i64);
		sub_140415C70(a1, (__int64)v7);
		return 1i64;
	}
	v5 = (unsigned int)(v4 - 1);
	if ((unsigned int)v5 < 7)
		goto LABEL_8;
LABEL_5:
	v6 = (_DWORD*)a1[2];
	*v6 = 0;
	v6[2] = 1;
LABEL_10:
	a1[2] += 16i64;
	return 1i64;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

