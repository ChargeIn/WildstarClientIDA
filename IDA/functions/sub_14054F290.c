//----- (000000014054F290) ----------------------------------------------------
__int64 __fastcall sub_14054F290(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax
	__int64 i; // rdi
	unsigned int v6; // esi
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx

	v3 = sub_14022AA80(a2);
	*(_QWORD*)(a1 + 8) = v3;
	if (!v3)
		return 2147500037i64;
	sub_1407E4830((int*)(a1 + 24), 0i64, 0x30ui64);
	*(_DWORD*)(a1 + 152) = -1;
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)a1 = 0i64;
	for (i = 120i64; i < 144; i += 4i64)
	{
		v6 = *(_DWORD*)(i + *(_QWORD*)(a1 + 8));
		if (!v6)
			continue;
		if (qword_140C63840)
		{
			v7 = qword_140C63840(off_140A6C900, v6, qword_140C63858);
		}
		else
		{
			if (dword_140C64F4C || (int)sub_14022CE60() < 0)
				continue;
			v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652A0 + 24i64))(qword_140C652A0, v6);
		}
		if (v7)
		{
			*(_QWORD*)(a1 + 8i64 * *(unsigned int*)(a1 + 16) + 24) = v7;
			if (*(_DWORD*)(v7 + 4) == 31)
				*(_DWORD*)(a1 + 152) = *(_DWORD*)(a1 + 16);
			++* (_DWORD*)(a1 + 16);
		}
	}
	v8 = *(_QWORD*)(qword_140C65920 + 8);
	if (v8)
	{
		do
		{
			v9 = *(_QWORD*)(v8 + 32);
			if (*(_DWORD*)(v8 + 56) == 1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			v8 = v9;
		} while (v9);
	}
	return 0i64;
}
// 140A6C900: using guessed type wchar_t *off_140A6C900[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64F4C: using guessed type int dword_140C64F4C;
// 140C652A0: using guessed type __int64 qword_140C652A0;
// 140C65920: using guessed type __int64 qword_140C65920;

