//----- (000000014018B900) ----------------------------------------------------
void __fastcall sub_14018B900(__int64 a1, unsigned __int8 a2)
{
	__int64 v4; // rcx
	unsigned __int16* v5; // rsi
	__int64 v6; // rbx
	HANDLE EventW; // rcx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	if (a1)
	{
		sub_14003D8F0(&v8, (__int64)&qword_140C67400);
		v4 = a1 & ~qword_140C7F968;
		if (v4 != a1 && ((*(_QWORD*)((a1 & ~qword_140C7F968) + 8) >> 44) & 0xF) == 2
			|| ((*(_QWORD*)(a1 - 8) >> 44) & 0xF) == 2)
		{
			v5 = (unsigned __int16*)(v4 + 16);
			if ((unsigned int)sub_14018A470((_DWORD*)(v4 + 16), a1))
				sub_14018B830(v5, (int*)a1, a2);
		}
		else if ((unsigned int)sub_14018A5F0(a1 - 16))
		{
			sub_14018B710(a1 - 16, a2);
		}
		v6 = v8;
		if (*(_QWORD*)(v8 + 8) <= 1ui64)
		{
			*(_DWORD*)v8 = 0;
			_InterlockedExchange64((volatile __int64*)(v6 + 8), 0i64);
			if (*(_QWORD*)(v6 + 16))
			{
				if (!*(_QWORD*)(v6 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v6 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v8 + 8);
		}
	}
}
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C7F968: using guessed type __int64 qword_140C7F968;

