#include "../winhttp.h"

//----- (0000000140261650) ----------------------------------------------------
__int64 __fastcall sub_140261650(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // r8
	__m128 v6; // xmm0
	__m128 v7; // xmm4
	__m128 v8; // xmm2
	__m128 v9; // xmm3
	__m128 v10; // xmm5
	__m128 v11; // xmm3
	__m128 v12; // xmm1
	__m128 v13; // xmm4
	_OWORD* v14; // rax
	int v15; // eax
	int v16; // edx
	int v17; // eax
	__int64 v18; // rdx
	__int64 v19; // r8
	__int64 v20; // rax
	__int64 v21; // r8
	__int64 v22; // r8
	int v24; // [rsp+30h] [rbp-78h] BYREF
	__int64 v25; // [rsp+38h] [rbp-70h]
	int v26; // [rsp+44h] [rbp-64h]
	__int128 v27[5]; // [rsp+50h] [rbp-58h] BYREF
	int v28; // [rsp+B0h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 1720);
	*(_DWORD*)(a1 + 148) = 8;
	v4 = *(unsigned int*)(a1 + 2396);
	v24 = 1;
	v25 = v2;
	v26 = 0;
	(*(void(__fastcall**)(__int64, int*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(qword_140C65670, &v24, v4);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2192),
		0i64);
	v6 = *(__m128*)(a1 + 304);
	v7 = *(__m128*)(a1 + 320);
	v8 = *(__m128*)(a1 + 336);
	v9 = *(__m128*)(a1 + 288);
	v10 = _mm_unpackhi_ps(v9, v6);
	v11 = _mm_unpacklo_ps(v9, v6);
	v12 = _mm_unpacklo_ps(v7, v8);
	v13 = _mm_unpackhi_ps(v7, v8);
	v27[0] = (__int128)_mm_shuffle_ps(v11, v12, 68);
	v27[1] = (__int128)_mm_shuffle_ps(v11, v12, 238);
	v27[2] = (__int128)_mm_shuffle_ps(v10, v13, 68);
	v27[3] = (__int128)_mm_shuffle_ps(v10, v13, 238);
	(*(void(__fastcall**)(__int64, __int64, __int128*, _QWORD, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 328i64))(
		qword_140C65670,
		64i64,
		v27,
		0i64,
		0,
		0);
	v14 = (_OWORD*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 272i64))(
			qword_140C65670,
			48i64,
			0i64,
			0i64,
			0);
	if (v14)
	{
		*v14 = *(_OWORD*)(a1 + 544);
		v14[1] = *(_OWORD*)(a1 + 560);
		v14[2] = *(_OWORD*)(a1 + 592);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	if (*(_DWORD*)(a1 + 2408))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
		v25 = *(_QWORD*)(a1 + 1712);
		v24 = 1;
		v26 = 0;
		(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v24,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 1i64);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
			qword_140C65670,
			1i64,
			0i64);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
			qword_140C65670,
			*(unsigned int*)(a1 + 2416),
			*(unsigned int*)(a1 + 2416),
			0i64);
		if (*(_DWORD*)(a1 + 48) == 9)
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 416i64))(
				qword_140C65670,
				0i64,
				0i64);
		v15 = *(_DWORD*)(a1 + 48);
		if (v15 == 9 || v15 == 13)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				1i64,
				*(_QWORD*)(a1 + 1720));
			v16 = 1;
		}
		else if (v15 == 18)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				1i64,
				*(_QWORD*)(a1 + 1704));
			v16 = 0;
		}
		else
		{
			v16 = v28;
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 2208),
			(unsigned int)(12 * v16 + 9));
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
			qword_140C65670,
			0xFFFFFFFFi64,
			*(_QWORD*)qword_140C65670,
			a1 + 1736,
			a1 + 1744,
			0i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	}
	if (*(_DWORD*)(a1 + 608) || *(_DWORD*)(a1 + 48) != 18)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
		v17 = *(_DWORD*)(a1 + 48);
		if (*(_DWORD*)(a1 + 608))
		{
			if (v17 == 9)
			{
				v18 = 0i64;
				v19 = 4i64;
				goto LABEL_21;
			}
			if (v17 != 13)
			{
				if (v17 != 18)
				{
				LABEL_22:
					v20 = *(_QWORD*)(a1 + 2352);
					v24 = 1;
					v25 = v20;
					v26 = 0;
					(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
						qword_140C65670,
						&v24,
						&unk_140C3FE88,
						&unk_140C3FE88,
						&unk_140C3FE88);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
						qword_140C65670,
						1i64,
						4i64);
					sub_14025ED60(a1, a2, 0, 1);
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670
						+ 664i64))(
							qword_140C65670,
							0xFFFFFFFFi64,
							v21,
							a1 + 1736,
							a1 + 1744,
							0i64);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
					v25 = *(_QWORD*)(a1 + 1712);
					v24 = 1;
					v26 = 0;
					(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
						qword_140C65670,
						&v24,
						&unk_140C3FE88,
						&unk_140C3FE88,
						&unk_140C3FE88);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 1i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
						qword_140C65670,
						1i64,
						0i64);
					sub_14025EFB0(a1, 1);
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670
						+ 664i64))(
							qword_140C65670,
							0xFFFFFFFFi64,
							v22,
							a1 + 1736,
							a1 + 1744,
							0i64);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
					return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
				}
				goto LABEL_19;
			}
		}
		else
		{
			if (v17 == 9)
			{
			LABEL_19:
				v18 = 4i64;
			LABEL_20:
				v19 = (unsigned int)v18;
			LABEL_21:
				(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
					qword_140C65670,
					v18,
					v19,
					0i64);
				goto LABEL_22;
			}
			if (v17 != 13)
				goto LABEL_22;
		}
		v18 = 2i64;
		goto LABEL_20;
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
}
// 140261A96: variable 'v21' is possibly undefined
// 140261B58: variable 'v22' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

