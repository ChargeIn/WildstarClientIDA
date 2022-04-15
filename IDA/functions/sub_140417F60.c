//----- (0000000140417F60) ----------------------------------------------------
__int64 __fastcall sub_140417F60(_QWORD* a1)
{
	int* v2; // rax
	int v3; // edx
	bool v4; // zf
	int v5; // eax
	_DWORD* v6; // rcx
	__int64 result; // rax

	v2 = sub_140417BF0(a1, 1u);
	v3 = 0;
	if (!v2 || (v2[85] & 0x400) == 0 || (v4 = v2[96] == 0, v5 = 1, v4))
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

