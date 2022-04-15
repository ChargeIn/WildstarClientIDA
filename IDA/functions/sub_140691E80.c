//----- (0000000140691E80) ----------------------------------------------------
__int64 __fastcall sub_140691E80(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edi
	__int64 v4; // rax
	__int64 v5; // rax
	int v6; // eax
	_DWORD* v7; // rcx
	bool v8; // zf
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v4 + 8), *(_QWORD*)(v4 + 16))) != 0)
	{
		v6 = sub_140401CB0(v5);
	}
	else
	{
		v6 = 0;
	}
	v7 = (_DWORD*)a1[2];
	v8 = v6 == 0;
	result = 1i64;
	LOBYTE(v3) = !v8;
	v7[2] = 1;
	*v7 = v3;
	a1[2] += 16i64;
	return result;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

