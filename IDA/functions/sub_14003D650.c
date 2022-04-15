//----- (000000014003D650) ----------------------------------------------------
void __fastcall sub_14003D650(__int64 a1, __int64* a2)
{
	__int64 v3; // rcx
	__int64* v4; // rdx
	int v5; // ebx
	_QWORD* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v11; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v12)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v13; // [rsp+48h] [rbp-20h]
	__int64 v14; // [rsp+70h] [rbp+8h] BYREF

	v3 = *a2;
	v4 = *(__int64**)(a1 + 8);
	if ((__int64*)v3 == v4)
	{
		*(_QWORD*)&v11 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v11 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = TlsValue;
		v14 = 0x141E4F6B0i64;
		v13 = v11;
		v5 = sub_1401971E0(dword_140C8A018, 1, &v14, &v12);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v11 + 1));
		if (v5)
			DebugBreak();
	}
	else
	{
		v6 = (_QWORD*)sub_140007DB0(v3, v4 + 1, v4 + 2, v4 + 3);
		v7 = v6[7];
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		v8 = v6[6];
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		v9 = v6[5];
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
		sub_14018B900((__int64)v6, 0);
		--* (_QWORD*)(a1 + 16);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A018: using guessed type _DWORD dword_140C8A018[2];

