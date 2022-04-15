#include "../winhttp.h"

//----- (00000001402A2270) ----------------------------------------------------
int __fastcall sub_1402A2270(__int64 a1, unsigned int a2)
{
	__int64 v3; // rbp
	int v4; // esi
	int v5; // ecx
	unsigned __int64 v6; // rax
	_DWORD* v7; // rdx
	__int64 v8; // rbx
	int CurrentThreadId; // edx
	__int64 v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rdx
	HANDLE EventW; // rcx
	bool v14; // zf
	int v15; // esi
	__int64 v16; // rcx

	v3 = a2;
	v4 = 1 << a2;
	v5 = *(_DWORD*)(a1 + 208);
	LODWORD(v6) = *(_DWORD*)(a1 + 212) | v5;
	if (((unsigned int)v6 & (1 << a2)) != 0)
	{
		if ((v5 & v4) != 0 && (v7 = (_DWORD*)(*(_QWORD*)(a1 + 192) + 24i64 * a2), *v7 > 1u))
		{
			LODWORD(v6) = *v7 - 1;
			*v7 = v6;
		}
		else
		{
			v8 = *(_QWORD*)(a1 + 16) + 6368i64;
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)v8 == CurrentThreadId)
			{
				++* (_QWORD*)(v8 + 8);
			}
			else
			{
				v10 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 8), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v10 >= 0x400)
					{
						sub_14019FB60(v8, CurrentThreadId);
						goto LABEL_12;
					}
				}
				*(_DWORD*)v8 = CurrentThreadId;
			}
		LABEL_12:
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 120i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
				*(_QWORD*)(a1 + 120),
				(unsigned int)v3);
			if ((v4 & *(_DWORD*)(a1 + 212)) != 0)
			{
				v11 = *(_QWORD*)(a1 + 120);
				v12 = *(_QWORD*)(a1 + 112);
				if (v11 != v12)
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64, _DWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 368i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
						v12,
						(unsigned int)v3,
						0i64,
						0,
						0,
						v11,
						v3,
						0i64);
			}
			v6 = *(_QWORD*)(v8 + 8);
			if (v6 <= 1)
			{
				*(_DWORD*)v8 = 0;
				_InterlockedExchange64((volatile __int64*)(v8 + 8), 0i64);
				v6 = *(_QWORD*)(v8 + 16);
				if (v6)
				{
					if (!*(_QWORD*)(v8 + 24))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 24), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					LODWORD(v6) = SetEvent(*(HANDLE*)(v8 + 24));
				}
			}
			else
			{
				--* (_QWORD*)(v8 + 8);
			}
			v14 = (v4 & *(_DWORD*)(a1 + 208)) == 0;
			v15 = ~v4;
			if (v14)
			{
				*(_DWORD*)(a1 + 212) &= v15;
			}
			else
			{
				v6 = *(_QWORD*)(a1 + 192);
				*(_DWORD*)(v6 + 24 * v3) = 0;
				*(_DWORD*)(a1 + 208) &= v15;
			}
			if (!*(_DWORD*)(a1 + 208) && !*(_DWORD*)(a1 + 212))
			{
				v16 = *(_QWORD*)(a1 + 120);
				if (v16)
				{
					LODWORD(v6) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
					*(_QWORD*)(a1 + 120) = 0i64;
				}
			}
		}
	}
	return v6;
}

