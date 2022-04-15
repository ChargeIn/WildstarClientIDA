//----- (000000014027CC60) ----------------------------------------------------
__int64 __fastcall sub_14027CC60(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
	__int64 v9; // rdi
	int v10; // r12d
	void* v11; // xmm1_8
	int v12; // eax
	int v13; // ecx
	int v14; // eax
	int v15; // ebx
	__int64 v16; // [rsp+30h] [rbp-59h] BYREF
	__int64(__fastcall * *v17)(); // [rsp+38h] [rbp-51h] BYREF
	__int128 v18; // [rsp+40h] [rbp-49h]
	__int128 TlsValue; // [rsp+50h] [rbp-39h] BYREF
	__int128 v20; // [rsp+60h] [rbp-29h]
	__int64 v21; // [rsp+70h] [rbp-19h] BYREF
	__int64 v22; // [rsp+78h] [rbp-11h] BYREF
	__int64(__fastcall * *v23)(); // [rsp+80h] [rbp-9h] BYREF
	__int128 v24; // [rsp+88h] [rbp-1h]
	__int64 v25; // [rsp+A0h] [rbp+17h] BYREF
	__int128 v26; // [rsp+B0h] [rbp+27h]
	__int128 v27; // [rsp+C0h] [rbp+37h]

	if (!a2 || a2 > *(_DWORD*)(a1 + 8136))
		return 0i64;
	if (a4 < 0x10 && *(_DWORD*)(a1 + 4 * (a4 + 54i64 * a3) + 1188))
	{
		sub_14003D8F0(&v22, a1 + 24);
		v9 = 0i64;
		if (a2 + *(_DWORD*)(a1 + 8132) > *(_DWORD*)(a1 + 8136) || *(_DWORD*)(a1 + 8140) != *(_DWORD*)(a1 + 240))
			*(_DWORD*)(a1 + 8132) = 0;
		sub_14003D8F0(&v16, a1 + 6368);
		v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 6352)
			+ 112i64))(
				*(_QWORD*)(a1 + 6352),
				*(_QWORD*)(a1 + 8112),
				0i64,
				(unsigned int)(*(_DWORD*)(a1 + 8132) != 0) + 4,
				0,
				&v25);
		if (v10 >= 0)
		{
			sub_14003D880(&v16);
			v12 = *(_DWORD*)(a1 + 8132);
			v13 = v12 + a2 + 3;
			*(_DWORD*)(a1 + 8128) = v12;
			v14 = *(_DWORD*)(a1 + 240);
			*(_DWORD*)(a1 + 8120) = a3;
			*(_DWORD*)(a1 + 8124) = a4;
			*(_DWORD*)(a1 + 8140) = v14;
			*(_DWORD*)(a1 + 8132) = v13 & 0xFFFFFFFC;
			_InterlockedIncrement((volatile signed __int32*)(a1 + 516));
			_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 520), a2);
			_InterlockedIncrement((volatile signed __int32*)(a1 + 524));
			_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 528), a2);
			v9 = v25 + *(unsigned int*)(a1 + 8128);
		}
		else
		{
			*(_QWORD*)&TlsValue = &off_140B5E648;
			*((_QWORD*)&TlsValue + 1) = L"Result";
			*(_QWORD*)&v20 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			*(_QWORD*)&TlsValue = &off_140B5E640;
			DWORD2(v20) = v10;
			v11 = (void*)v20;
			v26 = TlsValue;
			v27 = v20;
			sub_1400035B0();
			*(_QWORD*)&TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v11);
			sub_14003D880(&v16);
		}
		sub_14003D880(&v22);
		return v9;
	}
	else
	{
		v17 = &off_140B5E648;
		*(_QWORD*)&v18 = 0i64;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v17);
		v23 = v17;
		v21 = 0x141DE2C30i64;
		v24 = v18;
		v15 = sub_1401971E0(&dword_140C8A39C, 14, &v21, &v23);
		v17 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v15)
			DebugBreak();
		return 0i64;
	}
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A39C: using guessed type _DWORD dword_140C8A39C;

