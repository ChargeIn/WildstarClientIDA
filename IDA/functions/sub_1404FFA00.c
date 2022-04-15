//----- (00000001404FFA00) ----------------------------------------------------
void __fastcall sub_1404FFA00(__int64 a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned int v5; // r14d
	int v6; // r15d
	float v7; // xmm1_4
	unsigned int v8; // r12d
	unsigned int v9; // r13d
	int v10; // ebx
	int v11; // ebx
	int v12; // ebx
	int v13; // ebx
	__int64 v14; // [rsp+28h] [rbp-79h]
	__int64(__fastcall * *TlsValue)(); // [rsp+58h] [rbp-49h] BYREF
	__int64 v16; // [rsp+60h] [rbp-41h]
	LPVOID Value; // [rsp+68h] [rbp-39h]
	__int64(__fastcall * *v18)(); // [rsp+78h] [rbp-29h] BYREF
	__int64 v19; // [rsp+80h] [rbp-21h]
	LPVOID v20; // [rsp+88h] [rbp-19h]
	__int128 v21; // [rsp+98h] [rbp-9h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A8h] [rbp+7h]
	__int128 v23; // [rsp+B8h] [rbp+17h] BYREF
	__int128 v24; // [rsp+C8h] [rbp+27h]
	__int64 v25; // [rsp+108h] [rbp+67h] BYREF

	if ((*(_BYTE*)(a1 + 28) & 1) != 0)
	{
		v2 = (_QWORD*)(a1 + 2128);
		v3 = *(_QWORD*)(a1 + 2128);
		if (v3)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 8i64))(v3, 0i64);
			*v2 = 0i64;
		}
		v4 = *(_QWORD*)(a1 + 2144);
		if (v4)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 8i64))(v4, 0i64);
			*(_QWORD*)(a1 + 2144) = 0i64;
		}
		v5 = *(_DWORD*)(a1 + 1064);
		v6 = *(_DWORD*)(a1 + 1068);
		v7 = *(float*)(a1 + 1056);
		if (v5 - 1 > 0x1FFF)
			v5 = 1;
		if ((unsigned int)(v6 - 1) > 0x1FFF)
			v6 = 1;
		v8 = (int)(float)((float)(int)v5 * v7);
		if (v8 - 1 > 0x1FFF)
			v8 = 1;
		v9 = (int)(float)((float)v6 * v7);
		if (v9 - 1 > 0x1FFF)
			v9 = 1;
		v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v8,
			v9,
			1i64,
			0,
			5,
			1,
			256,
			0,
			v2);
		if (v10 < 0)
		{
			TlsValue = &off_140B5E648;
			v16 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v18 = TlsValue;
			v19 = v16;
			*(_QWORD*)&v21 = &off_140B5E648;
			v20 = Value;
			*((_QWORD*)&v21 + 1) = L"Result";
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v21);
			LODWORD(lpTlsValue[1]) = v10;
			*(_QWORD*)&v21 = &off_140B5E640;
			v24 = *(_OWORD*)lpTlsValue;
			v25 = 0x141E09A00i64;
			v23 = v21;
			v11 = sub_140197770(13, &v25, v8, v9, &v23, &v18);
			*(_QWORD*)&v21 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v11)
				DebugBreak();
		}
		v12 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v5,
			(unsigned int)v6,
			1i64,
			0,
			3,
			1,
			256,
			0,
			a1 + 2144);
		if (v12 < 0)
		{
			TlsValue = &off_140B5E648;
			v16 = 0i64;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v18 = TlsValue;
			v19 = v16;
			*(_QWORD*)&v21 = &off_140B5E648;
			*((_QWORD*)&v21 + 1) = L"Result";
			v20 = Value;
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v21);
			*(_QWORD*)&v21 = &off_140B5E640;
			LODWORD(lpTlsValue[1]) = v12;
			v25 = 0x141E09C40i64;
			v23 = v21;
			v24 = *(_OWORD*)lpTlsValue;
			LODWORD(v14) = v6;
			v13 = sub_1401971E0(&dword_140C8AD58, 13, &v25, v5, v14, &v23, &v18);
			*(_QWORD*)&v21 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue[0]);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if (v13)
				DebugBreak();
		}
		*(_DWORD*)(a1 + 1040) = 1;
	}
}
// 1404FFD56: variable 'v14' is possibly undefined
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8AD58: using guessed type _DWORD dword_140C8AD58;

