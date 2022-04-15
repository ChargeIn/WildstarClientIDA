#include "../winhttp.h"

//----- (000000014036D040) ----------------------------------------------------
__int64 __fastcall sub_14036D040(__int64 a1, __m128* a2, __m128* a3, int a4, unsigned __int64 a5)
{
	int v5; // ebp
	__m128 v9; // xmm1
	__m128 v10; // xmm2
	int v11; // r10d
	int v12; // eax
	int v13; // r9d
	__int64 v14; // rax
	__int64 v15; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v17; // r8
	__int64 v18; // rdx
	__int64 v19; // rcx
	_QWORD* v20; // r13
	unsigned __int64 v21; // r12
	_QWORD* v22; // rdi
	__m128** v23; // r12
	int* v24; // rax
	__int64 v25; // rdx
	int* v26; // r8
	int v27; // ecx
	_QWORD* v28; // rax
	__m128** v29; // rdi
	__m128* v30; // rdi
	int* v31; // rcx
	__int64 v32; // rdi
	int* v33; // rax
	int* v34; // rdx
	__int64 v35; // rcx
	unsigned __int64 v36; // r12
	__m128* v37; // rax
	unsigned __int64 v38; // rcx
	_QWORD* v39; // rcx
	__m128* v40; // rcx
	unsigned __int64 v41; // rdx
	__m128** v42; // rax
	unsigned __int64 v43; // rax
	HANDLE EventW; // rcx
	int v45; // edi
	int* v46; // [rsp+30h] [rbp-C8h]
	__int64 v47; // [rsp+30h] [rbp-C8h]
	__m128* v48; // [rsp+38h] [rbp-C0h]
	int* v49; // [rsp+38h] [rbp-C0h]
	__int64 v50; // [rsp+40h] [rbp-B8h]
	__m128 v51; // [rsp+50h] [rbp-A8h] BYREF
	unsigned __int64 v52; // [rsp+60h] [rbp-98h]
	unsigned __int64 v53; // [rsp+70h] [rbp-88h]
	__int128 v54; // [rsp+80h] [rbp-78h]
	__m128 v55; // [rsp+90h] [rbp-68h]
	__m128 v56; // [rsp+A0h] [rbp-58h]
	__m128 v57; // [rsp+B0h] [rbp-48h]
	__m128 v58; // [rsp+C0h] [rbp-38h]

	v5 = a4;
	if ((a4 & 0xFFFFF) == 0)
		return 1i64;
	v9 = *a2;
	v52 = a5;
	v54 = xmmword_140B7AC50;
	v51 = v9;
	v58 = _mm_shuffle_ps(v9, v9, 136);
	v57 = _mm_mul_ps(v58, _mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0));
	v55 = _mm_add_ps((__m128)xmmword_140B7AC50, v57);
	v10 = _mm_mul_ps(v55, (__m128)xmmword_140B7B490);
	v11 = (int)v10.m128_f32[0];
	v56 = v10;
	v12 = (int)_mm_shuffle_ps(v10, v10, 85).m128_f32[0];
	if ((int)v10.m128_f32[0] < *(_DWORD*)(a1 + 2188))
		return 0i64;
	if (v11 >= *(_DWORD*)(a1 + 2196))
		return 0i64;
	if (v12 < *(_DWORD*)(a1 + 2192))
		return 0i64;
	if (v12 >= *(_DWORD*)(a1 + 2200))
		return 0i64;
	v13 = *(_DWORD*)(a1 + 2204);
	v14 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
		+ 8i64
		* (v11 % v13
			+ v13 * (v12 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v12 % *(_DWORD*)(a1 + 2208) < 0))
			+ v13 * (unsigned int)(v11 % v13 < 0)));
	v50 = v14;
	if (!v14)
		return 0i64;
	if ((v5 & 0x40000000) != 0)
	{
		if (!*(_QWORD*)(v14 + 1448))
		{
			v5 &= ~0x40000000u;
			goto LABEL_11;
		}
		return 0i64;
	}
LABEL_11:
	v15 = a1 + 80;
	CurrentThreadId = GetCurrentThreadId();
	v17 = 1i64;
	v18 = CurrentThreadId;
	if (*(_DWORD*)(a1 + 80) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 88);
	}
	else
	{
		v19 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 88), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v19 >= 0x400)
			{
				sub_14019FB60(a1 + 80, CurrentThreadId);
				goto LABEL_18;
			}
		}
		*(_DWORD*)v15 = CurrentThreadId;
	}
