//----- (0000000140517890) ----------------------------------------------------
char __fastcall sub_140517890(__int64 a1)
{
	int v1; // edi
	int v3; // eax
	__int64 v5; // [rsp+20h] [rbp-38h]

	v1 = 0;
	if (!*(_QWORD*)(a1 + 152))
	{
		v3 = sub_14062A4C0(
			(_DWORD*)(qword_140C65898 + 27592),
			*(_WORD**)(a1 + 24),
			*(_QWORD*)(a1 + 56),
			*(_QWORD*)(a1 + 88),
			*(_QWORD*)(a1 + 120),
			*(_DWORD*)(a1 + 160),
			*(_QWORD*)(a1 + 168));
		goto LABEL_5;
	}
	if ((unsigned int)sub_1406B4CF0())
	{
		v3 = sub_14062A5F0(
			qword_140C65898 + 27592,
			*(unsigned __int16**)(a1 + 24),
			*(_QWORD*)(a1 + 56),
			*(_QWORD*)(a1 + 88),
			*(_QWORD*)(a1 + 120),
			*(_DWORD*)(a1 + 160),
			*(_QWORD*)(a1 + 176),
			*(_QWORD*)(a1 + 168),
			(_QWORD*)(a1 + 144));
	LABEL_5:
		LOBYTE(v1) = v3 >= 0;
	}
	LODWORD(v5) = v1;
	return sub_1400D4040(*(_QWORD*)(a1 + 8), "EmailSent", *(char**)(a1 + 8), L"b", v5);
}
// 14051796A: variable 'v5' is possibly undefined
// 140B6B934: using guessed type wchar_t aB_1[2];
// 140C65898: using guessed type __int64 qword_140C65898;

