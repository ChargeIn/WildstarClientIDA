#include "../winhttp.h"

//----- (00000001403470F0) ----------------------------------------------------
void __fastcall sub_1403470F0(__int64* a1)
{
	int CurrentThreadId; // r8d
	__int64 v3; // rcx
	__int64 i; // rbx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rdx
	HANDLE EventW; // rcx

	if (a1)
	{
		CurrentThreadId = GetCurrentThreadId();
		if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
		{
			++qword_140C7AA78;
		}
		else
		{
			v3 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v3 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C7AA70, CurrentThreadId);
					goto LABEL_9;
				}
			}
			LODWORD(qword_140C7AA70) = CurrentThreadId;
		}
	LABEL_9:
		for (i = *a1; *a1; i = *a1)
		{
			v5 = *(_QWORD**)(i + 128);
			if (v5)
				*v5 = *(_QWORD*)(i + 136);
			v6 = *(_QWORD*)(i + 136);
			if (v6)
				*(_QWORD*)(v6 + 128) = *(_QWORD*)(i + 128);
			*(_QWORD*)(i + 128) = 0i64;
			*(_QWORD*)(i + 136) = 0i64;
			*(_QWORD*)(i + 24) = 0i64;
			if (sub_1403499E0(i + 96))
			{
				*(_DWORD*)(i + 88) = 0;
				_InterlockedIncrement(&dword_140C7A0F8);
				sub_140346C20(0x80000000, i);
			}
			else
			{
				v7 = *(unsigned int*)(i + 16);
				if ((_DWORD)v7)
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65858 + 216i64))(
						qword_140C65858,
						v7,
						500i64,
						4i64);
			}
		}
		if ((unsigned __int64)qword_140C7AA78 <= 1)
		{
			LODWORD(qword_140C7AA70) = 0;
			_InterlockedExchange64(&qword_140C7AA78, 0i64);
			if (qword_140C7AA80)
			{
				if (!qword_140C7AA88)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C7AA88);
			}
		}
		else
		{
			--qword_140C7AA78;
		}
	}
}
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C7A0F8: using guessed type int dword_140C7A0F8;
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

