//----- (0000000140327520) ----------------------------------------------------
void __fastcall sub_140327520(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = *(_QWORD**)(a1 + 16);
	if (v2[122])
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD*))(*v2 + 1008i64))(v2))
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _QWORD))(*(_QWORD*)(a1 + 16) + 976i64))(
				*(_QWORD*)(a1 + 16),
				*(unsigned int*)(a1 + 64),
				*(unsigned int*)(a1 + 68),
				a1 + 80,
				*(_DWORD*)(a1 + 144),
				*(_DWORD*)(a1 + 8),
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 984i64));
	}
}

