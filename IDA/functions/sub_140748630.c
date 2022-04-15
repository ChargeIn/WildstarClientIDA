//----- (0000000140748630) ----------------------------------------------------
__int64 __fastcall sub_140748630(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rcx
	_DWORD* v5; // rcx

	v1 = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 120) || (v3 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v3 + 684))
	{
		v5 = *(_DWORD**)(a1 + 16);
		*v5 = 0;
		v5[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		sub_140008410(qword_140C65898 + 5208);
		*(_DWORD*)(v1 + 28124) = -1;
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

