//----- (0000000140193580) ----------------------------------------------------
void sub_140193580()
{
	int v0; // ebx
	__int64 v1; // [rsp+20h] [rbp-48h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+28h] [rbp-40h] BYREF
	__int128 v3; // [rsp+30h] [rbp-38h]
	__int64(__fastcall * *v4)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v5; // [rsp+48h] [rbp-20h]

	*(_QWORD*)&v3 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v3 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v4 = TlsValue;
	v1 = 0x141D3DCC8i64;
	v5 = v3;
	v0 = sub_140197770(1, &v1, &v4);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v3 + 1));
	if (v0)
		DebugBreak();
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

