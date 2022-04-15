//----- (00000001403311D0) ----------------------------------------------------
int __fastcall sub_1403311D0(__int64 a1, unsigned __int16 a2)
{
	unsigned int* v3; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // r9
	__int64 v9; // rcx
	__int64 v10; // r14
	__int64 v11; // rcx
	__int64 v12; // rax
	unsigned __int64 v13; // rax
	HANDLE EventW; // rcx
	__int64 v16; // [rsp+60h] [rbp+8h] BYREF
	unsigned __int16 v17; // [rsp+68h] [rbp+10h] BYREF
	__int64 v18; // [rsp+70h] [rbp+18h] BYREF

	v3 = (unsigned int*)(a1 + 8);
	CurrentThreadId = GetCurrentThreadId();
	v7 = *v3;
	v8 = CurrentThreadId;
	if ((_DWORD)v7 == CurrentThreadId)
	{
		++* ((_QWORD*)v3 + 1);
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)v3 + 1, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60((__int64)v3, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v3 = CurrentThreadId;
	}
LABEL_8:
	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 176))
	{
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a2);
		if (v10)
		{
			v11 = *(_QWORD*)(v10 + 24);
			if (*(_DWORD*)(v11 + 280) != 1)
			{
				v16 = *(_QWORD*)(v10 + 24);
				if (v11)
					(**(void(__fastcall***)(__int64, __int64, __int64, __int64))v11)(v11, v6, v7, v8);
				(*(void(__fastcall**)(_QWORD, __int64*, __int64, __int64))(**(_QWORD**)(a1 + 48) + 24i64))(
					*(_QWORD*)(a1 + 48),
					&v16,
					v7,
					v8);
			}
			v18 = *(_QWORD*)(v10 + 24);
			sub_140334470(a1 + 208, &v18);
			(**(void(__fastcall***)(__int64, __int64))v10)(v10, 1i64);
			if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 176))
			{
				v12 = *(_QWORD*)(a1 + 168);
				if (*(_QWORD*)(v12 + 8i64 * a2))
				{
					*(_QWORD*)(v12 + 8i64 * a2) = 0i64;
					v17 = a2;
					sub_1403342D0((__int64*)(a1 + 192), &v17);
				}
			}
		}
	}
	v13 = *((_QWORD*)v3 + 1);
	if (v13 <= 1)
	{
		*v3 = 0;
		_InterlockedExchange64((volatile __int64*)v3 + 1, 0i64);
		v13 = *((_QWORD*)v3 + 2);
		if (v13)
		{
			if (!*((_QWORD*)v3 + 3))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)v3 + 3, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v13) = SetEvent(*((HANDLE*)v3 + 3));
		}
	}
	else
	{
		--* ((_QWORD*)v3 + 1);
	}
	return v13;
}
// 140331281: variable 'v6' is possibly undefined
// 140331281: variable 'v7' is possibly undefined
// 140331281: variable 'v8' is possibly undefined

