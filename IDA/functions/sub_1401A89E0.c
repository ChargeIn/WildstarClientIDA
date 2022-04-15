//----- (00000001401A89E0) ----------------------------------------------------
__int64 __fastcall sub_1401A89E0(__int64 a1, __int64 a2)
{
	if (*(_BYTE*)(a1 + 8))
	{
		*(_BYTE*)(a1 + 8) = 0;
		sub_1401A8480(a1, (__int64)&unk_1409E2504);
	}
	if (*(int*)(a1 + 132) < 0 && !*(_BYTE*)(a1 + 112) && !*(_BYTE*)(a1 + 137))
	{
		sub_1401A8480(a1, (__int64)&unk_1409E25D4);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 88i64))(a1, *(unsigned int*)(a1 + 128));
	}
	*(_BYTE*)(a1 + 112) = 0;
	return sub_1401A8480(a1, (__int64)L"<!%s>", a2);
}
// 140A453F0: using guessed type wchar_t aS_20[6];

