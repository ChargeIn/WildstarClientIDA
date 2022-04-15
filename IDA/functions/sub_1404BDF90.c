//----- (00000001404BDF90) ----------------------------------------------------
__int64 __fastcall sub_1404BDF90(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = a1[2];
	if (v2)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 48i64))(v2, 0i64, 0i64);
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
	}
	return result;
}

