//----- (000000014026C130) ----------------------------------------------------
__int64 __fastcall sub_14026C130(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // r9

	v3 = a1 + 8i64 * a2;
	if (*(_QWORD*)(v3 + 10048) == a3)
		return 0i64;
	*(_QWORD*)(v3 + 10048) = a3;
	if (a3)
	{
		if (*(_DWORD*)(a1 + 10368) <= a2)
			*(_DWORD*)(a1 + 10368) = a2 + 1;
	}
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6608) + 520i64))(*(_QWORD*)(a1 + 6608));
	return 1i64;
}
