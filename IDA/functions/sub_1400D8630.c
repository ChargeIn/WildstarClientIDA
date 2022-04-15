//----- (00000001400D8630) ----------------------------------------------------
__int64 __fastcall sub_1400D8630(_QWORD* a1)
{
	_BYTE* v2; // rax
	_BYTE* v3; // rbx
	__int64 v4; // rax
	int v5; // edx
	__int64 v6; // rax
	bool v7; // al
	_DWORD* v8; // rcx
	bool v9; // zf
	__int64 result; // rax

	v2 = (_BYTE*)sub_1400D66A0(a1, 1u);
	v3 = v2;
	if (!v2 || (v2[28] & 1) == 0)
		return 0i64;
	v4 = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)v2 + 160i64))(v2);
	v5 = 0;
	v7 = 1;
	if (!v4)
	{
		v6 = *((_QWORD*)v3 + 85);
		if (!v6 || !*(_QWORD*)(v6 + 32))
			v7 = 0;
	}
	v8 = (_DWORD*)a1[2];
	v9 = !v7;
	result = 1i64;
	LOBYTE(v5) = !v9;
	v8[2] = 1;
	*v8 = v5;
	a1[2] += 16i64;
	return result;
}

