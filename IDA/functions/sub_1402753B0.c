#include "../winhttp.h"

//----- (00000001402753B0) ----------------------------------------------------
int __fastcall sub_1402753B0(__int64 a1)
{
	unsigned int CurrentThreadId; // eax
	__int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 i; // rdi
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // r10
	int v10; // eax
	__int64 j; // rdi
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // r10
	int v15; // eax
	__int64 k; // rdi
	__int64 v17; // rax
	__int64 v18; // r9
	__int64 v19; // r10
	int v20; // eax
	unsigned __int64 v21; // rax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v3 = *(unsigned int*)(a1 + 24);
	v4 = CurrentThreadId;
	if ((_DWORD)v3 == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 32);
	}
	else
	{
		v5 = 0i64;
		v3 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(a1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 24) = CurrentThreadId;
	}
LABEL_8:
	for (i = *(_QWORD*)(a1 + 7216); i; i = *(_QWORD*)(i + 248))
	{
		v7 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)i + 24i64))(i, v3, v4);
		v4 = v7;
		if (*(_QWORD*)(v7 + 48))
		{
			v8 = *(int*)(i + 116);
			v9 = *(int*)(v7 + 56);
			if (*(_DWORD*)(i + 112))
			{
				v10 = dword_140C405D0;
				if (*(_DWORD*)qword_140C63750 < dword_140C405D0)
					v10 = *(_DWORD*)qword_140C63750;
				v3 = 15i64;
				if (*((_DWORD*)&xmmword_140C405E0 + v10))
					v3 = 0i64;
				if ((_DWORD)v9)
				{
					v3 = (unsigned int)dword_140AE6390[v9];
				}
				else if ((_DWORD)v8)
				{
					v3 = (unsigned int)dword_140AE6390[v8];
				}
				if ((unsigned int)(v3 - 13) <= 2 && ((*(_BYTE*)(v4 + 4) & 3) != 0 || (*(_BYTE*)(v4 + 8) & 3) != 0))
					v3 = 0i64;
			}
			else
			{
				v3 = *(unsigned int*)(v7 + 24);
			}
			if (*(_DWORD*)(v4 + 24) != (_DWORD)v3)
				sub_14028D140(i);
		}
	}
	for (j = *(_QWORD*)(a1 + 7224); j; j = *(_QWORD*)(j + 232))
	{
		v12 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)j + 24i64))(j, v3, v4);
		v4 = v12;
		if (*(_QWORD*)(v12 + 48))
		{
			v13 = *(int*)(j + 124);
			v14 = *(int*)(v12 + 56);
			if (*(_DWORD*)(j + 120))
			{
				v15 = dword_140C405D0;
				if (*(_DWORD*)qword_140C63750 < dword_140C405D0)
					v15 = *(_DWORD*)qword_140C63750;
				v3 = 15i64;
				if (*((_DWORD*)&xmmword_140C405E0 + v15))
					v3 = 0i64;
				if ((_DWORD)v14)
				{
					v3 = (unsigned int)dword_140AE6390[v14];
				}
				else if ((_DWORD)v13)
				{
					v3 = (unsigned int)dword_140AE6390[v13];
				}
				if ((unsigned int)(v3 - 13) <= 2 && ((*(_BYTE*)(v4 + 4) & 3) != 0 || (*(_BYTE*)(v4 + 8) & 3) != 0))
					v3 = 0i64;
			}
			else
			{
				v3 = *(unsigned int*)(v12 + 24);
			}
			if (*(_DWORD*)(v4 + 24) != (_DWORD)v3)
				sub_140290280(j);
		}
	}
	for (k = *(_QWORD*)(a1 + 7232); k; k = *(_QWORD*)(k + 368))
	{
		v17 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)k + 24i64))(k, v3, v4);
		v4 = v17;
		if (*(_QWORD*)(v17 + 48))
		{
			v18 = *(int*)(k + 116);
			v19 = *(int*)(v17 + 56);
			if (*(_DWORD*)(k + 112))
			{
				v20 = dword_140C405D0;
				if (*(_DWORD*)qword_140C63750 < dword_140C405D0)
					v20 = *(_DWORD*)qword_140C63750;
				v3 = 15i64;
				if (*((_DWORD*)&xmmword_140C405E0 + v20))
					v3 = 0i64;
				if ((_DWORD)v19)
				{
					v3 = (unsigned int)dword_140AE6390[v19];
				}
				else if ((_DWORD)v18)
				{
					v3 = (unsigned int)dword_140AE6390[v18];
				}
				if ((unsigned int)(v3 - 13) <= 2 && ((*(_BYTE*)(v4 + 4) & 3) != 0 || (*(_BYTE*)(v4 + 8) & 3) != 0))
					v3 = 0i64;
			}
			else
			{
				v3 = *(unsigned int*)(v17 + 24);
			}
			if (*(_DWORD*)(v4 + 24) != (_DWORD)v3)
				sub_140292F00(k);
		}
	}
	v21 = *(_QWORD*)(a1 + 32);
	if (v21 <= 1)
	{
		*(_DWORD*)(a1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 32), 0i64);
		v21 = *(_QWORD*)(a1 + 40);
		if (v21)
		{
			if (!*(_QWORD*)(a1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v21) = SetEvent(*(HANDLE*)(a1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 32);
	}
	return v21;
}
// 140275437: variable 'v3' is possibly undefined
// 140275437: variable 'v4' is possibly undefined
// 140AE6390: using guessed type int dword_140AE6390[];
// 140C405D0: using guessed type int dword_140C405D0;
// 140C405E0: using guessed type __int128 xmmword_140C405E0;
// 140C63750: using guessed type __int64 qword_140C63750;

