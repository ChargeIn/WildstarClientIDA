//----- (000000014026FF90) ----------------------------------------------------
void __fastcall sub_14026FF90(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v5; // r14
	__int64 v6; // r12
	__int64 v8; // r15
	int v9; // ebx
	__int64 v10; // r13
	int v11; // edx
	int v12; // r9d
	__int64 v13; // r8
	int v14; // eax
	__int64 v15; // r8
	int v16; // eax
	__int64 v17; // rcx
	int v18; // ebx
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-49h] BYREF
	__int128 v20; // [rsp+38h] [rbp-41h]
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-31h] BYREF
	__int128 v22; // [rsp+50h] [rbp-29h]
	__int64 v23; // [rsp+60h] [rbp-19h] BYREF
	__int64(__fastcall * *v24)(); // [rsp+70h] [rbp-9h] BYREF
	__int128 v25; // [rsp+78h] [rbp-1h]
	__int64(__fastcall * *v26)(); // [rsp+90h] [rbp+17h] BYREF
	__int128 v27; // [rsp+98h] [rbp+1Fh]
	__int64 v28; // [rsp+E8h] [rbp+6Fh] BYREF

	v5 = a4;
	v6 = a3;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2);
	if (*(_DWORD*)(v8 + 4))
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 40i64))(a2))
		{
			v10 = a1 + 216 * v6;
			if ((unsigned int)v5 < 0x10 && *(_DWORD*)(v10 + 4 * v5 + 1188))
			{
				sub_14026BF80(a1, v6);
				v11 = *(_DWORD*)(v10 + 4 * v5 + 1188);
				if (*(_DWORD*)(v8 + 4) == 3)
				{
					v12 = *(_DWORD*)(a2 + 36);
					v13 = *(_QWORD*)(a1 + 7064);
					*(_DWORD*)(a1 + 16 * v5 + 9724) = v11;
					*(_QWORD*)(a1 + 16 * (v5 + 607)) = v13;
					*(_DWORD*)(a1 + 16 * v5 + 9720) = v12;
					(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 800i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)v5);
					v14 = *(_DWORD*)(a1 + 240);
					if (*(_DWORD*)(a2 + 44) != v14)
					{
						*(_DWORD*)(a2 + 44) = v14;
						_InterlockedIncrement((volatile signed __int32*)(a1 + 524));
						_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 528), *(_DWORD*)(a2 + 24));
					}
				}
				else
				{
					v15 = *(_QWORD*)(a2 + 40);
					*(_DWORD*)(a1 + 16 * v5 + 9724) = v11;
					*(_DWORD*)(a1 + 16 * v5 + 9720) = 0;
					*(_QWORD*)(a1 + 16 * (v5 + 607)) = v15;
					(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, int))(**(_QWORD**)(a1 + 6608) + 800i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)v5,
						v15,
						0i64,
						v11);
					v16 = *(_DWORD*)(a1 + 240);
					if (*(_DWORD*)(a2 + 52) != v16)
					{
						*(_DWORD*)(a2 + 52) = v16;
						v17 = 6i64 * *(int*)(v8 + 4);
						_InterlockedIncrement((volatile signed __int32*)(a1 + 48i64 * *(int*)(v8 + 4) + 380));
						_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v17 + 384), *(_DWORD*)(a2 + 24));
					}
				}
			}
			else
			{
				*(_QWORD*)&v20 = 0i64;
				v19 = &off_140B5E648;
				*((_QWORD*)&v20 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v19);
				v26 = v19;
				v23 = 0x141DE1060i64;
				v27 = v20;
				v18 = sub_1401971E0(&dword_140C8A338, 14, &v23, &v26);
				v19 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v20 + 1));
				if (v18)
					DebugBreak();
			}
		}
	}
	else
	{
		*(_QWORD*)&v22 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v22 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v24 = TlsValue;
		v28 = 0x141DE10E0i64;
		v25 = v22;
		v9 = sub_1401971E0(&dword_140C8A334, 14, &v28, &v24);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v22 + 1));
		if (v9)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A334: using guessed type _DWORD dword_140C8A334;
// 140C8A338: using guessed type _DWORD dword_140C8A338;

