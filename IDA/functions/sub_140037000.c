//----- (0000000140037000) ----------------------------------------------------
LRESULT __fastcall sub_140037000(__int64 a1, HWND a2, unsigned int a3, WPARAM a4, LPARAM a5)
{
	int v5; // eax
	__int64 v11; // rcx
	__int64 v12; // rcx

	v5 = *(_DWORD*)(a1 + 168);
	if (v5 != 11 && a3 == 256 && a4 == 27)
	{
		if (!v5)
		{
			sub_140008D70();
			return 0i64;
		}
		v11 = *(_QWORD*)(a1 + 232);
		if (v11)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			*(_QWORD*)(a1 + 232) = 0i64;
		}
		v12 = *(_QWORD*)(a1 + 240);
		if (v12)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			*(_QWORD*)(a1 + 240) = 0i64;
		}
		*(_DWORD*)(a1 + 168) = 0;
		sub_140039060(a1);
	}
	return sub_14003E1E0(a1, a2, a3, a4, a5);
}

