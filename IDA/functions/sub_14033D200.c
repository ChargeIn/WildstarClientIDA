//----- (000000014033D200) ----------------------------------------------------
__int64 __fastcall sub_14033D200(__int64 a1)
{
	__int64 v1; // r14
	int v2; // edi
	unsigned int i; // ebx
	__int64 v5; // rcx
	unsigned int* v6; // rsi
	unsigned int CurrentThreadId; // eax
	__int64 v8; // rdx
	__int64 v9; // rcx
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	__int64 v12; // rdi
	__int64 v13; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	HANDLE EventW; // rcx
	int v17; // edi
	unsigned int m; // ebx
	__int64 v20; // r9
	__int64 v21; // rcx
	int* v22; // rbx
	int v23; // edx
	__int64 v24; // rcx
	__int64 v25; // rdi
	__int64 v26; // rcx
	__int64 v27; // rbp
	HANDLE v28; // rcx
	__int64 v30; // [rsp+20h] [rbp-38h]
	__int64 v31; // [rsp+60h] [rbp+8h] BYREF
	__int64 v32; // [rsp+68h] [rbp+10h] BYREF
	__int64 v33; // [rsp+70h] [rbp+18h] BYREF

	v31 = a1;
	v1 = qword_140C65840;
	if (!*(_DWORD*)(qword_140C65840 + 324))
	{
		*(_DWORD*)(qword_140C65840 + 324) = 1;
		v2 = 100;
		while (*(_DWORD*)(v1 + 320))
		{
			if (!v2--)
				break;
			for (i = 0; i < *(_DWORD*)(v1 + 320); ++i)
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 304) + 16i64))(*(_QWORD*)(v1 + 304));
			Sleep(0x64u);
		}
		v5 = *(_QWORD*)(v1 + 312);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v1 + 312) + 48i64))(*(_QWORD*)(v1 + 312), 0xFFFFFFFFi64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 312) + 8i64))(*(_QWORD*)(v1 + 312));
			*(_QWORD*)(v1 + 312) = 0i64;
		}
	}
	if (*(_QWORD*)(v1 + 144))
	{
		v6 = (unsigned int*)(v1 + 184);
		CurrentThreadId = GetCurrentThreadId();
		v8 = CurrentThreadId;
		if (*(_DWORD*)(v1 + 184) == CurrentThreadId)
		{
			++* (_QWORD*)(v1 + 192);
		}
		else
		{
			v9 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 192), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v9 >= 0x400)
				{
					sub_14019FB60(v1 + 184, CurrentThreadId);
					goto LABEL_17;
				}
			}
			*v6 = CurrentThreadId;
		}
	LABEL_17:
		v10 = *(_QWORD**)(v1 + 104);
		v11 = (_QWORD*)v10[2];
		if (v11 != v10)
		{
			do
			{
				v12 = v11[4];
				if (v12)
					(**(void(__fastcall***)(_QWORD, __int64))v12)(v11[4], v8);
				v13 = v11[3];
				if (v13)
				{
					v11 = (_QWORD*)v11[3];
					for (j = *(_QWORD**)(v13 + 16); j; j = (_QWORD*)j[2])
						v11 = j;
				}
				else
				{
					for (k = v11[1]; v11 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
						v11 = (_QWORD*)k;
					if (v11[3] != k)
						v11 = (_QWORD*)k;
				}
				v31 = v12;
				if (v12)
					(**(void(__fastcall***)(__int64, __int64))v12)(v12, v8);
				(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v1 + 24i64))(v1, &v31);
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			} while (v11 != *(_QWORD**)(v1 + 104));
		}
		if (*(_QWORD*)(v1 + 192) <= 1ui64)
		{
			*v6 = 0;
			_InterlockedExchange64((volatile __int64*)(v1 + 192), 0i64);
			if (*(_QWORD*)(v1 + 200))
			{
				if (!*(_QWORD*)(v1 + 208))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 208), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v1 + 208));
			}
		}
		else
		{
			--* (_QWORD*)(v1 + 192);
		}
		v17 = 100;
		while (*(_DWORD*)(v1 + 168))
		{
			if (!v17--)
				break;
			Sleep(0x64u);
			for (m = 0; m < *(_DWORD*)(v1 + 168); ++m)
				PostQueuedCompletionStatus(*(HANDLE*)(v1 + 144), 0, 0i64, 0i64);
			v20 = *(unsigned int*)(v1 + 168);
			v32 = 0x141DEDF00i64;
			LODWORD(v30) = v17;
			sub_1401A3130(99, 2, &v32, v20, v30);
		}
		if (*(_DWORD*)(v1 + 168) || !v17)
		{
			v33 = 0x141DEDE80i64;
			sub_1401A3130(99, 0, &v33);
		}
		v21 = *(_QWORD*)(v1 + 160);
		if (v21)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 40i64))(v21, v8);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v1 + 160) + 48i64))(*(_QWORD*)(v1 + 160), 0xFFFFFFFFi64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 160) + 8i64))(*(_QWORD*)(v1 + 160));
			*(_QWORD*)(v1 + 160) = 0i64;
		}
		CloseHandle(*(HANDLE*)(v1 + 144));
		*(_QWORD*)(v1 + 144) = 0i64;
	}
	v22 = (int*)(v1 + 184);
	v23 = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 184) == v23)
	{
		++* (_QWORD*)(v1 + 192);
	}
	else
	{
		v24 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 192), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v24 >= 0x400)
			{
				sub_14019FB60(v1 + 184, v23);
				goto LABEL_58;
			}
		}
		*v22 = v23;
	}
LABEL_58:
	sub_14033E0A0((_QWORD*)(v1 + 8));
	if (*(_QWORD*)(v1 + 112))
	{
		v25 = *(_QWORD*)(*(_QWORD*)(v1 + 104) + 8i64);
		if (v25)
		{
			do
			{
				sub_14033E290(v1 + 96, *(_QWORD**)(v25 + 24));
				v26 = *(_QWORD*)(v25 + 32);
				v27 = *(_QWORD*)(v25 + 16);
				if (v26)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
				sub_14018B900(v25, 0);
				v25 = v27;
			} while (v27);
		}
		*(_QWORD*)(*(_QWORD*)(v1 + 104) + 16i64) = *(_QWORD*)(v1 + 104);
		*(_QWORD*)(*(_QWORD*)(v1 + 104) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v1 + 104) + 24i64) = *(_QWORD*)(v1 + 104);
		*(_QWORD*)(v1 + 112) = 0i64;
	}
	if (*(_QWORD*)(v1 + 192) <= 1ui64)
	{
		*v22 = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 192), 0i64);
		if (*(_QWORD*)(v1 + 200))
		{
			if (!*(_QWORD*)(v1 + 208))
			{
				v28 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 208), (signed __int64)v28, 0i64))
					CloseHandle(v28);
			}
			SetEvent(*(HANDLE*)(v1 + 208));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 192);
	}
	sub_14033D0B0(v1, 0xFFFFFFFFFFFFFFFFui64);
	return 0i64;
}
// 14033D344: variable 'v8' is possibly undefined
// 14033D49D: variable 'v30' is possibly undefined
// 140C65840: using guessed type __int64 qword_140C65840;

