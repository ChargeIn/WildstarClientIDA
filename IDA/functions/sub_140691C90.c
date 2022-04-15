//----- (0000000140691C90) ----------------------------------------------------
__int64 __fastcall sub_140691C90(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // edx
	BOOL v6; // r8d
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16))) != 0)
	{
		v5 = 0;
		v6 = **(_DWORD**)(v4 + 8) == 18;
	}
	else
	{
		v5 = 0;
		v6 = 0;
	}
	v7 = (_DWORD*)a1[2];
	result = 1i64;
	LOBYTE(v5) = v6;
	v7[2] = 1;
	*v7 = v5;
	a1[2] += 16i64;
	return result;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

