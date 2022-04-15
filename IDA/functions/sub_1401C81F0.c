//----- (00000001401C81F0) ----------------------------------------------------
__int64 __fastcall sub_1401C81F0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r15
	__int64 v3; // rdi
	unsigned int v4; // r14d
	int v5; // r12d
	__int64 v6; // rbx
	int CurrentThreadId; // edx
	__int64 v8; // rcx
	int* v9; // rax
	__int64 v10; // rdx
	PVOID* v11; // rax
	HANDLE EventW; // rcx
	_DWORD* Value; // rax
	int v14; // eax
	void* v15; // rdx
	unsigned int v16; // r13d
	__int64 v17; // rdi
	__int64 v18; // rbx
	_QWORD* v19; // r15
	int v20; // edx
	__int64 v21; // rcx
	__int64 v22; // rax
	unsigned int v23; // ecx
	__int64 v24; // rsi
	HANDLE v25; // rcx
	int* v26; // rsi
	unsigned int v27; // eax
	__int64 v28; // rcx
	__int64 v29; // rbx
	HANDLE v30; // rcx
	int v31; // ebx
	int* v33; // [rsp+28h] [rbp-E0h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D8h] BYREF
	__int128 v35; // [rsp+38h] [rbp-D0h]
	__int64(__fastcall * *v36)(); // [rsp+48h] [rbp-C0h] BYREF
	__int128 v37; // [rsp+50h] [rbp-B8h]
	__int64 v38; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v39; // [rsp+68h] [rbp-A0h] BYREF
	_DWORD* v40; // [rsp+70h] [rbp-98h]
	__int64 v41[4]; // [rsp+78h] [rbp-90h] BYREF
	int v42; // [rsp+98h] [rbp-70h]
	__int64(__fastcall * *v43)(); // [rsp+A8h] [rbp-60h] BYREF
	__int128 v44; // [rsp+B0h] [rbp-58h]
	__int64(__fastcall * *v45)(); // [rsp+C8h] [rbp-40h] BYREF
	__int128 v46; // [rsp+D0h] [rbp-38h]
	int v47[4]; // [rsp+E8h] [rbp-20h] BYREF
	__int64 v48; // [rsp+F8h] [rbp-10h]
	void(__fastcall * v49)(__int64); // [rsp+100h] [rbp-8h]
	__int64 v50; // [rsp+158h] [rbp+50h]
	__int64 v52; // [rsp+168h] [rbp+60h] BYREF
	__int64 v53; // [rsp+170h] [rbp+68h]

	v2 = qword_140C63758;
	v53 = qword_140C63758;
	if ((dword_140C90180 & 1) == 0)
	{
		dword_140C90180 |= 1u;
		sub_1407DD89C(sub_14094DA30);
	}
	v3 = qword_140C90188;
	v4 = 0;
	v5 = 1;
	v50 = qword_140C90188;
	if (qword_140C90188)
		goto LABEL_24;
	v6 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v6 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v6 + 24);
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v6 + 16, CurrentThreadId);
				goto LABEL_11;
			}
		}
		*(_DWORD*)(v6 + 16) = CurrentThreadId;
	}
