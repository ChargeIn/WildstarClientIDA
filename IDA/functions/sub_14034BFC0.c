//----- (000000014034BFC0) ----------------------------------------------------
signed int __fastcall sub_14034BFC0(SYSTEMTIME* lpTime, int** a2)
{
	int DateFormatW; // eax
	__int64 v5; // rsi
	signed int result; // eax
	int TimeFormatW; // eax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	__int64 v10; // rax

	DateFormatW = GetDateFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, lpTime, 0i64, 0i64, 0);
	v5 = DateFormatW;
	if (DateFormatW && (TimeFormatW = GetTimeFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, lpTime, 0i64, 0i64, 0)) != 0)
	{
		if (v5 + TimeFormatW + 1i64 <= 0x7FFFFFFF)
		{
			v8 = *a2;
			v9 = (int)v5 + TimeFormatW + 1;
			v10 = sub_14018D140(*a2, v9);
			*(_WORD*)(v10 + 2 * v9) = 0;
			*a2 = (int*)v10;
			if (v8 != (int*)v10 && v8)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
			if (GetDateFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, lpTime, 0i64, (LPWSTR)*a2, *((_QWORD*)*a2 - 1))
				&& (*((_WORD*)*a2 + v5 - 1) = 32,
					GetTimeFormatW(
						*(_DWORD*)(qword_140C7AAC0 + 12),
						0,
						lpTime,
						0i64,
						(LPWSTR)*a2 + v5,
						*((_QWORD*)*a2 - 1) - v5)))
			{
				return 0;
			}
			else
			{
				result = GetLastError();
				if (result > 0)
					return (unsigned __int16)result | 0x80070000;
			}
		}
		else
		{
			return -2147024882;
		}
	}
	else
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

