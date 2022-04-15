//----- (0000000140058540) ----------------------------------------------------
__int64 __fastcall sub_140058540(__int64 a1, int a2, _QWORD* a3)
{
	void* v6; // rax
	void* v7; // r10

	v6 = sub_1400580E0(a1, a2);
	v7 = v6;
	if (*((_DWORD*)v6 + 2) != 4)
	{
		if (!(unsigned int)sub_14005E620(a1, (__int64)v6))
		{
			if (a3)
				*a3 = 0i64;
			return 0i64;
		}
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v7 = sub_1400580E0(a1, a2);
	}
	if (a3)
		*a3 = *(_QWORD*)(*(_QWORD*)v7 + 16i64);
	return *(_QWORD*)v7 + 32i64;
}

