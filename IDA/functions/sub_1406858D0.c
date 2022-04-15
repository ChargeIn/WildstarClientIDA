//----- (00000001406858D0) ----------------------------------------------------
__int64 __fastcall sub_1406858D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v6; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		sub_1406B9790(a1, *(_DWORD*)(v4 + 20));
		return 1i64;
	}
	else
	{
		v6 = a1[2];
		*(_QWORD*)v6 = 0i64;
		*(_DWORD*)(v6 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

