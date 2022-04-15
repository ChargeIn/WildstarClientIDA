//----- (00000001403756E0) ----------------------------------------------------
__int64 __fastcall sub_1403756E0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v6; // rcx

	if (!*(_DWORD*)(a1 + 32))
	{
		v4 = *(_QWORD*)(a1 + 80);
		if (v4 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4))
			return 0i64;
		v6 = *(_QWORD*)(a1 + 88);
		if (v6)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2))
				return 0i64;
		}
		*(_DWORD*)(a1 + 32) = 1;
	}
	return 1i64;
}

