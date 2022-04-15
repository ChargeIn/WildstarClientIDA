//----- (00000001406A11A0) ----------------------------------------------------
__int64 __fastcall sub_1406A11A0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 v4; // rax
	_QWORD* v5; // rax
	bool v6; // zf
	int v7; // eax
	_DWORD* v8; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (!v2 || (v4 = *(_QWORD*)(v2 + 8)) == 0 || (v5 = (_QWORD*)(v4 + 8)) == 0i64 || (v6 = *v5 == 0i64, v7 = 1, v6))
		v7 = 0;
	v8 = (_DWORD*)a1[2];
	v6 = v7 == 0;
	result = 1i64;
	LOBYTE(v3) = !v6;
	v8[2] = 1;
	*v8 = v3;
	a1[2] += 16i64;
	return result;
}

