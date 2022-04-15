//----- (0000000140388A30) ----------------------------------------------------
void __fastcall sub_140388A30(__int64 a1, __m128* a2, __int64 a3, int a4)
{
	__int64 v8; // rbx
	int CurrentThreadId; // edx
	__int64 v10; // rcx
	HANDLE EventW; // rcx
	__int64 v12; // rbp
	_QWORD* v13; // rdi
	__int64 v14; // rbx
	int v15; // edx
	__int64 v16; // rcx
	__int64 v17; // rcx
	HANDLE v18; // rcx
	__int64 v19; // r9
	__m128 v20; // xmm4
	unsigned int v21; // ecx
	__m128i v22; // xmm2
	float v23; // xmm0_4
	unsigned int v24; // eax
	__m128i v25; // xmm3
	__m128i v26; // xmm1
	__int64 v27; // rax
	__int64 v28; // [rsp+20h] [rbp-118h]
	int v29[6]; // [rsp+28h] [rbp-110h] BYREF
	__m128 v30; // [rsp+40h] [rbp-F8h] BYREF
	int v31[4]; // [rsp+50h] [rbp-E8h] BYREF
	char v32[76]; // [rsp+60h] [rbp-D8h] BYREF
	int v33; // [rsp+ACh] [rbp-8Ch]
	__int128 v34; // [rsp+B0h] [rbp-88h]
	__int128 v35; // [rsp+C0h] [rbp-78h]

	if (*(_QWORD*)(a1 + 1448))
	{
		v8 = *(_QWORD*)a1;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v8 + 48) == CurrentThreadId)
		{
			++* (_QWORD*)(v8 + 56);
		}
		else
		{
			v10 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 56), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v10 >= 0x400)
				{
					sub_14019FB60(v8 + 48, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v8 + 48) = CurrentThreadId;
		}
	LABEL_9:
		v31[0] = -1;
		if (*(_QWORD*)(a1 + 1448))
			sub_14037CC30(a1, (__int64)v31);
		if (*(_QWORD*)(v8 + 56) <= 1ui64)
		{
			*(_DWORD*)(v8 + 48) = 0;
			_InterlockedExchange64((volatile __int64*)(v8 + 56), 0i64);
			if (*(_QWORD*)(v8 + 64))
			{
				if (!*(_QWORD*)(v8 + 72))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 72), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v8 + 72));
			}
		}
		else
		{
			--* (_QWORD*)(v8 + 56);
		}
	}
	if ((a4 & 0x2000) != 0)
	{
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 40i64);
		if (v12)
		{
			while (1)
			{
				v13 = *(_QWORD**)(v12 + 8);
				if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v13[2] + 80i64))(v13[2]))
				{
					v14 = *(_QWORD*)a1;
					v15 = GetCurrentThreadId();
					if (*(_DWORD*)(v14 + 48) == v15)
					{
						++* (_QWORD*)(v14 + 56);
					}
					else
					{
						v16 = 0i64;
						while (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 56), 1i64, 0i64))
						{
							_mm_pause();
							if ((unsigned __int64)++v16 >= 0x400)
							{
								sub_14019FB60(v14 + 48, v15);
								goto LABEL_28;
							}
						}
						*(_DWORD*)(v14 + 48) = v15;
					}
				LABEL_28:
					v17 = v13[2];
					v29[0] = -1;
					(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v17 + 88i64))(v17, v29);
					if (*(_QWORD*)(v14 + 56) <= 1ui64)
					{
						*(_DWORD*)(v14 + 48) = 0;
						_InterlockedExchange64((volatile __int64*)(v14 + 56), 0i64);
						if (*(_QWORD*)(v14 + 64))
						{
							if (!*(_QWORD*)(v14 + 72))
							{
								v18 = CreateEventW(0i64, 0, 0, 0i64);
								if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 72), (signed __int64)v18, 0i64))
									CloseHandle(v18);
							}
							SetEvent(*(HANDLE*)(v14 + 72));
						}
					}
					else
					{
						--* (_QWORD*)(v14 + 56);
					}
				}
				if (!(*(unsigned int(__fastcall**)(_QWORD*))(*v13 + 24i64))(v13)
					&& (*(unsigned int(__fastcall**)(_QWORD*, __m128*, __int64, __int64))(*v13 + 32i64))(
						v13,
						a2,
						a3,
						0x2000i64))
				{
					break;
				}
				v12 = *(_QWORD*)(v12 + 24);
				if (!v12)
					goto LABEL_41;
			}
			if (*(_DWORD*)(a3 + 168))
				a4 &= ~0x2000u;
		}
	}
