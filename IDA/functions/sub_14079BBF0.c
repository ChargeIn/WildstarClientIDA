//----- (000000014079BBF0) ----------------------------------------------------
void __fastcall sub_14079BBF0(__int64 a1)
{
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v4; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v5)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v6; // [rsp+48h] [rbp-20h]
	__int64 v7; // [rsp+70h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 48) || *(_QWORD*)(a1 + 40))
	{
		*(_QWORD*)&v4 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v4 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = TlsValue;
		v7 = 0x141E4B700i64;
		v6 = v4;
		v2 = sub_140196F30(&dword_140C8B160, 110, &v7, &v5);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v4 + 1));
		if (v2)
			DebugBreak();
	}
	if (*(_QWORD*)(a1 + 48))
		sub_1401A4A00((const void***)(a1 + 48));
	if (*(_QWORD*)(a1 + 40))
		sub_1401A4A00((const void***)(a1 + 40));
	sub_140019490((_QWORD*)a1);
	sub_14018B900(*(_QWORD*)(a1 + 16), 0);
	*(_QWORD*)(a1 + 16) = 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B160: using guessed type _DWORD dword_140C8B160;

