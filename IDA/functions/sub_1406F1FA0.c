//----- (00000001406F1FA0) ----------------------------------------------------
__int64 __fastcall sub_1406F1FA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r8
	_DWORD* v5; // rcx
	__int64 result; // rax
	bool v7; // zf
	_DWORD* v8; // rax

	if (*(_DWORD*)(qword_140C635F0 + 5896)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = v3 + 8, v3 == -8))
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v5 = (_DWORD*)a1[2];
		result = 1i64;
		v7 = *(_DWORD*)(v4 + 16) == 0;
		v5[2] = 1;
		*v5 = !v7;
		a1[2] += 16i64;
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

