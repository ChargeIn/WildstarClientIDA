//----- (000000014018BF10) ----------------------------------------------------
__int64 __fastcall sub_14018BF10(__int64 a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rdi
	__int64 v5; // r13
	unsigned __int64 v6; // r15
	unsigned __int8 v7; // al
	unsigned __int64 v8; // rax
	char v9; // cl
	char v10; // cl
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // r12
	__int64 v13; // rbx
	int v14; // ebp
	int CurrentThreadId; // r8d
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // ebx
	unsigned __int16* v19; // rbx
	HANDLE EventW; // rcx
	HANDLE v21; // rcx

	v2 = a2;
	if (!a1)
		return 0i64;
	v5 = 0i64;
	v6 = 0i64;
	if (a2 > 0x100)
	{
		if (a2 + 16 >= 2)
		{
			v11 = a2 + 15;
			v10 = 1;
			if (((a2 + 15) & 0xFFFFFFFF00000000ui64) != 0)
			{
				v10 = 33;
				v11 >>= 32;
			}
			if ((v11 & 0xFFFF0000) != 0)
			{
				v10 += 16;
				v11 >>= 16;
			}
			if ((v11 & 0xFF00) != 0)
			{
				v10 += 8;
				v11 >>= 8;
			}
			if ((v11 & 0xF0) != 0)
			{
				v10 += 4;
				v11 >>= 4;
			}
			if ((v11 & 0xC) != 0)
			{
				v10 += 2;
				v11 >>= 2;
			}
			if ((v11 & 2) != 0)
				++v10;
		}
		else
		{
			v10 = 0;
		}
		v7 = v10;
		if ((unsigned __int8)v10 < 9u)
			v7 = 9;
	}
	else if (a2 >= 2)
	{
		v8 = a2 - 1;
		v9 = 1;
		if (((a2 - 1) & 0xFFFFFFFF00000000ui64) != 0)
		{
			v9 = 33;
			v8 >>= 32;
		}
		if ((v8 & 0xFFFF0000) != 0)
		{
			v9 += 16;
			v8 >>= 16;
		}
		if ((v8 & 0xFF00) != 0)
		{
			v9 += 8;
			v8 >>= 8;
		}
		if ((v8 & 0xF0) != 0)
		{
			v9 += 4;
			v8 >>= 4;
		}
		if ((v8 & 0xC) != 0)
		{
			v9 += 2;
			v8 >>= 2;
		}
		if ((v8 & 2) != 0)
			++v9;
		v7 = v9;
		if (!v9)
			v7 = 1;
	}
	else
	{
		v7 = 1;
	}
	v12 = v7;
	LODWORD(v13) = 2;
	if (a2 > 0x100)
	{
		if (a2 > 0xFFFFFFF0)
		{
			v14 = 3;
			if (a2 <= 0x7FFFFFFFFF0i64)
				v14 = 1;
		}
		else
		{
			v14 = 0;
		}
	}
	else
	{
		v14 = 2;
	}
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v16 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v16 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_50;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_50:
	v17 = a1 & ~qword_140C7F968;
	if (v17 == a1 || ((*(_QWORD*)((a1 & ~qword_140C7F968) + 8) >> 44) & 0xF) != 2)
		v13 = (*(_QWORD*)(a1 - 8) >> 44) & 0xFi64;
	if ((_DWORD)v13)
	{
		v18 = v13 - 1;
		if (v18)
		{
			if (v18 != 1)
				goto LABEL_75;
			v19 = (unsigned __int16*)(v17 + 16);
			if ((unsigned int)sub_14018A470((_DWORD*)(v17 + 16), a1))
			{
				v6 = v19[1];
				if (*v19 == v12)
				{
					v5 = a1;
					v2 = v19[1];
				}
				goto LABEL_75;
			}
		LABEL_64:
			if ((unsigned __int64)qword_140C67408 > 1)
			{
				--qword_140C67408;
				return 0i64;
			}
			LODWORD(qword_140C67400) = 0;
			_InterlockedExchange64(&qword_140C67408, 0i64);
			if (qword_140C67410)
			{
				if (!hObject)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(hObject);
			}
			return 0i64;
		}
		if (!(unsigned int)sub_14018A5F0(a1 - 16))
			goto LABEL_64;
		v6 = *(_QWORD*)(a1 - 8) & 0xFFFFFFFFFFFi64;
		if (v14 == 1 && sub_14018BD90((_QWORD*)(a1 - 16), v12, v2, 0))
			v5 = a1;
	}
	else
	{
		if (!(unsigned int)sub_14018A5F0(a1 - 16))
			goto LABEL_64;
		v6 = *(unsigned int*)(a1 - 8);
		if (!v14 && sub_14018BA20(a1 - 16, v12, v2, 0))
			v5 = a1;
	}
LABEL_75:
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		if (qword_140C67410)
		{
			if (!hObject)
			{
				v21 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)v21, 0i64))
					CloseHandle(v21);
			}
			SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	if (!v5)
		return 0i64;
	if (v2 > v6 && (dword_140C7F934 & 2) != 0)
		sub_1407E4830((int*)(v6 + v5), 0i64, v2 - v6);
	return 1i64;
}
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C7F934: using guessed type int dword_140C7F934;
// 140C7F968: using guessed type __int64 qword_140C7F968;

