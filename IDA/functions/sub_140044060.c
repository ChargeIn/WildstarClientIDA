//----- (0000000140044060) ----------------------------------------------------
__int64 __fastcall sub_140044060(__int64 a1)
{
	__int64 result; // rax
	_DWORD* v2; // r8
	int v3; // eax
	__int64 v4; // rdx
	int v5; // eax
	bool v6; // sf
	bool v7; // of

	if (!qword_140C65898)
		return 0i64;
	v2 = *(_DWORD**)(a1 + 16);
	v3 = dword_140C3DA70;
	if (*(_DWORD*)qword_140C63750 < dword_140C3DA70)
		v3 = *(_DWORD*)qword_140C63750;
	v4 = v3;
	v5 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 2568i64);
	v7 = __OFSUB__(*((_DWORD*)&xmmword_140C3DA80 + v4), v5);
	v6 = *((_DWORD*)&xmmword_140C3DA80 + v4) - v5 < 0;
	v2[2] = 1;
	result = 1i64;
	*v2 = v6 == v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C3DA70: using guessed type int dword_140C3DA70;
// 140C3DA80: using guessed type __int128 xmmword_140C3DA80;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

