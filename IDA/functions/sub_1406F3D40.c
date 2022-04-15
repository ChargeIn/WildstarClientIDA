//----- (00000001406F3D40) ----------------------------------------------------
__int64 __fastcall sub_1406F3D40(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v3; // edi
	unsigned int v4; // eax
	int v5; // eax
	_DWORD* v6; // rdx
	bool v7; // zf
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2])
		return 0i64;
	if (v1 == dword_140A12138)
		return 0i64;
	if ((int)v1[2] <= 0)
		return 0i64;
	v3 = sub_140056D60(a1, 1u);
	if (v3 == 3)
		return 0i64;
	v4 = sub_140056D60(a1, 2u);
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65A18 + 40i64))(
		qword_140C65A18,
		v3,
		v4);
	v6 = (_DWORD*)a1[2];
	v7 = v5 == 0;
	v6[2] = 1;
	result = 1i64;
	*v6 = !v7;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65A18: using guessed type __int64 qword_140C65A18;

