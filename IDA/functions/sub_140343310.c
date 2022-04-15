//----- (0000000140343310) ----------------------------------------------------
__int64 __fastcall sub_140343310(__int64 a1, int(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	__int64 v3; // r9
	_QWORD* v5; // rcx

	v3 = a1 + 80;
	if (!a2)
		return 2147942487i64;
	v5 = *(_QWORD**)(a1 + 112);
	if (v5)
		sub_140341DA0(v5, a2, a3);
	else
		a2(v3, a3);
	return 0i64;
}

