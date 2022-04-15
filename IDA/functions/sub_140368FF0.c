//----- (0000000140368FF0) ----------------------------------------------------
__int64 __fastcall sub_140368FF0(__int64 a1, _DWORD* a2)
{
	int* v2; // rbx
	int CurrentThreadId; // eax
	int v6; // r8d
	volatile signed __int64* v7; // rbx
	unsigned int v8; // edi
	__int64 v9; // rcx
	int* v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rcx
	int v13; // r15d
	__int64* v14; // rcx
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+70h] [rbp+8h]
	__int64 v18; // [rsp+78h] [rbp+10h] BYREF

	v2 = (int*)(a1 + 4992);
	v17 = a1 + 4992;
	CurrentThreadId = GetCurrentThreadId();
	v6 = *v2;
	v7 = (volatile signed __int64*)(v17 + 8);
	v8 = 1;
	if (v6 == CurrentThreadId)
	{
		++* v7;
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64(v7, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60(v17, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v17 = CurrentThreadId;
	}
LABEL_8:
	if (a2[12])
	{
		v10 = sub_14018B280(224i64, 0);
		v11 = (__int64)v10;
		if (v10)
		{
			*((_QWORD*)v10 + 25) = 0i64;
			*((_QWORD*)v10 + 26) = 0i64;
			*((_QWORD*)v10 + 18) = 0i64;
			v10[38] = 0;
			*((_OWORD*)v10 + 5) = xmmword_140C78500;
			*((_OWORD*)v10 + 6) = xmmword_140C78510;
			*((_OWORD*)v10 + 7) = 0i64;
			*((_OWORD*)v10 + 8) = 0i64;
			*(_QWORD*)(v10 + 39) = 0i64;
			*(_QWORD*)(v10 + 41) = 0i64;
			*(_QWORD*)(v10 + 43) = 0i64;
			*(_QWORD*)(v10 + 45) = 0i64;
			v10[47] = dword_140C7974C;
			*((_WORD*)v10 + 96) = word_140C79750;
			sub_1407E4830(v10, 0i64, 0x50ui64);
			v18 = v11;
		}
		else
		{
			v11 = 0i64;
			v18 = 0i64;
		}
		v13 = sub_140391A50(v11, a1, (__int64)a2);
		if (v13 < 0)
		{
			if (v11)
				sub_140369200(v12);
			v8 = v13;
			goto LABEL_22;
		}
		if (*a2)
		{
			if (*a2 != 1)
			{
			LABEL_21:
				v8 = 0;
				goto LABEL_22;
			}
			v14 = (__int64*)(a1 + 4976);
		}
		else
		{
			v14 = (__int64*)(a1 + 4960);
		}
		sub_140033260(v14, &v18);
		goto LABEL_21;
	}
LABEL_22:
	if (*v7 <= 1ui64)
	{
		*(_DWORD*)v17 = 0;
		_InterlockedExchange64(v7, 0i64);
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
		return v8;
	}
	else
	{
		--* v7;
		return v8;
	}
}
// 140369147: variable 'v12' is possibly undefined
// 140C78500: using guessed type __int128 xmmword_140C78500;
// 140C78510: using guessed type __int128 xmmword_140C78510;
// 140C7974C: using guessed type int dword_140C7974C;
// 140C79750: using guessed type __int16 word_140C79750;

