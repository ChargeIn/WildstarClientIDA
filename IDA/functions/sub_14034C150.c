//----- (000000014034C150) ----------------------------------------------------
signed int __fastcall sub_14034C150(SYSTEMTIME* lpTime, int** a2)
{
	int TimeFormatW; // eax
	signed int result; // eax
	__int64 v6; // rbx
	int* v7; // rdi
	__int64 v8; // rax

	TimeFormatW = GetTimeFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, lpTime, 0i64, 0i64, 0);
	if (TimeFormatW)
	{
		v6 = TimeFormatW;
		v7 = *a2;
		v8 = sub_14018D140(*a2, TimeFormatW);
		*(_WORD*)(v8 + 2 * v6) = 0;
		*a2 = (int*)v8;
		if (v7 != (int*)v8 && v7)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
		if (GetTimeFormatW(*(_DWORD*)(qword_140C7AAC0 + 12), 0, lpTime, 0i64, (LPWSTR)*a2, *((_QWORD*)*a2 - 1)))
			return 0;
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

