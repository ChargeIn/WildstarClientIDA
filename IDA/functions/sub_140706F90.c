//----- (0000000140706F90) ----------------------------------------------------
__int64 __fastcall sub_140706F90(_QWORD* a1)
{
	unsigned int v2; // edx
	_DWORD* v3; // rcx
	_DWORD* v4; // rax
	__int64 v5; // rax

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	v4 = (_DWORD*)a1[3];
	if ((unsigned __int64)v4 < a1[2])
	{
		v3 = dword_140A12138;
		if (v4 != dword_140A12138 && (int)v4[2] > 0)
			v2 = sub_140056D60(a1, 1u);
	}
	v5 = sub_1404ACAC0((__int64)v3, v2);
	if (v5 && **(_QWORD**)(v5 + 8) != *(_QWORD*)(v5 + 8))
		return sub_140706CE0((__int64)a1, v5, 1);
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140706FD8: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

