//----- (000000014018CF50) ----------------------------------------------------
signed int __fastcall sub_14018CF50(SYSTEMTIME* lpTime, __int64 a2)
{
	int DateFormatW; // eax
	__int64 cchDate; // rdi
	signed int result; // eax
	int TimeFormatW; // eax
	int v8; // esi

	DateFormatW = GetDateFormatW(0x400u, 0, lpTime, 0i64, 0i64, 0);
	cchDate = DateFormatW;
	if (DateFormatW)
	{
		TimeFormatW = GetTimeFormatW(0x400u, 0, lpTime, 0i64, 0i64, 0);
		v8 = TimeFormatW;
		if (TimeFormatW)
		{
			sub_14018D060(a2, (int)cchDate + TimeFormatW);
			if (GetDateFormatW(0x400u, 0, lpTime, 0i64, *(LPWSTR*)(a2 + 8), cchDate))
			{
				*(_WORD*)(*(_QWORD*)(a2 + 8) + 2i64 * ((int)cchDate - 1)) = 32;
				if (GetTimeFormatW(0x400u, 0, lpTime, 0i64, (LPWSTR)(*(_QWORD*)(a2 + 8) + 2 * cchDate), v8))
					return 0;
			}
		}
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

