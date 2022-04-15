//----- (00000001406A4770) ----------------------------------------------------
__int64 __fastcall sub_1406A4770(_QWORD* a1)
{
	__int64 v2; // rcx
	int v3; // eax
	__int64 v4; // rcx
	_DWORD* v5; // rdx
	bool v6; // zf

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2)
		v4 = *(_QWORD*)(v2 + 8);
	else
		v4 = 0i64;
	v5 = (_DWORD*)a1[2];
	v6 = *(_DWORD*)(*(_QWORD*)(v4 + 104) + 44i64) == 0;
	v5[2] = 1;
	LOBYTE(v3) = !v6;
	*v5 = v3;
	a1[2] += 16i64;
	return 1i64;
}

