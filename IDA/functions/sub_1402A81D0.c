//----- (00000001402A81D0) ----------------------------------------------------
__int64 __fastcall sub_1402A81D0(__int64 a1, int a2, unsigned int a3)
{
	__int64 v5; // r14
	__int64 v6; // r15
	int v7; // esi
	unsigned int v8; // ecx
	__int64 result; // rax
	_DWORD* v10; // rdx
	__int64 v11; // rbx
	unsigned int v12; // ebp
	int CurrentThreadId; // edx
	__int64 v14; // rcx
	__int64 v15; // r9
	__int64 v16; // rdx
	HANDLE EventW; // rcx
	bool v18; // zf
	int v19; // esi

	v5 = a3;
	v6 = a2;
	v7 = 1 << a3;
	v8 = *(_DWORD*)(a1 + 4i64 * a2 + 448);
	result = *(_DWORD*)(a1 + 4i64 * a2 + 472) | v8;
	if (((unsigned int)result & (1 << a3)) != 0)
	{
		if ((v8 & v7) != 0 && (v10 = (_DWORD*)(*(_QWORD*)(a1 + 16 * (a2 + 22i64)) + 24i64 * a3), *v10 > 1u))
		{
			result = (unsigned int)(*v10 - 1);
			*v10 = result;
		}
		else
		{
			v11 = *(_QWORD*)(a1 + 16) + 6368i64;
			v12 = a3 + a2 * *(_DWORD*)(a1 + 44);
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)v11 == CurrentThreadId)
			{
				++* (_QWORD*)(v11 + 8);
			}
			else
			{
				v14 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 8), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v14 >= 0x400)
					{
						sub_14019FB60(v11, CurrentThreadId);
						goto LABEL_12;
					}
				}
				*(_DWORD*)v11 = CurrentThreadId;
			}
		LABEL_12:
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 120i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
				*(_QWORD*)(a1 + 120),
				v12);
			if ((v7 & *(_DWORD*)(a1 + 4 * v6 + 472)) != 0)
			{
				v15 = *(_QWORD*)(a1 + 120);
				v16 = *(_QWORD*)(a1 + 112);
				if (v15 != v16)
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64, unsigned int, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 368i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
						v16,
						v12,
						0i64,
						0,
						0,
						v15,
						v12,
						0i64);
			}
			if (*(_QWORD*)(v11 + 8) <= 1ui64)
			{
				*(_DWORD*)v11 = 0;
				_InterlockedExchange64((volatile __int64*)(v11 + 8), 0i64);
				if (*(_QWORD*)(v11 + 16))
				{
					if (!*(_QWORD*)(v11 + 24))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 24), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v11 + 24));
				}
			}
			else
			{
				--* (_QWORD*)(v11 + 8);
			}
			v18 = (v7 & *(_DWORD*)(a1 + 4 * v6 + 448)) == 0;
			v19 = ~v7;
			if (v18)
			{
				*(_DWORD*)(a1 + 4 * v6 + 472) &= v19;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16 * (v6 + 22)) + 24 * v5) = 0;
				*(_DWORD*)(a1 + 4 * v6 + 448) &= v19;
			}
			result = a1 + 448;
			if (a1 == -448)
				return 24i64;
		}
	}
	return result;
}

