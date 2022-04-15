//----- (000000014034A460) ----------------------------------------------------
__int64 __fastcall sub_14034A460(__int64 a1)
{
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v4; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v5)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v6; // [rsp+48h] [rbp-20h]
	__int64 v7; // [rsp+70h] [rbp+8h] BYREF

	if ((unsigned int)sub_140881E90((int*)(a1 + 16)) == 1)
		return 0i64;
	*(_QWORD*)&v4 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v4 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v5 = TlsValue;
	v7 = 0x141DEEC48i64;
	v6 = v4;
	v2 = sub_140196F30(&dword_140C8A668, 19, &v7, &v5);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v4 + 1));
	if (v2)
		DebugBreak();
	return 2147500037i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A668: using guessed type _DWORD dword_140C8A668;

