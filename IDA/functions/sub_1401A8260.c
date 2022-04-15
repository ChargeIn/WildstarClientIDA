//----- (00000001401A8260) ----------------------------------------------------
unsigned __int16 __fastcall sub_1401A8260(__int64 a1)
{
	__int64 i; // rdx
	unsigned __int16 result; // ax
	_QWORD* v4; // rax
	__int64 v5; // rdx
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	for (i = *(_QWORD*)(a1 + 112); ; i += 2i64)
	{
		if (*(_WORD*)i != 32)
		{
			result = *(_WORD*)i - 9;
			if (result > 4u)
				break;
		}
	}
	*(_BYTE*)(a1 + 88) = 0;
	if (*(_BYTE*)i == 0xEF && *(_BYTE*)(i + 1) == 0xBB && *(_BYTE*)(i + 2) == 0xBF)
	{
		*(_BYTE*)(a1 + 88) = 1;
		i += 6i64;
	}
	if (*(_WORD*)i)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 128i64))(a1, i, 0i64);
	if (*(int*)(a1 + 92) >= 0)
	{
		*(_DWORD*)(a1 + 92) = -1603862513;
		v4 = sub_14018D540(&v6, (__int64)L"%0.8x", 2691104783i64);
		v5 = *(_QWORD*)(a1 + 104);
		*(_QWORD*)(a1 + 104) = *v4;
		*v4 = v5;
		result = v6;
		if (v6)
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	}
	return result;
}
// 140A45318: using guessed type wchar_t a08x_2[6];

