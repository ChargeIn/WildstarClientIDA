//----- (000000014004ACA0) ----------------------------------------------------
__int64 __fastcall sub_14004ACA0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64)) != 0
		&& *(_QWORD*)(v4 + 16))
	{
		return sub_14002F2A0(v4 + 32, (__int64)a1);
	}
	else
	{
		return 0i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

