//----- (000000014017D290) ----------------------------------------------------
void __fastcall sub_14017D290(__int64 a1, float a2)
{
	__int64 v3; // rcx
	float v4; // xmm3_4
	char v5; // al
	float v6; // xmm2_4
	float v7; // xmm0_4
	float v8; // xmm0_4
	float v9; // xmm1_4
	__int64 v10; // rbx
	double v11; // xmm6_8
	float v12; // xmm9_4
	float v13; // xmm8_4
	float v14; // xmm7_4
	float v15; // xmm0_4
	float v16; // xmm11_4
	float v17; // xmm1_4
	float v18; // xmm9_4
	float v19; // xmm8_4
	float v20; // xmm3_4
	float v21; // xmm10_4
	float v22; // xmm9_4
	float v23; // xmm7_4
	float v24; // xmm8_4
	float v25; // xmm11_4
	__int64 v26; // rax
	__int64 v27; // rcx
	_QWORD* v28; // rcx
	_QWORD* v29; // rcx
	_QWORD* v30; // rsi
	__int64 v31; // rcx
	int v32; // ebx
	_DWORD* v33; // rax
	_QWORD* v34; // rcx
	_QWORD* v35; // rsi
	__int64 v36; // rcx
	int v37; // ebx
	_DWORD* v38; // rax
	int v39; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v41; // [rsp+58h] [rbp-A8h]
	__m128 v42; // [rsp+70h] [rbp-90h] BYREF
	__int64(__fastcall * *v43)(); // [rsp+80h] [rbp-80h] BYREF
	__int128 v44; // [rsp+88h] [rbp-78h]
	int v45[12]; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v46; // [rsp+D0h] [rbp-30h]
	char v47[16]; // [rsp+E0h] [rbp-20h] BYREF

	if (*(float*)(a1 + 648) > 0.0)
	{
		v3 = *(_QWORD*)(a1 + 16);
		if (!v3 || sub_1400D1A60(v3))
		{
			v4 = *(float*)(a1 + 2156);
			if (v4 > 0.0)
			{
				v5 = *(_BYTE*)(a1 + 2152);
				if (v5 || *(_BYTE*)(a1 + 2153))
				{
					if (*(_QWORD*)(a1 + 2136))
					{
						if (v5)
							v6 = -1.5;
						else
							v6 = 1.5;
						if ((float)(v4 - a2) >= 0.0)
						{
							*(float*)(a1 + 2156) = v4 - a2;
							v8 = *(float*)(a1 + 2160) - (float)(v6 * a2);
						}
						else
						{
							v7 = *(float*)(a1 + 2160);
							*(_WORD*)(a1 + 2152) = 0;
							*(_DWORD*)(a1 + 2156) = 0;
							v8 = v7 - (float)((float)(a2 - v4) * v6);
						}
						v9 = *(float*)&dword_140C3CFB8;
						*(float*)(a1 + 2160) = v8;
						*(float*)(a1 + 2160) = sub_1408FDE98(v8, v9 * 2.0);
					}
				}
			}
			v10 = *(_QWORD*)(a1 + 2136);
			if (v10)
			{
				*(_QWORD*)&v11 = *(unsigned int*)(a1 + 2160);
				v12 = sub_1408FE3D0(0.0);
				*(float*)&v11 = *(float*)&v11 * 0.5;
				v13 = sub_1408FC950(0.0);
				v14 = sub_1408FE3D0(v11);
				v15 = sub_1408FC950(v11);
				v42.m128_f32[0] = (float)((float)(v15 * v12) * v13) + (float)((float)(v14 * v13) * v12);
				v42.m128_f32[2] = (float)((float)(v15 * v13) * v12) - (float)((float)(v14 * v12) * v13);
				v42.m128_f32[3] = (float)((float)(v14 * v12) * v12) + (float)((float)(v15 * v13) * v13);
				v42.m128_f32[1] = (float)((float)(v14 * v13) * v13) - (float)((float)(v15 * v12) * v12);
				v16 = _mm_shuffle_ps(v42, v42, 85).m128_f32[0];
				v17 = v16 * 2.0;
				v18 = _mm_shuffle_ps(v42, v42, 170).m128_f32[0];
				v19 = _mm_shuffle_ps(v42, v42, 255).m128_f32[0];
				v20 = v18 * 2.0;
				*(float*)&v11 = v16 * (float)(v16 * 2.0);
				v21 = v19 * (float)(v42.m128_f32[0] * 2.0);
				v22 = v18 * (float)(v18 * 2.0);
				*(float*)v45 = (float)(1.0 - *(float*)&v11) - v22;
				v23 = v19 * v20;
				v24 = v19 * (float)(v16 * 2.0);
				*(float*)&v45[1] = (float)(v42.m128_f32[0] * (float)(v16 * 2.0)) + v23;
				v25 = v16 * v20;
				v45[3] = 0;
				v45[7] = 0;
				v45[11] = 0;
				*(float*)&v45[2] = (float)(v42.m128_f32[0] * v20) - v24;
				*(float*)&v45[5] = (float)(1.0 - (float)(v42.m128_f32[0] * (float)(v42.m128_f32[0] * 2.0))) - v22;
				*(float*)&v45[4] = (float)(v42.m128_f32[0] * v17) - v23;
				v46 = xmmword_140B7AD00;
				*(float*)&v45[6] = v25 + v21;
				*(float*)&v45[10] = (float)(1.0 - (float)(v42.m128_f32[0] * (float)(v42.m128_f32[0] * 2.0))) - *(float*)&v11;
				*(float*)&v45[8] = (float)(v42.m128_f32[0] * v20) + v24;
				*(float*)&v45[9] = v25 - v21;
				v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 80i64))(v10);
				v27 = *(_QWORD*)(a1 + 2136);
				*(_QWORD*)&v46 = *(_QWORD*)(v26 + 48);
				DWORD2(v46) = *(_DWORD*)(v26 + 56);
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v27 + 72i64))(v27, v45);
			}
			if ((*(_BYTE*)(a1 + 664) & 4) != 0)
			{
				if (*(_DWORD*)(a1 + 2080))
				{
					v28 = *(_QWORD**)(a1 + 792);
					if (v28)
					{
						if (*v28 && sub_1401099E0((__int64)v28))
						{
							sub_1401800D0(
								(unsigned __int64*)(a1 + 2120),
								*(_QWORD*)(a1 + 792),
								*(_DWORD*)(a1 + 1048),
								*(_DWORD*)(a1 + 1052));
							*(_DWORD*)(a1 + 2080) = 0;
						}
					}
				}
			}
			if (*(_DWORD*)(a1 + 2072))
			{
				v29 = *(_QWORD**)(a1 + 2056);
				if (v29 && *v29)
				{
					if (sub_1401099E0((__int64)v29))
						sub_1401800D0(
							(unsigned __int64*)(a1 + 2088),
							*(_QWORD*)(a1 + 2056),
							*(_DWORD*)(a1 + 1048),
							*(_DWORD*)(a1 + 1052));
				}
				else
				{
					v30 = (_QWORD*)(a1 + 2088);
					v31 = *(_QWORD*)(a1 + 2088);
					if (v31)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
						*v30 = 0i64;
					}
					if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
						qword_140C65670,
						1i64,
						1i64,
						1i64,
						0,
						1,
						0,
						256,
						0,
						a1 + 2088) < 0)
					{
						TlsValue = &off_140B5E648;
						*(_QWORD*)&v41 = 0i64;
						*((_QWORD*)&v41 + 1) = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, &TlsValue);
						v43 = TlsValue;
						v42.m128_u64[0] = 0x141D36AE0i64;
						v44 = v41;
						v32 = sub_140197770(13, &v42, &v43);
						TlsValue = &off_140B5E648;
						TlsSetValue(dwTlsIndex, *((LPVOID*)&v41 + 1));
						if (v32)
							DebugBreak();
					}
					if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v30 + 48i64))(*v30))
					{
						v33 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(*(_QWORD*)*v30 + 72i64))(
							*v30,
							0i64,
							v47,
							2i64);
						if (v33)
						{
							*v33 = 0;
							(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v30 + 80i64))(*v30, 0i64);
						}
					}
				}
				*(_DWORD*)(a1 + 2072) = 0;
			}
			if (*(_DWORD*)(a1 + 2076))
			{
				v34 = *(_QWORD**)(a1 + 2064);
				if (v34 && *v34)
				{
					if (sub_1401099E0((__int64)v34))
						sub_1401800D0(
							(unsigned __int64*)(a1 + 2104),
							*(_QWORD*)(a1 + 2064),
							*(_DWORD*)(a1 + 1048),
							*(_DWORD*)(a1 + 1052));
				}
				else
				{
					v35 = (_QWORD*)(a1 + 2104);
					v36 = *(_QWORD*)(a1 + 2104);
					if (v36)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
						*v35 = 0i64;
					}
					if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
						qword_140C65670,
						1i64,
						1i64,
						1i64,
						0,
						1,
						0,
						256,
						0,
						a1 + 2104) < 0)
					{
						TlsValue = &off_140B5E648;
						*(_QWORD*)&v41 = 0i64;
						*((_QWORD*)&v41 + 1) = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, &TlsValue);
						v43 = TlsValue;
						v42.m128_u64[0] = 0x141D36A80i64;
						v44 = v41;
						v37 = sub_140197770(13, &v42, &v43);
						TlsValue = &off_140B5E648;
						TlsSetValue(dwTlsIndex, *((LPVOID*)&v41 + 1));
						if (v37)
							DebugBreak();
					}
					if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v35 + 48i64))(*v35))
					{
						v38 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __m128*, __int64))(*(_QWORD*)*v35 + 72i64))(
							*v35,
							0i64,
							&v42,
							2i64);
						if (v38)
						{
							*v38 = -16777216;
							(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v35 + 80i64))(*v35, 0i64);
						}
					}
				}
				*(_DWORD*)(a1 + 2076) = 0;
			}
			v39 = dword_140C3C570;
			if (*(_DWORD*)qword_140C63750 < dword_140C3C570)
				v39 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C3C580 + v39) && (*(_DWORD*)(a1 + 1032) || *(_DWORD*)(a1 + 1024)))
				sub_140180400(a1);
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C3C570: using guessed type int dword_140C3C570;
// 140C3C580: using guessed type int dword_140C3C580;
// 140C3CFB8: using guessed type int dword_140C3CFB8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 14017D290: using guessed type char var_90[16];

