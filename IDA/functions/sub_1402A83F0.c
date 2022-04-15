//----- (00000001402A83F0) ----------------------------------------------------
void __fastcall sub_1402A83F0(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // ebx
	__int64 v4; // rax
	int v5; // esi
	void* v6; // xmm1_8
	__int64 v7; // rcx
	__int64 v8; // rbx
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-59h] BYREF
	__int128 v11; // [rsp+28h] [rbp-51h]
	int v12; // [rsp+38h] [rbp-41h] BYREF
	__int64 v13; // [rsp+3Ch] [rbp-3Dh]
	int v14; // [rsp+44h] [rbp-35h]
	int v15; // [rsp+48h] [rbp-31h]
	int v16; // [rsp+4Ch] [rbp-2Dh]
	__int128 v17; // [rsp+50h] [rbp-29h] BYREF
	__int128 v18; // [rsp+60h] [rbp-19h]
	__int64(__fastcall * *v19)(); // [rsp+70h] [rbp-9h] BYREF
	__int128 v20; // [rsp+78h] [rbp-1h]
	__int128 v21; // [rsp+90h] [rbp+17h]
	__int128 v22; // [rsp+A0h] [rbp+27h]
	__int64 v23; // [rsp+E0h] [rbp+67h] BYREF
	__int64 v24; // [rsp+E8h] [rbp+6Fh] BYREF
	__int64 v25; // [rsp+F0h] [rbp+77h] BYREF
	__int64 v26; // [rsp+F8h] [rbp+7Fh] BYREF

	v1 = *(_QWORD*)(a1 + 112);
	if (v1)
	{
		if (*(char*)(a1 + 60) < 0)
		{
			v4 = *(int*)(a1 + 48);
			v13 = 5i64;
			v14 = -1;
			v15 = 0;
			v16 = 6;
			v24 = 0i64;
			v12 = dword_140AE8120[v4];
			v5 = (*(__int64(__fastcall**)(_QWORD, __int64, int*, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
				+ 56i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
					v1,
					&v12,
					&v24);
			if (v5 >= 0)
			{
				sub_14003D8F0(&v23, *(_QWORD*)(a1 + 16) + 6368i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 432i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
					v24);
				v7 = v23;
				if (*(_QWORD*)(v23 + 8) <= 1ui64)
				{
					*(_DWORD*)v23 = 0;
					_InterlockedExchange64((volatile __int64*)(v7 + 8), 0i64);
					if (*(_QWORD*)(v23 + 16))
					{
						v8 = v23;
						if (!*(_QWORD*)(v23 + 24))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 24), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(v8 + 24));
					}
				}
				else
				{
					--* (_QWORD*)(v23 + 8);
				}
			}
			else
			{
				v26 = 0x141DE6058i64;
				sub_1401A3130(14, 2, &v26, (unsigned int)v5);
				*((_QWORD*)&v17 + 1) = L"Result";
				*(_QWORD*)&v17 = &off_140B5E648;
				*(_QWORD*)&v18 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v17);
				*(_QWORD*)&v17 = &off_140B5E640;
				DWORD2(v18) = v5;
				v6 = (void*)v18;
				v21 = v17;
				v22 = v18;
				sub_1400035B0();
				*(_QWORD*)&v17 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, v6);
			}
			if (v24)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
		}
		else
		{
			*(_QWORD*)&v11 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v11 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v19 = TlsValue;
			v25 = 0x141DE6610i64;
			v20 = v11;
			v3 = sub_1401971E0(&dword_140C8A4F0, 14, &v25, &v19);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v11 + 1));
			if (v3)
				DebugBreak();
		}
	}
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE8120: using guessed type int dword_140AE8120[28];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A4F0: using guessed type _DWORD dword_140C8A4F0;