LABEL_11:
	if (!qword_140C90188)
	{
		v9 = sub_14018B280(128i64, 0);
		if (v9)
			v11 = sub_14019E5D0((PVOID*)v9, v10, 0);
		else
			v11 = 0i64;
		qword_140C90188 = (__int64)v11;
	}
	if (*(_QWORD*)(v6 + 24) <= 1ui64)
	{
		*(_DWORD*)(v6 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v6 + 24), 0i64);
		if (*(_QWORD*)(v6 + 32))
		{
			if (!*(_QWORD*)(v6 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v6 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v6 + 24);
	}
	v3 = qword_140C90188;
	v50 = qword_140C90188;
	if (qword_140C90188)
		LABEL_24:
	sub_14019E8F0(v3);
	Value = TlsGetValue(*(_DWORD*)(v2 + 4));
	v40 = Value;
	if (!Value || *Value)
	{
		*(_QWORD*)&v37 = 0i64;
		v36 = &off_140B5E648;
		*((_QWORD*)&v37 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v36);
		v45 = v36;
		v38 = 0x141D422D0i64;
		v46 = v37;
		v14 = sub_140196F30(&dword_140C8A264, 35, &v38, &v45);
		v15 = (void*)*((_QWORD*)&v37 + 1);
		v36 = &off_140B5E648;
	LABEL_70:
		v31 = v14;
		TlsSetValue(dwTlsIndex, v15);
		if (v31)
			DebugBreak();
		goto LABEL_72;
	}
	if (*(_DWORD*)(v2 + 108))
	{
		*(_QWORD*)&v35 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v35 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v43 = TlsValue;
		v39 = 0x141D42310i64;
		v44 = v35;
		v14 = sub_140196F30(&dword_140C8A268, 35, &v39, &v43);
		v15 = (void*)*((_QWORD*)&v35 + 1);
		TlsValue = &off_140B5E648;
		goto LABEL_70;
	}
	v49 = sub_1401C8740;
	v41[2] = (__int64)sub_1401C8740;
	v41[0] = 0x10000000Ai64;
	v48 = v2;
	v41[1] = v2;
	v41[3] = 0i64;
	v42 = 1;
	sub_14019DCA0((__int64)v41, 0, 0i64, &v33);
	v16 = v50;
	v17 = v53;
	*(_DWORD*)(v2 + 108) = 1;
	v18 = v2 + 8;
	v19 = (_QWORD*)(v2 + 48);
	do
	{
		v20 = GetCurrentThreadId();
		if (*(_DWORD*)v18 == v20)
		{
			++* (_QWORD*)(v18 + 8);
		}
		else
		{
			v21 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v18 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v21 >= 0x400)
				{
					sub_14019FB60(v18, v20);
					goto LABEL_37;
				}
			}
			*(_DWORD*)v18 = v20;
		}
	LABEL_37:
		v22 = sub_1401D76E0((__int64)v19);
		v24 = v22;
		if (v22)
		{
			v16 = *(_DWORD*)(v22 + 156);
			*(_DWORD*)(v22 + 156) = v16 + 1;
			if (v16 + 1 == *(_DWORD*)(v22 + 16))
			{
				if (v22 == v19[6])
					v19[6] = 0i64;
				else
					sub_1401D7680((__int64)v19, v22);
			}
		}
		if (*(_QWORD*)(v18 + 8) <= 1ui64)
		{
			*(_DWORD*)v18 = 0;
			_InterlockedExchange64((volatile __int64*)(v18 + 8), 0i64);
			if (*(_QWORD*)(v18 + 16))
			{
				if (!*(_QWORD*)(v18 + 24))
				{
					v25 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v18 + 24), (signed __int64)v25, 0i64))
						CloseHandle(v25);
				}
				SetEvent(*(HANDLE*)(v18 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v18 + 8);
		}
		if (!v24)
			break;
		sub_1401C89C0(v23, (__int64)v40, v24, v16);
		if (!*a2)
			break;
	} while ((unsigned int)sub_14001C520(a2) && *(_DWORD*)(v17 + 108));
	v26 = v33;
	*(_DWORD*)(v17 + 108) = 0;
	v3 = v50;
	if (v26)
	{
		(*(void(__fastcall**)(int*))(*(_QWORD*)v26 + 104i64))(v26);
		v47[0] = -1;
		(*(void(__fastcall**)(int*, int*))(*(_QWORD*)v26 + 32i64))(v26, v47);
		(*(void(__fastcall**)(int*))(*(_QWORD*)v26 + 8i64))(v26);
		v33 = 0i64;
	}
	sub_14003D8F0(&v52, v18);
	if (!v19[6])
	{
		v27 = 0;
		while (!*v19)
		{
			++v27;
			++v19;
			if (v27 >= 3)
				goto LABEL_61;
		}
	}
	v5 = 0;
LABEL_61:
	v28 = v52;
	if (*(_QWORD*)(v52 + 8) <= 1ui64)
	{
		*(_DWORD*)v52 = 0;
		_InterlockedExchange64((volatile __int64*)(v28 + 8), 0i64);
		if (*(_QWORD*)(v52 + 16))
		{
			v29 = v52;
			if (!*(_QWORD*)(v52 + 24))
			{
				v30 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v29 + 24), (signed __int64)v30, 0i64))
					CloseHandle(v30);
			}
			SetEvent(*(HANDLE*)(v29 + 24));
		}
		LOBYTE(v4) = v5 == 0;
	}
	else
	{
		--* (_QWORD*)(v52 + 8);
		LOBYTE(v4) = v5 == 0;
	}
LABEL_72:
	if (v3)
		sub_14019EA00(v3);
	return v4;
}
// 1401C82C6: variable 'v10' is possibly undefined
// 1401C8549: variable 'v23' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C8A264: using guessed type _DWORD dword_140C8A264;
// 140C8A268: using guessed type _DWORD dword_140C8A268;
// 140C90180: using guessed type int dword_140C90180;
// 140C90188: using guessed type __int64 qword_140C90188;
// 1401C81F0: using guessed type int var_60[4];

