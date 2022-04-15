//----- (00000001402979E0) ----------------------------------------------------
__int64 __fastcall sub_1402979E0(__int64* a1, _DWORD* a2, char a3)
{
	__int64 v3; // rax
	__int64 v7; // r9
	__int64 v9; // rcx
	int v10; // ebp
	void* v11; // xmm1_8
	volatile signed __int32* v12; // rcx
	int v13; // [rsp+20h] [rbp-68h] BYREF
	__int64 v14; // [rsp+28h] [rbp-60h]
	int v15[4]; // [rsp+30h] [rbp-58h] BYREF
	__int128 TlsValue; // [rsp+40h] [rbp-48h] BYREF
	__int128 v17; // [rsp+50h] [rbp-38h]
	__int128 v18; // [rsp+60h] [rbp-28h]
	__int128 v19; // [rsp+70h] [rbp-18h]

	v3 = *a1;
	v15[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(a1, v15);
	v7 = 0i64;
	if ((a3 & 3) == 0)
		return 0i64;
	v9 = a1[5];
	*((_DWORD*)a1 + 9) = 1;
	if ((a3 & 2) == 0)
		v7 = 16i64;
	v10 = (*(__int64(__fastcall**)(__int64, int*, _QWORD, __int64))(*(_QWORD*)v9 + 104i64))(v9, &v13, 0i64, v7);
	if (v10 >= 0)
	{
		v12 = (volatile signed __int32*)(a1[2] + 1012);
		if ((a3 & 1) != 0)
		{
			_InterlockedIncrement((volatile signed __int32*)(a1[2] + 1036));
			_InterlockedExchangeAdd(v12 + 7, *((_DWORD*)a1 + 14));
		}
		if ((a3 & 2) != 0)
		{
			_InterlockedIncrement(v12 + 8);
			_InterlockedExchangeAdd(v12 + 9, *((_DWORD*)a1 + 14));
		}
		*a2 = v13;
		return v14;
	}
	else
	{
		*(_QWORD*)&TlsValue = &off_140B5E648;
		*((_QWORD*)&TlsValue + 1) = L"Result";
		*(_QWORD*)&v17 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		*(_QWORD*)&TlsValue = &off_140B5E640;
		DWORD2(v17) = v10;
		v11 = (void*)v17;
		v18 = TlsValue;
		v19 = v17;
		sub_1400035B0();
		*(_QWORD*)&TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v11);
		return 0i64;
	}
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 1402979E0: using guessed type int var_58[4];

