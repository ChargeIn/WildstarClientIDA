#include "../winhttp.h"

//----- (000000014027E770) ----------------------------------------------------
int __fastcall sub_14027E770(__int64 a1)
{
	unsigned __int64 v1; // rax
	__int64 v3; // rsi
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rdx
	_DWORD* v11; // rdi
	_DWORD* v12; // rsi
	__int64 v13; // rcx
	__int64 v14; // rdx
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+60h] [rbp+8h] BYREF
	__int64 v18; // [rsp+68h] [rbp+10h] BYREF
	__int64 v19; // [rsp+70h] [rbp+18h] BYREF

	v1 = *(unsigned int*)(a1 + 8456);
	if ((unsigned int)v1 < 0xD)
	{
		v3 = *(_QWORD*)(a1 + 8 * v1 + 8352);
		if (v3)
		{
			v4 = a1 + 6368;
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
						goto LABEL_10;
					}
				}
				*(_DWORD*)v4 = CurrentThreadId;
			}
		LABEL_10:
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 120i64))(
				*(_QWORD*)(a1 + 6352),
				*(_QWORD*)(v3 + 24),
				0i64);
			if (*(_DWORD*)(a1 + 6436))
			{
				if (!*(_DWORD*)(a1 + 6464))
				{
					v7 = *(_QWORD*)(a1 + 6352);
					v8 = *(unsigned int*)(a1 + 8456);
					v17 = 0i64;
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)v7 + 128i64))(v7, v8, 1i64, &v17);
				}
				v9 = *(_QWORD*)(a1 + 6360);
				v10 = *(unsigned int*)(a1 + 8456);
				v18 = *(_QWORD*)(v3 + 24);
				v11 = (_DWORD*)(v3 + 12);
				v12 = (_DWORD*)(v3 + 8);
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64*, _DWORD*, _DWORD*))(*(_QWORD*)v9 + 984i64))(
					v9,
					v10,
					1i64,
					&v18,
					v12,
					v11);
				*v12 += *v11;
			}
			else
			{
				v13 = *(_QWORD*)(a1 + 6352);
				v14 = *(unsigned int*)(a1 + 8456);
				v19 = *(_QWORD*)(v3 + 24);
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)v13 + 128i64))(v13, v14, 1i64, &v19);
			}
			v1 = *(_QWORD*)(v4 + 8);
			if (v1 <= 1)
			{
				*(_DWORD*)v4 = 0;
				_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
				v1 = *(_QWORD*)(v4 + 16);
				if (v1)
				{
					if (!*(_QWORD*)(v4 + 24))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					LODWORD(v1) = SetEvent(*(HANDLE*)(v4 + 24));
				}
			}
			else
			{
				--* (_QWORD*)(v4 + 8);
			}
		}
		*(_DWORD*)(a1 + 8456) = -1;
	}
	return v1;
}

