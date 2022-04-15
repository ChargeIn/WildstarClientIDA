//----- (00000001401CF820) ----------------------------------------------------
void __fastcall sub_1401CF820(__int64 a1)
{
	int CurrentThreadId; // r8d
	__int64 v3; // rcx
	_QWORD* v4; // rsi
	int* v5; // rax
	HANDLE EventW; // rcx
	__int64 v7; // rdi
	unsigned int v8; // eax
	__int64 v9; // rdx
	__int64 v10; // rcx
	unsigned __int64 v11; // r12
	_QWORD* v12; // rdi
	_QWORD* v13; // r14
	__int64 v14; // rbp
	unsigned __int16* v15; // r15
	_QWORD* v16; // rbx
	__int64 v17; // rsi
	__int64 v18; // rax
	__int64 v19; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v22; // rcx
	HANDLE v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rdi
	__int64 v26; // rdx
	__int64 v27; // r8
	__int64 v28; // rbx
	HANDLE FileW; // rsi
	__int64 v30; // rcx
	_QWORD* v31; // rdx
	__int64 v32; // rdx
	int v33; // ecx
	_QWORD* v34; // [rsp+40h] [rbp-278h]
	unsigned __int64 v35; // [rsp+48h] [rbp-270h]
	int v36; // [rsp+50h] [rbp-268h] BYREF
	__int64 v37; // [rsp+58h] [rbp-260h]
	__int64(__fastcall * v38)(); // [rsp+60h] [rbp-258h]
	__int64 v39; // [rsp+68h] [rbp-250h]
	WCHAR FileName[264]; // [rsp+70h] [rbp-248h] BYREF

	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 104) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 112);
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 112), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60(a1 + 104, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 104) = CurrentThreadId;
	}
LABEL_8:
	v4 = *(_QWORD**)(a1 + 96);
	v34 = v4;
	v5 = sub_14018B280(32i64, 0);
	if (v5)
	{
		*((_QWORD*)v5 + 1) = 0i64;
		*(_QWORD*)v5 = 0i64;
		*((_QWORD*)v5 + 3) = 0i64;
		*((_QWORD*)v5 + 2) = 0i64;
	}
	else
	{
		v5 = 0i64;
	}
	*(_QWORD*)(a1 + 96) = v5;
	if (*(_QWORD*)(a1 + 112) <= 1ui64)
	{
		*(_DWORD*)(a1 + 104) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 112), 0i64);
		if (*(_QWORD*)(a1 + 120))
		{
			if (!*(_QWORD*)(a1 + 128))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 128), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 128));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 112);
	}
	sub_1401CE4B0((__int64)v4);
	v7 = a1 + 168;
	v8 = GetCurrentThreadId();
	v9 = v8;
	if (*(_DWORD*)(a1 + 168) == v8)
	{
		++* (_QWORD*)(a1 + 176);
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 176), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(a1 + 168, v8);
				goto LABEL_25;
			}
		}
		*(_DWORD*)v7 = v8;
	}
