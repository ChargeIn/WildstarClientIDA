#include "../winhttp.h"

//----- (0000000140349010) ----------------------------------------------------
__int64 __fastcall sub_140349010(int** a1, __int64 a2, __int64 a3)
{
	int CurrentThreadId; // ecx
	__int64 v7; // rdx
	int* v8; // rax
	int* v9; // rax
	int* v10; // rbx
	int v11; // esi
	HANDLE EventW; // rcx

	if (!a1 || !a2)
		return 2147942487i64;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AB20 == CurrentThreadId)
	{
		++qword_140C7AB28;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB28, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB20, CurrentThreadId);
				goto LABEL_10;
			}
		}
		LODWORD(qword_140C7AB20) = CurrentThreadId;
	}
LABEL_10:
	v8 = (int*)sub_140349460(a2);
	if (v8)
	{
		*a1 = v8;
		(**(void(__fastcall***)(int*))v8)(v8);
		v11 = 0;
	}
	else
	{
		v9 = sub_14018B280(48i64, 0);
		v10 = v9;
		if (v9)
		{
			*(_QWORD*)v9 = off_140B55048;
			v9[2] = 1;
			*(_QWORD*)v9 = off_140B652B8;
			*((_QWORD*)v9 + 4) = 0i64;
			*((_QWORD*)v9 + 5) = 0i64;
			*((_QWORD*)v9 + 2) = 0i64;
			*((_QWORD*)v9 + 3) = 0i64;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = sub_140348ED0(v10, a2, a3);
		if (v11 >= 0)
		{
			*a1 = v10;
		}
		else if (v10)
		{
			(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v10 + 16i64))(v10, 1i64);
		}
	}
	if ((unsigned __int64)qword_140C7AB28 <= 1)
	{
		LODWORD(qword_140C7AB20) = 0;
		_InterlockedExchange64(&qword_140C7AB28, 0i64);
		if (qword_140C7AB30)
		{
			if (!qword_140C7AB38)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB38, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AB38);
		}
		return (unsigned int)v11;
	}
	else
	{
		--qword_140C7AB28;
		return (unsigned int)v11;
	}
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B652B8: using guessed type __int64 (__fastcall *off_140B652B8[27])();
// 140C7AB20: using guessed type __int64 qword_140C7AB20;
// 140C7AB28: using guessed type __int64 qword_140C7AB28;
// 140C7AB30: using guessed type __int64 qword_140C7AB30;

