//----- (0000000140472CD0) ----------------------------------------------------
__int64 __fastcall sub_140472CD0(__int64 a1)
{
	__int64 v3; // rbx
	__int64 v4; // rdx
	unsigned int v5; // r8d
	unsigned int v6; // ecx
	unsigned int v7; // edi

	if (!a1 || !*(_DWORD*)(a1 + 36))
		return 0i64;
	v3 = 0i64;
	v4 = a1 + 20;
	v5 = 1;
	v6 = 0;
	do
	{
		if (!*(_DWORD*)(v4 + 20))
			break;
		if (*(float*)(a1 + 4i64 * v6 + 16) < *(float*)v4)
			v6 = v5;
		++v5;
		v4 += 4i64;
	} while (v5 < 4);
	v7 = *(_DWORD*)(a1 + 4i64 * v6 + 36);
	if (qword_140C63840)
		return qword_140C63840(off_140A6B6D8, v7, qword_140C63858);
	if (dword_140C64210 || (int)sub_140216DA0() < 0)
		return v3;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FA8 + 24i64))(qword_140C64FA8, v7);
}
// 140A6B6D8: using guessed type wchar_t *off_140A6B6D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64210: using guessed type int dword_140C64210;
// 140C64FA8: using guessed type __int64 qword_140C64FA8;

