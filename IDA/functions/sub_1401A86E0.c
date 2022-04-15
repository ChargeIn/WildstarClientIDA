//----- (00000001401A86E0) ----------------------------------------------------
__int64 __fastcall sub_1401A86E0(__int64 a1, __int64 a2, char a3)
{
	__int64 result; // rax

	if (*(_BYTE*)(a1 + 8))
	{
		*(_BYTE*)(a1 + 8) = 0;
		sub_1401A8480(a1, (__int64)&unk_1409E2504);
	}
	sub_1401A8D00(a1 + 16, *(_DWORD*)(a1 + 108) + 1);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * (int)(*(_DWORD*)(a1 + 108))++) = a2;
	if (*(int*)(a1 + 132) >= 0 || *(_BYTE*)(a1 + 112))
	{
		if (!a3)
			goto LABEL_8;
	}
	else if (!a3)
	{
		sub_1401A8480(a1, (__int64)&unk_1409E24B4);
	LABEL_8:
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 88i64))(a1, *(unsigned int*)(a1 + 128));
	}
	result = sub_1401A8480(a1, (__int64)L"<%s", a2);
	++* (_DWORD*)(a1 + 128);
	*(_BYTE*)(a1 + 8) = 1;
	*(_BYTE*)(a1 + 112) = 0;
	return result;
}
// 140A45378: using guessed type wchar_t aS_16[4];

