//----- (00000001403487F0) ----------------------------------------------------
void __fastcall sub_1403487F0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD*)(a1 + 88);
	if (v2 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 48) + 24i64))(
			*(_QWORD*)(a1 + 48),
			*(_QWORD*)(a1 + 88),
			0i64,
			0i64,
			0i64,
			0i64,
			0i64);
	}
	else
	{
		v3 = *(_QWORD*)(a1 + 56);
		if (v3)
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v3 + 72i64))(v3, 1000i64, 4i64);
	}
}

