//----- (0000000140338550) ----------------------------------------------------
_QWORD* __fastcall sub_140338550(__int64* a1)
{
	int CurrentThreadId; // r8d
	volatile signed __int64* v3; // rbx
	__int64 v4; // rcx
	_QWORD* v5; // rdi
	__int64 v6; // rax
	_QWORD* v7; // rdx
	volatile signed __int32* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	HANDLE EventW; // rcx
	__int64 v14[4]; // [rsp+20h] [rbp-38h] BYREF
	volatile signed __int32* v15; // [rsp+40h] [rbp-18h]
	__int64 v16; // [rsp+48h] [rbp-10h]
	__int64 v17; // [rsp+60h] [rbp+8h]

	v17 = *a1;
	CurrentThreadId = GetCurrentThreadId();
	v3 = (volatile signed __int64*)(v17 + 8);
	if (*(_DWORD*)v17 == CurrentThreadId)
	{
		++* v3;
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64(v3, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v17, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v17 = CurrentThreadId;
	}
LABEL_8:
	if (a1[5])
	{
		v5 = (_QWORD*)a1[6];
		sub_140337DE0(v5);
		v5[4] = v5[2];
	}
	else
	{
		v6 = a1[3];
		if (a1[2] == v6 || *(_QWORD*)(v6 - 48) == *(_QWORD*)(a1[3] - 32))
		{
			sub_140338240(v14);
			v7 = (_QWORD*)a1[3];
			if (v7 == (_QWORD*)a1[4])
			{
				sub_140338A20(a1 + 1, v7, v14);
			}
			else
			{
				if (v7)
				{
					v8 = v15;
					*v7 = v14[0];
					v7[1] = v14[1];
					v7[2] = v14[2];
					v9 = v16;
					v7[4] = v8;
					v7[5] = v9;
					_InterlockedIncrement(v8);
				}
				a1[3] += 48i64;
			}
			if (!_InterlockedDecrement(v15))
			{
				sub_14018B900(v16, 0);
				sub_14018B900((__int64)v15, 0);
			}
		}
		v10 = a1[3];
		v11 = *(_QWORD*)(v10 - 32);
		if (v11 >= *(_QWORD*)(v10 - 48))
		{
			v5 = 0i64;
		}
		else
		{
			v5 = (_QWORD*)(*(_QWORD*)(v10 - 8) + (v11 << 13));
			*(_QWORD*)(v10 - 32) = v11 + 1;
		}
	}
	if (*v3 <= 1ui64)
	{
		*(_DWORD*)v17 = 0;
		_InterlockedExchange64(v3, 0i64);
		if (*(_QWORD*)(v17 + 16))
		{
			if (!*(_QWORD*)(v17 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v17 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v17 + 24));
		}
		return v5;
	}
	else
	{
		--* v3;
		return v5;
	}
}

