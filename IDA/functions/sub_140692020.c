//----- (0000000140692020) ----------------------------------------------------
__int64 __fastcall sub_140692020(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	_QWORD* v5; // rax
	__int64 v6; // rdx
	int v7; // ecx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
	if (!v4)
		return 0i64;
	v5 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), *(_DWORD*)(v4 + 280));
	v6 = a1[2];
	*(_QWORD*)v6 = *v5;
	v7 = *((_DWORD*)v5 + 2);
	result = 1i64;
	*(_DWORD*)(v6 + 8) = v7;
	a1[2] += 16i64;
	return result;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

