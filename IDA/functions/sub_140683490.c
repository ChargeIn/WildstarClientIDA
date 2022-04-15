//----- (0000000140683490) ----------------------------------------------------
__int64 __fastcall sub_140683490(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	__int64 v5; // rax
	float v6; // xmm0_4
	__int64 v7; // rcx
	__int64 result; // rax
	__int64 v9; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(unsigned int**)(v3 + 8)) != 0i64
		&& (v5 = sub_140617410((__int64)v4, *v4)) != 0)
	{
		v6 = *(float*)(v5 + 28);
		v7 = a1[2];
		result = 1i64;
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = v6;
		a1[2] += 16i64;
	}
	else
	{
		v9 = a1[2];
		*(_QWORD*)v9 = 0i64;
		*(_DWORD*)(v9 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

