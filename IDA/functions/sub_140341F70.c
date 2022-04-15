#include "../winhttp.h"

//----- (0000000140341F70) ----------------------------------------------------
__int64 __fastcall sub_140341F70(__int64 a1, __int64 a2)
{
	int CurrentThreadId; // r9d
	__int64 v5; // rcx
	__m128 v6; // xmm2
	float v7; // xmm2_4
	float v8; // xmm0_4
	__int64 v9; // r14
	_OWORD* v10; // rax
	HANDLE EventW; // rcx
	__m128 v13; // [rsp+20h] [rbp-38h]

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A070 == CurrentThreadId)
	{
		++qword_140C7A078;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A078, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A070, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A070) = CurrentThreadId;
	}
LABEL_8:
	v13 = _mm_sub_ps(*(__m128*)(a1 + 16), *(__m128*)(a2 + 16));
	v6 = _mm_mul_ps(v13, v13);
	v7 = (float)(v6.m128_f32[0] + _mm_shuffle_ps(v6, v6, 85).m128_f32[0]) + _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
	if (!*(_DWORD*)(a1 + 48) || (v8 = *(float*)(a1 + 40), v8 == 3.4028235e38))
		*(_DWORD*)(a1 + 40) = 2139095039;
	else
		*(float*)(a1 + 40) = v8 + v7;
	*(_OWORD*)a1 = *(_OWORD*)a2;
	*(_OWORD*)(a1 + 16) = *(_OWORD*)(a2 + 16);
	v9 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 48) = 1;
	if (v9)
	{
		sub_1402877C0((__int64*)(v9 + 8), 1ui64);
		v10 = *(_OWORD**)(v9 + 8);
		*v10 = *(_OWORD*)a1;
		v10[1] = *(_OWORD*)(a1 + 16);
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
	return 0i64;
}
// 140C7A070: using guessed type __int64 qword_140C7A070;
// 140C7A078: using guessed type __int64 qword_140C7A078;
// 140C7A080: using guessed type __int64 qword_140C7A080;

