//----- (00000001401C8750) ----------------------------------------------------
void __fastcall sub_1401C8750(__int64 a1, unsigned int a2)
{
	_DWORD* v2; // rsi
	unsigned int v3; // ebp
	__int64 v4; // rbx
	int CurrentThreadId; // eax
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	HANDLE EventW; // rcx
	unsigned int v17; // [rsp+48h] [rbp+10h]

	v2 = (_DWORD*)(a1 + 16i64 * a2);
	TlsSetValue(*(_DWORD*)(qword_140C63758 + 4), v2);
	if (v2[1])
	{
		v3 = v17;
		do
		{
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(qword_140C63758 + 176) + 24i64))(
				*(_QWORD*)(qword_140C63758 + 176),
				0xFFFFFFFFi64);
			v4 = qword_140C63758;
			CurrentThreadId = GetCurrentThreadId();
			LODWORD(v6) = *(_DWORD*)(v4 + 8);
			if ((_DWORD)v6 == CurrentThreadId)
			{
				++* (_QWORD*)(v4 + 16);
			}
			else
			{
				v6 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 16), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v6 >= 0x400)
					{
						sub_14019FB60(v4 + 8, CurrentThreadId);
						goto LABEL_10;
					}
				}
				*(_DWORD*)(v4 + 8) = CurrentThreadId;
			}
		LABEL_10:
			v7 = qword_140C63758;
			v8 = qword_140C63758 + 120;
			if (!*(_QWORD*)(qword_140C63758 + 168))
			{
				LODWORD(v9) = 3;
				while (1)
				{
					v9 = (unsigned int)(v9 - 1);
					v10 = *(_QWORD*)(v8 + 8 * v9);
					*(_QWORD*)(v8 + 48) = v10;
					if (v10)
						break;
					if (!(_DWORD)v9)
					{
						v11 = 0i64;
						goto LABEL_27;
					}
				}
				**(_QWORD**)(v10 + 136) = *(_QWORD*)(v10 + 144);
				v12 = *(_QWORD*)(v10 + 144);
				v13 = *(_QWORD*)(v10 + 136);
				if (v12)
					*(_QWORD*)(v12 + 136) = v13;
				else
					*(_QWORD*)(v8 + 8i64 * *(int*)(v10 + 44) + 24) = v13;
				v14 = qword_140C63758;
				*(_QWORD*)(v10 + 136) = 0i64;
				*(_QWORD*)(v10 + 144) = 0i64;
				LODWORD(v6) = *(_DWORD*)(v14 + 40);
				*(_DWORD*)(*(_QWORD*)(v8 + 48) + 152i64) = v6;
				++* (_DWORD*)(qword_140C63758 + 40);
				*(_DWORD*)(*(_QWORD*)(v8 + 48) + 40i64) = 3;
				v7 = qword_140C63758;
			}
			v11 = *(_QWORD*)(v8 + 48);
			if (v11)
			{
				v3 = *(_DWORD*)(v11 + 156);
				*(_DWORD*)(v11 + 156) = v3 + 1;
				if (v3 + 1 == *(_DWORD*)(v11 + 16))
				{
					if (v11 == *(_QWORD*)(v7 + 168))
					{
						*(_QWORD*)(v7 + 168) = 0i64;
					}
					else
					{
						**(_QWORD**)(v11 + 136) = *(_QWORD*)(v11 + 144);
						v6 = *(_QWORD*)(v11 + 144);
						v15 = *(_QWORD*)(v11 + 136);
						if (v6)
						{
							*(_QWORD*)(v6 + 136) = v15;
						}
						else
						{
							v6 = *(int*)(v11 + 44);
							*(_QWORD*)(v7 + 8 * v6 + 144) = v15;
						}
						*(_QWORD*)(v11 + 136) = 0i64;
						*(_QWORD*)(v11 + 144) = 0i64;
					}
				}
			}
		LABEL_27:
			if (*(_QWORD*)(v4 + 16) <= 1ui64)
			{
				*(_DWORD*)(v4 + 8) = 0;
				_InterlockedExchange64((volatile __int64*)(v4 + 16), 0i64);
				if (*(_QWORD*)(v4 + 24))
				{
					if (!*(_QWORD*)(v4 + 32))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 32), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v4 + 32));
				}
			}
			else
			{
				--* (_QWORD*)(v4 + 16);
			}
			if (v11)
				sub_1401C89C0(v6, (__int64)v2, v11, v3);
			else
				v2[1] = 0;
		} while (v2[1]);
	}
}
// 1401C898C: variable 'v6' is possibly undefined
// 140C63758: using guessed type __int64 qword_140C63758;

