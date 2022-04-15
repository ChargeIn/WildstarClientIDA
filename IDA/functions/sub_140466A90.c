//----- (0000000140466A90) ----------------------------------------------------
__int64 __fastcall sub_140466A90(__int64 a1, int* a2)
{
	__int64 v2; // rax
	int v3; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v6; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v7)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v8; // [rsp+48h] [rbp-20h]
	__int64 v9; // [rsp+78h] [rbp+10h] BYREF

	v2 = *a2;
	if ((int)v2 < 197)
	{
		*(_DWORD*)(a1 + 8 * v2 + 1472) = a2[1];
		*(_DWORD*)(a1 + 8 * v2 + 1476) = a2[2];
		return 0i64;
	}
	else
	{
		*(_QWORD*)&v6 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v6 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v7 = TlsValue;
		v9 = 0x141E02448i64;
		v8 = v6;
		v3 = sub_1401971E0(&dword_140C8AC64, 5, &v9, &v7);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v6 + 1));
		if (v3)
			DebugBreak();
		return 2147500037i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8AC64: using guessed type _DWORD dword_140C8AC64;

