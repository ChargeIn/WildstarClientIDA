//----- (00000001406A1200) ----------------------------------------------------
__int64 __fastcall sub_1406A1200(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edi
	__int64 v4; // rcx
	bool v5; // zf
	int v6; // eax
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (!v2 || (v4 = *(_QWORD*)(v2 + 8)) == 0 || (v5 = !sub_1406A04F0(v4), v6 = 1, v5))
		v6 = 0;
	v7 = (_DWORD*)a1[2];
	v5 = v6 == 0;
	result = 1i64;
	LOBYTE(v3) = !v5;
	v7[2] = 1;
	*v7 = v3;
	a1[2] += 16i64;
	return result;
}

