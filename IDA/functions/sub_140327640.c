//----- (0000000140327640) ----------------------------------------------------
void __fastcall sub_140327640(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = *(_QWORD**)(a1 + 16);
	if (v2[127])
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD*))(*v2 + 1008i64))(v2))
			(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)(a1 + 16) + 1016i64))(
				*(_QWORD*)(a1 + 16),
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 1024i64));
	}
}

