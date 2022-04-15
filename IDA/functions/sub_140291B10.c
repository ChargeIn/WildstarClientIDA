//----- (0000000140291B10) ----------------------------------------------------
__int64 __fastcall sub_140291B10(__int64* a1, const __m128i* a2)
{
	int v4; // ebx
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx
	unsigned int v9; // edi
	int v10; // eax
	__int64 v11; // rbx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v13; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v15; // [rsp+48h] [rbp-20h]
	__int64 v16; // [rsp+78h] [rbp+10h] BYREF

	if (!a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	if (*((_DWORD*)a1 + 13) == 1)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v13 = 0i64;
		*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = TlsValue;
		v16 = 0x141DE49A0i64;
		v15 = v13;
		v4 = sub_1401971E0(&dword_140C8A3FC, 14, &v16, &v14);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
		if (v4)
			DebugBreak();
		return 2147500037i64;
	}
	v6 = *a1;
	LODWORD(TlsValue) = -1;
	(*(void(__fastcall**)(__int64*, __int64(__fastcall***)()))(v6 + 32))(a1, &TlsValue);
	v7 = a1[13];
	if (!v7)
		return 2147500037i64;
	v8 = a1[2];
	v9 = 0;
	v16 = 0i64;
	v10 = sub_14026C2C0(v8, v7, &v16);
	v11 = v16;
	if (v10 < 0 || (v10 = sub_14029B740((__int64*)v16, a2), v10 < 0))
		v9 = v10;
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	return v9;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A3FC: using guessed type _DWORD dword_140C8A3FC;

