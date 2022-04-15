#include "../winhttp.h"

//----- (0000000140393280) ----------------------------------------------------
__int64 __fastcall sub_140393280(__int64 a1)
{
	__int64 v1; // rax
	int v3; // edx
	int v4; // r11d
	__int64 v5; // r10
	int v6; // eax
	int v7; // r8d
	__int64 v8; // rax
	__int64 v9; // r14
	_OWORD* v10; // rdi
	unsigned int v11; // ebx
	__int64* v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rax
	__int128 v15; // xmm0
	__int64 v16; // rax
	float v17; // xmm2_4
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rax
	int v21; // eax
	int* v22; // r8
	__int64 v23; // rdx
	int v24; // eax
	float v25; // xmm3_4
	__m128 v26; // xmm0
	int v27; // ecx
	int v28; // ecx
	__int64 v29; // r8
	__int64 v30; // rax
	__int64 v32; // [rsp+20h] [rbp-78h]
	__int128 v33; // [rsp+40h] [rbp-58h]
	__int128 v34; // [rsp+50h] [rbp-48h]

	v1 = *(_QWORD*)(a1 + 40);
	if (v1)
		v3 = *(_DWORD*)(v1 + 40);
	else
		v3 = 0;
	v4 = 0;
	v5 = **(_QWORD**)(a1 + 16);
	v6 = dword_140C44360;
	if (*(_DWORD*)qword_140C63750 < dword_140C44360)
		v6 = *(_DWORD*)qword_140C63750;
	if (!byte_140C44370[v6] || (v7 = 1, (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 72i64) & 0x10) != 0))
		v7 = 0;
	LOBYTE(v4) = *(float*)(v5 + 4260) > 0.0;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(v5 + 16) + 176i64),
		(unsigned int)(v7 + 2 * (v4 + 2 * v3)));
	v8 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		224i64,
		1i64);
	v9 = v8;
	if (v8)
	{
		v10 = (_OWORD*)v8;
		v11 = 0;
		v12 = (__int64*)(a1 + 48);
		do
		{
			v13 = *(_QWORD*)qword_140C65670;
			if (*v12)
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v13 + 352))(
					qword_140C65670,
					v11,
					*(_QWORD*)(*v12 + 80),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					v11 + 4,
					*(_QWORD*)(*v12 + 88),
					0i64,
					0i64);
				v14 = *v12;
				*v10 = *(_OWORD*)(*v12 + 128);
				v15 = *(_OWORD*)(v14 + 144);
			}
			else
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v13 + 352))(
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
				v15 = 0i64;
				*v10 = 0i64;
			}
			++v11;
			v10[1] = v15;
			v10 += 2;
			++v12;
		} while (v11 < 4);
		v16 = *(_QWORD*)(a1 + 48);
		v17 = 0.0;
		v33 = 0i64;
		v34 = 0i64;
		if (v16)
		{
			v17 = *(float*)(v16 + 76);
			*(float*)&v33 = v17;
			LODWORD(v34) = *(_DWORD*)(v16 + 72);
		}
		v18 = *(_QWORD*)(a1 + 56);
		if (v18)
		{
			DWORD1(v33) = *(_DWORD*)(v18 + 76);
			DWORD1(v34) = *(_DWORD*)(v18 + 72);
			v17 = v17 + *((float*)&v33 + 1);
		}
		v19 = *(_QWORD*)(a1 + 64);
		if (v19)
		{
			DWORD2(v33) = *(_DWORD*)(v19 + 76);
			DWORD2(v34) = *(_DWORD*)(v19 + 72);
			v17 = v17 + *((float*)&v33 + 2);
		}
		v20 = *(_QWORD*)(a1 + 72);
		if (v20)
		{
			HIDWORD(v33) = *(_DWORD*)(v20 + 76);
			HIDWORD(v34) = *(_DWORD*)(v20 + 72);
			v17 = v17 + *((float*)&v33 + 3);
		}
		*(_OWORD*)(v9 + 128) = v33;
		*(_OWORD*)(v9 + 144) = v34;
		if (v17 == 0.0)
			*(_DWORD*)(v9 + 176) = 1259902592;
		else
			*(float*)(v9 + 176) = 1.0 / v17;
		v21 = dword_140C445F0;
		v22 = (int*)qword_140C63750;
		if (*(_DWORD*)qword_140C63750 < dword_140C445F0)
			v21 = *(_DWORD*)qword_140C63750;
		v23 = v21;
		v24 = dword_140C44650;
		if (*(_DWORD*)qword_140C63750 < dword_140C44650)
			v24 = *(_DWORD*)qword_140C63750;
		v25 = 1.0 / (float)(dword_140C44600[v23] - dword_140C44660[v24]);
		v26 = (__m128) * (unsigned int*)(*(_QWORD*)(a1 + 32) + 24i64);
		*(_QWORD*)(v9 + 160) = _mm_shuffle_ps(v26, v26, 0).m128_u64[0];
		*(float*)(v9 + 168) = v25;
		v27 = dword_140C44650;
		if (*v22 < dword_140C44650)
			v27 = *v22;
		*(float*)(v9 + 172) = -(float)(v25 * dword_140C44660[v27]);
		v28 = dword_140C443A0;
		if (*v22 < dword_140C443A0)
			v28 = *v22;
		*(_DWORD*)(v9 + 180) = dword_140C443B0[v28];
		*(_DWORD*)(v9 + 184) = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 48i64);
		v29 = *(_QWORD*)(a1 + 80);
		if (v29)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				13i64,
				*(_QWORD*)(v29 + 80));
			HIDWORD(v32) = 0;
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				14i64,
				*(_QWORD*)(*(_QWORD*)(a1 + 80) + 88i64));
			v30 = *(_QWORD*)(a1 + 80);
			*(_OWORD*)(v9 + 192) = *(_OWORD*)(v30 + 128);
			*(_OWORD*)(v9 + 208) = *(_OWORD*)(v30 + 144);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				13i64,
				*(_QWORD*)(**(_QWORD**)(a1 + 16) + 5552i64));
			HIDWORD(v32) = 0;
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				14i64,
				*(_QWORD*)(**(_QWORD**)(a1 + 16) + 5560i64));
			*(_OWORD*)(v9 + 192) = xmmword_140C77860;
			*(_OWORD*)(v9 + 208) = xmmword_140C77870;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(qword_140C65670, *(_QWORD*)(a1 + 88));
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 96),
		17i64);
	LODWORD(v32) = 0;
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
		+ 656i64))(
			qword_140C65670,
			3i64,
			0i64,
			*(unsigned int*)(*(_QWORD*)(a1 + 32) + 64i64),
			v32,
			*(_DWORD*)(*(_QWORD*)(a1 + 32) + 68i64),
			0,
			1);
	return 0i64;
}
// 140393717: variable 'v32' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44360: using guessed type int dword_140C44360;
// 140C44370: using guessed type _BYTE[32];
// 140C443A0: using guessed type int dword_140C443A0;
// 140C443B0: using guessed type int dword_140C443B0[16];
// 140C445F0: using guessed type int dword_140C445F0;
// 140C44600: using guessed type float dword_140C44600[14];
// 140C44650: using guessed type int dword_140C44650;
// 140C44660: using guessed type float dword_140C44660[14];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77860: using guessed type __int128 xmmword_140C77860;
// 140C77870: using guessed type __int128 xmmword_140C77870;

