//----- (0000000140050CA0) ----------------------------------------------------
__int64 __fastcall sub_140050CA0(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = a1 + 90;
	v3 = 3i64;
	do
	{
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 48i64))(*v2);
		if (*v2)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		++v2;
		--v3;
	} while (v3);
	v5 = a1[94];
	if (v5)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[94] = 0i64;
	}
	v6 = a1[95];
	if (v6)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[95] = 0i64;
	}
	return result;
}

