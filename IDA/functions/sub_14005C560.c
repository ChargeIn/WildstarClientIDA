//----- (000000014005C560) ----------------------------------------------------
_QWORD* __fastcall sub_14005C560(__int64 a1, __int64 a2, int* a3)
{
	_QWORD* result; // rax

	result = sub_14005C450(a2, a3);
	*(_BYTE*)(a2 + 10) = 0;
	if (result == (_QWORD*)dword_140A12138)
	{
		if (!a3[2])
			sub_14005ABE0(a1, aTableIndexIsNi);
		return (_QWORD*)sub_14005C260(a1, a2, a3);
	}
	return result;
}
// 14005C260: using guessed type __int64 __fastcall sub_14005C260(_QWORD, _QWORD, _QWORD);
// 140A12138: using guessed type _DWORD dword_140A12138[4];

