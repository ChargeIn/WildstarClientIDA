//----- (000000014019EDC0) ----------------------------------------------------
int __fastcall sub_14019EDC0(__int64 a1, int a2)
{
	__int64 v2; // r13
	int v3; // esi
	__int64 v4; // rbx
	int CurrentThreadId; // r8d
	__int64 v6; // rcx
	__int64* v7; // rdi
	int v8; // eax
	HANDLE CurrentProcess; // rax
	__int64 v10; // rdx
	__int64 v11; // r14
	void* v12; // rsi
	DWORD64 v13; // rdx
	__int64 v14; // r15
	unsigned __int64 i; // rdi
	int* v16; // rax
	int* v17; // rsi
	_QWORD* v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // r8
	int v22; // eax
	__int64 k; // rax
	__int64 j; // rdi
	unsigned __int64 v25; // rax
	HANDLE EventW; // rcx
	HANDLE v29; // [rsp+38h] [rbp-890h]
	__int64 v30; // [rsp+40h] [rbp-888h] BYREF
	__int64 v31; // [rsp+48h] [rbp-880h] BYREF
	unsigned __int64 v32; // [rsp+50h] [rbp-878h] BYREF
	struct _SYMBOL_INFO v33[23]; // [rsp+60h] [rbp-868h] BYREF

	v2 = qword_140C63760;
	v3 = a2;
	v4 = qword_140C63760 + 16;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 8);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v4, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v4 = CurrentThreadId;
	}
LABEL_8:
	if (v3)
	{
		v7 = (__int64*)(v2 + 64);
		if (*(_QWORD*)(v2 + 64))
		{
			if (qword_140C886B8)
			{
				v8 = *(_DWORD*)(qword_140C886B8 + 4);
				if (v8 != -1)
					*(_DWORD*)(qword_140C886B8 + 4) = v8 + 1;
			}
			if (!*(_QWORD*)(v2 + 72))
				sub_140191420((__int64*)(v2 + 72));
			CurrentProcess = GetCurrentProcess();
			v11 = *v7;
			v12 = CurrentProcess;
			v29 = CurrentProcess;
			if (*v7)
			{
				do
				{
					if (!*(_QWORD*)(v11 + 8))
					{
						if (*(_QWORD*)(v2 + 72))
						{
							sub_1407E4830((int*)v33, 0i64, 0x58ui64);
							v13 = *(_QWORD*)v11;
							v33[0].SizeOfStruct = 88;
							v33[0].MaxNameLen = 2000;
							if (sub_140191280(v12, v13, &v32, v33))
							{
								v14 = *(_QWORD*)(v11 + 8);
								for (i = 0i64; v33[0].Name[i]; ++i)
									;
								v16 = sub_14018B280(i + 17, 0);
								if (v16)
								{
									*(_QWORD*)v16 = off_140B55060;
									*((_QWORD*)v16 + 1) = i;
								}
								else
								{
									v16 = 0i64;
								}
								v17 = v16 + 4;
								sub_1407DB590(v16 + 4, (int*)v33[0].Name, i);
								*((_BYTE*)v17 + i) = 0;
								*(_QWORD*)(v11 + 8) = v17;
								if (v14)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
								v12 = v29;
							}
						}
						if (!*(_QWORD*)(v11 + 8))
						{
							v18 = sub_14018DED0(&v30, (__int64)&unk_1409E211C, *(_QWORD*)v11);
							v10 = *(_QWORD*)(v11 + 8);
							*(_QWORD*)(v11 + 8) = *v18;
							*v18 = v10;
							if (v30)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v30 - 16) + 8i64))(v30 - 16);
						}
					}
					if (*(_QWORD*)(v11 + 24))
					{
						v19 = sub_14018DED0(&v31, (__int64)"%s (%s)", *(const char**)(v11 + 8), *(const char**)(v11 + 24));
						v10 = *(_QWORD*)(v11 + 8);
						*(_QWORD*)(v11 + 8) = *v19;
						*v19 = v10;
						if (v31)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
						v20 = *(_QWORD*)(v11 + 24);
						*(_QWORD*)(v11 + 24) = 0i64;
						if (v20)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
					}
					v11 = *(_QWORD*)(v11 + 120);
				} while (v11);
				v4 = v2 + 16;
				v7 = (__int64*)(v2 + 64);
			}
			sub_14019F4C0(v7, v10, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_14019E590);
			sub_14019F3F0(v7, (__int64*)(v2 + 56), v21, (int(__fastcall*)(__int64, __int64, _QWORD))sub_14019E590);
			v3 = a2;
			if (qword_140C886B8)
			{
				v22 = *(_DWORD*)(qword_140C886B8 + 4);
				if (v22)
					*(_DWORD*)(qword_140C886B8 + 4) = v22 - 1;
			}
		}
		if (*(_DWORD*)(v2 + 48))
		{
			for (j = *(_QWORD*)(v2 + 56); j; j = *(_QWORD*)(j + 120))
				sub_14019EB40(j);
		}
		else
		{
			for (k = *(_QWORD*)(v2 + 56); k; k = *(_QWORD*)(k + 120))
			{
				*(_QWORD*)(k + 72) = 0i64;
				*(_DWORD*)(k + 32) = 0;
			}
		}
	}
	*(_DWORD*)(v2 + 48) = v3;
	v25 = *(_QWORD*)(v4 + 8);
	if (v25 <= 1)
	{
		*(_DWORD*)v4 = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
		v25 = *(_QWORD*)(v4 + 16);
		if (v25)
		{
			if (!*(_QWORD*)(v4 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v25) = SetEvent(*(HANDLE*)(v4 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 8);
	}
	return v25;
}
// 14019F03C: variable 'v10' is possibly undefined
// 14019F04F: variable 'v21' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C886B8: using guessed type __int64 qword_140C886B8;