LABEL_25:
	v11 = 0i64;
	v35 = v4[1];
	if (v35)
	{
		v12 = v4;
		do
		{
			v13 = *(_QWORD**)(a1 + 144);
			v14 = v13[1];
			v15 = (unsigned __int16*)(v12[2] + 2i64 * *(_QWORD*)(*v12 + 8 * v11));
			v16 = v13;
			v17 = v14;
			if (v14)
			{
				do
				{
					if ((int)sub_1401CE5B0(*(_WORD**)(v17 + 32), v15) < 0)
					{
						v17 = *(_QWORD*)(v17 + 24);
					}
					else
					{
						v16 = (_QWORD*)v17;
						v17 = *(_QWORD*)(v17 + 16);
					}
				} while (v17);
				do
				{
					if ((int)sub_1401CE5B0(v15, *(unsigned __int16**)(v14 + 32)) >= 0)
					{
						v14 = *(_QWORD*)(v14 + 24);
					}
					else
					{
						v13 = (_QWORD*)v14;
						v14 = *(_QWORD*)(v14 + 16);
					}
				} while (v14);
			}
			while (v16 != v13)
			{
				v9 = v16[5];
				if (!*(_QWORD*)(v9 + 72))
				{
					*(_QWORD*)(v9 + 72) = a1 + 200;
					*(_QWORD*)(v9 + 80) = *(_QWORD*)(a1 + 200);
					*(_QWORD*)(a1 + 200) = v9;
					v18 = *(_QWORD*)(v9 + 80);
					if (v18)
						*(_QWORD*)(v18 + 72) = v9 + 80;
				}
				v19 = v16[3];
				if (v19)
				{
					v16 = (_QWORD*)v16[3];
					for (i = *(_QWORD**)(v19 + 16); i; i = (_QWORD*)i[2])
						v16 = i;
				}
				else
				{
					for (j = v16[1]; v16 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v16 = (_QWORD*)j;
					if (v16[3] != j)
						v16 = (_QWORD*)j;
				}
			}
			v22 = *(_QWORD*)(a1 + 216);
			if (v22 || *(_QWORD*)(a1 + 224))
				(*(void(__fastcall**)(__int64, unsigned __int16*))(a1 + 224))(v22, v15);
			++v11;
		} while (v11 < v35);
		v4 = v34;
		v7 = a1 + 168;
	}
	if (*(_QWORD*)(v7 + 8) <= 1ui64)
	{
		*(_DWORD*)v7 = 0;
		_InterlockedExchange64((volatile __int64*)(v7 + 8), 0i64);
		if (*(_QWORD*)(v7 + 16))
		{
			if (!*(_QWORD*)(v7 + 24))
			{
				v23 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 24), (signed __int64)v23, 0i64))
					CloseHandle(v23);
			}
			SetEvent(*(HANDLE*)(v7 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v7 + 8);
	}
	v24 = v4[2];
	if (v24)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16, v9);
	if (*v4)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(*v4 - 16i64) + 8i64))(*v4 - 16i64, v9);
	sub_14018B900((__int64)v4, 0);
	v25 = a1 + 200;
	sub_1401CFE80((__int64*)(a1 + 200), v26, (__int64(__fastcall*)(__int64, __int64, _QWORD))sub_1401CEBF0);
	if (*(_QWORD*)(a1 + 200))
	{
		do
		{
			v28 = *(_QWORD*)v25;
			sub_1401B5020(*(__int64*)&qword_140C63788, FileName, v27, *(const WCHAR**)(*(_QWORD*)v25 + 16i64));
			FileW = CreateFileW(FileName, 0x80000000, 1u, 0i64, 3u, 0, 0i64);
			if (FileW == (HANDLE)-1i64 && GetLastError() == 5)
				break;
			v30 = *(_QWORD*)v25;
			v31 = *(_QWORD**)(*(_QWORD*)v25 + 72i64);
			if (v31)
				*v31 = *(_QWORD*)(v30 + 80);
			v32 = *(_QWORD*)(v30 + 80);
			if (v32)
				*(_QWORD*)(v32 + 72) = *(_QWORD*)(v30 + 72);
			*(_QWORD*)(v30 + 72) = 0i64;
			*(_QWORD*)(v30 + 80) = 0i64;
			v33 = *(_DWORD*)(v28 + 24);
			if (v33)
			{
				if (v33 == 1)
					(*(void(__fastcall**)(_QWORD, _QWORD))(v28 + 40))(*(_QWORD*)(v28 + 32), *(_QWORD*)(v28 + 48));
			}
			else
			{
				(*(void(__fastcall**)(_QWORD))(v28 + 40))(*(_QWORD*)(v28 + 32));
			}
			if (FileW != (HANDLE)-1i64)
				CloseHandle(FileW);
		} while (*(_QWORD*)v25);
	}
	if (*(_QWORD*)v25)
	{
		v36 = 0;
		v38 = sub_1401CF820;
		v37 = a1;
		v39 = 0i64;
		sub_140195960(a1 + 8, 2500, (__int64)&v36, 4);
	}
}
// 1401CFA05: conditional instruction was optimized away because rbp.8!=0
// 1401CFB72: variable 'v9' is possibly undefined
// 1401CFBA3: variable 'v26' is possibly undefined
// 1401CFBD3: variable 'v27' is possibly undefined

