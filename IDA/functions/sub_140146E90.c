//----- (0000000140146E90) ----------------------------------------------------
_OWORD* __fastcall sub_140146E90(__int64 a1, _QWORD* a2, unsigned int a3, _QWORD* a4)
{
	_OWORD* v4; // rbx
	_OWORD* result; // rax

	*a4 += 8i64;
	v4 = *(_OWORD**)(*a4 - 8i64);
	result = (_OWORD*)sub_140056AB0(a2, a3);
	*v4 = *result;
	return result;
}
