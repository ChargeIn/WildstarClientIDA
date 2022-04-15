//----- (000000014017FD20) ----------------------------------------------------
__int64 __fastcall sub_14017FD20(_QWORD* a1)
{
	__int64 v2; // rcx
	_DWORD* v3; // rax
	int v4; // edx
	BOOL v5; // eax
	__int64* v6; // rdx

	v2 = sub_14017F690(a1);
	v3 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 16i64);
	v4 = v3[2];
	v5 = v4 && (v4 != 1 || *v3);
	v6 = *(__int64**)(v2 + 2136);
	*(_DWORD*)(v2 + 1032) = v5;
	sub_140180B70((_DWORD*)v2, v6);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

