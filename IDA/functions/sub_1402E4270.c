//----- (00000001402E4270) ----------------------------------------------------
__int64 __fastcall sub_1402E4270(__int64 a1, int a2, _QWORD* a3, int a4)
{
	__int64 v5; // rcx

	if (!a3 || a4 != 1)
		return 2147942487i64;
	v5 = a1 + 8i64 * a2;
	*a3 = *(_QWORD*)(v5 + 680);
	(***(void(__fastcall****)(_QWORD))(v5 + 680))(*(_QWORD*)(v5 + 680));
	return 0i64;
}

