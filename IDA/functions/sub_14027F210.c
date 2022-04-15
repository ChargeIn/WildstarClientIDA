//----- (000000014027F210) ----------------------------------------------------
void __fastcall sub_14027F210(__int64 a1, __int64 a2, unsigned int a3)
{
	void(__fastcall * *v3)(__int64); // rax
	__int64 v6; // rsi
	int v7; // ebx
	__int64 v8; // rdx
	int v9; // ebp
	int v10; // r14d
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	int v14[4]; // [rsp+20h] [rbp-68h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-58h] BYREF
	__int128 v16; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v17)(); // [rsp+50h] [rbp-38h] BYREF
	__int128 v18; // [rsp+58h] [rbp-30h]
	__int64 v19; // [rsp+98h] [rbp+10h] BYREF

	v3 = *(void(__fastcall***)(__int64))a2;
	v6 = a3;
	v14[0] = -1;
	((void(__fastcall*)(__int64, int*))v3[4])(a2, v14);
	if ((unsigned int)v6 < *(_DWORD*)(a2 + 28))
	{
		v8 = *(_QWORD*)(a2 + 48);
		v9 = *(_DWORD*)(4 * v6 + *(_QWORD*)(v8 + 32));
		v10 = *(_DWORD*)(4 * v6 + *(_QWORD*)(v8 + 64));
		v11 = *(_QWORD*)(a1 + 8176);
		if (v11 != a2 || *(_DWORD*)(a1 + 8184) != v9)
			*(_DWORD*)(a1 + 7176) |= 0x20u;
		if (v11 != a2)
		{
			(**(void(__fastcall***)(__int64))a2)(a2);
			v12 = *(_QWORD*)(a1 + 8176);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			*(_QWORD*)(a1 + 8176) = a2;
		}
		v13 = *(_DWORD*)(a1 + 240);
		*(_DWORD*)(a1 + 8184) = v9;
		*(_DWORD*)(a1 + 8188) = v10;
		*(_DWORD*)(a1 + 0x2000) = v6;
		if (*(_DWORD*)(a2 + 92) != v13)
		{
			*(_DWORD*)(a2 + 92) = v13;
			_InterlockedIncrement((volatile signed __int32*)(a1 + 284));
			_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 288), *(_DWORD*)(a2 + 44));
		}
	}
	else
	{
		*(_QWORD*)&v16 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v16 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v17 = TlsValue;
		v19 = 0x141DE31E0i64;
		v18 = v16;
		v7 = sub_1401971E0(&dword_140C8A360, 14, &v19, &v17);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v16 + 1));
		if (v7)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A360: using guessed type _DWORD dword_140C8A360;
// 14027F210: using guessed type int var_68[4];

