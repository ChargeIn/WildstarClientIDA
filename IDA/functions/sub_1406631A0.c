//----- (00000001406631A0) ----------------------------------------------------
__int64 __fastcall sub_1406631A0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	_DWORD* v4; // r10
	_DWORD* v5; // r8
	__int64 result; // rax
	bool v7; // cf

	v2 = sub_140056AB0(a1, 1u);
	v3 = sub_140056AB0(a1, 2u);
	if (!v2 || !v3)
		return 0i64;
	v4 = (_DWORD*)a1[2];
	v5 = *(_DWORD**)(*(_QWORD*)v3 + 8i64);
	result = 1i64;
	v7 = **(_DWORD**)(*(_QWORD*)v2 + 8i64) < *v5;
	v4[2] = 1;
	*v4 = v7;
	a1[2] += 16i64;
	return result;
}

