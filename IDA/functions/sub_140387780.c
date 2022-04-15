#include "../winhttp.h"

//----- (0000000140387780) ----------------------------------------------------
__int64 __fastcall sub_140387780(__int64* a1, __m128* a2, __int64 a3)
{
	__int64 v6; // rbx
	int CurrentThreadId; // r9d
	__int64 v8; // rcx
	bool v9; // zf
	HANDLE EventW; // rcx
	__m128 v11; // xmm0
	__int64 v12; // rcx
	__m128 v13; // xmm0
	__int64 v14; // rax
	int v15; // ebx
	__int64 result; // rax
	__int64 v17; // rcx
	int v18[10]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v19; // [rsp+50h] [rbp+8h] BYREF

	if (a1[181])
	{
		v6 = *a1;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v6 + 48) == CurrentThreadId)
		{
			++* (_QWORD*)(v6 + 56);
		}
		else
		{
			v8 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 56), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v8 >= 0x400)
				{
					sub_14019FB60(v6 + 48, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v6 + 48) = CurrentThreadId;
		}
	LABEL_9:
		v9 = a1[181] == 0;
		v18[0] = -1;
		if (!v9)
			sub_14037CC30((__int64)a1, (__int64)v18);
		if (*(_QWORD*)(v6 + 56) <= 1ui64)
		{
			*(_DWORD*)(v6 + 48) = 0;
			_InterlockedExchange64((volatile __int64*)(v6 + 56), 0i64);
			if (*(_QWORD*)(v6 + 64))
			{
				if (!*(_QWORD*)(v6 + 72))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 72), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v6 + 72));
			}
		}
		else
		{
			--* (_QWORD*)(v6 + 56);
		}
	}
	v11 = *a2;
	v12 = a1[2];
	v19 = 0i64;
	v13 = _mm_mul_ps(v11, (__m128)xmmword_140B7B450);
	(*(void(__fastcall**)(__int64, __int64, __int64*, __int64, int))(*(_QWORD*)v12 + 72i64))(
		v12,
		16i64,
		&v19,
		1i64,
		v18[0]);
	v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
	v15 = *(_DWORD*)(v14 + 40) * (int)v13.m128_f32[0]
		+ (int)_mm_shuffle_ps(v13, v13, 85).m128_f32[0] * *(_DWORD*)(v14 + 44);
	result = *(unsigned __int8*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 24i64))(v19) + v15);
	v17 = v19;
	*(_DWORD*)(a3 + 56) = result;
	if (v17)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	return result;
}
// 140B7B450: using guessed type __int128 xmmword_140B7B450;
// 140387780: using guessed type int var_28[10];

