//----- (00000001406FD980) ----------------------------------------------------
__int64 __fastcall sub_1406FD980(_QWORD* a1)
{
	unsigned int v2; // eax
	int v3; // edx
	_DWORD* v4; // r9
	unsigned int v5; // r10d
	__int64 result; // rax
	int v7; // ecx

	v2 = sub_140056D60(a1, 1u);
	v3 = dword_140C3B390;
	v4 = (_DWORD*)a1[2];
	v5 = v2;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
		v3 = *(_DWORD*)qword_140C63750;
	result = 1i64;
	v7 = *((_DWORD*)&qword_140C3B3A0 + v3);
	v4[2] = 1;
	*v4 = _bittest(&v7, v5);
	a1[2] += 16i64;
	return result;
}
// 140C3B390: using guessed type int dword_140C3B390;
// 140C3B3A0: using guessed type __int64 qword_140C3B3A0;
// 140C63750: using guessed type __int64 qword_140C63750;

