//----- (000000014018A2B0) ----------------------------------------------------
void __noreturn sub_14018A2B0()
{
	int v0; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v2; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v3)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v4; // [rsp+48h] [rbp-20h]
	__int64 v5; // [rsp+70h] [rbp+8h] BYREF

	*(_QWORD*)&v2 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v2 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v3 = TlsValue;
	v5 = 0x141D3A638i64;
	v4 = v2;
	v0 = sub_140197490(2, &v5, &v3);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v2 + 1));
	if (v0)
		DebugBreak();
	ExitProcess(1u);
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

