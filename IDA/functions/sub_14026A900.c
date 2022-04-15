//----- (000000014026A900) ----------------------------------------------------
__int64 __fastcall sub_14026A900(__int64 a1, int a2)
{
	_DWORD* v2; // rbx
	volatile signed __int64* v5; // r14
	int CurrentThreadId; // edx
	__int64 v7; // rcx
	int v8; // eax
	int v9; // ebx
	__int64 v10; // rsi
	__int64 i; // rsi
	__int64 j; // rdx
	__int64 k; // rsi
	__int64 m; // r8
	__int64 n; // rsi
	__int64 ii; // rsi
	__int64 jj; // rsi
	__int64 kk; // rsi
	int v19; // eax
	__int64 v20; // rsi
	int v21; // eax
	__int64 v22; // rsi
	__int64 mm; // rsi
	__int64 v24; // rcx
	__int64 v25; // rsi
	int v26; // eax
	HANDLE EventW; // rcx
	__int64 v29; // [rsp+40h] [rbp+8h]

	v2 = (_DWORD*)(a1 + 24);
	v29 = a1 + 24;
	v5 = (volatile signed __int64*)(a1 + 32);
	CurrentThreadId = GetCurrentThreadId();
	if (*v2 == CurrentThreadId)
	{
		++* v5;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(v5, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v29, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v29 = CurrentThreadId;
	}
LABEL_8:
	v8 = *(_DWORD*)(a1 + 6624);
	if (v8 >= a2)
	{
		if (v8 > a2)
			sub_1401981B0((__int64**)(a1 + 16));
	}
	else
	{
		if (v8 < 1 && a2 >= 1)
		{
			v9 = sub_14026ADA0(a1);
			if (v9 < 0)
				goto LABEL_88;
		}
		if (*(int*)(a1 + 6624) < 2 && a2 >= 2)
		{
			v9 = sub_14026B680(a1);
			if (v9 < 0)
				goto LABEL_88;
		}
	}
	v10 = *(_QWORD*)(a1 + 7176);
	if (!v10)
	{
	LABEL_21:
		for (i = *(_QWORD*)(a1 + 7184); i; i = *(_QWORD*)(i + 64))
		{
			v9 = sub_140289BD0(i, a2);
			if (v9 < 0)
				goto LABEL_88;
		}
		for (j = *(_QWORD*)(a1 + 7192); j; j = *(_QWORD*)(j + 56))
		{
			if (*(int*)(j + 32) < 2 && a2 >= 2)
				*(_DWORD*)(j + 40) = *(_DWORD*)(*(_QWORD*)(j + 16) + 7080i64) - 1;
			*(_DWORD*)(j + 32) = a2;
		}
		for (k = *(_QWORD*)(a1 + 7200); k; k = *(_QWORD*)(k + 64))
		{
			v9 = sub_14028AF50(k, a2);
			if (v9 < 0)
				goto LABEL_88;
		}
		for (m = *(_QWORD*)(a1 + 7208); m; m = *(_QWORD*)(m + 64))
		{
			if (*(int*)(m + 36) < 2 && a2 >= 2)
				*(_DWORD*)(m + 44) = *(_DWORD*)(*(_QWORD*)(m + 16) + 4i64 * *(int*)(m + 28) + 7128) - 1;
			*(_DWORD*)(m + 36) = a2;
		}
		for (n = *(_QWORD*)(a1 + 7216); n; n = *(_QWORD*)(n + 248))
		{
			v9 = sub_14028C810(n, a2);
			if (v9 < 0)
				goto LABEL_88;
		}
		for (ii = *(_QWORD*)(a1 + 7224); ii; ii = *(_QWORD*)(ii + 232))
		{
			v9 = sub_14028FCD0(ii, a2);
			if (v9 < 0)
				goto LABEL_88;
		}
		for (jj = *(_QWORD*)(a1 + 7232); jj; jj = *(_QWORD*)(jj + 368))
		{
			v9 = sub_140292530(jj, a2);
			if (v9 < 0)
				goto LABEL_88;
		}
		for (kk = *(_QWORD*)(a1 + 7240); kk; kk = *(_QWORD*)(kk + 152))
		{
			if (*(int*)(kk + 40) >= 1)
			{
				if (a2 < 1)
				{
					v19 = sub_140295B40(kk);
				LABEL_53:
					v9 = v19;
					if (v19 < 0)
						goto LABEL_88;
				}
			}
			else if (a2 >= 1)
			{
				v19 = sub_140295AA0(kk);
				goto LABEL_53;
			}
			*(_DWORD*)(kk + 40) = a2;
		}
		v20 = *(_QWORD*)(a1 + 7248);
		if (!v20)
		{
		LABEL_64:
			v22 = *(_QWORD*)(a1 + 7256);
			if (v22)
			{
				while (1)
				{
					v9 = sub_140297290(v22, a2);
					if (v9 < 0)
						break;
					v22 = *(_QWORD*)(v22 + 128);
					if (!v22)
						goto LABEL_67;
				}
			}
			else
			{
			LABEL_67:
				for (mm = *(_QWORD*)(a1 + 7264); mm; mm = *(_QWORD*)(mm + 56))
				{
					if (*(int*)(mm + 24) >= 2)
					{
						if (a2 < 2)
						{
							v24 = *(_QWORD*)(mm + 32);
							if (v24)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
								*(_QWORD*)(mm + 32) = 0i64;
							}
						}
					}
					else if (a2 >= 2)
					{
						v9 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(mm + 16) + 6608i64)
							+ 944i64))(
								*(_QWORD*)(*(_QWORD*)(mm + 16) + 6608i64),
								9i64,
								mm + 32);
						if (v9 < 0)
							goto LABEL_88;
						*(_DWORD*)(mm + 40) = 0;
					}
					*(_DWORD*)(mm + 24) = a2;
				}
				v25 = *(_QWORD*)(a1 + 7280);
				if (v25)
				{
					while (1)
					{
						v9 = sub_140298430(v25, a2);
						if (v9 < 0)
							break;
						v25 = *(_QWORD*)(v25 + 248);
						if (!v25)
							goto LABEL_80;
					}
				}
				else
				{
				LABEL_80:
					v26 = *(_DWORD*)(a1 + 6624);
					if (v26 <= a2
						|| (v26 < 2 || a2 >= 2 || (v9 = sub_14026BAC0(a1), v9 >= 0))
						&& (*(int*)(a1 + 6624) < 1 || a2 >= 1 || (v9 = sub_14026BE80((__int64*)a1), v9 >= 0)))
					{
						*(_DWORD*)(a1 + 6624) = a2;
						v9 = 0;
					}
				}
			}
			goto LABEL_88;
		}
		while (1)
		{
			if (*(int*)(v20 + 40) >= 1)
			{
				if (a2 < 1)
				{
					v21 = sub_140296900(v20);
				LABEL_62:
					v9 = v21;
					if (v21 < 0)
						goto LABEL_88;
				}
			}
			else if (a2 >= 1)
			{
				v21 = sub_140296860(v20);
				goto LABEL_62;
			}
			*(_DWORD*)(v20 + 40) = a2;
			v20 = *(_QWORD*)(v20 + 152);
			if (!v20)
				goto LABEL_64;
		}
	}
	while (1)
	{
		v9 = sub_140289670(v10, a2);
		if (v9 < 0)
			break;
		v10 = *(_QWORD*)(v10 + 120);
		if (!v10)
			goto LABEL_21;
	}
LABEL_88:
	if (*v5 <= 1ui64)
	{
		*(_DWORD*)v29 = 0;
		_InterlockedExchange64(v5, 0i64);
		if (*(_QWORD*)(v29 + 16))
		{
			if (!*(_QWORD*)(v29 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v29 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v29 + 24));
		}
		return (unsigned int)v9;
	}
	else
	{
		--* v5;
		return (unsigned int)v9;
	}
}
// 14026AB8A: conditional instruction was optimized away because eax.4<1
// 14026ABDA: conditional instruction was optimized away because eax.4<1
// 14026AC7D: conditional instruction was optimized away because eax.4<2

