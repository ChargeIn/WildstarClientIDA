//----- (0000000140054E60) ----------------------------------------------------
__int64 __fastcall sub_140054E60(__int64 a1)
{
	__int64 v2; // rcx
	int* v3; // rax

	*(_QWORD*)a1 = off_140B55FF8;
	v2 = a1 + 8;
	*(_QWORD*)v2 = off_140B55FE0;
	*(_BYTE*)(v2 + 8) = 0;
	*(_DWORD*)(v2 + 12) = 0;
	*(_QWORD*)(v2 + 16) = 0i64;
	*(_QWORD*)(v2 + 24) = 0i64;
	if (sub_1400554F0)
	{
		*(_QWORD*)(v2 + 16) = a1;
		*(_QWORD*)(v2 + 24) = sub_1400554F0;
		SteamAPI_RegisterCallback(v2, 1101i64);
	}
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	v3 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 88) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 16i64) = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 24i64) = *(_QWORD*)(a1 + 88);
	*(_DWORD*)(a1 + 112) = 0;
	return a1;
}
// 140959C70: using guessed type __int64 __fastcall SteamAPI_RegisterCallback(_QWORD, _QWORD);
// 140B55FE0: using guessed type __int64 (__fastcall *off_140B55FE0[5])();
// 140B55FF8: using guessed type __int64 (__fastcall *off_140B55FF8[2])();

