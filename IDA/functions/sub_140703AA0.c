//----- (0000000140703AA0) ----------------------------------------------------
__int64 __fastcall sub_140703AA0(_QWORD* a1)
{
	int v2; // eax
	_DWORD* v3; // rcx
	int v4; // edx
	int v5; // r8d
	int v6; // eax
	BOOL v7; // eax

	v2 = sub_140056D60(a1, 1u);
	v3 = dword_140A12138;
	v4 = v2;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v5 = 0;
	v6 = v3[2];
	v7 = v6 && (v6 != 1 || *v3);
	LOBYTE(v5) = v7;
	sub_1404B10F0(qword_140C659D8, v4, v5);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C659D8: using guessed type __int64 qword_140C659D8;

