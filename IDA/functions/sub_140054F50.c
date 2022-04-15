//----- (0000000140054F50) ----------------------------------------------------
__int64 __fastcall sub_140054F50(__int64 a1)
{
	unsigned __int64 v1; // rdi
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	bool v7; // zf

	v1 = 0i64;
	for (*(_QWORD*)a1 = off_140B55FF8; v1 < *(_QWORD*)(a1 + 72); ++v1)
	{
		v3 = *(_QWORD**)(*(_QWORD*)(a1 + 64) + 8 * v1);
		if (v3)
		{
			v4 = v3[2];
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
			if (*v3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v3 - 16i64) + 8i64))(*v3 - 16i64);
			sub_14018B900((__int64)v3, 0);
		}
	}
	if (*(_DWORD*)(a1 + 112) && SteamUser())
	{
		v5 = SteamUser();
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 128i64))(v5, *(unsigned int*)(a1 + 112));
	}
	sub_140008410(a1 + 80);
	sub_14018B900(*(_QWORD*)(a1 + 88), 0);
	v6 = *(_QWORD*)(a1 + 64);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = (*(_BYTE*)(a1 + 16) & 1) == 0;
	*(_QWORD*)(a1 + 8) = &off_140B55FC8;
	if (!v7)
		SteamAPI_UnregisterCallback();
	*(_QWORD*)a1 = &off_140B56190;
	return SteamAPI_Shutdown();
}
// 140959C50: using guessed type __int64 SteamAPI_UnregisterCallback(void);
// 140959C60: using guessed type __int64 SteamUser(void);
// 140959C78: using guessed type __int64 SteamAPI_Shutdown(void);
// 140B55FC8: using guessed type __int64 (__fastcall *off_140B55FC8)();
// 140B55FF8: using guessed type __int64 (__fastcall *off_140B55FF8[2])();
// 140B56190: using guessed type __int64 (__fastcall *off_140B56190)();

