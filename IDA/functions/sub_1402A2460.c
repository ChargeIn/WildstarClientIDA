//----- (00000001402A2460) ----------------------------------------------------
void __fastcall sub_1402A2460(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // ebx
	__int64 v4; // rax
	int v5; // r14d
	void* v6; // xmm1_8
	__int64 v7; // rcx
	__int64 v8; // rbx
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+28h] [rbp-59h] BYREF
	__int128 v11; // [rsp+30h] [rbp-51h]
	__int128 v12; // [rsp+40h] [rbp-41h] BYREF
	__int128 v13; // [rsp+50h] [rbp-31h]
	int v14; // [rsp+60h] [rbp-21h] BYREF
	__int64 v15; // [rsp+64h] [rbp-1Dh]
	int v16; // [rsp+6Ch] [rbp-15h]
	__int64(__fastcall * *v17)(); // [rsp+78h] [rbp-9h] BYREF
	__int128 v18; // [rsp+80h] [rbp-1h]
	__int128 v19; // [rsp+98h] [rbp+17h]
	__int128 v20; // [rsp+A8h] [rbp+27h]
	__int64 v21; // [rsp+E8h] [rbp+67h] BYREF
	__int64 v22; // [rsp+F0h] [rbp+6Fh] BYREF
	__int64 v23; // [rsp+F8h] [rbp+77h] BYREF
	__int64 v24; // [rsp+100h] [rbp+7Fh] BYREF

	v1 = *(_QWORD*)(a1 + 112);
	if (v1)
	{
		if (*(char*)(a1 + 60) < 0)
		{
			v4 = *(int*)(a1 + 48);
			v15 = 4i64;
			v16 = -1;
			v22 = 0i64;
			v14 = dword_140AE8120[v4];
			v5 = (*(__int64(__fastcall**)(_QWORD, __int64, int*, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
				+ 56i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
					v1,
					&v14,
					&v22);
			if (v5 >= 0)
			{
				sub_14003D8F0(&v21, *(_QWORD*)(a1 + 16) + 6368i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 432i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
					v22);
				v7 = v21;
				if (*(_QWORD*)(v21 + 8) <= 1ui64)
				{
					*(_DWORD*)v21 = 0;
					_InterlockedExchange64((volatile __int64*)(v7 + 8), 0i64);
					if (*(_QWORD*)(v21 + 16))
					{
						v8 = v21;
						if (!*(_QWORD*)(v21 + 24))
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
					--* (_QWORD*)(v21 + 8);
				}
			}
			else
			{
				v24 = 0x141DE5A08i64;
				sub_1401A3130(14, 2, &v24, (unsigned int)v5);
				*((_QWORD*)&v12 + 1) = L"Result";
				*(_QWORD*)&v12 = &off_140B5E648;
				*(_QWORD*)&v13 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v12);
				*(_QWORD*)&v12 = &off_140B5E640;
				DWORD2(v13) = v5;
				v6 = (void*)v13;
				v19 = v12;
				v20 = v13;
				sub_1400035B0();
				*(_QWORD*)&v12 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, v6);
			}
			if (v22)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22);
		}
		else
		{
			*(_QWORD*)&v11 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v11 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v17 = TlsValue;
			v23 = 0x141DE5A20i64;
			v18 = v11;
			v3 = sub_1401971E0(&dword_140C8A48C, 14, &v23, &v17);
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
// 140C8A48C: using guessed type _DWORD dword_140C8A48C;

