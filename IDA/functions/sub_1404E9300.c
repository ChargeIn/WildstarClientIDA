//----- (00000001404E9300) ----------------------------------------------------
__int64 __fastcall sub_1404E9300(__int64 a1)
{
	int v1; // r9d
	int v3; // eax
	int v4; // eax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax

	v1 = 0;
	if (!qword_140C63658 || !*(_DWORD*)(qword_140C63658 + 44))
		goto LABEL_8;
	v3 = dword_140C3CB80;
	if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
		v3 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C3CB90 + v3)
		|| !*(_QWORD*)(qword_140C63658 + 32)
		|| (v4 = 1, !*(_DWORD*)(qword_140C63658 + 40)))
	{
	LABEL_8:
		v4 = 0;
	}
	v5 = *(_DWORD**)(a1 + 16);
	v6 = v4 == 0;
	result = 1i64;
	LOBYTE(v1) = !v6;
	v5[2] = 1;
	*v5 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C3CB90: using guessed type int dword_140C3CB90;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

