//----- (0000000140691E10) ----------------------------------------------------
__int64 __fastcall sub_140691E10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	_DWORD* v4; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| !sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16)))
	{
		v4 = (_DWORD*)a1[2];
		*v4 = 0;
		v4[2] = 1;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

