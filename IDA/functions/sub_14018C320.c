#include "../winhttp.h"

//----- (000000014018C320) ----------------------------------------------------
int* __fastcall sub_14018C320(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
	__int64 v7; // rdi
	unsigned __int8 v8; // al
	unsigned __int64 v9; // rax
	char v10; // cl
	char v11; // cl
	unsigned __int64 v12; // rax
	unsigned __int64 v13; // rbp
	__int64 v14; // r14
	int v15; // ebx
	int CurrentThreadId; // edx
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // r13
	unsigned __int16* v20; // r15
	int* v21; // rbx
	bool v22; // sf
	int* v23; // rax
	HANDLE EventW; // rcx
	unsigned __int64 v25; // r8
	int v26; // edx
	__int64* v27; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v28; // [rsp+70h] [rbp+8h]
	unsigned __int64 v29; // [rsp+78h] [rbp+10h] BYREF
	__int64* v30; // [rsp+88h] [rbp+20h] BYREF

	v29 = a2;
	sub_14018ABA0(a2, a3);
	if (!a1)
		return sub_14018B280(a2, a3);
	if (!a2)
	{
		sub_14018B900(a1, a3);
		return 0i64;
	}
	v7 = 0i64;
	v28 = 0i64;
	if (a2 > 0x100)
	{
		if (a2 + 16 >= 2)
		{
			v12 = a2 + 15;
			v11 = 1;
			if (((a2 + 15) & 0xFFFFFFFF00000000ui64) != 0)
			{
				v11 = 33;
				v12 >>= 32;
			}
			if ((v12 & 0xFFFF0000) != 0)
			{
				v11 += 16;
				v12 >>= 16;
			}
			if ((v12 & 0xFF00) != 0)
			{
				v11 += 8;
				v12 >>= 8;
			}
			if ((v12 & 0xF0) != 0)
			{
				v11 += 4;
				v12 >>= 4;
			}
			if ((v12 & 0xC) != 0)
			{
				v11 += 2;
				v12 >>= 2;
			}
			if ((v12 & 2) != 0)
				++v11;
		}
		else
		{
			v11 = 0;
		}
		v8 = v11;
		if ((unsigned __int8)v11 < 9u)
			v8 = 9;
	}
	else if (a2 >= 2)
	{
		v9 = a2 - 1;
		v10 = 1;
		if (((a2 - 1) & 0xFFFFFFFF00000000ui64) != 0)
		{
			v10 = 33;
			v9 >>= 32;
		}
		if ((v9 & 0xFFFF0000) != 0)
		{
			v10 += 16;
			v9 >>= 16;
		}
		if ((v9 & 0xFF00) != 0)
		{
			v10 += 8;
			v9 >>= 8;
		}
		if ((v9 & 0xF0) != 0)
		{
			v10 += 4;
			v9 >>= 4;
		}
		if ((v9 & 0xC) != 0)
		{
			v10 += 2;
			v9 >>= 2;
		}
		if ((v9 & 2) != 0)
			++v10;
		v8 = v10;
		if (!v10)
			v8 = 1;
	}
	else
	{
		v8 = 1;
	}
	v13 = v8;
	LODWORD(v14) = 2;
	if (v8 > 8ui64)
	{
		if (v8 > 0x20ui64)
		{
			v15 = 3;
			if (v8 <= 0x2Bui64)
				v15 = 1;
		}
		else
		{
			v15 = 0;
		}
	}
	else
	{
		v15 = 2;
	}
	v30 = &qword_140C67400;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v17 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v17 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_52;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_52:
	v18 = a1 & ~qword_140C7F968;
	if (v18 == a1 || ((*(_QWORD*)((a1 & ~qword_140C7F968) + 8) >> 44) & 0xF) != 2)
		v14 = (*(_QWORD*)(a1 - 8) >> 44) & 0xFi64;
	v19 = v29;
	if (!(_DWORD)v14)
	{
		if ((unsigned int)sub_14018A5F0(a1 - 16))
		{
			v28 = *(unsigned int*)(a1 - 8);
			v22 = v15 < 0;
			if (!v15)
			{
				if (sub_14018BA20(a1 - 16, v13, v19, a3))
				{
					v21 = (int*)a1;
					goto LABEL_77;
				}
				goto LABEL_75;
			}
		LABEL_71:
			if (v22)
				goto LABEL_102;
			if (v15 > 1)
			{
				if (v15 == 2)
					goto LABEL_74;
			LABEL_102:
				if (((a3 | (unsigned __int8)dword_140C7F934) & 1) == 0)
					sub_14018A2B0();
				goto LABEL_103;
			}
		LABEL_75:
			v23 = (int*)sub_14018AE80(v13, v19, a3);
		LABEL_76:
			v21 = v23;
			if (v23)
				goto LABEL_77;
			goto LABEL_102;
		}
		goto LABEL_103;
	}
	if ((_DWORD)v14 == 1)
	{
		if ((unsigned int)sub_14018A5F0(a1 - 16))
		{
			v28 = *(_QWORD*)(a1 - 8) & 0xFFFFFFFFFFFi64;
			if (v15 == 1)
			{
				if (sub_14018BD90((_QWORD*)(a1 - 16), v13, v19, a3))
				{
					v21 = (int*)a1;
					goto LABEL_77;
				}
				goto LABEL_75;
			}
			goto LABEL_70;
		}
		goto LABEL_103;
	}
	if ((_DWORD)v14 != 2)
	{
	LABEL_70:
		v22 = v15 < 0;
		goto LABEL_71;
	}
	v20 = (unsigned __int16*)(v18 + 16);
	if (!(unsigned int)sub_14018A470((_DWORD*)(v18 + 16), a1))
	{
	LABEL_103:
		sub_14003D880((__int64*)&v30);
		return 0i64;
	}
	v28 = v20[1];
	if (v15 != 2)
		goto LABEL_70;
	if (*v20 != v13)
	{
	LABEL_74:
		v23 = (int*)sub_14018B0C0(v13, (__int64*)&v29);
		goto LABEL_76;
	}
	v21 = (int*)a1;
	v29 = v20[1];
LABEL_77:
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
	}
	else
	{
		--qword_140C67408;
	}
	if ((int*)a1 != v21)
	{
		v25 = v28;
		if (v29 < v28)
			v25 = v29;
		sub_1407DB590(v21, (int*)a1, v25);
		v27 = &qword_140C67400;
		v26 = GetCurrentThreadId();
		if ((_DWORD)qword_140C67400 == v26)
		{
			++qword_140C67408;
		}
		else
		{
			while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C67400, v26);
					goto LABEL_93;
				}
			}
			LODWORD(qword_140C67400) = v26;
		}
	LABEL_93:
		if ((int)v14 <= 1)
		{
			sub_14018B710(a1 - 16, a3);
		}
		else if ((_DWORD)v14 == 2)
		{
			sub_14018B830((unsigned __int16*)((a1 & ~qword_140C7F968) + 16), (int*)a1, a3);
		}
		sub_14003D880((__int64*)&v27);
	}
	if (v29 > v28 && ((a3 | (unsigned __int8)dword_140C7F934) & 2) != 0)
		sub_1407E4830((int*)((char*)v21 + v28), 0i64, v29 - v28);
	return v21;
}
// 14018C75E: conditional instruction was optimized away because r14d.4<10u
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C7F934: using guessed type int dword_140C7F934;
// 140C7F968: using guessed type __int64 qword_140C7F968;

