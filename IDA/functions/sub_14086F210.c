//----- (000000014086F210) ----------------------------------------------------
__int64 __fastcall sub_14086F210(__int64* a1, __int64 a2)
{
	__int64 result; // rax
	__int64* v5; // rcx

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 528i64))(a2);
	if ((__int64*)result == a1)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 536i64))(a2, 0i64);
		v5 = a1 + 17;
		if ((*(_BYTE*)(a2 + 91) & 2) == 0)
			v5 = a1 + 14;
		sub_140859270(v5, *(_DWORD*)(a2 + 24));
		return (*(__int64(__fastcall**)(__int64*))(*a1 + 16))(a1);
	}
	return result;
}

