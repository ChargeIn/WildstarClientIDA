#include "../winhttp.h"

//----- (0000000140383920) ----------------------------------------------------
__int64 __fastcall sub_140383920(__m128* a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, unsigned int a6)
{
	__m128* v7; // rax
	unsigned int v8; // r13d
	__int64 v9; // rsi
	unsigned __int64* v10; // r15
	unsigned int v11; // ebp
	__int64 v12; // r14
	__m128i v13; // xmm2
	__m128 v14; // xmm9
	__m128 v15; // xmm10
	__m128 v16; // xmm7
	__m128 v17; // xmm6
	__int64 v18; // rbx
	int v19; // ecx
	int v20; // ecx
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm1_4
	float v24; // xmm1_4
	int v25; // ecx
	float v26; // xmm2_4
	int v27; // ecx
	int v28; // eax
	float v29; // xmm0_4
	__int128 v30; // xmm1
	__m128 v31; // xmm0
	unsigned __int64 v32; // rax
	int v33; // ecx
	__int128 v34; // xmm0
	__int128 v35; // xmm1
	int v36; // ecx
	_OWORD* v37; // r8
	__m128* v38; // r9
	__int64 v39; // rdx
	_OWORD* v40; // rax
	__m128* v41; // rcx
	__int64 v42; // rdx
	__m128 v44; // [rsp+30h] [rbp-F8h] BYREF
	__int128 v45; // [rsp+40h] [rbp-E8h] BYREF
	__int128 v46; // [rsp+50h] [rbp-D8h]
	__int128 v47[2]; // [rsp+60h] [rbp-C8h]
	unsigned int v52; // [rsp+160h] [rbp+38h]

	v7 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			16i64,
			1i64,
			9i64,
			0);
	if (v7)
	{
		*v7 = _mm_shuffle_ps(a1[12], a1[12], 136);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	v8 = a6;
	v9 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		400i64,
		1i64);
	if (!v9)
		goto LABEL_69;
	v52 = a6;
	v10 = &a1[5].m128_u64[1];
	v11 = 0;
	v12 = 0i64;
	v13 = _mm_cvtsi32_si128(0);
	v44 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1->m128_u32[2]), v13),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1->m128_u32[3]), v13)));
	v14 = (__m128)v44.m128_u32[1];
	v15 = (__m128)v44.m128_u32[0];
	v16 = (__m128)v44.m128_u32[1];
	v17 = (__m128)v44.m128_u32[0];
	do
	{
		v18 = *(v10 - 4);
		if (!v18)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				v11,
				0i64,
				0i64,
				0i64);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				v11 + 4,
				0i64,
				0i64,
				0i64);
			goto LABEL_31;
		}
		v19 = *(_DWORD*)(v18 + 112);
		if (v19)
		{
			v20 = v19 - 1;
			if (v20)
			{
				if (v20 == 1)
				{
					v17 = v14;
					v16 = 0i64;
				}
				goto LABEL_13;
			}
			v16 = 0i64;
		}
		else
		{
			v16 = v14;
		}
		v17 = v15;
	LABEL_13:
		v21 = *(float*)(v18 + 64);
		v22 = *(float*)&dword_140C44578 * *(float*)(v18 + 104);
		v17.m128_f32[0] = v17.m128_f32[0] * v22;
		v16.m128_f32[0] = v16.m128_f32[0] * v22;
		v44.m128_f32[2] = v22;
		if (v21 != 0.0)
			v17.m128_f32[0] = v17.m128_f32[0]
			+ (float)((float)(*(_DWORD*)(a1->m128_u64[0] + 880) % *(_DWORD*)(v18 + 80)) * v21);
		v23 = *(float*)(v18 + 68);
		if (v23 != 0.0)
			v16.m128_f32[0] = v16.m128_f32[0]
			+ (float)((float)(*(_DWORD*)(a1->m128_u64[0] + 880) % *(_DWORD*)(v18 + 84)) * v23);
		v24 = v17.m128_f32[0];
		v25 = (int)v17.m128_f32[0];
		if ((int)v17.m128_f32[0] != 0x80000000 && (float)v25 != v17.m128_f32[0])
			v24 = (float)(v25 - (_mm_movemask_ps(_mm_unpacklo_ps(v17, v17)) & 1));
		v26 = v16.m128_f32[0];
		v17.m128_f32[0] = v17.m128_f32[0] - v24;
		v27 = (int)v16.m128_f32[0];
		v44.m128_i32[0] = v17.m128_i32[0];
		if ((int)v16.m128_f32[0] != 0x80000000 && (float)v27 != v16.m128_f32[0])
			v26 = (float)(v27 - (_mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1));
		v16.m128_f32[0] = v16.m128_f32[0] - v26;
		v44.m128_i32[1] = v16.m128_i32[0];
		*(__m128*)(v9 + 16i64 * v11) = v44;
		v28 = *(_DWORD*)(a1->m128_u64[0] + 812);
		if (!v28 || v28 == *(_DWORD*)(v18 + 12))
			(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
				qword_140C65670,
				v11,
				*v10,
				0i64);
		else
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				v11,
				*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 360i64),
				0i64,
				0i64);
		*(_OWORD*)(v9 + 16 * (v11 + 4i64)) = *(_OWORD*)(v18 + 48);
		(*(void(__fastcall**)(__int64, _QWORD, unsigned __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
			qword_140C65670,
			v11 + 4,
			v10[4],
			0i64);
		if (a5 >= 1)
		{
			v29 = *(float*)(v18 + 96);
			*(_DWORD*)((char*)&v45 + v12) = *(_DWORD*)(v18 + 88);
			*(_DWORD*)((char*)&v47[-1] + v12) = *(_DWORD*)(v18 + 92);
			*(float*)((char*)v47 + v12) = v29 * 0.0099999998;
		}
		v30 = v46;
		*(_OWORD*)(v9 + 128) = v45;
		v31 = (__m128)v47[0];
		*(_OWORD*)(v9 + 144) = v30;
		*(__m128*)(v9 + 160) = v31;
		*(__m128*)(v9 + 176) = _mm_mul_ps((__m128)xmmword_140B7B590, v31);
		v8 = (*(_DWORD*)(v18 + 112) + 1) * *(_DWORD*)((char*)&unk_140B65CB8 + v12) + v52;
		v52 = v8;
	LABEL_31:
		++v11;
		++v10;
		v12 += 4i64;
	} while (v11 < 4);
	if ((*(_DWORD*)(a1->m128_u64[0] + 132) & 0x20000) != 0)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			8i64,
			*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 360i64));
		*(_OWORD*)(v9 + 288) = 0i64;
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			9i64,
			*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 368i64));
		*(_OWORD*)(v9 + 304) = 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			8i64,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[24].m128_u64[0] + 32) + 16i64) + 32i64),
			0i64,
			0i64);
		*(_OWORD*)(v9 + 288) = *(_OWORD*)(*(_QWORD*)(a1[24].m128_u64[0] + 32) + 32i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			9i64,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[24].m128_u64[1] + 32) + 16i64) + 32i64));
		*(_OWORD*)(v9 + 304) = *(_OWORD*)(*(_QWORD*)(a1[24].m128_u64[1] + 32) + 32i64);
	}
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		10i64,
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[25].m128_u64[0] + 32) + 16i64) + 32i64));
	*(_OWORD*)(v9 + 320) = *(_OWORD*)(*(_QWORD*)(a1[25].m128_u64[0] + 32) + 32i64);
	v32 = a1->m128_u64[0];
	v33 = *(_DWORD*)(a1->m128_u64[0] + 132);
	if ((v33 & 0x1809023) != 0)
	{
		v34 = xmmword_140B7B240;
		v44 = (__m128)xmmword_140B7B240;
		v35 = 0i64;
		v45 = 0i64;
		if ((v33 & 0x20) != 0 && (*(_QWORD*)(v32 + 648) || *(_QWORD*)(v32 + 656)))
		{
			(*(void(__fastcall**)(_QWORD, unsigned __int64, __m128*, __int128*))(v32 + 656))(
				*(_QWORD*)(v32 + 648),
				a1[1].m128_u64[0],
				&v44,
				&v45);
			v34 = (__int128)v44;
			v35 = v45;
		}
		*(_OWORD*)(v9 + 192) = v34;
		*(_OWORD*)(v9 + 208) = v35;
		if ((*(_BYTE*)(a1->m128_u64[0] + 132) & 2) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				11i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[80].m128_u64[1] + 32) + 16i64) + 32i64));
			*(_OWORD*)(v9 + 352) = *(_OWORD*)(*(_QWORD*)(a1[80].m128_u64[1] + 32) + 32i64);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				11i64,
				*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 360i64),
				0i64,
				0i64);
			*(_OWORD*)(v9 + 352) = 0i64;
		}
		if ((*(_BYTE*)(a1->m128_u64[0] + 132) & 1) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				12i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[80].m128_u64[0] + 32) + 16i64) + 32i64));
			*(_OWORD*)(v9 + 336) = *(_OWORD*)(*(_QWORD*)(a1[80].m128_u64[0] + 32) + 32i64);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				12i64,
				*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 360i64),
				0i64,
				0i64);
			*(_OWORD*)(v9 + 336) = 0i64;
		}
		if ((*(_DWORD*)(a1->m128_u64[0] + 132) & 0x1000) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				13i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[25].m128_u64[1] + 32) + 16i64) + 32i64));
			*(_OWORD*)(v9 + 368) = *(_OWORD*)(*(_QWORD*)(a1[25].m128_u64[1] + 32) + 32i64);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				13i64,
				*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 368i64),
				0i64,
				0i64);
			*(_OWORD*)(v9 + 368) = 0i64;
		}
		v36 = *(_DWORD*)(a1->m128_u64[0] + 132);
		if ((v36 & 0x800000) != 0)
		{
			v37 = (_OWORD*)(v9 + 224);
			v38 = a1 + 78;
			v39 = 4i64;
			do
			{
				if (v38->m128_u64[0] && *(_DWORD*)(v38->m128_u64[0] + 24) == *(_DWORD*)(a1->m128_u64[0] + 808))
					*v37 = xmmword_140B7B240;
				else
					*v37 = xmmword_140C78440;
				v38 = (__m128*)((char*)v38 + 8);
				++v37;
				--v39;
			} while (v39);
		LABEL_63:
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				14i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[26].m128_u64[0] + 32) + 16i64) + 32i64));
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				15i64,
				*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 496i64));
		LABEL_66:
			*(_OWORD*)(v9 + 384) = *(_OWORD*)(*(_QWORD*)(a1[26].m128_u64[0] + 32) + 32i64);
		}
		else
		{
			if ((v36 & 0x1000000) != 0)
			{
				v40 = (_OWORD*)(v9 + 224);
				v41 = a1 + 78;
				v42 = 4i64;
				do
				{
					if (v41->m128_u64[0])
						*v40 = *(_OWORD*)(v41->m128_u64[0] + 32);
					else
						*v40 = 0i64;
					v41 = (__m128*)((char*)v41 + 8);
					++v40;
					--v42;
				} while (v42);
				goto LABEL_63;
			}
			if ((v36 & 0x8000) != 0)
			{
				*(_OWORD*)(v9 + 224) = xmmword_140C78410;
				*(_OWORD*)(v9 + 240) = xmmword_140C78420;
				*(_OWORD*)(v9 + 256) = xmmword_140C78430;
				*(_OWORD*)(v9 + 272) = xmmword_140C78440;
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					14i64,
					*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[26].m128_u64[0] + 32) + 16i64) + 32i64));
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					15i64,
					*(_QWORD*)(a1->m128_u64[0] + 800));
				goto LABEL_66;
			}
			*(_QWORD*)(v9 + 224) = 0i64;
			*(_QWORD*)(v9 + 232) = 0i64;
			*(_QWORD*)(v9 + 240) = 0i64;
			*(_QWORD*)(v9 + 248) = 0i64;
			*(_QWORD*)(v9 + 256) = 0i64;
			*(_QWORD*)(v9 + 264) = 0i64;
			*(_QWORD*)(v9 + 272) = 0i64;
			*(_QWORD*)(v9 + 280) = 0i64;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				14i64,
				*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 360i64),
				0i64,
				0i64);
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				15i64,
				*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 360i64));
			*(_OWORD*)(v9 + 384) = 0i64;
		}
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
LABEL_69:
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1->m128_u64[0] + 16) + 112i64),
		v8);
	sub_140384480((__int64)a1, a2, a3, a4);
	return 0i64;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B590: using guessed type __int128 xmmword_140B7B590;
// 140C44578: using guessed type int dword_140C44578;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

