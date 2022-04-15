//----- (00000001406DC710) ----------------------------------------------------
void __fastcall sub_1406DC710(__m128* a1, float a2)
{
	unsigned __int64* v2; // rdi
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int128 v7; // xmm0
	float v8; // xmm0_4
	float v9; // xmm2_4
	bool v10; // cf
	float v11; // xmm3_4
	float v12; // xmm1_4
	DWORD TickCount; // r12d
	unsigned __int64 v14; // rcx
	unsigned int v15; // r14d
	__int64 v16; // rsi
	__int64 v17; // rdi
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // r15
	float v22; // xmm6_4
	int v23; // ecx
	unsigned int v24; // r8d
	unsigned int v25; // edx
	__m128i v26; // xmm1
	__m128i v27; // xmm3
	unsigned int v28; // esi
	__int64 v29; // rcx
	__int64 v30; // rdi
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // [rsp+50h] [rbp-59h] BYREF
	int v34; // [rsp+58h] [rbp-51h]
	int v35; // [rsp+5Ch] [rbp-4Dh]
	float v36; // [rsp+60h] [rbp-49h]
	float v37; // [rsp+64h] [rbp-45h]
	__int128 v38; // [rsp+70h] [rbp-39h] BYREF
	__int64 v39; // [rsp+80h] [rbp-29h]
	__int128 v40; // [rsp+90h] [rbp-19h] BYREF
	int v41; // [rsp+A4h] [rbp-5h]
	__int128 v42[2]; // [rsp+B0h] [rbp+7h] BYREF

	v2 = &a1[129].m128_u64[1];
	if (!a1[129].m128_u64[1]
		&& (*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, int, _DWORD, _DWORD, unsigned __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			512i64,
			512i64,
			1i64,
			0,
			5,
			1,
			0,
			0,
			v2) < 0
		|| !a1[130].m128_u64[0]
		&& (*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, int, _DWORD, _DWORD, __m128*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			512i64,
			512i64,
			1i64,
			0,
			5,
			1,
			0,
			0,
			a1 + 130) < 0)
	{
		return;
	}
	if (!(*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)*v2 + 48i64))(*v2))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
		*((_QWORD*)&v40 + 1) = *v2;
		LODWORD(v40) = 1;
		v41 = 0;
		(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v40,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
		v4 = (_QWORD*)a1[64].m128_u64[0];
		v33 = 0xFFFFFFC0FFFFFFC0ui64;
		v34 = 192;
		v40 = xmmword_140C77810;
		v35 = 192;
		*(_QWORD*)&v38 = 256i64;
		*((_QWORD*)&v38 + 1) = 0x10000000200i64;
		if (v4)
			sub_140103CF0(
				v4,
				(unsigned int*)&v33,
				(__m128*) & v40,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - a1[64].m128_f32[2]) * a1[64].m128_f32[3]));
		v5 = (_QWORD*)a1[64].m128_u64[0];
		v40 = xmmword_140C77820;
		if (v5)
			sub_140103CF0(
				v5,
				(unsigned int*)&v38,
				(__m128*) & v40,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - a1[64].m128_f32[2]) * a1[64].m128_f32[3]));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	}
	if (!a1[129].m128_i8[1])
	{
		v6 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v6)
		{
			v7 = *(_OWORD*)(v6 + 4576);
			*(_QWORD*)&v38 = 0i64;
			v40 = v7;
			v39 = 0i64;
			sub_1406DB9D0((__int64)a1, (__m128*) & v40, 2.0, (__int64)&v38);
			a1[129].m128_i8[1] = 1;
		}
	}
	v8 = a1[74].m128_f32[1];
	v9 = a1[74].m128_f32[0];
	if (v8 != v9)
	{
		v10 = v8 < v9;
		v11 = (float)(v9 * a2) * 4.0;
		if (v8 > v9)
		{
			v12 = v9 + v11;
			if (v8 > (float)(v9 + v11))
			{
			LABEL_21:
				sub_1406DC270(a1, v12);
				goto LABEL_22;
			}
			v10 = v8 < v9;
		}
		if (!v10 || (v12 = v9 - v11, v8 >= (float)(v9 - v11)))
			v12 = a1[74].m128_f32[1];
		goto LABEL_21;
	}
LABEL_22:
	TickCount = GetTickCount();
	if (a1[129].m128_i8[2])
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 504i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
		v14 = *v2;
		LODWORD(v40) = 1;
		*((_QWORD*)&v40 + 1) = v14;
		v41 = 0;
		(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
			qword_140C65670,
			&v40,
			&unk_140C3FE88,
			&unk_140C3FE88,
			&unk_140C3FE88);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
		a1[129].m128_i8[2] = 0;
		v15 = 0;
		if (a1[75].m128_u64[0])
		{
			v16 = 0i64;
			do
			{
				v17 = *(_QWORD*)(a1[74].m128_u64[1] + 8 * v16);
				if (v17)
				{
					a1[129].m128_i8[2] = 1;
					v18 = *(_QWORD*)(v17 + 32);
					LODWORD(v40) = 0;
					if (*(_BYTE*)(v18 + 64) || sub_1400FE1F0(v18, (__int64)&v40))
					{
						v19 = *(_QWORD*)(v17 + 32);
						if (v19)
						{
							v20 = sub_1400FE680(v19);
							v21 = v20;
							if (v20)
							{
								v22 = (float)*(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 24i64))(v20) + 8);
								v23 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 24i64))(v21) + 4);
								v33 = 0i64;
								v24 = (int)*(float*)(v17 + 48);
								v25 = (int)*(float*)(v17 + 52);
								v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)*(float*)(v17 + 68)), _mm_cvtsi32_si128(0));
								v27 = _mm_cvtsi32_si128((int)*(float*)(v17 + 64));
								v36 = (float)v23;
								v37 = v22;
								v42[1] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v27, _mm_cvtsi32_si128(0)), v26));
								v42[0] = (__int128)_mm_cvtepi32_ps(
									_mm_unpacklo_epi32(
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(0)),
										_mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(0))));
								v38 = xmmword_140B7B240;
								(*(void(__fastcall**)(__int64, __int64, __int64*, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680
									+ 240i64))(
										qword_140C65680,
										v21,
										&v33,
										v42,
										&v38,
										1);
								sub_1406DB810(v17);
								*(_QWORD*)(a1[74].m128_u64[1] + 8 * v16) = 0i64;
							}
						}
					}
					if (GetTickCount() - TickCount > 0x19)
						break;
				}
				v16 = ++v15;
			} while (v15 < a1[75].m128_u64[0]);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	}
	else
	{
		v28 = 0;
		if (a1[75].m128_u64[0])
		{
			v29 = 0i64;
			do
			{
				v30 = *(_QWORD*)(a1[74].m128_u64[1] + 8 * v29);
				if (v30)
				{
					v31 = *(_QWORD*)(v30 + 32);
					if (v31)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
						*(_QWORD*)(v30 + 32) = 0i64;
					}
					v32 = *(_QWORD*)(v30 + 8);
					if (v32)
						sub_14018B900(v32, 0);
					sub_14018B900(v30, 0);
				}
				v29 = ++v28;
			} while (v28 < a1[75].m128_u64[0]);
		}
		sub_1400523E0(&a1[74].m128_i64[1]);
	}
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77810: using guessed type __int128 xmmword_140C77810;
// 140C77820: using guessed type __int128 xmmword_140C77820;
// 1406DC710: using guessed type __m128 var_70;

