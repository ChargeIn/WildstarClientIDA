//----- (00000001404E7820) ----------------------------------------------------
__int64 __fastcall sub_1404E7820(_QWORD* a1)
{
	_DWORD* v3; // rax
	unsigned int v4; // edi
	_DWORD* v5; // rax
	unsigned int v6; // r8d

	if (!qword_140C65898)
		return 0i64;
	v3 = (_DWORD*)a1[3];
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || (int)v3[2] <= 0)
		v4 = 40;
	else
		v4 = sub_140056D60(a1, 1u);
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 0;
	else
		v6 = sub_140056D60(a1, 2u);
	return sub_1403ABF30(qword_140C65898 + 7160, v4, v6, (__int64)a1);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

