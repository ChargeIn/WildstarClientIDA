#include "../winhttp.h"

//----- (000000014019F150) ----------------------------------------------------
void sub_14019F150()
{
	__int64 v0; // rbx
	int CurrentThreadId; // edx
	__int64 v2; // rcx
	__int64 v3; // rsi
	__int64 v4; // rdi
	__int64 i; // rsi
	int* v6; // rax
	int v7; // ecx
	int v8; // eax
	unsigned __int64 v9; // r15
	int* v10; // r14
	unsigned __int64 v11; // rax
	int* v12; // rdx
	__int64 v13; // rcx
	HANDLE EventW; // rcx

	v0 = qword_140C63760;
	if (qword_140C63760)
	{
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v0 + 16) == CurrentThreadId)
		{
			++* (_QWORD*)(v0 + 24);
		}
		else
		{
			v2 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 24), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v2 >= 0x400)
				{
					sub_14019FB60(v0 + 16, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v0 + 16) = CurrentThreadId;
		}
	LABEL_9:
		v3 = qword_140C63760;
		v4 = *(_QWORD*)(qword_140C63760 + 56);
		if (v4)
		{
			do
			{
				sub_14019EC10(v4);
				v4 = *(_QWORD*)(v4 + 120);
			} while (v4);
			v3 = qword_140C63760;
		}
		for (i = *(_QWORD*)(v3 + 64); i; i = *(_QWORD*)(i + 120))
		{
			v6 = (int*)qword_140C63750;
			*(_QWORD*)(i + 48) = 0i64;
			v7 = *v6;
			v8 = dword_140C3FE20;
			if (v7 < dword_140C3FE20)
				v8 = v7;
			v9 = dword_140C3FE30[v8];
			v10 = sub_14018DB00(*(_QWORD*)(i + 40), v9, 8i64);
			v11 = *(_QWORD*)(i + 48);
			if (v11 < v9)
				memset(&v10[2 * v11], 0, 8 * ((unsigned int)v9 - v11));
			v12 = *(int**)(i + 40);
			if (v12 != v10)
			{
				sub_1407DB590(v10, v12, 8i64 * *(_QWORD*)(i + 48));
				v13 = *(_QWORD*)(i + 40);
				if (v13)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
				*(_QWORD*)(i + 40) = v10;
			}
			*(_QWORD*)(i + 48) = v9;
			*(_DWORD*)(i + 32) = 0;
			*(_DWORD*)(i + 56) = 0;
			*(_QWORD*)(i + 72) = 0i64;
			*(_QWORD*)(i + 80) = 0i64;
			*(_QWORD*)(i + 88) = 0i64;
			*(_QWORD*)(i + 96) = -1i64;
			*(_QWORD*)(i + 104) = 0i64;
		}
		if (*(_QWORD*)(v0 + 24) <= 1ui64)
		{
			*(_DWORD*)(v0 + 16) = 0;
			_InterlockedExchange64((volatile __int64*)(v0 + 24), 0i64);
			if (*(_QWORD*)(v0 + 32))
			{
				if (!*(_QWORD*)(v0 + 40))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 40), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v0 + 40));
			}
		}
		else
		{
			--* (_QWORD*)(v0 + 24);
		}
	}
}
// 140C3FE20: using guessed type int dword_140C3FE20;
// 140C3FE30: using guessed type unsigned int dword_140C3FE30[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63760: using guessed type __int64 qword_140C63760;

