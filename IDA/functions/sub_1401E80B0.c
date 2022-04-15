//----- (00000001401E80B0) ----------------------------------------------------
__int64 __fastcall sub_1401E80B0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx

	if (!*(_DWORD*)(a1 + 108))
	{
		v4 = *(_QWORD*)(a1 + 48);
		if (v4 && !(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v4 + 16i64))(v4, a2, 0i64))
			return 0i64;
		v5 = *(_QWORD*)(a1 + 56);
		if (v5)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 16i64))(v5, a2, 0i64))
				return 0i64;
		}
		v6 = *(_QWORD*)(a1 + 72);
		if (v6)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v6 + 16i64))(v6, a2, 0i64))
				return 0i64;
		}
		v7 = *(_QWORD*)(a1 + 80);
		if (v7)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v7 + 16i64))(v7, a2, 0i64))
				return 0i64;
		}
		v8 = *(_QWORD*)(a1 + 88);
		if (v8)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v8 + 16i64))(v8, a2, 0i64))
				return 0i64;
		}
		*(_DWORD*)(a1 + 108) = 1;
	}
	return 1i64;
}

