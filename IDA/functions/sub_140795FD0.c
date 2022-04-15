//----- (0000000140795FD0) ----------------------------------------------------
__int64 __fastcall sub_140795FD0(_QWORD* a1, const char* a2)
{
	_QWORD* v3; // rsi
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v7; // rbx
	__int64 v8; // rax

	v3 = (_QWORD*)sub_140795E10(a1, a2);
	if (*v3)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_140062650((__int64)a1, (unsigned __int64*)aDynamicLibrari_0, 0x3Aui64);
		*(_DWORD*)(v7 + 8) = 4;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		return 2i64;
	}
	else
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_140062650((__int64)a1, (unsigned __int64*)aDynamicLibrari, 0x3Aui64);
		*(_DWORD*)(v4 + 8) = 4;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		*v3 = 0i64;
		return 1i64;
	}
}

