#include "../winhttp.h"

//----- (00000001401952D0) ----------------------------------------------------
int __fastcall sub_1401952D0(__int64 a1, int* a2)
{
	__int64 v2; // r13
	__int64 v3; // rsi
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	int* v7; // rax
	__int64 v8; // rdx
	PVOID* v9; // rax
	HANDLE EventW; // rcx
	unsigned __int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rdi
	unsigned __int64 v14; // rax
	_DWORD* v15; // r12
	int v16; // edx
	__int64 v17; // rcx
	__int64 v18; // r8
	__int64 v19; // r11
	__int64 v20; // r14
	__int64 v21; // rax
	__int64 v22; // rcx
	int v23; // r9d
	__int64 v24; // r11
	unsigned int v25; // edx
	__int64 v26; // rdx
	_QWORD* v27; // rcx
	__int64 v28; // rcx
	_QWORD* v29; // rdx
	HANDLE v30; // rcx
	int v31; // r14d
	int* v32; // r14
	unsigned __int64 v33; // rax
	HANDLE v34; // rcx
	int result; // eax
	__int64 v36; // [rsp+20h] [rbp-99h]
	__int64(__fastcall * *TlsValue)(); // [rsp+28h] [rbp-91h] BYREF
	__int128 v38; // [rsp+30h] [rbp-89h]
	LONGLONG v39; // [rsp+40h] [rbp-79h]
	LARGE_INTEGER v40; // [rsp+48h] [rbp-71h] BYREF
	__int64 v41; // [rsp+50h] [rbp-69h] BYREF
	int* v42; // [rsp+58h] [rbp-61h]
	LARGE_INTEGER v43; // [rsp+60h] [rbp-59h] BYREF
	__int64 v44; // [rsp+68h] [rbp-51h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-49h] BYREF
	__int64(__fastcall * *v46)(); // [rsp+80h] [rbp-39h] BYREF
	__int128 v47; // [rsp+88h] [rbp-31h]
	__int64 v48; // [rsp+A0h] [rbp-19h]
	__int64 v49[6]; // [rsp+A8h] [rbp-11h]
	__int64 v50; // [rsp+D8h] [rbp+1Fh]

	v2 = qword_140C63728;
	v42 = a2;
	if (!dword_140C796CC)
	{
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			sub_1401C4FB0(0);
		else
			dword_140C796CC = 1;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v39 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	if ((dword_140C8E100 & 1) == 0)
	{
		dword_140C8E100 |= 1u;
		sub_1407DD89C(sub_14094D8B0);
	}
	v3 = qword_140C8E108;
	if (qword_140C8E108)
		goto LABEL_28;
	v4 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v4 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 24);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v4 + 16, CurrentThreadId);
				goto LABEL_15;
			}
		}
		*(_DWORD*)(v4 + 16) = CurrentThreadId;
	}
