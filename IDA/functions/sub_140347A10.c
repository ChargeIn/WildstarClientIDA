#include "../winhttp.h"

//----- (0000000140347A10) ----------------------------------------------------
__int64 sub_140347A10()
{
	__int64 result; // rax
	int CurrentThreadId; // edx
	__int64 v2; // rcx
	__int64 v3; // r14
	__int64 v4; // r14
	HANDLE EventW; // rcx
	int v6; // edx
	__int64 v7; // rcx
	__int64 v8; // rbp
	__int64 v9; // rsi
	__int64 v10; // rdi
	__int64 v11; // rbx
	void(__fastcall * v12)(_QWORD, __int64, _QWORD); // rax
	__int64 v13; // rdx
	unsigned __int64 v14; // rax
	HANDLE v15; // rcx

	for (result = (unsigned int)dword_140C7A0F8; (unsigned int)dword_140C7A0F8 > 1; result = (unsigned int)dword_140C7A0F8)
	{
		if ((dword_140DC1438 & 1) == 0)
		{
			dword_140DC1438 |= 1u;
			sub_1401AD620((__int64)&unk_140DC1440, L"Active Sounds");
		}
		sub_1401ADA40((__int64)&unk_140DC1440, dword_140C7A0F8 - 1);
		CurrentThreadId = GetCurrentThreadId();
		if ((_DWORD)qword_140C7AA50 == CurrentThreadId)
		{
			++qword_140C7AA58;
		}
		else
		{
			v2 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C7AA58, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v2 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C7AA50, CurrentThreadId);
					goto LABEL_11;
				}
			}
			LODWORD(qword_140C7AA50) = CurrentThreadId;
		}
	LABEL_11:
		v3 = qword_140C65870;
		qword_140C65870 ^= 1ui64;
		v4 = 2 * v3;
		if ((unsigned __int64)qword_140C7AA58 <= 1)
		{
			LODWORD(qword_140C7AA50) = 0;
			_InterlockedExchange64(&qword_140C7AA58, 0i64);
			if (qword_140C7AA60)
			{
				if (!qword_140C7AA68)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA68, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C7AA68);
			}
		}
		else
		{
			--qword_140C7AA58;
		}
		v6 = GetCurrentThreadId();
		if ((_DWORD)qword_140C7AA70 == v6)
		{
			++qword_140C7AA78;
		}
		else
		{
			v7 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C7AA70, v6);
					goto LABEL_25;
				}
			}
			LODWORD(qword_140C7AA70) = v6;
		}
	LABEL_25:
		v8 = qword_140C7AA30[v4 + 1];
		if (v8)
		{
			v9 = 0i64;
			do
			{
				v10 = qword_140C7AA30[v4];
				v11 = *(_QWORD*)(v10 + v9);
				v12 = *(void(__fastcall**)(_QWORD, __int64, _QWORD))(v11 + 64);
				v13 = (unsigned int)(*(_DWORD*)(v10 + v9 + 8) & *(_DWORD*)(v11 + 80));
				if (v12 && (_DWORD)v13)
					v12(*(_QWORD*)(v10 + v9), v13, *(_QWORD*)(v11 + 72));
				if (!_InterlockedDecrement((volatile signed __int32*)(v11 + 12)))
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 88i64))(v11, 1i64);
				if (*(int*)(v10 + v9 + 8) < 0)
				{
					*(_DWORD*)(v11 + 16) = 0;
					*(_QWORD*)(v11 + 64) = 0i64;
					if (*(int*)(v11 + 88) >= 0)
						*(_DWORD*)(v11 + 88) = -2147024809;
					if (!_InterlockedDecrement((volatile signed __int32*)(v11 + 12)))
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 88i64))(v11, 1i64);
					_InterlockedDecrement(&dword_140C7A0F8);
				}
				v9 += 16i64;
				--v8;
			} while (v8);
		}
		v14 = qword_140C7AA78;
		qword_140C7AA30[v4 + 1] = 0i64;
		if (v14 <= 1)
		{
			LODWORD(qword_140C7AA70) = 0;
			_InterlockedExchange64(&qword_140C7AA78, 0i64);
			if (qword_140C7AA80)
			{
				if (!qword_140C7AA88)
				{
					v15 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)v15, 0i64))
						CloseHandle(v15);
				}
				SetEvent(qword_140C7AA88);
			}
		}
		else
		{
			--qword_140C7AA78;
		}
	}
	return result;
}
// 140AF4528: using guessed type wchar_t aActiveSounds[14];
// 140C65870: using guessed type __int64 qword_140C65870;
// 140C7A0F8: using guessed type int dword_140C7A0F8;
// 140C7AA30: using guessed type __int64 qword_140C7AA30[];
// 140C7AA50: using guessed type __int64 qword_140C7AA50;
// 140C7AA58: using guessed type __int64 qword_140C7AA58;
// 140C7AA60: using guessed type __int64 qword_140C7AA60;
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;
// 140DC1438: using guessed type int dword_140DC1438;

