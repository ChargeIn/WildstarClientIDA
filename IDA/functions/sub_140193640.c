//----- (0000000140193640) ----------------------------------------------------
int sub_140193640()
{
	LPTOP_LEVEL_EXCEPTION_FILTER(__stdcall * SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER); // rax
	LPTOP_LEVEL_EXCEPTION_FILTER(__stdcall * v1)(LPTOP_LEVEL_EXCEPTION_FILTER); // rbx
	DWORD flOldProtect; // [rsp+30h] [rbp+8h] BYREF

	qword_140C67460 = 0i64;
	qword_140C67468 = 0i64;
	qword_140C67470 = 0i64;
	qword_140C67478 = 0i64;
	dwTlsIndex = TlsAlloc();
	sub_1407E0904(0, -1);
	::SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)TopLevelExceptionFilter);
	qword_140C636C0 = GetModuleHandleW(L"kernel32.dll");
	SetUnhandledExceptionFilter = (LPTOP_LEVEL_EXCEPTION_FILTER(__stdcall*)(LPTOP_LEVEL_EXCEPTION_FILTER))GetProcAddress(qword_140C636C0, "SetUnhandledExceptionFilter");
	v1 = SetUnhandledExceptionFilter;
	if (SetUnhandledExceptionFilter)
	{
		LODWORD(SetUnhandledExceptionFilter) = VirtualProtect(SetUnhandledExceptionFilter, 1ui64, 0x40u, &flOldProtect);
		if ((_DWORD)SetUnhandledExceptionFilter)
		{
			*(_BYTE*)v1 = -61;
			LODWORD(SetUnhandledExceptionFilter) = VirtualProtect(v1, 1ui64, flOldProtect, &flOldProtect);
		}
	}
	return (int)SetUnhandledExceptionFilter;
}
// 140C67460: using guessed type __int64 qword_140C67460;
// 140C67468: using guessed type __int64 qword_140C67468;
// 140C67470: using guessed type __int64 qword_140C67470;
// 140C67478: using guessed type __int64 qword_140C67478;