LABEL_15:
	if (!qword_140C8E108)
	{
		v7 = sub_14018B280(128i64, 0);
		if (v7)
			v9 = sub_14019E5D0((PVOID*)v7, v8, 1);
		else
			v9 = 0i64;
		qword_140C8E108 = (__int64)v9;
	}
	if (*(_QWORD*)(v4 + 24) <= 1ui64)
	{
		*(_DWORD*)(v4 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 24), 0i64);
		if (*(_QWORD*)(v4 + 32))
		{
			if (!*(_QWORD*)(v4 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v4 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 24);
	}
	v3 = qword_140C8E108;
	if (qword_140C8E108)
		LABEL_28:
	sub_14019E8F0(v3);
	*(_DWORD*)(v2 + 232) = sub_14018CDF0();
	v12 = 6i64;
	do
	{
		--v12;
		v49[v12 + 1] = v12;
	} while (v12);
	v13 = v39;
	v49[0] = 6i64;
	do
	{
	LABEL_32:
		if (!dword_140C796CC)
		{
			if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			{
				if (!dword_140C796C8)
				{
					v14 = sub_1401C4BB0(v11, (__int64)L"C Event_Count");
					++* (_QWORD*)(56 * v14 + *((_QWORD*)&xmmword_140C78590 + 1) + 8);
					++* (_QWORD*)(xmmword_140C785A0 + 16 * v14);
				}
			}
			else
			{
				dword_140C796CC = 1;
			}
		}
		v15 = 0i64;
		v16 = GetCurrentThreadId();
		if (*(_DWORD*)(v2 + 8) == v16)
		{
			++* (_QWORD*)(v2 + 16);
		}
		else
		{
			v17 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v17 >= 0x400)
				{
					sub_14019FB60(v2 + 8, v16);
					goto LABEL_44;
				}
			}
			*(_DWORD*)(v2 + 8) = v16;
		}
	LABEL_44:
		v18 = v50;
		v19 = 6i64;
		v36 = 6i64;
		v20 = 6i64;
		if (v50 == 6)
		{
		LABEL_93:
			if (*(_QWORD*)(v2 + 16) <= 1ui64)
			{
				*(_DWORD*)(v2 + 8) = 0;
				_InterlockedExchange64((volatile __int64*)(v2 + 16), 0i64);
				if (*(_QWORD*)(v2 + 24))
				{
					if (!*(_QWORD*)(v2 + 32))
					{
						v34 = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 32), (signed __int64)v34, 0i64))
							CloseHandle(v34);
					}
					SetEvent(*(HANDLE*)(v2 + 32));
				}
			}
			else
			{
				--* (_QWORD*)(v2 + 16);
			}
			goto LABEL_100;
		}
		while (1)
		{
			v21 = *(_QWORD*)(32 * v18 + v2 + 48);
			v22 = *(_QWORD*)(v21 + 16);
			if (v22 == v21)
				goto LABEL_52;
			v23 = *(_DWORD*)(v2 + 232);
			if (*(_DWORD*)(v22 + 32) - v23 > 0)
				goto LABEL_52;
			v24 = *(_QWORD*)(v22 + 40);
			if (v24 != v22 + 48)
				break;
			v48 = *(_QWORD*)(v21 + 16);
			v41 = v22;
			sub_140196510(32 * v18 + v2 + 40, &v41);
			v19 = v36;
			v18 = v20;
		LABEL_53:
			v20 = v18;
			v18 = v49[v18];
			if (v18 == 6)
				goto LABEL_65;
		}
		if (*(_DWORD*)(v22 + 32) == v23 && !*(_DWORD*)(v24 - 8))
		{
			v19 = v36;
		LABEL_52:
			v49[v20] = v49[v18];
			goto LABEL_53;
		}
		++* (_DWORD*)(v2 + 4 * v18 + 236);
		v19 = v18;
		v36 = v18;
		v25 = *(_DWORD*)(v2 + 4 * v18 + 236) % (unsigned int)(dword_140A43BE8[v18] + 1);
		*(_DWORD*)(v2 + 4 * v18 + 236) = v25;
		if (!v25)
		{
			v13 = v22;
			goto LABEL_53;
		}
		v26 = *(_QWORD*)(v22 + 40);
		if (v26 == v22 + 48)
		{
			v26 = 0i64;
		}
		else
		{
			if (*(_QWORD*)v26)
				**(_QWORD**)v26 = *(_QWORD*)(v26 + 8);
			v27 = *(_QWORD**)(v26 + 8);
			if (v27)
				*v27 = *(_QWORD*)v26;
			*(_QWORD*)v26 = 0i64;
			*(_QWORD*)(v26 + 8) = 0i64;
		}
		v15 = (_DWORD*)(v26 - 16);
	LABEL_65:
		if (v19 == 6)
			goto LABEL_93;
		if (!v15)
		{
			v28 = *(_QWORD*)(v13 + 40);
			if (v28 == v13 + 48)
			{
				v28 = 0i64;
			}
			else
			{
				if (*(_QWORD*)v28)
					**(_QWORD**)v28 = *(_QWORD*)(v28 + 8);
				v29 = *(_QWORD**)(v28 + 8);
				if (v29)
					*v29 = *(_QWORD*)v28;
				*(_QWORD*)v28 = 0i64;
				*(_QWORD*)(v28 + 8) = 0i64;
			}
			v15 = (_DWORD*)(v28 - 16);
		}
		--* (_QWORD*)(v2 + 8i64 * (int)v15[16] + 272);
		--* (_QWORD*)(v2 + 8i64 * (int)v15[17] + 320);
		if (*(_QWORD*)(v2 + 16) <= 1ui64)
		{
			*(_DWORD*)(v2 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v2 + 16), 0i64);
			if (*(_QWORD*)(v2 + 24))
			{
				if (!*(_QWORD*)(v2 + 32))
				{
					v30 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 32), (signed __int64)v30, 0i64))
						CloseHandle(v30);
				}
				SetEvent(*(HANDLE*)(v2 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v2 + 16);
		}
		if (*v15 == 1414420037)
		{
			(**(void(__fastcall***)(__int64, _DWORD*))v2)(v2, v15);
		}
		else
		{
			*(_QWORD*)&v38 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v38 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v46 = TlsValue;
			v44 = 0x141D3E1D8i64;
			v47 = v38;
			v31 = sub_140196F30(&dword_140C8A1D0, 1, &v44, &v46);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v38 + 1));
			if (v31)
				DebugBreak();
		}
	} while (v50 == 5);
	v32 = v42;
	if (*v42)
	{
		if (*v42 < 0)
			goto LABEL_32;
		QueryPerformanceCounter(&v40);
		v11 = v40.QuadPart - *((_QWORD*)v32 + 1) - ::PerformanceCount.QuadPart;
		v33 = qword_140C636B0 * (unsigned int)*v32;
		if (v11 >= v33)
		{
			*v32 = 0;
		}
		else if ((unsigned int)((v33 - v11) / qword_140C636B0) != -1)
		{
			goto LABEL_32;
		}
	}
LABEL_100:
	if (v3)
		sub_14019EA00(v3);
	result = QueryPerformanceCounter(&v43);
	if (!dword_140C796CC)
	{
		result = dword_140C636A8 - dword_140C785B0;
		if ((unsigned int)(dword_140C636A8 - dword_140C785B0) <= 0x7530)
			return sub_1401C5100(L"H Event_Poll", 0, v43.QuadPart - v39 - ::PerformanceCount.QuadPart, 1);
		else
			dword_140C796CC = 1;
	}
	return result;
}
// 1401953F6: variable 'v8' is possibly undefined
// 1401954D8: variable 'v11' is possibly undefined
// 140A43A58: using guessed type wchar_t aHEventPoll[13];
// 140A43B30: using guessed type wchar_t aCEventCount[14];
// 140A43BE8: using guessed type _DWORD dword_140A43BE8[18];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140C63728: using guessed type __int64 qword_140C63728;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C78590: using guessed type __int128 xmmword_140C78590;
// 140C785A0: using guessed type __int128 xmmword_140C785A0;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C796C8: using guessed type int dword_140C796C8;
// 140C796CC: using guessed type int dword_140C796CC;
// 140C8A1D0: using guessed type _DWORD dword_140C8A1D0;
// 140C8E100: using guessed type int dword_140C8E100;
// 140C8E108: using guessed type __int64 qword_140C8E108;

