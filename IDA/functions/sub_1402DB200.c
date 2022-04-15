#include "../winhttp.h"

//----- (00000001402DB200) ----------------------------------------------------
__int64 sub_1402DB200()
{
	__int64 v0; // rbx
	int** v1; // r14
	__int64 v2; // r15
	unsigned __int64 v3; // rsi
	int* v4; // rbp
	unsigned int CurrentThreadId; // eax
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int* v9; // rdi
	void(__fastcall * *v10)(int*, __int64); // rax
	HANDLE EventW; // rcx
	int v12; // ebx
	int* v13; // rax

	v0 = qword_140C657F8;
	v1 = (int**)(qword_140C657F8 + 48);
	v2 = qword_140C657F8;
	v3 = 0i64;
	while (1)
	{
		v4 = (int*)*(&off_140C38660 + (int)v3);
		if (!v1)
			return (unsigned int)-2147024809;
		CurrentThreadId = GetCurrentThreadId();
		v6 = CurrentThreadId;
		if (*(_DWORD*)(v0 + 16) == CurrentThreadId)
		{
			++* (_QWORD*)(v0 + 24);
		}
		else
		{
			v7 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 24), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60(v0 + 16, CurrentThreadId);
					goto LABEL_10;
				}
			}
			*(_DWORD*)(v0 + 16) = CurrentThreadId;
		}
	LABEL_10:
		v8 = qword_140C657F8 + 8i64 * (int)v3;
		v9 = *(int**)(v8 + 352);
		if (v9)
		{
			*(_QWORD*)(v8 + 352) = *((_QWORD*)v9 + 5);
			v10 = *(void(__fastcall***)(int*, __int64))v9;
			*((_QWORD*)v9 + 5) = 0i64;
			(*v10)(v9, v6);
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
		if (!v9)
		{
			v9 = sub_14018B280(48i64, 1u);
			if (v9)
			{
				v9[2] = 1;
				*((_QWORD*)v9 + 4) = 0i64;
				*((_QWORD*)v9 + 3) = 0i64;
				*(_QWORD*)v9 = off_140B62E18;
				*((_QWORD*)v9 + 5) = 0i64;
				v12 = sub_1402DD650((__int64)v9, v3);
				if (v12 >= 0)
					goto LABEL_22;
				sub_1402DB1A0(v9);
			}
			else
			{
				return (unsigned int)-2147024882;
			}
			return (unsigned int)v12;
		}
	LABEL_22:
		v12 = sub_1402DD6F0((__int64)v9, v4);
		if (v12 < 0)
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)v9 + 8i64))(v9);
			return (unsigned int)v12;
		}
		++v3;
		*v1++ = v9;
		if (v3 >= 0x26)
			break;
		v0 = qword_140C657F8;
	}
	v13 = sub_14018B280(32i64, 0);
	if (v13)
	{
		v13[2] = 1;
		*((_QWORD*)v13 + 2) = 0i64;
		*((_QWORD*)v13 + 3) = 0i64;
		*(_QWORD*)v13 = off_140B62F38;
		*(_QWORD*)(v2 + 656) = v13;
	}
	else
	{
		*(_QWORD*)(v2 + 656) = 0i64;
	}
	return 0i64;
}
// 1402DB2B6: variable 'v6' is possibly undefined
// 140B62E18: using guessed type __int64 (__fastcall *off_140B62E18[56])();
// 140B62F38: using guessed type __int64 (__fastcall *off_140B62F38[20])();
// 140C38660: using guessed type void *off_140C38660;
// 140C657F8: using guessed type __int64 qword_140C657F8;

