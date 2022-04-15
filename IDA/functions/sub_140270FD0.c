//----- (0000000140270FD0) ----------------------------------------------------
void __fastcall sub_140270FD0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
	__int64 v6; // rsi
	_DWORD* v8; // r14
	int v9; // ebx
	__int64 v10; // rdx
	int v11; // eax
	void* v12; // rdx
	int v13; // ebx
	int v14; // eax
	__int64 v15; // rax
	__int64 v16; // r8
	int v17; // ebx
	int v18; // eax
	__int64 v19; // rax
	int v20; // ecx
	_DWORD* v21; // rdi
	int v22; // r9d
	int v23; // r9d
	int v24; // r9d
	int v25; // r9d
	_DWORD* v26; // rdi
	int v27; // eax
	int v28; // r9d
	int v29; // r9d
	int v30; // r9d
	__int64(__fastcall * *v31)(); // [rsp+20h] [rbp-E0h] BYREF
	__int128 v32; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-C8h] BYREF
	__int128 v34; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v35)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v36; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v37)(); // [rsp+68h] [rbp-98h] BYREF
	__int128 v38; // [rsp+70h] [rbp-90h]
	__int64 v39; // [rsp+80h] [rbp-80h] BYREF
	__int64 v40; // [rsp+88h] [rbp-78h] BYREF
	__int64 v41; // [rsp+90h] [rbp-70h] BYREF
	__int64(__fastcall * *v42)(); // [rsp+A0h] [rbp-60h] BYREF
	__int128 v43; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v44)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v45; // [rsp+C8h] [rbp-38h]
	__int64(__fastcall * *v46)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v47; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v48)(); // [rsp+100h] [rbp+0h] BYREF
	__int128 v49; // [rsp+108h] [rbp+8h]
	__int64 v50; // [rsp+160h] [rbp+60h] BYREF

	v6 = a2;
	if (!a3)
	{
		if (*(_QWORD*)(a1 + 8i64 * a2 + 10304))
		{
			*(_QWORD*)(a1 + 8i64 * a2 + 10304) = 0i64;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 520i64))(*(_QWORD*)(a1 + 6608), a2 + 257);
		}
		return;
	}
	v8 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	if (!v8[7])
	{
		*(_QWORD*)&v34 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v34 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v42 = TlsValue;
		v50 = 0x141DE1410i64;
		v43 = v34;
		v9 = sub_1401971E0(&dword_140C8A318, 14, &v50, &v42);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v34 + 1));
		if (v9)
			DebugBreak();
		return;
	}
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 48i64))(a3))
		return;
	v10 = 48i64 * (int)v8[7] + a1 + 724;
	if (!*v8)
	{
		if (!*(_QWORD*)(a3 + 120))
		{
			*(_QWORD*)&v36 = 0i64;
			v35 = &off_140B5E648;
			*((_QWORD*)&v36 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v35);
			v48 = v35;
			v41 = 0x141DE1390i64;
			v49 = v36;
			v11 = sub_1401971E0(&dword_140C8A300, 14, &v41, &v48);
			v12 = (void*)*((_QWORD*)&v36 + 1);
			v35 = &off_140B5E648;
		LABEL_23:
			v17 = v11;
			TlsSetValue(dwTlsIndex, v12);
			if (v17)
				DebugBreak();
			return;
		}
	LABEL_25:
		v18 = *(_DWORD*)(a1 + 240);
		if (*(_DWORD*)(a3 + 140) != v18)
		{
			*(_DWORD*)(a3 + 140) = v18;
			_InterlockedIncrement((volatile signed __int32*)(v10 + 40));
			_InterlockedExchangeAdd((volatile signed __int32*)(v10 + 44), *(_DWORD*)(a3 + 136));
		}
		v19 = 56 * (v6 + 170);
		if (*(_DWORD*)(v19 + a1) != a4)
		{
			*(_DWORD*)(v19 + a1) = a4;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)(v6 + 257),
				9i64,
				a4);
		}
		v16 = *(_QWORD*)(a3 + 120);
		goto LABEL_30;
	}
	if (*v8 != 1)
	{
		if (*v8 != 2)
		{
		LABEL_31:
			v20 = v8[9];
			if (((*(_BYTE*)(a1 + 4 * v6 + 10336) ^ (unsigned __int8)v20) & 0x3F) != 0)
			{
				*(_DWORD*)(a1 + 4 * v6 + 10336) = v20;
				v21 = (_DWORD*)(a1 + 56 * v6);
				v22 = dword_140AE7AF0[v8[9] & 3];
				if (v21[2372] != v22)
				{
					v21[2372] = v22;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)(v6 + 257),
						1i64);
				}
				v23 = dword_140AE7AF0[(v8[9] >> 2) & 3];
				if (v21[2373] != v23)
				{
					v21[2373] = v23;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)(v6 + 257),
						2i64);
				}
				v24 = dword_140AE7AF0[(v8[9] >> 4) & 3];
				if (v21[2374] != v24)
				{
					v21[2374] = v24;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)(v6 + 257),
						3i64);
				}
			}
			v25 = v8[10];
			v26 = (_DWORD*)(a1 + 56 * v6);
			if (v26[2375] != v25)
			{
				v26[2375] = v25;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
					*(_QWORD*)(a1 + 6608),
					(unsigned int)(v6 + 257),
					4i64);
			}
			v27 = v8[8];
			if (*(_DWORD*)(a1 + 4 * v6 + 10352) != v27)
			{
				*(_DWORD*)(a1 + 4 * v6 + 10352) = v27;
				v28 = dword_140AE7AD0[v8[8]];
				if (v26[2376] != v28)
				{
					v26[2376] = v28;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)(v6 + 257),
						5i64);
				}
				v29 = dword_140AE7928[v8[8]];
				if (v26[2377] != v29)
				{
					v26[2377] = v29;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)(v6 + 257),
						6i64);
				}
				v30 = dword_140AE7948[v8[8]];
				if (v26[2378] != v30)
				{
					v26[2378] = v30;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)(v6 + 257),
						7i64);
				}
			}
			return;
		}
		if (!*(_QWORD*)(a3 + 120))
		{
			*(_QWORD*)&v38 = 0i64;
			v37 = &off_140B5E648;
			*((_QWORD*)&v38 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v37);
			v46 = v37;
			v39 = 0x141DE1A60i64;
			v47 = v38;
			v11 = sub_1401971E0(&dword_140C8A308, 14, &v39, &v46);
			v12 = (void*)*((_QWORD*)&v38 + 1);
			v37 = &off_140B5E648;
			goto LABEL_23;
		}
		goto LABEL_25;
	}
	if (*(_QWORD*)(a3 + 104))
	{
		v14 = *(_DWORD*)(a1 + 240);
		if (*(_DWORD*)(a3 + 132) != v14)
		{
			*(_DWORD*)(a3 + 132) = v14;
			_InterlockedIncrement((volatile signed __int32*)(v10 + 40));
			_InterlockedExchangeAdd((volatile signed __int32*)(v10 + 44), *(_DWORD*)(a3 + 128));
		}
		v15 = 56 * (v6 + 170);
		if (*(_DWORD*)(v15 + a1) != a4)
		{
			*(_DWORD*)(v15 + a1) = a4;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)(v6 + 257),
				9i64,
				a4);
		}
		v16 = *(_QWORD*)(a3 + 104);
	LABEL_30:
		if (!(unsigned int)sub_14026C190(a1, v6, v16))
			return;
		goto LABEL_31;
	}
	*(_QWORD*)&v32 = 0i64;
	v31 = &off_140B5E648;
	*((_QWORD*)&v32 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v31);
	v44 = v31;
	v40 = 0x141DE1310i64;
	v45 = v32;
	v13 = sub_1401971E0(&dword_140C8A304, 14, &v40, &v44);
	v31 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v32 + 1));
	if (v13)
		DebugBreak();
}
// 140AE7928: using guessed type int dword_140AE7928[8];
// 140AE7948: using guessed type int dword_140AE7948[8];
// 140AE7AD0: using guessed type int dword_140AE7AD0[8];
// 140AE7AF0: using guessed type int dword_140AE7AF0[4];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A300: using guessed type _DWORD dword_140C8A300;
// 140C8A304: using guessed type _DWORD dword_140C8A304;
// 140C8A308: using guessed type _DWORD dword_140C8A308;
// 140C8A318: using guessed type _DWORD dword_140C8A318;

