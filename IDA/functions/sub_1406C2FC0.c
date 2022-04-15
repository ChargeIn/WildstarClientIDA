#include "../winhttp.h"

//----- (00000001406C2FC0) ----------------------------------------------------
char __fastcall sub_1406C2FC0(__int64 a1, char a2)
{
	char result; // al
	char v5; // di
	int v6; // ebp
	char v7; // r12
	__int64 v8; // rdi
	__int64 v9; // rdi
	__int64 v10; // rax
	int v11; // eax
	int v12; // ecx
	char v13; // r14
	int v14; // eax
	_OWORD* v15; // r15
	__int128 v16; // xmm0
	__int64 v17; // rcx
	int v18; // edx
	__int64 v19; // rsi
	__int64 v20; // rdi
	__int64 v21; // rcx
	int v22; // eax
	__int64 v23; // rcx
	__m128* v24; // rdx
	__m128 v25; // xmm1
	__m128 v26; // xmm2
	__m128 v27; // xmm0
	__m128 v28; // xmm2
	float v29; // xmm5_4
	float v30; // xmm6_4
	float v31; // xmm3_4
	int v32; // ecx
	int v33; // eax
	float v34; // xmm4_4
	int v35; // ecx
	unsigned int v36; // xmm5_4
	unsigned int v37; // xmm6_4
	__m128 v38; // xmm4
	__m128 v39; // xmm2
	int v40; // eax
	__m128 v41; // xmm2
	__int64 v42; // rcx
	BOOL v43; // eax
	__int64 v44; // [rsp+20h] [rbp-58h]
	__m128 v45; // [rsp+30h] [rbp-48h] BYREF
	char v46; // [rsp+90h] [rbp+18h]

	result = qword_140C65898;
	if (*(_DWORD*)(qword_140C65898 + 31560) == 127)
	{
		v5 = *(_BYTE*)(a1 + 1085);
		v6 = 0;
		v7 = *(_BYTE*)(a1 + 1086);
		v46 = v5;
		*(_WORD*)(a1 + 1085) = 0;
		if (!*(_BYTE*)(a1 + 1084))
		{
			v8 = *(_QWORD*)(a1 + 1072);
			if (v8)
				v9 = *(_QWORD*)(v8 + 16);
			else
				v9 = 0i64;
			if (v9)
			{
				if ((*(_BYTE*)(a1 + 664) & 2) != 0 && sub_14047BD80(v9))
				{
					v10 = sub_14047B6D0(v9);
					if (v10)
					{
						if (*(_DWORD*)(v10 + 128) == 7)
							v9 = v10;
					}
				}
				v11 = sub_1403D2400(a1, (__m128*)v9);
				v12 = *(_DWORD*)(a1 + 1056);
				v13 = 1;
				if (v11 == v12)
				{
					*(_DWORD*)(a1 + 1060) = 0;
				}
				else
				{
					v14 = dword_140C636A8;
					*(_DWORD*)(a1 + 1060) = 1;
					*(_DWORD*)(a1 + 1064) = v14;
				}
				if (*(_DWORD*)(a1 + 1060) && (unsigned int)(dword_140C636A8 - *(_DWORD*)(a1 + 1064)) < 0x64)
				{
					*(_DWORD*)(a1 + 1060) = 0;
					*(_DWORD*)(a1 + 1056) = v12 == 0;
				}
				v15 = (_OWORD*)(a1 + 1024);
				if (*(_DWORD*)(a1 + 1056))
				{
					*v15 = *(_OWORD*)(a1 + 1040);
				}
				else
				{
					v16 = *(_OWORD*)(v9 + 4576);
					*v15 = v16;
					*(_OWORD*)(a1 + 1040) = v16;
				}
				v17 = *(_QWORD*)(v9 + 3840);
				if (!v17 || (v18 = *(_DWORD*)(v17 + 128), ((v18 - 3) & 0xFFFFFFF9) != 0) || v18 == 5)
					v17 = v9;
				v19 = *(_QWORD*)(v17 + 5872);
				if (v19 || (v19 = *(_QWORD*)(v17 + 5880)) != 0)
				{
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v19 + 256i64))(v19))
					{
						v20 = *(_QWORD*)(v9 + 5864);
						if (v20)
						{
							if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v20 + 848i64))(
								v20,
								*(unsigned int*)(a1 + 1080)))
							{
								v21 = *(_QWORD*)(qword_140C65898 + 120);
								if (!v21 || !*(_QWORD*)(v21 + 968))
								{
									(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)v20 + 872i64))(
										v20,
										*(unsigned int*)(a1 + 1080),
										a1 + 1024,
										0i64);
									*(_OWORD*)(a1 + 1040) = *v15;
								}
							}
						}
					}
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v19 + 256i64))(v19)
						&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, __int64))(*(_QWORD*)v19 + 264i64))(
							v19,
							0i64,
							1i64,
							1i64))
					{
						v13 = 0;
					}
				}
				*(_BYTE*)(a1 + 1086) = v13;
				if (v13 != v7)
				{
					if (*(_BYTE*)(a1 + 1087))
					{
						*(_BYTE*)(a1 + 1087) = 0;
					}
					else
					{
						v22 = dword_140C636A8;
						*(_BYTE*)(a1 + 1087) = 1;
						*(_DWORD*)(a1 + 1088) = v22;
					}
				}
			}
			v23 = *(_QWORD*)(qword_140C65898 + 29096);
			if (!v23)
				v23 = *(_QWORD*)(qword_140C65898 + 29088);
			v24 = *(__m128**)(qword_140C65898 + 29096);
			if (!v24)
				v24 = *(__m128**)(qword_140C65898 + 29088);
			v25 = *(__m128*)(a1 + 1024);
			v26 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(v25, v25, 85), v24[23]),
						_mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v24[22])),
					_mm_mul_ps(_mm_shuffle_ps(v25, v25, 170), v24[24])),
				v24[25]);
			v27 = _mm_and_ps(_mm_shuffle_ps(v26, v26, 255), (__m128)xmmword_140B7B500);
			v28 = _mm_div_ps(v26, _mm_shuffle_ps(v27, v27, 0));
			v29 = (float)((float)((float)(v28.m128_f32[0] + 1.0) * 0.5) * (float)*(int*)(v23 + 488))
				+ (float)*(int*)(v23 + 480);
			v30 = (float)((float)(0.5 - (float)(_mm_shuffle_ps(v28, v28, 85).m128_f32[0] * 0.5)) * (float)*(int*)(v23 + 492))
				+ (float)*(int*)(v23 + 484);
			v31 = (float)((float)(*(float*)(v23 + 500) - *(float*)(v23 + 496)) * _mm_shuffle_ps(v28, v28, 170).m128_f32[0])
				+ *(float*)(v23 + 496);
			v45.m128_f32[2] = v31;
			if (!*(_BYTE*)(a1 + 1086))
				goto LABEL_49;
			v32 = dword_140C53A80;
			if (*(_DWORD*)qword_140C63750 < dword_140C53A80)
				v32 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C53A90 + v32))
			{
				*(_BYTE*)(a1 + 1085) = v31 >= 0.0;
			}
			else
			{
			LABEL_49:
				v33 = dword_140C539B0;
				v34 = 1.0 / *(float*)(*(_QWORD*)(qword_140C65898 + 29504) + 88i64);
				v35 = *(_DWORD*)qword_140C63750;
				if (*(_DWORD*)qword_140C63750 < dword_140C539B0)
					v33 = *(_DWORD*)qword_140C63750;
				*(float*)&v36 = v29 * v34;
				*(float*)&v37 = v30 * v34;
				v38 = *(__m128*)(a1 + 64);
				v45.m128_u64[0] = __PAIR64__(v37, v36);
				v39 = _mm_sub_ps(v45, v38);
				if (*((_BYTE*)&dword_140C539C0 + v33))
				{
					v40 = dword_140C539F0;
					v41 = _mm_mul_ps(v39, v39);
					if (v35 < dword_140C539F0)
						v40 = v35;
					if ((float)((float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0])
						+ _mm_shuffle_ps(v41, v41, 170).m128_f32[0]) < *((float*)&xmmword_140C53A00 + v40))
					{
						v45 = v38;
						v31 = v38.m128_f32[2];
					}
				}
				*(_BYTE*)(a1 + 1085) = v31 >= 0.0;
				if (v31 >= 0.0 && *(float*)(a1 + 648) > 0.0)
				{
					v42 = *(_QWORD*)(a1 + 16);
					if (!v42 || sub_1400D1A60(v42))
						sub_1400CC870(a1, &v45);
				}
			}
			v5 = v46;
		}
		if (*(_BYTE*)(a1 + 1087) && (unsigned int)(dword_140C636A8 - *(_DWORD*)(a1 + 1088)) > 0x64)
		{
			v43 = *(_BYTE*)(a1 + 1086) != 0;
			*(_BYTE*)(a1 + 1087) = 0;
			sub_1400D4040(a1, "UnitOcclusionChanged", (char*)a1, "b", v43);
		}
		result = *(_BYTE*)(a1 + 1085);
		if (result != v5)
		{
			if (a2)
			{
				LOBYTE(v6) = result != 0;
				LODWORD(v44) = v6;
				return sub_1400D4040(a1, "WorldLocationOnScreen", (char*)a1, byte_1409F7394, v44);
			}
		}
	}
	return result;
}
// 1406C3084: variable 'a1' is possibly undefined
// 1406C34DC: variable 'v44' is possibly undefined
// 1409F7394: using guessed type _BYTE byte_1409F7394[4];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C539B0: using guessed type int dword_140C539B0;
// 140C539C0: using guessed type int dword_140C539C0;
// 140C539F0: using guessed type int dword_140C539F0;
// 140C53A00: using guessed type __int128 xmmword_140C53A00;
// 140C53A80: using guessed type int dword_140C53A80;
// 140C53A90: using guessed type int dword_140C53A90;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

