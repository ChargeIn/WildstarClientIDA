//----- (000000014069FAC0) ----------------------------------------------------
__int64 __fastcall sub_14069FAC0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rax
	int v5; // r8d
	_DWORD* v6; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0)
		v5 = *(_DWORD*)(v4 + 16);
	else
		v5 = 0;
	v6 = (_DWORD*)a1[2];
	result = 1i64;
	LOBYTE(v3) = v5 != 0;
	v6[2] = 1;
	*v6 = v3;
	a1[2] += 16i64;
	return result;
}

