#include "../winhttp.h"

//----- (0000000140773320) ----------------------------------------------------
__int64 __fastcall sub_140773320(__m128* a1, __m128* a2, double a3, float a4, __int64 a5, int a6)
{
	__m128 v6; // xmm0
	__int64 result; // rax
	__int64* v12; // rbx
	unsigned __int64 v13; // rsi
	int* v14; // rax
	__int64 v15; // r14
	__int64 v16; // rcx
	__int64 v17; // rdi
	__int64 v18; // rsi
	__m128* v19; // rcx
	__m128* v20; // rax
	__m128* v21; // rax
	__int64 v22; // rax
	double v23; // xmm3_8
	bool v24; // zf
	__m128* v25; // rax
	float v26; // xmm4_4
	__int64 v27; // rdx
	float* v28; // rsi
	__int64 v29; // rax
	__int64 v30; // rcx
	double v31; // xmm1_8
	__m128 v32; // xmm2
	__m128 v33; // xmm5
	__m128 v34; // xmm2
	__m128 v35; // xmm1
	__m128 v36; // xmm0
	__m128 v37; // xmm4
	__m128* v38; // rax
	_QWORD* v39; // rcx
	double v40; // xmm3_8
	__int64 v41; // rdx
	__int64 v42; // rax
	float v43; // xmm4_4
	__m128* v44; // rax
	__int64 v45; // rdx
	__int64 v46; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v47; // [rsp+60h] [rbp-A8h]
	__m128 v48; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v49; // [rsp+78h] [rbp-90h] BYREF
	__int128 v50; // [rsp+88h] [rbp-80h]
	__int128 v51; // [rsp+98h] [rbp-70h]
	__m128 v52; // [rsp+A8h] [rbp-60h]
	int v53[2]; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v54; // [rsp+C0h] [rbp-48h]
	__int128 v55; // [rsp+C8h] [rbp-40h] BYREF
	__m128 v56; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v57; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v58; // [rsp+F8h] [rbp-10h] BYREF
	__int128 v59; // [rsp+108h] [rbp+0h] BYREF
	__int128 v60; // [rsp+118h] [rbp+10h] BYREF
	__m128 v61; // [rsp+128h] [rbp+20h] BYREF
	__int128 v62; // [rsp+138h] [rbp+30h] BYREF
	__m128 v63; // [rsp+148h] [rbp+40h] BYREF
	__int128 v64; // [rsp+158h] [rbp+50h] BYREF
	char v65[16]; // [rsp+168h] [rbp+60h] BYREF
	char v66[64]; // [rsp+178h] [rbp+70h] BYREF
	__int128 v67[6]; // [rsp+1B8h] [rbp+B0h] BYREF

	v6 = *a2;
	v54 = a5;
	a1[2] = v6;
	result = a1[3].m128_i64[1];
	a1[1].m128_f32[0] = a4;
	v12 = *(__int64**)result;
	if (*(_QWORD*)result != result)
	{
		do
		{
			v13 = v12[4];
			if (v13)
			{
				v14 = sub_14018B280(8 * v13 + 16, 0);
				if (v14)
				{
					*(_QWORD*)v14 = off_140B55060;
					*((_QWORD*)v14 + 1) = v13;
					v15 = (__int64)(v14 + 4);
				}
				else
				{
					v15 = 16i64;
				}
			}
			else
			{
				v15 = 0i64;
			}
			result = (__int64)sub_1407DB590((int*)v15, (int*)v12[3], 8 * v13);
			v16 = 0i64;
			if (!v13)
				goto LABEL_58;
			while (1)
			{
				v17 = *(_QWORD*)(v15 + 8 * v16);
				if (!*(_DWORD*)(v17 + 376))
				{
					result = (*(_DWORD*)(v17 + 344) >> 5) & 1;
					if (((*(_DWORD*)(v17 + 344) >> 5) & 1) != 0)
					{
						if (a6)
							break;
					}
					if (!(_DWORD)result && !a6)
						break;
				}
				if (++v16 >= v13)
					goto LABEL_58;
			}
			v18 = v54;
			v19 = *(__m128**)(v15 + 8 * v16);
			v46 = 0i64;
			sub_140770FC0(v19, a2, a3, a4, v54);
			v20 = (__m128*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v17 + 16i64))(v17, v65);
			result = (__int64)sub_1407711C0(&v48, v20, a2, a3, LODWORD(a4), v18, &v46, (float*)&v46 + 1);
			if ((_DWORD)v46)
			{
				if ((*(_BYTE*)(v17 + 344) & 2) == 0)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
					LODWORD(v50) = HIDWORD(v46);
					*((_QWORD*)&v50 + 1) = &v48;
					v49.m128_i32[0] = 1065353216;
					v49.m128_u64[1] = 0i64;
					v67[1] = v50;
					v67[0] = v49.m128_u64[0];
					sub_1401B0840((int*)v67, (__int64)v66);
					(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v66);
					v21 = (__m128*)(v17 + 160);
					if (!*(_DWORD*)(v17 + 336))
						v21 = (__m128*)(v17 + 144);
					v58 = *v21;
					v22 = sub_140770E90(v17);
					if (*(_QWORD*)v22)
					{
						*(_QWORD*)&v23 = (unsigned int)dword_140C63664;
						*(float*)&v23 = (float)(*(float*)&dword_140C63664 - *(float*)(v22 + 8)) * *(float*)(v22 + 12);
						sub_1401039E0(*(_QWORD**)v22, &qword_140C77760, &v58, v23);
					}
				LABEL_21:
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
				}
			}
			else
			{
				result = *(unsigned int*)(v17 + 344);
				if ((result & 1) != 0)
					goto LABEL_58;
				if ((result & 0x40) != 0)
				{
					v24 = *(_DWORD*)(v17 + 336) == 0;
					v25 = (__m128*)(v17 + 160);
					v26 = *(float*)(v17 + 176) / a4;
					v49.m128_f32[0] = v48.m128_f32[0] - v26;
					v49.m128_f32[1] = v48.m128_f32[1] - v26;
					*(float*)&v50 = v48.m128_f32[0] + v26;
					*((float*)&v50 + 1) = v48.m128_f32[1] + v26;
					if (v24)
						v25 = (__m128*)(v17 + 144);
					v63 = *v25;
					result = sub_140770E90(v17);
					if (*(_QWORD*)result)
						result = sub_140103E60(
							*(_QWORD**)result,
							&v49,
							&v63,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(result + 8)) * *(float*)(result + 12)));
					v27 = *(_QWORD*)(v17 + 32);
					if (v27)
					{
						v64 = xmmword_140C777D0;
						v55 = xmmword_140B7B240;
						result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 272i64))(
							qword_140C65680,
							v27,
							0i64,
							-1i64,
							&v49,
							5,
							&v55,
							&v64,
							1);
					}
					goto LABEL_58;
				}
				if ((result & 0x1C) == 0)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
					v28 = (float*)sub_140770E90(v17);
					v29 = sub_140770E90(v17);
					v30 = *(_QWORD*)v29;
					if (*(_QWORD*)v29)
					{
						if ((int)((__int64)(*(_QWORD*)(v30 + 96) - *(_QWORD*)(v30 + 88)) >> 3) > 0)
							v30 = **(_QWORD**)(v30 + 88);
						*(_QWORD*)&v31 = (unsigned int)dword_140C63664;
						*(float*)&v31 = (float)(*(float*)&dword_140C63664 - *(float*)(v29 + 8)) * *(float*)(v29 + 12);
						v47 = *(_QWORD*)(sub_140101180(v30, v31, 0i64) + 72);
					}
					else
					{
						v47 = 0i64;
					}
					if (v47 == qword_140C77760)
					{
						sub_140109840(v28, v53);
						v32 = (__m128)v48.m128_u32[1];
						v33 = (__m128)v48.m128_u32[0];
						v32.m128_f32[0] = v48.m128_f32[1] - (float)((float)v53[1] * 0.5);
						v33.m128_f32[0] = v48.m128_f32[0] - (float)((float)v53[0] * 0.5);
						v34 = _mm_unpacklo_ps(_mm_unpacklo_ps(v33, (__m128)0i64), _mm_unpacklo_ps(v32, (__m128)0i64));
						v50 = *(_OWORD*)&ymmword_140C78410.m256_f32[4];
						v49 = *(__m128*)ymmword_140C78410.m256_f32;
						v35 = _mm_shuffle_ps(v34, v34, 170);
						v51 = xmmword_140C78430;
						v36 = _mm_shuffle_ps(v34, v34, 85);
					}
					else
					{
						v49 = *(__m128*)ymmword_140C78410.m256_f32;
						v37 = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)v48.m128_u32[0], (__m128)0i64),
							_mm_unpacklo_ps((__m128)v48.m128_u32[1], (__m128)0i64));
						v51 = xmmword_140C78430;
						v50 = *(_OWORD*)&ymmword_140C78410.m256_f32[4];
						v36 = _mm_shuffle_ps(v37, v37, 85);
						v35 = _mm_shuffle_ps(v37, v37, 170);
						v34 = v37;
					}
					v52 = _mm_unpacklo_ps(_mm_unpacklo_ps(v34, v35), _mm_unpacklo_ps(v36, (__m128)0x3F800000u));
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, &v49);
					v38 = (__m128*)(v17 + 160);
					if (!*(_DWORD*)(v17 + 336))
						v38 = (__m128*)(v17 + 144);
					v39 = *(_QWORD**)v28;
					v61 = *v38;
					if (v39)
					{
						*(_QWORD*)&v40 = (unsigned int)dword_140C63664;
						*(float*)&v40 = (float)(*(float*)&dword_140C63664 - v28[2]) * v28[3];
						sub_1401039E0(v39, &qword_140C77760, &v61, v40);
					}
					v41 = *(_QWORD*)(v17 + 32);
					if (v41)
					{
						v49.m128_u64[0] = 0xC2C80000C2C80000ui64;
						v60 = xmmword_140C777D0;
						v62 = xmmword_140B7B240;
						*(_QWORD*)&v50 = 0x42C8000042C80000i64;
						(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 272i64))(
							qword_140C65680,
							v41,
							0i64,
							-1i64,
							&v49,
							5,
							&v62,
							&v60,
							1);
					}
					goto LABEL_21;
				}
				if ((result & 0x10) != 0)
				{
					v42 = 2i64;
				LABEL_52:
					v24 = *(_DWORD*)(v17 + 336) == 0;
					v43 = flt_140B4F258[v42];
					v44 = (__m128*)(v17 + 160);
					v49.m128_f32[0] = v48.m128_f32[0] - v43;
					v49.m128_f32[1] = v48.m128_f32[1] - v43;
					*(float*)&v50 = v43 + v48.m128_f32[0];
					*((float*)&v50 + 1) = v43 + v48.m128_f32[1];
					if (v24)
						v44 = (__m128*)(v17 + 144);
					v56 = *v44;
					result = sub_140770E90(v17);
					if (*(_QWORD*)result)
						result = sub_140103E60(
							*(_QWORD**)result,
							&v49,
							&v56,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(result + 8)) * *(float*)(result + 12)));
					v45 = *(_QWORD*)(v17 + 32);
					if (v45)
					{
						v57 = xmmword_140C777D0;
						v59 = xmmword_140B7B240;
						result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __m128*, int, __int128*, __int128*, int))(*(_QWORD*)qword_140C65680 + 272i64))(
							qword_140C65680,
							v45,
							0i64,
							-1i64,
							&v49,
							5,
							&v59,
							&v57,
							1);
					}
					goto LABEL_58;
				}
				if ((result & 8) != 0)
				{
					v42 = 1i64;
					goto LABEL_52;
				}
				if ((result & 4) != 0)
				{
					v42 = 0i64;
					goto LABEL_52;
				}
			}
		LABEL_58:
			if (v15)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
			v12 = (__int64*)*v12;
		} while (v12 != (__int64*)a1[3].m128_u64[1]);
	}
	return result;
}
// 140B4F258: using guessed type float flt_140B4F258[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140773320: using guessed type char var_130[16];

