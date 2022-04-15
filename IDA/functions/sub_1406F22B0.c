//----- (00000001406F22B0) ----------------------------------------------------
__int64 __fastcall sub_1406F22B0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r8d
	__int64 v4; // rdx
	int v5; // eax
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (!v2
		|| (v4 = *(_QWORD*)(v2 + 8)) == 0
		|| *(_DWORD*)(qword_140C635F0 + 5896)
		|| *(_QWORD*)(v4 + 8)
		|| (v5 = 1, *(__int64*)(v4 + 16) <= 0))
	{
		v5 = 0;
	}
	v6 = (_DWORD*)a1[2];
	v7 = v5 == 0;
	result = 1i64;
	LOBYTE(v3) = !v7;
	v6[2] = 1;
	*v6 = v3;
	a1[2] += 16i64;
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

