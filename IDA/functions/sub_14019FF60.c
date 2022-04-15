//----- (000000014019FF60) ----------------------------------------------------
signed int __fastcall sub_14019FF60(__int64 a1, BOOL a2, BOOL a3, _BYTE* a4, int a5)
{
	HANDLE EventW; // rax
	signed int result; // eax
	HANDLE v10; // rax
	WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

	if (a4)
	{
		sub_14019FD40(Name, 64i64, (__int64)L"Event", a4, a5);
		EventW = CreateEventW(0i64, a2, a3, Name);
		*(_QWORD*)(a1 + 16) = EventW;
		if (!EventW)
			goto LABEL_3;
		return GetLastError() == 183;
	}
	v10 = CreateEventW(0i64, a2, a3, 0i64);
	*(_QWORD*)(a1 + 16) = v10;
	if (v10)
		return 0;
LABEL_3:
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 140A44860: using guessed type wchar_t aEvent_0[6];

