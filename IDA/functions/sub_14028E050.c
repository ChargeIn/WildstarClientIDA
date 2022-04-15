//----- (000000014028E050) ----------------------------------------------------
void __fastcall sub_14028E050(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v5; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v6)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v7; // [rsp+48h] [rbp-20h]
	__int64 v8; // [rsp+70h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 120);
	if (v2)
	{
		if (*(char*)(a1 + 60) < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 128i64))(v2);
		}
		else
		{
			*(_QWORD*)&v5 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v5 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v6 = TlsValue;
			v8 = 0x141DE3FD0i64;
			v7 = v5;
			v3 = sub_1401971E0(&dword_140C8A3D4, 14, &v8, &v6);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v5 + 1));
			if (v3)
				DebugBreak();
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A3D4: using guessed type _DWORD dword_140C8A3D4;

