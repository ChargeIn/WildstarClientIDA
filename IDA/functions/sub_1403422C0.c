//----- (00000001403422C0) ----------------------------------------------------
__int64 __fastcall sub_1403422C0(__int64 a1, __int64 a2, int a3)
{
	int CurrentThreadId; // ecx
	__int64 v7; // rdx
	__int64 v8; // rax
	unsigned int v9; // edi
	int* v10; // rax
	float v11; // xmm0_4
	float v12; // xmm1_4
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A070 == CurrentThreadId)
	{
		++qword_140C7A078;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A078, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A070, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A070) = CurrentThreadId;
	}
LABEL_8:
	v8 = *(_QWORD*)(a2 + 8);
	if (v8)
	{
		if (v8 == 1)
		{
			v9 = sub_140341F70(a1, **(_QWORD**)a2);
		}
		else
		{
			if (!*(_QWORD*)(a1 + 32))
			{
				v10 = sub_14018B280(96i64, 0);
				if (v10)
				{
					*((_QWORD*)v10 + 2) = 0i64;
					*((_QWORD*)v10 + 1) = 0i64;
					*((_QWORD*)v10 + 4) = 0i64;
					*((_QWORD*)v10 + 3) = 0i64;
					*((_QWORD*)v10 + 6) = 0i64;
					*((_QWORD*)v10 + 5) = 0i64;
					*((_QWORD*)v10 + 10) = 0i64;
					*((_QWORD*)v10 + 11) = 0i64;
					v10[18] = 1;
					*((_QWORD*)v10 + 8) = 0i64;
					v10[14] = 0;
					*v10 = 0;
				}
				else
				{
					v10 = 0i64;
				}
				*(_QWORD*)(a1 + 32) = v10;
			}
			LODWORD(v11) = sub_1403417A0(*(_QWORD*)(a1 + 32), *(_QWORD*)a2, *(_QWORD*)(a2 + 8)).m128_u32[0];
			if (!*(_DWORD*)(a1 + 48) || (v12 = *(float*)(a1 + 40), v12 == 3.4028235e38))
				*(_DWORD*)(a1 + 40) = 2139095039;
			else
				*(float*)(a1 + 40) = v12 + v11;
			*(_DWORD*)(*(_QWORD*)(a1 + 32) + 72i64) = a3;
			*(_DWORD*)(a1 + 48) = 1;
			v9 = 0;
		}
	}
	else
	{
		v9 = -2147467259;
	}
	if ((unsigned __int64)qword_140C7A078 <= 1)
	{
		LODWORD(qword_140C7A070) = 0;
		_InterlockedExchange64(&qword_140C7A078, 0i64);
		if (qword_140C7A080)
		{
			if (!qword_140C7A088)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A088, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A088);
		}
	}
	else
	{
		--qword_140C7A078;
	}
	return v9;
}
// 140C7A070: using guessed type __int64 qword_140C7A070;
// 140C7A078: using guessed type __int64 qword_140C7A078;
// 140C7A080: using guessed type __int64 qword_140C7A080;

