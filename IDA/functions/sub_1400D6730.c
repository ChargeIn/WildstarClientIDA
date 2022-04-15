//----- (00000001400D6730) ----------------------------------------------------
__int64 __fastcall sub_1400D6730(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edx
	bool v4; // zf
	int v5; // eax
	_DWORD* v6; // rcx
	__int64 result; // rax

	v2 = sub_1400D66A0(a1, 1u);
	v3 = 0;
	if (!v2 || (v4 = (*(_BYTE*)(v2 + 28) & 1) == 0, v5 = 1, v4))
		v5 = 0;
	v6 = (_DWORD*)a1[2];
	v4 = v5 == 0;
	result = 1i64;
	LOBYTE(v3) = !v4;
	v6[2] = 1;
	*v6 = v3;
	a1[2] += 16i64;
	return result;
}

