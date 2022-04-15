//----- (000000014085CEB0) ----------------------------------------------------
__int64 __fastcall sub_14085CEB0(__int64* a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v6; // rcx

	v3 = *a1;
	if (v3)
		return (*(__int64(__fastcall**)(__int64, __int64, __int64*, _QWORD))(*(_QWORD*)v3 + 448i64))(v3, a2, a3, 0i64);
	v6 = *a3;
	*a3 = 0i64;
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	*((_BYTE*)a3 + 8) = 0;
	return result;
}

