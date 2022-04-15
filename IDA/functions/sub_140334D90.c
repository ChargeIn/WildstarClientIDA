//----- (0000000140334D90) ----------------------------------------------------
int __fastcall sub_140334D90(__int64 a1)
{
	int CurrentThreadId; // ecx
	__int64 v3; // rdx
	__int64 v4; // rbx
	_QWORD* v5; // rax
	_WORD* v6; // rcx
	__int64 v7; // rdx
	_WORD* v8; // r8
	__int64 v9; // rcx
	char v10; // al
	int result; // eax
	HANDLE EventW; // rcx
	int v13; // [rsp+38h] [rbp-60h]
	__int64 v14; // [rsp+48h] [rbp-50h] BYREF
	__int64 v15; // [rsp+50h] [rbp-48h]
	char v16[21]; // [rsp+68h] [rbp-30h] BYREF
	char v17[3]; // [rsp+7Dh] [rbp-1Bh] BYREF

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A010 == CurrentThreadId)
	{
		++qword_140C7A018;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A018, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A010, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A010) = CurrentThreadId;
	}
LABEL_8:
	if (!*(_BYTE*)(a1 + 56))
	{
		v13 = ntohs(*(_WORD*)(a1 + 2));
		v4 = 22i64;
		sub_1400EFDD0(
			v16,
			22i64,
			"%d.%d.%d.%d:%d",
			*(unsigned __int8*)(a1 + 4),
			*(unsigned __int8*)(a1 + 5),
			*(unsigned __int8*)(a1 + 6),
			*(unsigned __int8*)(a1 + 7),
			v13);
		v5 = sub_14018F2D0(&v14, v16);
		v6 = (_WORD*)(a1 + 78);
		v7 = 22i64;
		v8 = (_WORD*)v5[1];
		while (v7 != -2147483624 && *v8)
		{
			*v6++ = *v8++;
			if (!--v7)
			{
				--v6;
				break;
			}
		}
		*v6 = 0;
		if (v15)
			sub_14018B900(v15, 0);
		v9 = a1 + 77;
		do
		{
			v10 = v17[v9-- - a1 - 77];
			*(_BYTE*)(v9 + 1) = v10;
			--v4;
		} while (v4);
	}
	result = qword_140C7A018;
	if ((unsigned __int64)qword_140C7A018 <= 1)
	{
		LODWORD(qword_140C7A010) = 0;
		_InterlockedExchange64(&qword_140C7A018, 0i64);
		result = qword_140C7A020;
		if (qword_140C7A020)
		{
			if (!qword_140C7A028)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A028, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C7A028);
		}
	}
	else
	{
		--qword_140C7A018;
	}
	return result;
}
// 140334EBA: conditional instruction was optimized away because rdx.8!=0
// 140C7A010: using guessed type __int64 qword_140C7A010;
// 140C7A018: using guessed type __int64 qword_140C7A018;
// 140C7A020: using guessed type __int64 qword_140C7A020;
// 140334D90: using guessed type char var_1B[3];

