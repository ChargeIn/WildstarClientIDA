//----- (00000001404F8BB0) ----------------------------------------------------
__int64 __fastcall sub_1404F8BB0(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rax
	_DWORD* v4; // rcx
	int v5; // edx

	v1 = 1;
	v3 = sub_1404F87C0(a1, 1u);
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v4[2];
	if (!v5 || v5 == 1 && !*v4)
		v1 = 0;
	*(_DWORD*)(v3 + 1044) = v1;
	sub_1404FFDD0(v3);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

