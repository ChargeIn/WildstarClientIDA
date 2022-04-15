//----- (000000014066D360) ----------------------------------------------------
__int64 __fastcall sub_14066D360(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120) && (v2 = sub_140056AB0(a1, 1u)) != 0 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
	else
		v4 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v5 = sub_140056AB0(a1, 1u)) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& *(_QWORD*)(v6 + 8)
		&& v4)
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
		return sub_140432F20(a1, v7);
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

