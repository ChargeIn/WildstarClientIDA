//----- (0000000140327580) ----------------------------------------------------
void __fastcall sub_140327580(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = *(_QWORD**)(a1 + 16);
	if (v2[124])
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD*))(*v2 + 1008i64))(v2))
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(*(_QWORD*)(a1 + 16) + 992i64))(
				*(_QWORD*)(a1 + 16),
				*(unsigned int*)(a1 + 64),
				*(unsigned int*)(a1 + 68),
				a1 + 80,
				*(_DWORD*)(a1 + 8),
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 1000i64));
	}
}

