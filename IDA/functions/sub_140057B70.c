//----- (0000000140057B70) ----------------------------------------------------
__int64 __fastcall sub_140057B70(__int64 a1, const char* a2, int a3)
{
	int* v6; // rax
	const char* v7; // rbp
	_DWORD* v8; // rax
	__int64 v9; // r9
	_QWORD* i; // rax
	__int64 v11; // rcx

	v6 = (int*)sub_1407DE1B0();
	v7 = sub_1407DDC5C(*v6);
	v8 = sub_1400580E0(a1, a3);
	if (v8[2] != 4)
	{
		if (!(unsigned int)sub_14005E620(a1, (__int64)v8))
		{
			v9 = 0i64;
			goto LABEL_8;
		}
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v8 = sub_1400580E0(a1, a3);
	}
	v9 = *(_QWORD*)v8 + 32i64;
LABEL_8:
	sub_140058780(a1, (unsigned __int64*)"cannot %s %s: %s", a2, (const char*)(v9 + 1), v7);
	for (i = (char*)sub_1400580E0(a1, a3) + 16;
		(unsigned __int64)i < *(_QWORD*)(a1 + 16);
		*((_DWORD*)i - 6) = *((_DWORD*)i - 2))
	{
		v11 = *i;
		i += 2;
		*(i - 4) = v11;
	}
	*(_QWORD*)(a1 + 16) -= 16i64;
	return 6i64;
}

