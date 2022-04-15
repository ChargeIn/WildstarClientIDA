//----- (000000014034A990) ----------------------------------------------------
__int64 __fastcall sub_14034A990(__int64 a1)
{
	int* v1; // rbx
	int v3; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v5; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v6)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v7; // [rsp+48h] [rbp-20h]
	__int64 v8; // [rsp+70h] [rbp+8h] BYREF

	v1 = (int*)(a1 + 16);
	if (*(float*)(a1 + 16) == -1.0)
		sub_14088A680((_DWORD*)(a1 + 16));
	if ((unsigned int)sub_14088A720(v1) == 1)
		return 0i64;
	TlsValue = &off_140B5E648;
	*(_QWORD*)&v5 = 0i64;
	*((_QWORD*)&v5 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v6 = TlsValue;
	v8 = 0x141DEECC8i64;
	v7 = v5;
	v3 = sub_140196F30(&dword_140C8A658, 19, &v8, &v6);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v5 + 1));
	if (v3)
		DebugBreak();
	return 2147500037i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A658: using guessed type _DWORD dword_140C8A658;