LABEL_18:
	v20 = (_QWORD*)(a1 + 6128);
	v21 = (*(__int64(__fastcall**)(__m128*, __int64, __int64))(a1 + 6152))(&v51, v18, v17);
	v22 = *(_QWORD**)(*(_QWORD*)(a1 + 6144) + 8 * (v21 % *(_QWORD*)(a1 + 6136)));
	if (!v22)
		goto LABEL_22;
	while (v21 != *v22 || !(*(unsigned int(__fastcall**)(__m128*, _QWORD*))(a1 + 6160))(&v51, v22 + 2))
	{
		v22 = (_QWORD*)v22[1];
		if (!v22)
			goto LABEL_22;
	}
	v29 = (__m128**)(v22 + 6);
	if (v29)
	{
		v30 = *v29;
		v48 = v30;
	}
	else
	{
	LABEL_22:
		v23 = (__m128**)(a1 + 6120);
		if (*(_QWORD*)(a1 + 6096) == *(_QWORD*)(a1 + 6120))
		{
			v24 = sub_14018B280(311008i64, 0);
			v25 = 1023i64;
			if (v24)
			{
				v26 = v24 + 4;
				*v24 = 1023;
				v27 = 1022;
				v28 = v24 + 76;
				v46 = v26;
				do
				{
					--v27;
					*(v28 - 3) = 0i64;
					*(v28 - 2) = 0i64;
					*(v28 - 1) = 0i64;
					*v28 = 0i64;
					*((_DWORD*)v28 - 8) = 0;
					v28 += 38;
				} while (v27 >= 0);
			}
			else
			{
				v26 = 0i64;
				v46 = 0i64;
			}
			v31 = v26 + 68;
			do
			{
				if (!*((_QWORD*)v31 - 1))
				{
					*((_QWORD*)v31 - 1) = v23;
					*(_QWORD*)v31 = *v23;
					*v23 = (__m128*)(v31 - 68);
					if (*(_QWORD*)v31)
						*(_QWORD*)(*(_QWORD*)v31 + 264i64) = v31;
				}
				v31 += 76;
				--v25;
			} while (v25);
			v32 = *(_QWORD*)(a1 + 6112);
			v33 = sub_14018DB00(*(_QWORD*)(a1 + 6104), v32 + 1, 8i64);
			*(_QWORD*)&v33[2 * v32] = v46;
			v34 = *(int**)(a1 + 6104);
			v49 = v33;
			if (v34 != v33)
			{
				sub_1407DB590(v33, v34, 8i64 * *(_QWORD*)(a1 + 6112));
				v35 = *(_QWORD*)(a1 + 6104);
				if (v35)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v35 - 16) + 8i64))(v35 - 16);
				*(_QWORD*)(a1 + 6104) = v49;
			}
			*(_QWORD*)(a1 + 6112) = v32 + 1;
		}
		v30 = *v23;
		v48 = *v23;
		if ((*v23)[17].m128_u64[1])
		{
			sub_1400B6120(a1 + 6128, (__int64)v30);
			sub_140370660((__int64)v30);
		}
		*v30 = v51;
		v30[1].m128_u64[0] = v52;
		v30[16].m128_i32[0] = 0;
		if (*v20 == *(_QWORD*)(a1 + 6136))
			sub_1400290D0(a1 + 6128);
		v53 = (*(__int64(__fastcall**)(__m128*))(a1 + 6152))(&v51);
		v36 = v53 % *(_QWORD*)(a1 + 6136);
		v47 = *(_QWORD*)(a1 + 6144);
		v37 = (__m128*)sub_14018B280(64i64, 0);
		if (v37)
		{
			v38 = *(_QWORD*)(v47 + 8 * v36);
			v37->m128_u64[0] = v53;
			v37->m128_u64[1] = v38;
			v37[1] = v51;
			v37[2].m128_u64[0] = v52;
			v37[3].m128_u64[0] = (unsigned __int64)v30;
		}
		else
		{
			v37 = 0i64;
		}
		*(_QWORD*)(v47 + 8 * v36) = v37;
		++* v20;
	}
	if (*(__m128**)(a1 + 6096) == v30)
		*(_QWORD*)(a1 + 6096) = v30[17].m128_u64[0];
	v39 = (_QWORD*)v30[16].m128_u64[1];
	if (v39)
		*v39 = v30[17].m128_u64[0];
	v40 = v30 + 17;
	v41 = v30[17].m128_u64[0];
	if (v41)
		*(_QWORD*)(v41 + 264) = v30[16].m128_u64[1];
	v30[16].m128_u64[1] = 0i64;
	v40->m128_u64[0] = 0i64;
	v42 = *(__m128***)(a1 + 6056);
	v40->m128_u64[0] = a1 + 5792;
	v30[16].m128_u64[1] = (unsigned __int64)v42;
	if (v42)
		*v42 = v30;
	*(_QWORD*)(a1 + 6056) = v40;
	if (*(_QWORD*)(a1 + 6096) == a1 + 5792)
		*(_QWORD*)(a1 + 6096) = v30;
	if (!v30[17].m128_u64[1])
	{
		v30[17].m128_u64[1] = v50 + 1392;
		v30[18].m128_u64[0] = *(_QWORD*)(v50 + 1392);
		*(_QWORD*)(v50 + 1392) = v30;
		v43 = v30[18].m128_u64[0];
		if (v43)
			*(_QWORD*)(v43 + 280) = v30 + 18;
	}
	if (*(_QWORD*)(v15 + 8) <= 1ui64)
	{
		*(_DWORD*)v15 = 0;
		_InterlockedExchange64((volatile __int64*)(v15 + 8), 0i64);
		if (*(_QWORD*)(v15 + 16))
		{
			if (!*(_QWORD*)(v15 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v15 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v15 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v15 + 8);
	}
	v45 = v5 & ~v48[16].m128_i32[0];
	if (v45)
	{
		if ((v45 & 0x8003F) != 0)
			sub_140386280(v50, v51.m128_f32, (__int64)&v48[2], v45, a5);
		if ((v45 & 0x1FC0) != 0)
			sub_140387910(v50, &v51, v48 + 2, v45);
		if ((v45 & 0x7E000) != 0)
			sub_140388A30(v50, &v51, (__int64)&v48[2], v45);
		v48[16].m128_i32[0] |= v45;
	}
	if ((v5 & 0x8003F) != 0)
	{
		if ((v5 & 1) != 0)
			a3[2].m128_i32[0] = v48[4].m128_i32[0];
		if ((v5 & 2) != 0)
			*a3 = v48[2];
		if ((v5 & 4) != 0)
		{
			a3[2].m128_i32[1] = v48[4].m128_i32[1];
			a3[2].m128_i32[2] = v48[4].m128_i32[2];
			a3[2].m128_i32[3] = v48[4].m128_i32[3];
			a3[3].m128_i32[0] = v48[5].m128_i32[0];
		}
		if ((v5 & 8) != 0)
			a3[1] = v48[3];
		if ((v5 & 0x10) != 0)
			a3[3].m128_i32[1] = v48[5].m128_i32[1];
		if ((v5 & 0x20) != 0)
			a3[3].m128_i32[2] = v48[5].m128_i32[2];
		if ((v5 & 0x80000) != 0)
			a3[3].m128_i32[3] = v48[5].m128_i32[3];
	}
	if ((v5 & 0x1FC0) != 0)
	{
		if ((v5 & 0x40) != 0)
			a3[9].m128_i32[0] = v48[11].m128_i32[0];
		if ((v5 & 0x80u) != 0)
			a3[4] = v48[6];
		if ((v5 & 0x100) != 0)
			a3[9].m128_i32[1] = v48[11].m128_i32[1];
		if ((v5 & 0x200) != 0)
		{
			a3[9].m128_i32[2] = v48[11].m128_i32[2];
			a3[9].m128_i32[3] = v48[11].m128_i32[3];
			a3[10].m128_i32[0] = v48[12].m128_i32[0];
			a3[10].m128_i32[1] = v48[12].m128_i32[1];
		}
		if ((v5 & 0x400) != 0)
			a3[5] = v48[7];
		if ((v5 & 0x800) != 0)
		{
			a3[6].m128_i32[0] = v48[8].m128_i32[0];
			a3[6].m128_i32[1] = v48[8].m128_i32[1];
			a3[6].m128_i32[2] = v48[8].m128_i32[2];
			a3[6].m128_i32[3] = v48[8].m128_i32[3];
			a3[7].m128_i32[0] = v48[9].m128_i32[0];
			a3[7].m128_i32[1] = v48[9].m128_i32[1];
			a3[7].m128_i32[2] = v48[9].m128_i32[2];
			a3[7].m128_i32[3] = v48[9].m128_i32[3];
		}
		if ((v5 & 0x1000) != 0)
			a3[8] = v48[10];
	}
	if ((v5 & 0x7E000) != 0)
	{
		if ((v5 & 0x2000) != 0)
			a3[10].m128_i32[2] = v48[12].m128_i32[2];
		if ((v5 & 0x4000) != 0)
			a3[10].m128_i32[3] = v48[12].m128_i32[3];
		if ((v5 & 0x8000) != 0)
		{
			a3[13].m128_i32[0] = v48[15].m128_i32[0];
			a3[13].m128_i32[1] = v48[15].m128_i32[1];
			a3[13].m128_i32[2] = v48[15].m128_i32[2];
			a3[13].m128_i32[3] = v48[15].m128_i32[3];
		}
		if ((v5 & 0x10000) != 0)
			a3[11] = v48[13];
		if ((v5 & 0x20000) != 0)
			a3[12].m128_u64[0] = v48[14].m128_u64[0];
		if ((v5 & 0x40000) != 0)
			a3[12].m128_u64[1] = v48[14].m128_u64[1];
	}
	return 1i64;
}
// 14036D200: variable 'v18' is possibly undefined
// 14036D200: variable 'v17' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;

