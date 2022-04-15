//----- (000000014014E090) ----------------------------------------------------
__int64 __fastcall sub_14014E090(__int64 a1, _QWORD* a2, unsigned int a3, _QWORD* a4)
{
	_DWORD* v4; // rbx
	_DWORD* v5; // rax
	__int64 result; // rax

	*a4 += 8i64;
	v4 = *(_DWORD**)(*a4 - 8i64);
	v5 = (_DWORD*)sub_140056AB0(a2, a3);
	*v4 = *v5;
	v4[1] = v5[1];
	result = (unsigned int)v5[2];
	v4[2] = result;
	return result;
}

