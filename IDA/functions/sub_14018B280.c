#include "../winhttp.h"

//----- (000000014018B280) ----------------------------------------------------
int* __fastcall sub_14018B280(__int64 a1, unsigned __int8 a2)
{
	DWORD CurrentThreadId; // r8d
	__int64 v4; // rcx
	unsigned __int8 v5; // al
	unsigned __int64 v6; // rax
	char v7; // cl
	char v8; // cl
	unsigned __int64 v9; // rax
	int* v10; // rax
	int* v11; // rdi
	HANDLE EventW; // rcx
	HANDLE v14; // rcx
	unsigned __int64 v15; // [rsp+30h] [rbp+8h] BYREF

	v15 = a1;
	sub_14018ABA0(a1, a2);
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	if (v15 > 0x100)
	{
		if (v15 + 16 >= 2)
		{
			v9 = v15 + 15;
			v8 = 1;
			if (((v15 + 15) & 0xFFFFFFFF00000000ui64) != 0)
			{
				v8 = 33;
				v9 >>= 32;
			}
			if ((v9 & 0xFFFF0000) != 0)
			{
				v8 += 16;
				v9 >>= 16;
			}
			if ((v9 & 0xFF00) != 0)
			{
				v8 += 8;
				v9 >>= 8;
			}
			if ((v9 & 0xF0) != 0)
			{
				v8 += 4;
				v9 >>= 4;
			}
			if ((v9 & 0xC) != 0)
			{
				v8 += 2;
				v9 >>= 2;
			}
			if ((v9 & 2) != 0)
				++v8;
		}
		else
		{
			v8 = 0;
		}
		v5 = v8;
		if ((unsigned __int8)v8 < 9u)
			v5 = 9;
	}
	else if (v15 >= 2)
	{
		v6 = v15 - 1;
		v7 = 1;
		if (((v15 - 1) & 0xFFFFFFFF00000000ui64) != 0)
		{
			v7 = 33;
			v6 >>= 32;
		}
		if ((v6 & 0xFFFF0000) != 0)
		{
			v7 += 16;
			v6 >>= 16;
		}
		if ((v6 & 0xFF00) != 0)
		{
			v7 += 8;
			v6 >>= 8;
		}
		if ((v6 & 0xF0) != 0)
		{
			v7 += 4;
			v6 >>= 4;
		}
		if ((v6 & 0xC) != 0)
		{
			v7 += 2;
			v6 >>= 2;
		}
		if ((v6 & 2) != 0)
			++v7;
		v5 = v7;
		if (!v7)
			v5 = 1;
	}
	else
	{
		v5 = 1;
	}
	if (v5 <= 8ui64)
	{
		v10 = (int*)sub_14018B0C0(v5, (__int64*)&v15);
	}
	else
	{
		if (v5 > 0x2Bui64)
		{
		LABEL_47:
			if (((a2 | (unsigned __int8)dword_140C7F934) & 1) == 0)
				sub_14018A2B0();
			if ((unsigned __int64)qword_140C67408 <= 1)
			{
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
			else
			{
				--qword_140C67408;
				return 0i64;
			}
		}
		v10 = (int*)sub_14018AE80(v5, v15, a2);
	}
	v11 = v10;
	if (!v10)
		goto LABEL_47;
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		if (qword_140C67410)
		{
			if (!hObject)
			{
				v14 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)v14, 0i64))
					CloseHandle(v14);
			}
			SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	if (v15 && ((a2 | (unsigned __int8)dword_140C7F934) & 2) != 0)
		sub_1407E4830(v11, 0i64, v15);
	return v11;
}
// 14019FB60: using guessed type __int64 __fastcall sub_14019FB60(_QWORD, _QWORD);
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C7F934: using guessed type int dword_140C7F934;

