//----- (000000014072ECA0) ----------------------------------------------------
__int64 __fastcall sub_14072ECA0(_QWORD* a1)
{
	_QWORD* v2; // rax
	int v3; // edi
	int v4; // eax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2)
		v4 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 112i64))(*v2);
	else
		v4 = 0;
	v5 = (_DWORD*)a1[2];
	v6 = v4 == 0;
	result = 1i64;
	LOBYTE(v3) = !v6;
	v5[2] = 1;
	*v5 = v3;
	a1[2] += 16i64;
	return result;
}

