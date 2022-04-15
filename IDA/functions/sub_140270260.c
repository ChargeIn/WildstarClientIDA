//----- (0000000140270260) ----------------------------------------------------
void __fastcall sub_140270260(__int64 a1, _DWORD* a2)
{
	__int64 v4; // rbx
	int v5; // ebx
	__int64* v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	int v10; // eax
	__int64 v11; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v13; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v15; // [rsp+48h] [rbp-20h]
	__int64 v16; // [rsp+78h] [rbp+10h] BYREF

	v4 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a2 + 24i64))(a2);
	if (*(_DWORD*)(v4 + 8))
	{
		if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a2 + 40i64))(a2))
		{
			v6 = *(__int64**)(a1 + 6608);
			v7 = *v6;
			if (*(_DWORD*)(v4 + 8) == 3)
			{
				v8 = (int)a2[7];
				(*(void(__fastcall**)(__int64*, _QWORD))(v7 + 832))(v6, *(_QWORD*)(a1 + 8 * v8 + 7096));
				*(_DWORD*)(a1 + 7136) = a2[10] / (unsigned int)dword_140AE4ED8[v8];
				v9 = *(_DWORD*)(a1 + 240);
				if (a2[12] != v9)
				{
					a2[12] = v9;
					_InterlockedIncrement((volatile signed __int32*)(a1 + 716));
					_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 720), a2[6]);
				}
			}
			else
			{
				(*(void(__fastcall**)(__int64*, _QWORD))(v7 + 832))(v6, *((_QWORD*)a2 + 5));
				v10 = *(_DWORD*)(a1 + 240);
				*(_DWORD*)(a1 + 7136) = 0;
				if (a2[13] != v10)
				{
					a2[13] = v10;
					v11 = 6i64 * *(int*)(v4 + 8);
					_InterlockedIncrement((volatile signed __int32*)(a1 + 48i64 * *(int*)(v4 + 8) + 572));
					_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v11 + 576), a2[6]);
				}
			}
		}
	}
	else
	{
		*(_QWORD*)&v13 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = TlsValue;
		v16 = 0x141DE0FE0i64;
		v15 = v13;
		v5 = sub_1401971E0(&dword_140C8A328, 14, &v16, &v14);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
		if (v5)
			DebugBreak();
	}
}
// 140AE4ED8: using guessed type int dword_140AE4ED8[19];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A328: using guessed type _DWORD dword_140C8A328;

