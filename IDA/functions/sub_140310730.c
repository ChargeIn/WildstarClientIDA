//----- (0000000140310730) ----------------------------------------------------
__int64 __fastcall sub_140310730(__int64 a1, _OWORD* a2, __m128* a3, _QWORD* a4, int a5)
{
	__int128 v9; // xmm0
	__m128 v10; // xmm0
	__m128 v11; // xmm3
	__m128 v12; // xmm2
	__m128 v13; // xmm5
	__m128 v14; // xmm4
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	__int64 v17; // rsi
	void(__fastcall * *v18)(__int64); // rax
	_QWORD* v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rbx
	int* v22; // rax
	int* v23; // r14
	int* v24; // rdx
	__int64 v25; // rcx
	int v26; // eax
	unsigned __int64 v27; // rbx
	int* v28; // rax
	int* v29; // rdx
	int* v30; // rsi
	__int64 v31; // rcx
	unsigned __int64 v32; // rbx
	int* v33; // rax
	int* v34; // rdx
	int* v35; // rsi
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rax
	__int64 v39; // rcx
	int CurrentThreadId; // edx
	__int64 v41; // rcx
	__int64 v42; // rax
	int v43; // esi
	HANDLE EventW; // rcx
	HANDLE v46; // rcx
	int v47; // edx
	__int64 v48; // rcx
	__int64* v49; // r14
	__int64 v50; // rcx
	__int64 v51; // rbp
	__int64 v52; // r13
	__int64 v53; // rcx
	_QWORD* v54; // rcx
	__int64 v55; // rcx
	__int64 v56; // rsi
	int* v57; // rax
	int* v58; // r12
	HANDLE v59; // rcx
	unsigned __int64 v60; // rsi
	__int64 v61; // rcx
	_DWORD* v62; // rbx
	__int64 v63; // rcx
	int v64[4]; // [rsp+20h] [rbp-98h] BYREF
	__int64 v65; // [rsp+30h] [rbp-88h]

	if ((unsigned int)sub_1407E6AF0((unsigned __int64*)(a1 + 240), (__int64)a2, 0x40ui64))
	{
		*(_OWORD*)(a1 + 240) = *a2;
		v9 = a2[1];
		v65 = a1 + 304;
		*(_OWORD*)(a1 + 256) = v9;
		*(_OWORD*)(a1 + 272) = a2[2];
		*(_OWORD*)(a1 + 288) = a2[3];
		*(__m128*)(a1 + 304) = *a3;
		*(__m128*)(a1 + 320) = a3[1];
		*(__m128*)(a1 + 336) = a3[2];
		v10 = a3[3];
		*(__m128*)(a1 + 352) = v10;
		v11 = *(__m128*)(a1 + 304);
		v12 = *(__m128*)(a1 + 336);
		v13 = _mm_unpackhi_ps(v11, *(__m128*)(a1 + 320));
		v14 = _mm_unpackhi_ps(v12, v10);
		v15 = _mm_unpacklo_ps(v11, *(__m128*)(a1 + 320));
		v16 = _mm_unpacklo_ps(v12, v10);
		*(__m128*)(a1 + 368) = _mm_shuffle_ps(v15, v16, 68);
		*(__m128*)(a1 + 384) = _mm_shuffle_ps(v15, v16, 238);
		*(__m128*)(a1 + 400) = _mm_shuffle_ps(v13, v14, 68);
		*(__m128*)(a1 + 416) = _mm_shuffle_ps(v13, v14, 238);
		++* (_DWORD*)(a1 + 220);
	}
	*(_QWORD*)(a1 + 432) = *a4;
	*(_DWORD*)(a1 + 224) = *(_DWORD*)(a1 + 220);
	for (*(_DWORD*)(a1 + 232) = a5; *(_QWORD*)(a1 + 144); *(_QWORD*)(a1 + 160) = v21 + 1)
	{
		v17 = *(_QWORD*)(a1 + 144);
		(**(void(__fastcall***)(__int64))v17)(v17);
		v18 = *(void(__fastcall***)(__int64))v17;
		v64[0] = 0;
		((void(__fastcall*)(__int64, int*, __int64))v18[2])(v17, v64, 1i64);
		v19 = *(_QWORD**)(v17 + 344);
		if (v19)
			*v19 = *(_QWORD*)(v17 + 352);
		v20 = *(_QWORD*)(v17 + 352);
		if (v20)
			*(_QWORD*)(v20 + 344) = *(_QWORD*)(v17 + 344);
		*(_QWORD*)(v17 + 344) = 0i64;
		*(_QWORD*)(v17 + 352) = 0i64;
		v21 = *(_QWORD*)(a1 + 160);
		v22 = sub_14018DB00(*(_QWORD*)(a1 + 152), v21 + 1, 8i64);
		v23 = v22;
		*(_QWORD*)&v22[2 * v21] = v17;
		v24 = *(int**)(a1 + 152);
		if (v24 != v22)
		{
			sub_1407DB590(v22, v24, 8i64 * *(_QWORD*)(a1 + 160));
			v25 = *(_QWORD*)(a1 + 152);
			if (v25)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
			*(_QWORD*)(a1 + 152) = v23;
		}
	}
	v26 = 32379;
	if ((*(_BYTE*)(a1 + 232) & 1) != 0)
		v26 = 1595;
	*(_DWORD*)(a1 + 228) = 0;
	*(_DWORD*)(a1 + 236) = v26;
	if (*(_QWORD*)(a1 + 160))
	{
		do
		{
			v27 = *(_QWORD*)(a1 + 160);
			if (*(_QWORD*)(a1 + 176) <= v27)
			{
				v28 = sub_14018DB00(*(_QWORD*)(a1 + 168), *(_QWORD*)(a1 + 160), 8i64);
				v29 = *(int**)(a1 + 168);
				v30 = v28;
				if (v29 != v28)
				{
					sub_1407DB590(v28, v29, 8i64 * *(_QWORD*)(a1 + 176));
					v31 = *(_QWORD*)(a1 + 168);
					if (v31)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
					*(_QWORD*)(a1 + 168) = v30;
				}
			}
			*(_QWORD*)(a1 + 176) = v27;
			*(_QWORD*)(a1 + 184) = 0i64;
			*(_QWORD*)(a1 + 192) = 0i64;
			if (*(_QWORD*)(a1 + 160) <= 1ui64)
			{
				sub_140310E70(a1);
			}
			else
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 552) + 88i64))(*(_QWORD*)(a1 + 552));
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 552) + 112i64))(*(_QWORD*)(a1 + 552));
			}
			v32 = *(_QWORD*)(a1 + 192);
			++* (_DWORD*)(a1 + 228);
			if (*(_QWORD*)(a1 + 176) <= v32)
			{
				v33 = sub_14018DB00(*(_QWORD*)(a1 + 168), v32, 8i64);
				v34 = *(int**)(a1 + 168);
				v35 = v33;
				if (v34 != v33)
				{
					sub_1407DB590(v33, v34, 8i64 * *(_QWORD*)(a1 + 176));
					v36 = *(_QWORD*)(a1 + 168);
					if (v36)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v36 - 16) + 8i64))(v36 - 16);
					*(_QWORD*)(a1 + 168) = v35;
				}
			}
			*(_QWORD*)(a1 + 176) = v32;
			v37 = *(_QWORD*)(a1 + 168);
			*(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 152);
			v38 = *(_QWORD*)(a1 + 160);
			*(_QWORD*)(a1 + 152) = v37;
			v39 = *(_QWORD*)(a1 + 176);
			*(_QWORD*)(a1 + 176) = v38;
			*(_QWORD*)(a1 + 160) = v39;
		} while (v39);
	}
	if ((*(_BYTE*)(a1 + 232) & 1) == 0)
	{
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(a1 + 104) == CurrentThreadId)
		{
			++* (_QWORD*)(a1 + 112);
		}
		else
		{
			v41 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 112), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v41 >= 0x400)
				{
					sub_14019FB60(a1 + 104, CurrentThreadId);
					goto LABEL_38;
				}
			}
			*(_DWORD*)(a1 + 104) = CurrentThreadId;
		}
	LABEL_38:
		while (*(_QWORD*)(a1 + 536))
		{
			v42 = **(_QWORD**)(a1 + 528);
			if (*(_DWORD*)(v42 - 8) - *(_DWORD*)(a1 + 208) > 0)
				break;
			v43 = sub_140305FC0(v42 - 384);
			if (v43 < 0)
			{
				if (*(_QWORD*)(a1 + 112) <= 1ui64)
				{
					*(_DWORD*)(a1 + 104) = 0;
					_InterlockedExchange64((volatile __int64*)(a1 + 112), 0i64);
					if (*(_QWORD*)(a1 + 120))
					{
						if (!*(_QWORD*)(a1 + 128))
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 128), (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent(*(HANDLE*)(a1 + 128));
					}
					return (unsigned int)v43;
				}
				else
				{
					--* (_QWORD*)(a1 + 112);
					return (unsigned int)v43;
				}
			}
		}
		if (*(_QWORD*)(a1 + 112) <= 1ui64)
		{
			*(_DWORD*)(a1 + 104) = 0;
			_InterlockedExchange64((volatile __int64*)(a1 + 112), 0i64);
			if (*(_QWORD*)(a1 + 120))
			{
				if (!*(_QWORD*)(a1 + 128))
				{
					v46 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 128), (signed __int64)v46, 0i64))
						CloseHandle(v46);
				}
				SetEvent(*(HANDLE*)(a1 + 128));
			}
		}
		else
		{
			--* (_QWORD*)(a1 + 112);
		}
	}
	if ((*(_BYTE*)(a1 + 232) & 4) == 0)
	{
		v47 = GetCurrentThreadId();
		if (*(_DWORD*)(a1 + 104) == v47)
		{
			++* (_QWORD*)(a1 + 112);
		}
		else
		{
			v48 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 112), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v48 >= 0x400)
				{
					sub_14019FB60(a1 + 104, v47);
					goto LABEL_65;
				}
			}
			*(_DWORD*)(a1 + 104) = v47;
		}
	LABEL_65:
		v49 = (__int64*)(a1 + 464);
		sub_1400523E0((__int64*)(a1 + 464));
		v51 = *(_QWORD*)(a1 + 456);
		if (v51)
		{
			do
			{
				v52 = *(_QWORD*)(v51 + 40);
				if (!*(_DWORD*)(v51 + 24)
					|| (v53 = *(_QWORD*)(v51 + 16)) == 0
					|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v53 + 1008i64))(v53))
				{
					v54 = *(_QWORD**)(v51 + 32);
					if (v54)
						*v54 = *(_QWORD*)(v51 + 40);
					v55 = *(_QWORD*)(v51 + 40);
					if (v55)
						*(_QWORD*)(v55 + 32) = *(_QWORD*)(v51 + 32);
					*(_QWORD*)(v51 + 32) = 0i64;
					*(_QWORD*)(v51 + 40) = 0i64;
					v56 = *(_QWORD*)(a1 + 472);
					v57 = sub_14018DB00(*v49, v56 + 1, 8i64);
					v58 = v57;
					*(_QWORD*)&v57[2 * v56] = v51;
					if ((int*)*v49 != v57)
					{
						sub_1407DB590(v57, (int*)*v49, 8i64 * *(_QWORD*)(a1 + 472));
						v50 = *v49;
						if (*v49)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v50 - 16) + 8i64))(v50 - 16);
						*v49 = (__int64)v58;
					}
					*(_QWORD*)(a1 + 472) = v56 + 1;
				}
				v51 = v52;
			} while (v52);
		}
		if (*(_QWORD*)(a1 + 112) <= 1ui64)
		{
			*(_DWORD*)(a1 + 104) = 0;
			_InterlockedExchange64((volatile __int64*)(a1 + 112), 0i64);
			if (*(_QWORD*)(a1 + 120))
			{
				if (!*(_QWORD*)(a1 + 128))
				{
					v59 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 128), (signed __int64)v59, 0i64))
						CloseHandle(v59);
				}
				SetEvent(*(HANDLE*)(a1 + 128));
			}
		}
		else
		{
			--* (_QWORD*)(a1 + 112);
		}
		v60 = *(_QWORD*)(a1 + 472);
		sub_140312BF0(v50, (_QWORD*)*v49, v60);
		for (*(_DWORD*)(a1 + 480) = 0; *(unsigned int*)(a1 + 480) < v60; ++ * (_DWORD*)(a1 + 480))
		{
			v61 = *(unsigned int*)(a1 + 480);
			v62 = *(_DWORD**)(*v49 + 8 * v61);
			if (v62)
			{
				v63 = *(_QWORD*)(*v49 + 8 * v61);
				v62[2] += *(_DWORD*)(a1 + 212) - *(_DWORD*)(a1 + 208);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v62 + 8i64))(v63);
				if (*(_QWORD*)(*v49 + 8i64 * *(unsigned int*)(a1 + 480)))
					(**(void(__fastcall***)(_DWORD*, __int64))v62)(v62, 1i64);
			}
		}
		sub_1400523E0((__int64*)(a1 + 464));
	}
	return 0i64;
}
// 140310DC4: variable 'v50' is possibly undefined
// 140310730: using guessed type int var_98[4];

