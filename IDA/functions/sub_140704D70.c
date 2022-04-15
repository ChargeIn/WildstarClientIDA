//----- (0000000140704D70) ----------------------------------------------------
__int64 __fastcall sub_140704D70(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	int v4; // eax
	_DWORD* v5; // r8
	bool v6; // zf
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	v4 = sub_1403A9F00(v3, v2);
	v5 = (_DWORD*)a1[2];
	v6 = v4 == 0;
	v5[2] = 1;
	result = 1i64;
	*v5 = !v6;
	a1[2] += 16i64;
	return result;
}
// 140704D85: variable 'v3' is possibly undefined

