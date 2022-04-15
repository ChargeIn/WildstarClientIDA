//----- (00000001404F1DE0) ----------------------------------------------------
__int64 __fastcall sub_1404F1DE0(__int64 a1)
{
	_DWORD* v1; // r8
	int v2; // eax
	bool v3; // zf
	__int64 result; // rax

	v1 = *(_DWORD**)(a1 + 16);
	v2 = dword_140C49F80;
	if (*(_DWORD*)qword_140C63750 < dword_140C49F80)
		v2 = *(_DWORD*)qword_140C63750;
	v3 = *((_BYTE*)&dword_140C49F90 + v2) == 0;
	v1[2] = 1;
	result = 1i64;
	*v1 = !v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C49F80: using guessed type int dword_140C49F80;
// 140C49F90: using guessed type int dword_140C49F90;
// 140C63750: using guessed type __int64 qword_140C63750;

