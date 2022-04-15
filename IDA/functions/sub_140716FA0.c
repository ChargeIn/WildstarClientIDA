//----- (0000000140716FA0) ----------------------------------------------------
__int64 __fastcall sub_140716FA0(__int64 a1, int a2, int** a3)
{
	__int64 v3; // rdi
	int v5; // ebx
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	__int64* v9; // rbx
	__int64 v10; // rsi
	int* v11; // rax
	int* v12; // rbx
	int v13; // esi
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-58h] BYREF
	__int128 v15; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v16)(); // [rsp+40h] [rbp-38h] BYREF
	__int128 v17; // [rsp+48h] [rbp-30h]
	__int64 v18; // [rsp+80h] [rbp+8h] BYREF
	int v19; // [rsp+88h] [rbp+10h] BYREF

	v19 = a2;
	v18 = a1;
	v3 = qword_140C665D0;
	if (!a3)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v15 = 0i64;
		*((_QWORD*)&v15 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16 = TlsValue;
		v18 = 0x141E40320i64;
		v17 = v15;
		v5 = sub_140196F30(&dword_140C8B108, 40, &v18, &v16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v15 + 1));
		if (v5)
			DebugBreak();
		return 2147500037i64;
	}
	v7 = (*(__int64(__fastcall**)(int*))(qword_140C665D0 + 32))(&v19);
	v8 = *(_QWORD**)(*(_QWORD*)(v3 + 24) + 8 * (v7 % *(_QWORD*)(v3 + 16)));
	if (!v8)
		return 2147500037i64;
	while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 40))(&v19, v8 + 2))
	{
		v8 = (_QWORD*)v8[1];
		if (!v8)
			return 2147500037i64;
	}
	v9 = v8 + 3;
	if (!v9)
		return 2147500037i64;
	v10 = *v9;
	v11 = sub_14018B280(40i64, 0);
	v12 = v11;
	if (v11)
	{
		*(_QWORD*)v11 = off_140B77DA0;
		v11[2] = 1;
		*((_QWORD*)v11 + 2) = 0i64;
		*((_QWORD*)v11 + 3) = 0i64;
		*((_QWORD*)v11 + 4) = 0i64;
	}
	else
	{
		v12 = 0i64;
	}
	v13 = (*(__int64(__fastcall**)(int*, __int64))(*(_QWORD*)v12 + 56i64))(v12, v10);
	if (v13 >= 0)
	{
		*a3 = v12;
		return 0i64;
	}
	else
	{
		*(_QWORD*)v12 = off_140B77DA0;
		*((_QWORD*)v12 + 2) = 0i64;
		sub_14018B900((__int64)v12, 0);
		return (unsigned int)v13;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B77DA0: using guessed type __int64 (__fastcall *off_140B77DA0[9])();
// 140C665D0: using guessed type __int64 qword_140C665D0;
// 140C8B108: using guessed type _DWORD dword_140C8B108;

