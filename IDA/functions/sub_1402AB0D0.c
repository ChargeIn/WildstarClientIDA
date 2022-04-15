//----- (00000001402AB0D0) ----------------------------------------------------
void __fastcall sub_1402AB0D0(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v3; // rax
	int v4; // esi
	_QWORD* v5; // rdi
	__int64 v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // r9
	__int64 v9; // rbx
	int CurrentThreadId; // edx
	__int64 v11; // rcx
	HANDLE EventW; // rcx
	__int64* v13; // rsi
	__int64 v14; // rax
	_DWORD* v15; // r8
	int v16; // ecx
	unsigned int v17; // eax
	unsigned int v18; // r9d
	unsigned int v19; // r9d
	unsigned int v20; // eax
	int* v21; // rcx
	HANDLE v22; // rcx
	__int64 v23; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v25; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v27)(); // [rsp+58h] [rbp-A8h] BYREF
	const wchar_t* v28; // [rsp+60h] [rbp-A0h]
	LPVOID lpTlsValue; // [rsp+68h] [rbp-98h]
	__int64 v30; // [rsp+70h] [rbp-90h]
	unsigned int v31[4]; // [rsp+78h] [rbp-88h] BYREF
	unsigned int v32[4]; // [rsp+88h] [rbp-78h] BYREF
	int v33[2]; // [rsp+98h] [rbp-68h] BYREF
	__int64 v34; // [rsp+A0h] [rbp-60h]
	__int128 v35; // [rsp+A8h] [rbp-58h] BYREF
	LPVOID v36[2]; // [rsp+B8h] [rbp-48h]
	int v37[3]; // [rsp+C8h] [rbp-38h] BYREF
	int v38; // [rsp+D4h] [rbp-2Ch]
	int* v39; // [rsp+D8h] [rbp-28h] BYREF
	unsigned int v40; // [rsp+E0h] [rbp-20h]
	__int64 v41[4]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v42[4]; // [rsp+110h] [rbp+10h] BYREF
	int v43[4]; // [rsp+130h] [rbp+30h] BYREF
	int v44[4]; // [rsp+140h] [rbp+40h] BYREF
	int v45[4]; // [rsp+150h] [rbp+50h] BYREF
	__int128 v46[2]; // [rsp+160h] [rbp+60h] BYREF
	__int64 v47; // [rsp+1B0h] [rbp+B0h] BYREF

	v1 = *(__int64**)(a1 + 40);
	v3 = *v1;
	v44[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(v1, v44);
	v4 = *((_DWORD*)v1 + 12);
	if (v4 < 0)
	{
	LABEL_4:
		v25 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v41[0] = (__int64)TlsValue;
		v41[1] = v25;
		*(_QWORD*)&v35 = &off_140B5E648;
		*((_QWORD*)&v35 + 1) = L"Result";
		v41[2] = (__int64)Value;
		v36[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v35);
		v7 = *(_QWORD*)(a1 + 24);
		LODWORD(v36[1]) = v4;
		v27 = &off_140B5E648;
		*(_QWORD*)&v35 = &off_140B5E640;
		v46[1] = *(_OWORD*)v36;
		v28 = L"FileName";
		v46[0] = v35;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v27);
		v8 = *(_QWORD*)(a1 + 24);
		v42[1] = (__int64)v28;
		v27 = &off_140B5E638;
		v30 = v7;
		v47 = 0x141DE6CF8i64;
		v42[0] = (__int64)&off_140B5E638;
		v42[3] = v7;
		v42[2] = (__int64)lpTlsValue;
		LODWORD(v7) = sub_1401971E0(&dword_140C8A52C, 14, &v47, v8, v42, v46, v41);
		v27 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v35 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v36[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v7)
			DebugBreak();
		*(_DWORD*)(a1 + 128) = v4;
		return;
	}
	v5 = *(_QWORD**)(a1 + 40);
	v43[0] = -1;
	(*(void(__fastcall**)(_QWORD*, int*))(*v5 + 32i64))(v5, v43);
	v6 = v5[8];
	if (!v6)
	{
		v4 = -2147467259;
		goto LABEL_4;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	v9 = *(_QWORD*)(a1 + 16) + 6368i64;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v9 == CurrentThreadId)
	{
		++* (_QWORD*)(v9 + 8);
	}
	else
	{
		v11 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60(v9, CurrentThreadId);
				goto LABEL_14;
			}
		}
		*(_DWORD*)v9 = CurrentThreadId;
	}
LABEL_14:
	v4 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _DWORD, int**))(**(_QWORD**)(*(_QWORD*)(a1 + 16)
		+ 6352i64)
		+ 112i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
			v6,
			0i64,
			1i64,
			0,
			&v39);
	if (v4 < 0)
	{
		if (*(_QWORD*)(v9 + 8) <= 1ui64)
		{
			*(_DWORD*)v9 = 0;
			_InterlockedExchange64((volatile __int64*)(v9 + 8), 0i64);
			if (*(_QWORD*)(v9 + 16))
			{
				if (!*(_QWORD*)(v9 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v9 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v9 + 8);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		goto LABEL_4;
	}
	v13 = *(__int64**)(a1 + 40);
	v14 = *v13;
	v33[0] = 32;
	v33[1] = 32;
	v34 = 1i64;
	v31[0] = 128;
	v31[1] = 4096;
	v31[2] = 4096;
	v45[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v14 + 32))(v13, v45);
	v38 = *((_DWORD*)v13 + 22);
	v32[0] = v40;
	v15 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v38);
	v37[0] = 32;
	v37[1] = 32;
	v16 = v15[5];
	v17 = v15[7] + 1;
	v18 = v15[4] + 32;
	v37[2] = 1;
	v19 = v18 >> v16;
	v20 = v17 >> v15[8];
	v21 = *(int**)(a1 + 64);
	v32[1] = v40 * v19;
	v32[2] = v40 * v19 * v20;
	sub_1402645D0(v21, v33, v31, v39, v37, v32);
	(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 120i64))(
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
		v6,
		0i64);
	if (*(_QWORD*)(v9 + 8) <= 1ui64)
	{
		*(_DWORD*)v9 = 0;
		_InterlockedExchange64((volatile __int64*)(v9 + 8), 0i64);
		if (*(_QWORD*)(v9 + 16))
		{
			if (!*(_QWORD*)(v9 + 24))
			{
				v22 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 24), (signed __int64)v22, 0i64))
					CloseHandle(v22);
			}
			SetEvent(*(HANDLE*)(v9 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v9 + 8);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	v23 = *(_QWORD*)(a1 + 16);
	_InterlockedIncrement((volatile signed __int32*)(v23 + 1044));
	_InterlockedExchangeAdd((volatile signed __int32*)(v23 + 1048), 0x1000u);
	*(_DWORD*)(a1 + 72) = 1;
	*(_DWORD*)(a1 + 128) = 0;
}
// 1402AB3ED: conditional instruction was optimized away because rdi.8!=0
// 1402AB53E: conditional instruction was optimized away because rdi.8!=0
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A52C: using guessed type _DWORD dword_140C8A52C;
// 1402AB0D0: using guessed type int var_60[4];
// 1402AB0D0: using guessed type int var_70[4];
// 1402AB0D0: using guessed type int var_50[4];

