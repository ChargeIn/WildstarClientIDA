//----- (000000014069E5C0) ----------------------------------------------------
__int64 __fastcall sub_14069E5C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	int v4; // ebx
	__int64 v5; // rax
	__int64 v6; // rdx
	int v7; // eax
	_DWORD* v8; // rcx
	bool v9; // zf
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v4 = 0;
	if (v2 && (v5 = *(_QWORD*)(v2 + 8)) != 0)
		v6 = *(_QWORD*)(v5 + 8);
	else
		v6 = 0i64;
	v7 = sub_140584840(v3, v6);
	v8 = (_DWORD*)a1[2];
	v9 = v7 == 0;
	v8[2] = 1;
	result = 1i64;
	LOBYTE(v4) = !v9;
	*v8 = v4;
	a1[2] += 16i64;
	return result;
}
// 14069E5F7: variable 'v3' is possibly undefined

