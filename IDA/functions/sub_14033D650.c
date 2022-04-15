//----- (000000014033D650) ----------------------------------------------------
void* __fastcall sub_14033D650(__int64 a1, int** a2)
{
	int* v4; // r15
	__int64 v5; // rax
	_QWORD* v6; // rdx
	__int64 v7; // rax
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	int* v10; // rbx
	int CurrentThreadId; // edx
	__int64 v12; // rcx
	int v13; // r12d
	HANDLE EventW; // rcx
	_QWORD* v15; // rdx
	__int64 v16; // rcx
	_QWORD* v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rcx
	_QWORD* v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rcx
	int v23; // edx
	__int64 v24; // rcx
	HANDLE v25; // rcx
	__int64 v26; // rcx
	const wchar_t** v27; // rdx
	_QWORD* v28; // rdx
	__int64 v29; // rax
	__int64 v30; // rcx
	_QWORD* v31; // rdx
	__int64 v32; // rax
	__int64 v33; // rcx
	DWORD CurrentProcessId; // eax
	void* result; // rax
	_QWORD* v36; // rdx
	__int64 v37; // rax
	_QWORD* v38; // rdx
	__int64 v39; // rax
	__int64 v40; // rcx
	_QWORD* v41; // rdx
	__int64 v42; // rax
	__int64 v43; // rcx
	_QWORD* v44; // rdx
	__int64 v45; // rax
	__int64 v46; // rcx
	_QWORD* v47; // rdx
	__int64 v48; // rcx
	const wchar_t* v49; // [rsp+28h] [rbp-79h] BYREF
	__int64 v50; // [rsp+30h] [rbp-71h]
	__int64 v51; // [rsp+38h] [rbp-69h]
	__int64 v52; // [rsp+40h] [rbp-61h] BYREF
	__int64 v53; // [rsp+48h] [rbp-59h]
	__int64 v54; // [rsp+50h] [rbp-51h]
	__int64 v55; // [rsp+58h] [rbp-49h]
	char v56[4]; // [rsp+68h] [rbp-39h] BYREF
	unsigned int v57; // [rsp+6Ch] [rbp-35h]
	__int64 v58; // [rsp+70h] [rbp-31h]
	__int64 v59; // [rsp+78h] [rbp-29h]
	__int64 v60; // [rsp+80h] [rbp-21h]
	__int64 v61; // [rsp+88h] [rbp-19h]
	__int64 v62; // [rsp+90h] [rbp-11h]
	void* v63; // [rsp+98h] [rbp-9h]
	__int64 v64; // [rsp+A0h] [rbp-1h]
	__int64 v65; // [rsp+A8h] [rbp+7h]

	v4 = sub_14018B280(48i64, 0);
	if (v4)
	{
		*(_QWORD*)v4 = off_140B64A10;
		v4[2] = 1;
		*((_QWORD*)v4 + 3) = 0i64;
		*((_QWORD*)v4 + 4) = 0i64;
		*((_QWORD*)v4 + 5) = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	sub_14033A7E0((_QWORD*)v4 + 2, 0x10ui64);
	v5 = *(unsigned int*)(a1 + 168);
	v6 = (_QWORD*)*((_QWORD*)v4 + 4);
	v50 = v5;
	v51 = v5;
	v49 = L"threads created";
	if (v6 == *((_QWORD**)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v6, &v49);
	}
	else
	{
		if (v6)
		{
			*v6 = L"threads created";
			v6[1] = v5;
			v6[2] = v5;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	v7 = *(unsigned int*)(a1 + 172);
	v49 = L"threads active";
	v50 = v7;
	if ((unsigned int)v7 > *(_DWORD*)(a1 + 356))
		*(_DWORD*)(a1 + 356) = v7;
	v8 = (_QWORD*)*((_QWORD*)v4 + 4);
	v9 = *(unsigned int*)(a1 + 356);
	v51 = v9;
	if (v8 == *((_QWORD**)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v8, &v49);
	}
	else
	{
		if (v8)
		{
			*v8 = L"threads active";
			v8[1] = v7;
			v8[2] = v9;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	v10 = (int*)(a1 + 184);
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 184) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 192);
	}
	else
	{
		v12 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 192), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v12 >= 0x400)
			{
				sub_14019FB60(a1 + 184, CurrentThreadId);
				goto LABEL_23;
			}
		}
		*v10 = CurrentThreadId;
	}
