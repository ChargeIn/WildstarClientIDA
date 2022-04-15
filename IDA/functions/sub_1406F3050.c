//----- (00000001406F3050) ----------------------------------------------------
__int64 __fastcall sub_1406F3050(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v2; // eax
	__int64 v3; // rcx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
	{
		sub_1404D1E40((__int64)a1, 0);
		return 0i64;
	}
	else
	{
		v2 = sub_140056D60(a1, 1u);
		sub_1404D1E40(v3, v2);
		return 0i64;
	}
}
// 1406F307C: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

