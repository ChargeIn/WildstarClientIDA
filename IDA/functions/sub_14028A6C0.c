//----- (000000014028A6C0) ----------------------------------------------------
__int64 __fastcall sub_14028A6C0(__int64 a1, int a2, unsigned int a3, char a4)
{
	unsigned int v5; // r14d
	int v8; // ebx
	int v10; // ebx
	_DWORD* v11; // rbx
	int CurrentThreadId; // eax
	int v13; // ecx
	volatile signed __int64* v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rdx
	int v17; // r9d
	int v18; // r15d
	void* v19; // xmm1_8
	int v20; // r8d
	int v21; // r15d
	int v22; // r15d
	__int64 v23; // rdi
	__int64 v24; // rcx
	__int64 v25; // rax
	HANDLE EventW; // rcx
	__int64 v27; // [rsp+30h] [rbp-D0h]
	__int64 v28; // [rsp+38h] [rbp-C8h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int128 v30; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v31)(); // [rsp+58h] [rbp-A8h] BYREF
	__int128 v32; // [rsp+60h] [rbp-A0h]
	__int128 v33; // [rsp+70h] [rbp-90h] BYREF
	__int128 v34; // [rsp+80h] [rbp-80h]
	__int128 v35; // [rsp+90h] [rbp-70h] BYREF
	__int128 v36; // [rsp+A0h] [rbp-60h]
	__int128 v37; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v38; // [rsp+C0h] [rbp-40h]
	__int64 v39; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v40; // [rsp+D8h] [rbp-28h] BYREF
	__int64(__fastcall * *v41)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v42; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v43)(); // [rsp+100h] [rbp+0h] BYREF
	__int128 v44; // [rsp+108h] [rbp+8h]
	__int128 v45; // [rsp+120h] [rbp+20h]
	__int128 v46; // [rsp+130h] [rbp+30h]
	__int128 v47; // [rsp+140h] [rbp+40h]
	__int128 v48; // [rsp+150h] [rbp+50h]
	__int128 v49; // [rsp+160h] [rbp+60h]
	__int128 v50; // [rsp+170h] [rbp+70h]

	v5 = a3;
	if ((a4 & 1) != 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v41 = TlsValue;
		v39 = 0x141DE3B30i64;
		v42 = v30;
		v8 = sub_1401971E0(&dword_140C8A3A8, 14, &v39, &v41);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
		if (v8)
			DebugBreak();
		return 0i64;
	}
	if (!a3)
		v5 = *(_DWORD*)(a1 + 24);
	if (a2 + v5 <= *(_DWORD*)(a1 + 24))
	{
		v11 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
		v27 = (__int64)v11;
		CurrentThreadId = GetCurrentThreadId();
		v13 = *v11;
		v14 = (volatile signed __int64*)(v11 + 2);
		if (v13 == CurrentThreadId)
		{
			++* v14;
		}
		else
		{
			v15 = 0i64;
			while (_InterlockedCompareExchange64(v14, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v15 >= 0x400)
				{
					sub_14019FB60(v27, CurrentThreadId);
					goto LABEL_17;
				}
			}
			*(_DWORD*)v27 = CurrentThreadId;
		}
	LABEL_17:
		v16 = *(_QWORD*)(a1 + 16);
		v17 = *(_DWORD*)(v16 + 7080);
		if (*(_DWORD*)(a1 + 40) != v17 || (a4 & 4) != 0)
		{
			v20 = *(_DWORD*)(v16 + 7076);
			if ((unsigned int)(v20 + *(_DWORD*)(a1 + 24)) <= *(_DWORD*)(v16 + 7072))
			{
				v22 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*, int))(**(_QWORD**)(v16 + 7064) + 88i64))(
					*(_QWORD*)(v16 + 7064),
					(unsigned int)(v20 + a2),
					v5,
					&v28,
					4096);
				if (v22 < 0)
				{
					*((_QWORD*)&v33 + 1) = L"Result";
					*(_QWORD*)&v33 = &off_140B5E648;
					*(_QWORD*)&v34 = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v33);
					*(_QWORD*)&v33 = &off_140B5E640;
					DWORD2(v34) = v22;
					v19 = (void*)v34;
					v49 = v33;
					v50 = v34;
					sub_1400035B0();
					*(_QWORD*)&v33 = &off_140B5E648;
					goto LABEL_26;
				}
			}
			else
			{
				*(_DWORD*)(v16 + 7080) = v17 + 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 7076i64) = 0;
				v21 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*, int))(**(_QWORD**)(*(_QWORD*)(a1 + 16)
					+ 7064i64)
					+ 88i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 7064i64),
						(unsigned int)(a2 + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 7076i64)),
						v5,
						&v28,
						0x2000);
				if (v21 < 0)
				{
					*((_QWORD*)&v35 + 1) = L"Result";
					*(_QWORD*)&v35 = &off_140B5E648;
					*(_QWORD*)&v36 = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v35);
					*(_QWORD*)&v35 = &off_140B5E640;
					DWORD2(v36) = v21;
					v19 = (void*)v36;
					v47 = v35;
					v48 = v36;
					sub_1400035B0();
					*(_QWORD*)&v35 = &off_140B5E648;
					goto LABEL_26;
				}
			}
			v24 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(a1 + 40) = *(_DWORD*)(v24 + 7080);
			*(_DWORD*)(a1 + 36) = *(_DWORD*)(v24 + 7076);
			*(_DWORD*)(v24 + 7076) += *(_DWORD*)(a1 + 24);
			*(_DWORD*)(a1 + 44) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1;
		}
		else
		{
			v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*, _DWORD))(**(_QWORD**)(v16 + 7064) + 88i64))(
				*(_QWORD*)(v16 + 7064),
				(unsigned int)(a2 + *(_DWORD*)(a1 + 36)),
				v5,
				&v28,
				0);
			if (v18 < 0)
			{
				*((_QWORD*)&v37 + 1) = L"Result";
				*(_QWORD*)&v37 = &off_140B5E648;
				*(_QWORD*)&v38 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v37);
				*(_QWORD*)&v37 = &off_140B5E640;
				DWORD2(v38) = v18;
				v19 = (void*)v38;
				v45 = v37;
				v46 = v38;
				sub_1400035B0();
				*(_QWORD*)&v37 = &off_140B5E648;
			LABEL_26:
				TlsSetValue(dwTlsIndex, v19);
				v23 = 0i64;
			LABEL_31:
				if (*v14 <= 1ui64)
				{
					*(_DWORD*)v27 = 0;
					_InterlockedExchange64(v14, 0i64);
					if (*(_QWORD*)(v27 + 16))
					{
						if (!*(_QWORD*)(v27 + 24))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v27 + 24), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(v27 + 24));
					}
				}
				else
				{
					--* v14;
				}
				return v23;
			}
		}
		v25 = *(_QWORD*)(a1 + 16);
		if ((a4 & 2) != 0)
		{
			_InterlockedIncrement((volatile signed __int32*)(v25 + 516));
			_InterlockedExchangeAdd((volatile signed __int32*)(v25 + 520), v5);
		}
		v23 = v28;
		goto LABEL_31;
	}
	v31 = &off_140B5E648;
	*(_QWORD*)&v32 = 0i64;
	*((_QWORD*)&v32 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v31);
	v43 = v31;
	v40 = 0x141DE3CD0i64;
	v44 = v32;
	v10 = sub_1401971E0(&dword_140C8A3AC, 14, &v40, &v43);
	v31 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v32 + 1));
	if (!v10)
		return 0i64;
	DebugBreak();
	return 0i64;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A3A8: using guessed type _DWORD dword_140C8A3A8;
// 140C8A3AC: using guessed type _DWORD dword_140C8A3AC;

