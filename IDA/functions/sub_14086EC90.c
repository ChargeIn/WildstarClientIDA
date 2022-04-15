//----- (000000014086EC90) ----------------------------------------------------
__int64 __fastcall sub_14086EC90(__int64* a1, __int64 a2)
{
	unsigned int v4; // esi
	__int64* v5; // rcx
	_QWORD* v6; // rax

	v4 = (*(__int64(__fastcall**)(__int64*))(*a1 + 640))(a1);
	if (v4 == 1)
	{
		v5 = a1 + 17;
		if ((*(_BYTE*)(a2 + 91) & 2) == 0)
			v5 = a1 + 14;
		v6 = (_QWORD*)sub_140859140(v5, *(_DWORD*)(a2 + 24));
		if (v6)
		{
			*v6 = a2;
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)a2 + 536i64))(a2, a1);
			(*(void(__fastcall**)(__int64*))(*a1 + 8))(a1);
		}
		else
		{
			v4 = 2;
		}
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	return v4;
}

