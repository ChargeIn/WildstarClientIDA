//----- (0000000140749550) ----------------------------------------------------
__int64 __fastcall sub_140749550(__int64 a1)
{
	__int64 v2; // rcx
	_DWORD* v3; // rcx
	__int64 result; // rax
	_DWORD* v5; // rax

	if (!*(_QWORD*)(qword_140C65898 + 120) || (v2 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v2 + 684))
	{
		v5 = *(_DWORD**)(a1 + 16);
		*v5 = 0;
		v5[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_QWORD*)(qword_140C65898 + 28344) = 0i64;
		v3 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v3 = 1;
		v3[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
