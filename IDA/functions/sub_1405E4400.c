//----- (00000001405E4400) ----------------------------------------------------
__int64 __fastcall sub_1405E4400(__int64 a1, __int64 a2)
{
	int v4; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v7; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v8)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v9; // [rsp+48h] [rbp-20h]
	__int64 v10; // [rsp+70h] [rbp+8h] BYREF

	if (sub_140203520(*(_DWORD*)(a1 + 108)))
	{
		sub_1404BD280((unsigned int*)(a1 + 144), a2, 1);
		return 1i64;
	}
	else
	{
		*(_QWORD*)&v7 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v7 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v8 = TlsValue;
		v10 = 0x141E1D560i64;
		v9 = v7;
		v4 = sub_140196F30(&dword_140C8AFB8, 46, &v10, &v8);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v7 + 1));
		if (v4)
			DebugBreak();
		return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8AFB8: using guessed type _DWORD dword_140C8AFB8;

