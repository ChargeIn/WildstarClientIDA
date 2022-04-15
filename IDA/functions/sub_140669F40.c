//----- (0000000140669F40) ----------------------------------------------------
__int64 __fastcall sub_140669F40(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	int v4; // r8d

	v2 = sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)a1[2];
	v4 = 0;
	if (v2)
		LOBYTE(v4) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 20i64) == 6;
	*v3 = v4;
	v3[2] = 1;
	a1[2] += 16i64;
	return 1i64;
}

