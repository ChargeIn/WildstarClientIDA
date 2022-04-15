//----- (0000000140195960) ----------------------------------------------------
void __fastcall sub_140195960(__int64 a1, int a2, __int64 a3, int a4)
{
	__int64 v4; // r15
	int v8; // ebx
	int v9; // ebx
	int v10; // ebx
	_QWORD** v11; // rbx
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // rax
	int v15; // edx
	int v16; // eax
	_QWORD* v17; // rcx
	int** v18; // r15
	int v19; // ecx
	int* v20; // rcx
	_QWORD* v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rbx
	HANDLE EventW; // rcx
	__int64(__fastcall * *v25)(); // [rsp+20h] [rbp-79h] BYREF
	__int128 v26; // [rsp+28h] [rbp-71h]
	__int64(__fastcall * *v27)(); // [rsp+38h] [rbp-61h] BYREF
	__int128 v28; // [rsp+40h] [rbp-59h]
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-49h] BYREF
	__int128 v30; // [rsp+58h] [rbp-41h]
	__int64 v31; // [rsp+68h] [rbp-31h] BYREF
	__int64 v32; // [rsp+70h] [rbp-29h] BYREF
	__int64 v33; // [rsp+78h] [rbp-21h] BYREF
	__int64(__fastcall * *v34)(); // [rsp+80h] [rbp-19h] BYREF
	__int128 v35; // [rsp+88h] [rbp-11h]
	__int64(__fastcall * *v36)(); // [rsp+A0h] [rbp+7h] BYREF
	__int128 v37; // [rsp+A8h] [rbp+Fh]
	__int64(__fastcall * *v38)(); // [rsp+C0h] [rbp+27h] BYREF
	__int128 v39; // [rsp+C8h] [rbp+2Fh]
	__int64 v40; // [rsp+100h] [rbp+67h] BYREF

	v4 = a4;
	if (*(_DWORD*)a1 == 1414420037)
	{
		if (*(_QWORD*)(a3 + 8) || *(_QWORD*)(a3 + 16))
		{
			if (qword_140C63728)
			{
				sub_14003D8F0(&v40, qword_140C63728 + 8);
				v11 = (_QWORD**)(a1 + 16);
				if (*(_QWORD*)(a1 + 16))
				{
					--* (_QWORD*)(qword_140C63728 + 8i64 * *(int*)(a1 + 64) + 272);
					--* (_QWORD*)(qword_140C63728 + 8i64 * *(int*)(a1 + 68) + 320);
				}
				v12 = qword_140C63728;
				*(_DWORD*)(a1 + 32) = *(_DWORD*)a3;
				*(_QWORD*)(a1 + 48) = *(_QWORD*)(a3 + 16);
				*(_QWORD*)(a1 + 40) = *(_QWORD*)(a3 + 8);
				*(_QWORD*)(a1 + 56) = *(_QWORD*)(a3 + 24);
				*(_DWORD*)(a1 + 64) = v4;
				if (a2 >= 0)
				{
					v13 = *(_QWORD*)(32 * v4 + v12 + 48);
					v14 = *(_QWORD*)(v13 + 16);
					if (v14 != v13)
					{
						v15 = *(_DWORD*)(v14 + 32);
						v16 = *(_DWORD*)(v12 + 232);
						if (v15 - v16 < 0 && a2 + v16 - v15 < 0)
							a2 = v15 - v16 + 0x7FFFFFFF;
					}
				}
				else
				{
					a2 = 0;
				}
				if (*v11)
				{
					**v11 = *(_QWORD*)(a1 + 24);
					v12 = qword_140C63728;
				}
				v17 = *(_QWORD**)(a1 + 24);
				v18 = (int**)(a1 + 24);
				if (v17)
				{
					*v17 = *v11;
					v12 = qword_140C63728;
				}
				*v11 = 0i64;
				*v18 = 0i64;
				v19 = a2 + *(_DWORD*)(v12 + 232);
				*(_DWORD*)(a1 + 8) = a2;
				*(_DWORD*)(a1 + 4) = v19;
				v20 = sub_140196090(v12 + 32i64 * *(int*)(a1 + 64) + 40, (int*)(a1 + 4)) + 2;
				if (!*v11)
				{
					v21 = *(_QWORD**)v20;
					*v18 = v20;
					*v11 = v21;
					if (v21)
						*v21 = v11;
					*(_QWORD*)v20 = v18;
				}
				++* (_QWORD*)(qword_140C63728 + 8i64 * *(int*)(a1 + 64) + 272);
				++* (_QWORD*)(qword_140C63728 + 8i64 * *(int*)(a1 + 68) + 320);
				++* (_QWORD*)(qword_140C63728 + 8i64 * *(int*)(a1 + 68) + 1368);
				v22 = v40;
				if (*(_QWORD*)(v40 + 8) <= 1ui64)
				{
					*(_DWORD*)v40 = 0;
					_InterlockedExchange64((volatile __int64*)(v22 + 8), 0i64);
					if (*(_QWORD*)(v40 + 16))
					{
						v23 = v40;
						if (!*(_QWORD*)(v40 + 24))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v23 + 24), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(v23 + 24));
					}
				}
				else
				{
					--* (_QWORD*)(v40 + 8);
				}
			}
			else
			{
				v27 = &off_140B5E648;
				*(_QWORD*)&v28 = 0i64;
				*((_QWORD*)&v28 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v27);
				v38 = v27;
				v33 = 0x141D3E108i64;
				v39 = v28;
				v10 = sub_140196F30(&dword_140C8A1C4, 1, &v33, &v38);
				v27 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v28 + 1));
				if (v10)
					DebugBreak();
			}
		}
		else
		{
			v25 = &off_140B5E648;
			*(_QWORD*)&v26 = 0i64;
			*((_QWORD*)&v26 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v25);
			v36 = v25;
			v32 = 0x141D3E128i64;
			v37 = v26;
			v9 = sub_140196F30(&dword_140C8A1C8, 1, &v32, &v36);
			v25 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v26 + 1));
			if (v9)
				DebugBreak();
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v30 = 0i64;
		*((_QWORD*)&v30 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v34 = TlsValue;
		v31 = 0x141D3E1B0i64;
		v35 = v30;
		v8 = sub_140196F30(&dword_140C8A1CC, 1, &v31, &v34);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v30 + 1));
		if (v8)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63728: using guessed type __int64 qword_140C63728;
// 140C8A1C4: using guessed type _DWORD dword_140C8A1C4;
// 140C8A1C8: using guessed type _DWORD dword_140C8A1C8;
// 140C8A1CC: using guessed type _DWORD dword_140C8A1CC;

