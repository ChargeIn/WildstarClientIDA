//----- (00000001402A3890) ----------------------------------------------------
__int64 __fastcall sub_1402A3890(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
	__int64 v10; // rdx
	__int64 result; // rax
	int v13; // eax
	_DWORD* v14; // rbx
	int CurrentThreadId; // eax
	int v16; // ecx
	volatile signed __int64* v17; // rbx
	__int64 v18; // rcx
	int v19; // ebp
	__int64* v20; // rcx
	__int64 v21; // rax
	HANDLE EventW; // rcx
	__int64 v23; // [rsp+30h] [rbp+8h]

	*(_DWORD*)(a1 + 28) = a2;
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 44) = a5;
	*(_DWORD*)(a1 + 48) = a6;
	*(_DWORD*)(a1 + 52) = a7;
	*(_DWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 56) = a8;
	*(_DWORD*)(a1 + 36) = a4;
	*(_DWORD*)(a1 + 60) = a9;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 64) = a10;
	*(_DWORD*)(a1 + 24) = 1;
	result = sub_140263970((int*)(a1 + 24), v10 + 136);
	if ((int)result >= 0)
	{
		v13 = sub_140263E70((_DWORD*)(a1 + 24));
		v14 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
		*(_DWORD*)(a1 + 216) = v13;
		v23 = (__int64)v14;
		CurrentThreadId = GetCurrentThreadId();
		v16 = *v14;
		v17 = (volatile signed __int64*)(v14 + 2);
		if (v16 == CurrentThreadId)
		{
			++* v17;
		}
		else
		{
			v18 = 0i64;
			while (_InterlockedCompareExchange64(v17, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v18 >= 0x400)
				{
					sub_14019FB60(v23, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v23 = CurrentThreadId;
		}
	LABEL_9:
		if (((*(_DWORD*)(a1 + 52) - 3) & 0xFFFFFFFD) == 0)
			sub_140052360((__int64*)(a1 + 168), (unsigned int)(*(_DWORD*)(a1 + 36) * *(_DWORD*)(a1 + 44)));
		v19 = sub_1402A3CE0(a1, 2);
		if (v19 >= 0)
		{
			v20 = (__int64*)(*(_QWORD*)(a1 + 16) + 6864i64);
			if (!*(_QWORD*)(a1 + 280))
			{
				*(_QWORD*)(a1 + 280) = v20;
				*(_QWORD*)(a1 + 288) = *v20;
				*v20 = a1;
				v21 = *(_QWORD*)(a1 + 288);
				if (v21)
					*(_QWORD*)(v21 + 280) = a1 + 288;
			}
			v19 = 0;
		}
		if (*v17 <= 1ui64)
		{
			*(_DWORD*)v23 = 0;
			_InterlockedExchange64(v17, 0i64);
			if (*(_QWORD*)(v23 + 16))
			{
				if (!*(_QWORD*)(v23 + 24))
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
			--* v17;
		}
		return (unsigned int)v19;
	}
	return result;
}

