//----- (000000014028B9E0) ----------------------------------------------------
__int64 __fastcall sub_14028B9E0(__int64 a1, int a2, unsigned int a3, char a4)
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
	__int64 v17; // r8
	__int64 v18; // r10
	int v19; // r11d
	int v20; // r15d
	void* v21; // xmm1_8
	int v22; // r9d
	int v23; // r15d
	int v24; // r15d
	__int64 v25; // rdi
	__int64 v26; // rcx
	__int64 v27; // rdx
	__int64 v28; // rax
	HANDLE EventW; // rcx
	__int64 v30; // [rsp+30h] [rbp-D0h]
	__int64 v31; // [rsp+38h] [rbp-C8h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int128 v33; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v34)(); // [rsp+58h] [rbp-A8h] BYREF
	__int128 v35; // [rsp+60h] [rbp-A0h]
	__int128 v36; // [rsp+70h] [rbp-90h] BYREF
	__int128 v37; // [rsp+80h] [rbp-80h]
	__int128 v38; // [rsp+90h] [rbp-70h] BYREF
	__int128 v39; // [rsp+A0h] [rbp-60h]
	__int128 v40; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v41; // [rsp+C0h] [rbp-40h]
	__int64 v42; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v43; // [rsp+D8h] [rbp-28h] BYREF
	__int64(__fastcall * *v44)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v45; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v46)(); // [rsp+100h] [rbp+0h] BYREF
	__int128 v47; // [rsp+108h] [rbp+8h]
	__int128 v48; // [rsp+120h] [rbp+20h]
	__int128 v49; // [rsp+130h] [rbp+30h]
	__int128 v50; // [rsp+140h] [rbp+40h]
	__int128 v51; // [rsp+150h] [rbp+50h]
	__int128 v52; // [rsp+160h] [rbp+60h]
	__int128 v53; // [rsp+170h] [rbp+70h]

	v5 = a3;
	if ((a4 & 1) != 0)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v33 = 0i64;
		*((_QWORD*)&v33 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v44 = TlsValue;
		v42 = 0x141DE3DC0i64;
		v45 = v33;
		v8 = sub_1401971E0(&dword_140C8A3B8, 14, &v42, &v44);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v33 + 1));
		if (v8)
			DebugBreak();
		return 0i64;
	}
	if (!a3)
		v5 = *(_DWORD*)(a1 + 24);
	if (a2 + v5 <= *(_DWORD*)(a1 + 24))
	{
		v11 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
		v30 = (__int64)v11;
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
					sub_14019FB60(v30, CurrentThreadId);
					goto LABEL_17;
				}
			}
			*(_DWORD*)v30 = CurrentThreadId;
		}
	LABEL_17:
		v16 = *(int*)(a1 + 28);
		v17 = *(_QWORD*)(a1 + 16);
		v18 = v17 + 4 * v16;
		v19 = *(_DWORD*)(v18 + 7128);
		if (*(_DWORD*)(a1 + 44) != v19 || (a4 & 4) != 0)
		{
			v22 = *(_DWORD*)(v17 + 4 * v16 + 7120);
			if ((unsigned int)(v22 + *(_DWORD*)(a1 + 24)) <= *(_DWORD*)(v17 + 4 * v16 + 7112))
			{
				v24 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*, int))(**(_QWORD**)(v17 + 8 * v16 + 7096)
					+ 88i64))(
						*(_QWORD*)(v17 + 8 * v16 + 7096),
						(unsigned int)(v22 + a2),
						v5,
						&v31,
						4096);
				if (v24 < 0)
				{
					*((_QWORD*)&v36 + 1) = L"Result";
					*(_QWORD*)&v36 = &off_140B5E648;
					*(_QWORD*)&v37 = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v36);
					*(_QWORD*)&v36 = &off_140B5E640;
					DWORD2(v37) = v24;
					v21 = (void*)v37;
					v52 = v36;
					v53 = v37;
					sub_1400035B0();
					*(_QWORD*)&v36 = &off_140B5E648;
					goto LABEL_26;
				}
			}
			else
			{
				*(_DWORD*)(v18 + 7128) = v19 + 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 4i64 * *(int*)(a1 + 28) + 7120) = 0;
				v23 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*, int))(**(_QWORD**)(*(_QWORD*)(a1 + 16)
					+ 8i64 * *(int*)(a1 + 28)
					+ 7096)
					+ 88i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8i64 * *(int*)(a1 + 28) + 7096),
						(unsigned int)(a2 + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4i64 * *(int*)(a1 + 28) + 7120)),
						v5,
						&v31,
						0x2000);
				if (v23 < 0)
				{
					*((_QWORD*)&v38 + 1) = L"Result";
					*(_QWORD*)&v38 = &off_140B5E648;
					*(_QWORD*)&v39 = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v38);
					*(_QWORD*)&v38 = &off_140B5E640;
					DWORD2(v39) = v23;
					v21 = (void*)v39;
					v50 = v38;
					v51 = v39;
					sub_1400035B0();
					*(_QWORD*)&v38 = &off_140B5E648;
					goto LABEL_26;
				}
			}
			v26 = *(_QWORD*)(a1 + 16);
			v27 = *(int*)(a1 + 28);
			*(_DWORD*)(a1 + 44) = *(_DWORD*)(v26 + 4 * v27 + 7128);
			*(_DWORD*)(a1 + 40) = *(_DWORD*)(v26 + 4 * v27 + 7120);
			*(_DWORD*)(v26 + 4 * v27 + 7120) += *(_DWORD*)(a1 + 24);
			*(_DWORD*)(a1 + 48) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1;
		}
		else
		{
			v20 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*, _DWORD))(**(_QWORD**)(v17 + 8 * v16 + 7096)
				+ 88i64))(
					*(_QWORD*)(v17 + 8 * v16 + 7096),
					(unsigned int)(a2 + *(_DWORD*)(a1 + 40)),
					v5,
					&v31,
					0);
			if (v20 < 0)
			{
				*((_QWORD*)&v40 + 1) = L"Result";
				*(_QWORD*)&v40 = &off_140B5E648;
				*(_QWORD*)&v41 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v40);
				*(_QWORD*)&v40 = &off_140B5E640;
				DWORD2(v41) = v20;
				v21 = (void*)v41;
				v48 = v40;
				v49 = v41;
				sub_1400035B0();
				*(_QWORD*)&v40 = &off_140B5E648;
			LABEL_26:
				TlsSetValue(dwTlsIndex, v21);
				v25 = 0i64;
			LABEL_31:
				if (*v14 <= 1ui64)
				{
					*(_DWORD*)v30 = 0;
					_InterlockedExchange64(v14, 0i64);
					if (*(_QWORD*)(v30 + 16))
					{
						if (!*(_QWORD*)(v30 + 24))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v30 + 24), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(v30 + 24));
					}
				}
				else
				{
					--* v14;
				}
				return v25;
			}
		}
		v28 = *(_QWORD*)(a1 + 16);
		if ((a4 & 2) != 0)
		{
			_InterlockedIncrement((volatile signed __int32*)(v28 + 708));
			_InterlockedExchangeAdd((volatile signed __int32*)(v28 + 712), v5);
		}
		v25 = v31;
		goto LABEL_31;
	}
	v34 = &off_140B5E648;
	*(_QWORD*)&v35 = 0i64;
	*((_QWORD*)&v35 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v34);
	v46 = v34;
	v43 = 0x141DE3D50i64;
	v47 = v35;
	v10 = sub_1401971E0(&dword_140C8A3BC, 14, &v43, &v46);
	v34 = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v35 + 1));
	if (!v10)
		return 0i64;
	DebugBreak();
	return 0i64;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A3B8: using guessed type _DWORD dword_140C8A3B8;
// 140C8A3BC: using guessed type _DWORD dword_140C8A3BC;

