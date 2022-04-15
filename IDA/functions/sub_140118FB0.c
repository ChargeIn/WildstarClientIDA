//----- (0000000140118FB0) ----------------------------------------------------
__int64 __fastcall sub_140118FB0(_QWORD* a1)
{
	_QWORD* v2; // rdi
	_QWORD* v3; // rax
	_DWORD* v4; // r8
	__int64 v5; // rdx
	__int64 result; // rax

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	v3 = (_QWORD*)sub_140056AB0(a1, 2u);
	v4 = (_DWORD*)a1[2];
	v5 = *v2 - *v3;
	if (*v2 == *v3)
		v5 = v2[1] - v3[1];
	v4[2] = 1;
	result = 1i64;
	*v4 = v5 == 0;
	a1[2] += 16i64;
	return result;
}