LABEL_41:
	if ((a4 & 0x1A000) != 0)
	{
		v19 = 0i64;
		v20 = _mm_max_ps(
			(__m128)0i64,
			_mm_min_ps(
				_mm_mul_ps(
					_mm_add_ps(
						(__m128)xmmword_140B7AC50,
						_mm_mul_ps(
							_mm_shuffle_ps(*a2, *a2, 136),
							_mm_shuffle_ps((__m128)(unsigned int)dword_140C44580, (__m128)(unsigned int)dword_140C44580, 0))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7B490));
		v21 = (int)v20.m128_f32[0];
		v22 = _mm_cvtsi32_si128(0);
		LODWORD(v23) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
		if ((int)v20.m128_f32[0] > 2047)
			v21 = 2047;
		LODWORD(v28) = v21;
		v24 = (int)v23;
		v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(0));
		if ((int)v23 > 2047)
			v24 = 2047;
		HIDWORD(v28) = v24;
		v26 = _mm_cvtsi32_si128(v24);
		if ((a4 & 0x2000) != 0)
			v19 = 128i64;
		v30 = _mm_sub_ps(v20, _mm_cvtepi32_ps(_mm_unpacklo_epi32(v25, _mm_unpacklo_epi32(v26, v22))));
		if ((a4 & 0x8000) != 0)
			LODWORD(v19) = v19 | 0x100;
		if ((a4 & 0x10000) != 0)
			LODWORD(v19) = v19 | 0x200;
		(*(void(__fastcall**)(_QWORD, __m128*, char*, __int64, __int64))(**(_QWORD**)(a1 + 16) + 192i64))(
			*(_QWORD*)(a1 + 16),
			&v30,
			v32,
			v19,
			v28);
		if ((a4 & 0x2000) != 0)
			*(_DWORD*)(a3 + 168) = v33;
		if ((a4 & 0x8000) != 0)
			*(_OWORD*)(a3 + 208) = v34;
		if ((a4 & 0x10000) != 0)
			*(_OWORD*)(a3 + 176) = v35;
	}
	if ((a4 & 0x4000) != 0)
	{
		v27 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32i64))(*(_QWORD*)(a1 + 16));
		if (v27)
			*(_DWORD*)(a3 + 172) = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 32i64))(v27);
		else
			*(_DWORD*)(a3 + 172) = 0;
	}
	if ((a4 & 0x20000) != 0)
	{
		*(float*)(a3 + 192) = fminf(*(float*)(a1 + 916), *(float*)(a1 + 196));
		*(float*)(a3 + 196) = fmaxf(*(float*)(a1 + 932), *(float*)(a1 + 212));
	}
	if ((a4 & 0x40000) != 0)
	{
		*(float*)(a3 + 200) = fminf(*(float*)(a1 + 948), *(float*)(a1 + 196));
		*(float*)(a3 + 204) = fmaxf(*(float*)(a1 + 964), *(float*)(a1 + 212));
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C44580: using guessed type int dword_140C44580;
// 140388A30: using guessed type int var_E8[4];
// 140388A30: using guessed type int var_110[6];
// 140388A30: using guessed type char var_D8[76];

