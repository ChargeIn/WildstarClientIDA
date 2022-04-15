//----- (000000014034A550) ----------------------------------------------------
__int64 __fastcall sub_14034A550(__int64 a1)
{
	_QWORD* v3; // rax
	int v4; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v6; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v7)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v8; // [rsp+48h] [rbp-20h]
	__int64 v9; // [rsp+70h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 16))
		return 0i64;
	v3 = sub_1408828C0((unsigned int*)(a1 + 24));
	*(_QWORD*)(a1 + 16) = v3;
	if (v3)
		return 0i64;
	TlsValue = &off_140B5E648;
	*(_QWORD*)&v6 = 0i64;
	*((_QWORD*)&v6 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v7 = TlsValue;
	v9 = 0x141DEECA8i64;
	v8 = v6;
	v4 = sub_140196F30(&dword_140C8A66C, 19, &v9, &v7);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v6 + 1));
	if (v4)
		DebugBreak();
	return 2147500037i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A66C: using guessed type _DWORD dword_140C8A66C;

