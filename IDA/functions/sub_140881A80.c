//----- (0000000140881A80) ----------------------------------------------------
__int64 __fastcall sub_140881A80(int a1, _QWORD* a2)
{
	__int64 v2; // r8
	_QWORD* v3; // rax
	__int64 result; // rax

	v2 = qword_140C62918 + 112i64 * a1;
	*(_DWORD*)(v2 + 100) -= *(_DWORD*)(v2 + 4);
	*a2 = 0i64;
	v3 = *(_QWORD**)(v2 + 32);
	if (v3)
		*v3 = a2;
	else
		*(_QWORD*)(v2 + 24) = a2;
	result = 1i64;
	*(_QWORD*)(v2 + 32) = a2;
	return result;
}
// 140C62918: using guessed type __int64 qword_140C62918;