LABEL_23:
	v13 = ((__int64)(*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 72)) >> 4)
		+ 31 * ((__int64)(*(_QWORD*)(a1 + 88) - *(_QWORD*)(a1 + 56)) >> 3)
		+ ((__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 32)) >> 4)
		- 31;
	if (*(_QWORD*)(a1 + 192) <= 1ui64)
	{
		*v10 = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 192), 0i64);
		if (*(_QWORD*)(a1 + 200))
		{
			if (!*(_QWORD*)(a1 + 208))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 208), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 208));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 192);
	}
	v15 = (_QWORD*)*((_QWORD*)v4 + 4);
	v16 = *(unsigned int*)(a1 + 344);
	v50 = v13;
	v49 = L"resultQueueLength";
	v51 = v16;
	if (v15 == *((_QWORD**)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v15, &v49);
	}
	else
	{
		if (v15)
		{
			*v15 = L"resultQueueLength";
			v15[1] = v13;
			v15[2] = v16;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	v17 = (_QWORD*)*((_QWORD*)v4 + 4);
	v18 = *(unsigned int*)(a1 + 332);
	v19 = *(unsigned int*)(a1 + 348);
	v50 = v18;
	v51 = v19;
	v49 = L"send Operations in progress";
	if (v17 == *((_QWORD**)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v17, &v49);
	}
	else
	{
		if (v17)
		{
			*v17 = L"send Operations in progress";
			v17[1] = v18;
			v17[2] = v19;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	v20 = (_QWORD*)*((_QWORD*)v4 + 4);
	v21 = *(unsigned int*)(a1 + 336);
	v22 = *(unsigned int*)(a1 + 352);
	v50 = v21;
	v51 = v22;
	v49 = L"recv Operations in progress";
	if (v20 == *((_QWORD**)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v20, &v49);
	}
	else
	{
		if (v20)
		{
			*v20 = L"recv Operations in progress";
			v20[1] = v21;
			v20[2] = v22;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	v49 = L"socket count";
	v23 = GetCurrentThreadId();
	if (*v10 == v23)
	{
		++* (_QWORD*)(a1 + 192);
	}
	else
	{
		v24 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 192), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v24 >= 0x400)
			{
				sub_14019FB60(a1 + 184, v23);
				goto LABEL_52;
			}
		}
		*v10 = v23;
	}
LABEL_52:
	v50 = *(unsigned int*)(a1 + 112);
	if (*(_QWORD*)(a1 + 192) <= 1ui64)
	{
		*v10 = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 192), 0i64);
		if (*(_QWORD*)(a1 + 200))
		{
			if (!*(_QWORD*)(a1 + 208))
			{
				v25 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 208), (signed __int64)v25, 0i64))
					CloseHandle(v25);
			}
			SetEvent(*(HANDLE*)(a1 + 208));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 192);
	}
	v26 = *(unsigned int*)(a1 + 340);
	v27 = (const wchar_t**)*((_QWORD*)v4 + 4);
	v51 = v26;
	if (v27 == *((const wchar_t***)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v27, &v49);
	}
	else
	{
		if (v27)
		{
			*v27 = v49;
			v27[1] = (const wchar_t*)v50;
			v27[2] = (const wchar_t*)v26;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65808 + 216i64))(qword_140C65808, &v52);
	v28 = (_QWORD*)*((_QWORD*)v4 + 4);
	v29 = v54;
	v30 = v55;
	v50 = v54;
	v49 = L"overlappedPlusFree";
	v51 = v55;
	if (v28 == *((_QWORD**)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v28, &v49);
	}
	else
	{
		if (v28)
		{
			*v28 = L"overlappedPlusFree";
			v28[1] = v29;
			v28[2] = v30;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	v31 = (_QWORD*)*((_QWORD*)v4 + 4);
	v32 = v52;
	v33 = v53;
	v50 = v52;
	v51 = v53;
	v49 = L"numBuffersFree";
	if (v31 == *((_QWORD**)v4 + 5))
	{
		sub_14033A9D0((_QWORD*)v4 + 2, v31, &v49);
	}
	else
	{
		if (v31)
		{
			*v31 = L"numBuffersFree";
			v31[1] = v32;
			v31[2] = v33;
		}
		*((_QWORD*)v4 + 4) += 24i64;
	}
	CurrentProcessId = GetCurrentProcessId();
	result = OpenProcess(0x410u, 0, CurrentProcessId);
	if (result)
	{
		GetProcessMemoryInfo(result, v56, 72i64);
		v36 = (_QWORD*)*((_QWORD*)v4 + 4);
		v37 = v57;
		v50 = v57;
		v51 = 0i64;
		v49 = L"PageFaultCount";
		if (v36 == *((_QWORD**)v4 + 5))
		{
			sub_14033A9D0((_QWORD*)v4 + 2, v36, &v49);
		}
		else
		{
			if (v36)
			{
				*v36 = L"PageFaultCount";
				v36[1] = v37;
				v36[2] = 0i64;
			}
			*((_QWORD*)v4 + 4) += 24i64;
		}
		v38 = (_QWORD*)*((_QWORD*)v4 + 4);
		v39 = v59;
		v40 = v58;
		v50 = v59;
		v51 = v58;
		v49 = L"WorkingSetSize";
		if (v38 == *((_QWORD**)v4 + 5))
		{
			sub_14033A9D0((_QWORD*)v4 + 2, v38, &v49);
		}
		else
		{
			if (v38)
			{
				*v38 = L"WorkingSetSize";
				v38[1] = v39;
				v38[2] = v40;
			}
			*((_QWORD*)v4 + 4) += 24i64;
		}
		v41 = (_QWORD*)*((_QWORD*)v4 + 4);
		v42 = v64;
		v43 = v65;
		v50 = v64;
		v51 = v65;
		v49 = L"PagefileUsage";
		if (v41 == *((_QWORD**)v4 + 5))
		{
			sub_14033A9D0((_QWORD*)v4 + 2, v41, &v49);
		}
		else
		{
			if (v41)
			{
				*v41 = L"PagefileUsage";
				v41[1] = v42;
				v41[2] = v43;
			}
			*((_QWORD*)v4 + 4) += 24i64;
		}
		v44 = (_QWORD*)*((_QWORD*)v4 + 4);
		v45 = v61;
		v46 = v60;
		v50 = v61;
		v51 = v60;
		v49 = L"QuotaPagedPoolUsage";
		if (v44 == *((_QWORD**)v4 + 5))
		{
			sub_14033A9D0((_QWORD*)v4 + 2, v44, &v49);
		}
		else
		{
			if (v44)
			{
				*v44 = L"QuotaPagedPoolUsage";
				v44[1] = v45;
				v44[2] = v46;
			}
			*((_QWORD*)v4 + 4) += 24i64;
		}
		v47 = (_QWORD*)*((_QWORD*)v4 + 4);
		result = v63;
		v48 = v62;
		v50 = (__int64)v63;
		v51 = v62;
		v49 = L"QuotaNonPagedPoolUsage";
		if (v47 == *((_QWORD**)v4 + 5))
		{
			result = sub_14033A9D0((_QWORD*)v4 + 2, v47, &v49);
		}
		else
		{
			if (v47)
			{
				*v47 = L"QuotaNonPagedPoolUsage";
				v47[1] = result;
				v47[2] = v48;
			}
			*((_QWORD*)v4 + 4) += 24i64;
		}
	}
	*a2 = v4;
	return result;
}
// 1409596E0: using guessed type __int64 __fastcall GetProcessMemoryInfo(_QWORD, _QWORD, _QWORD);
// 140AF3C08: using guessed type wchar_t aWorkingsetsize[15];
// 140AF3C28: using guessed type wchar_t aPagefaultcount[15];
// 140AF3C48: using guessed type wchar_t aQuotapagedpool[20];
// 140AF3C70: using guessed type wchar_t aPagefileusage[14];
// 140AF3CB8: using guessed type wchar_t aQuotanonpagedp[23];
// 140AF3D18: using guessed type wchar_t aThreadsActive[15];
// 140AF3D38: using guessed type wchar_t aThreadsCreated[16];
// 140AF3D58: using guessed type wchar_t aSendOperations[28];
// 140AF3D90: using guessed type wchar_t aResultqueuelen[18];
// 140AF3DB8: using guessed type wchar_t aSocketCount[13];
// 140AF3DD8: using guessed type wchar_t aRecvOperations[28];
// 140AF3E10: using guessed type wchar_t aNumbuffersfree[15];
// 140AF3E30: using guessed type wchar_t aOverlappedplus[19];
// 140B64A10: using guessed type __int64 (__fastcall *off_140B64A10[23])();
// 140C65808: using guessed type __int64 qword_140C65808;
// 14033D650: using guessed type char var_90[4];

