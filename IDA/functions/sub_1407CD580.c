#include "../winhttp.h"

//----- (00000001407CD580) ----------------------------------------------------
void __fastcall sub_1407CD580(_QWORD* a1, __int128* a2, __int128* a3)
{
	unsigned int v6; // r14d
	__int64 v7; // rcx
	__int128 v8; // xmm0
	__int128 v9; // xmm1
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	__int128 v12; // xmm0
	__int128 v13; // xmm0
	__int64 v14; // rdx
	__int64 v15; // r8
	__int64 v16; // rbx
	unsigned int i; // r15d
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rsi
	__m128* v21; // rax
	unsigned int v22; // r13d
	__int64 v23; // r12
	__int64 v24; // rcx
	__m128 v25; // xmm6
	__m128 v26; // xmm2
	__m128 v27; // xmm7
	__m128 v28; // xmm0
	__m128 v29; // xmm9
	__m128 v30; // xmm8
	__m128 v31; // xmm7
	__m128 v32; // xmm6
	__m128* v33; // rax
	__m128* v34; // rdx
	char* v35; // rcx
	__m128 v36; // xmm3
	__m128* v37; // rax
	__int64 v38; // rcx
	__m128 v39; // xmm3
	__m128 v40; // xmm2
	unsigned int v41; // eax
	unsigned int v42; // ebx
	__int64* v43; // rsi
	__int64 v44; // r8
	__int64 v45; // rcx
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v48; // rbx
	__int128 v49; // [rsp+48h] [rbp-C0h] BYREF
	__int128 v50; // [rsp+58h] [rbp-B0h] BYREF
	unsigned int v51; // [rsp+68h] [rbp-A0h]
	int v52; // [rsp+6Ch] [rbp-9Ch]
	_QWORD v53[3]; // [rsp+70h] [rbp-98h] BYREF
	__int128 v54[4]; // [rsp+88h] [rbp-80h] BYREF
	__int128 v55[3]; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v56; // [rsp+F8h] [rbp-10h]
	__m128 v57; // [rsp+108h] [rbp+0h] BYREF
	__m128 v58; // [rsp+118h] [rbp+10h]
	__m128 v59; // [rsp+128h] [rbp+20h]
	__m128 v60; // [rsp+138h] [rbp+30h]
	__int64 v61[4]; // [rsp+148h] [rbp+40h] BYREF
	__m128 v62[4]; // [rsp+168h] [rbp+60h] BYREF
	__m128 v63[4]; // [rsp+1A8h] [rbp+A0h] BYREF
	__m128* v64[2]; // [rsp+1E8h] [rbp+E0h] BYREF
	__m128 v65[4]; // [rsp+1F8h] [rbp+F0h] BYREF
	__m128 v66[6]; // [rsp+238h] [rbp+130h] BYREF
	__int128 v67[4]; // [rsp+298h] [rbp+190h] BYREF
	__m128 v68[6]; // [rsp+2D8h] [rbp+1D0h] BYREF

	if (a1[820])
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 504i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
		v6 = 1;
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		v7 = a1[820];
		v8 = *a2;
		v55[1] = a2[1];
		v9 = a2[3];
		v55[0] = v8;
		v10 = a2[2];
		v56 = v9;
		v11 = a3[1];
		v55[2] = v10;
		v12 = *a3;
		v54[1] = v11;
		v54[0] = v12;
		v13 = a3[2];
		v56 = xmmword_140C78440;
		v54[3] = xmmword_140C78440;
		v54[2] = v13;
		(*(void(__fastcall**)(__int64, __int64, __int64, __m128*))(*(_QWORD*)v7 + 128i64))(v7, v14, v15, v62);
		v16 = a1[166];
		for (i = 0; v16; v16 = *(_QWORD*)(v16 + 136))
		{
			if (i >= 4)
				break;
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v16 + 360i64))(v16))
			{
				v18 = *(_QWORD*)v16;
				LODWORD(v49) = 0;
				if ((*(unsigned int(__fastcall**)(__int64, __int128*))(v18 + 24))(v16, &v49))
				{
					v19 = *(_QWORD*)v16;
					v20 = i;
					v61[i] = v16;
					if (((*(__int64(__fastcall**)(__int64))(v19 + 176))(v16) & 4) != 0)
					{
						v21 = (__m128*) & v50;
						v50 = xmmword_140B7B240;
					}
					else
					{
						v21 = (__m128*) & v53[1];
						*(__m128*)& v53[1] = _mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * ((unsigned int*)a1 + 788),
								(__m128) * ((unsigned int*)a1 + 790)),
							_mm_unpacklo_ps((__m128) * ((unsigned int*)a1 + 789), (__m128)0x3F800000u));
					}
					++i;
					v67[v20] = (__int128)_mm_mul_ps(
						_mm_shuffle_ps(
							(__m128) * (unsigned int*)(v16 + 252),
							(__m128) * (unsigned int*)(v16 + 252),
							0),
						*v21);
				}
			}
		}
		v22 = 0;
		*(_QWORD*)&v50 = v54;
		*((_QWORD*)&v50 + 1) = &v57;
		v23 = 376i64;
		*(_QWORD*)&v49 = v65;
		*((_QWORD*)&v49 + 1) = v62;
		do
		{
			*((_QWORD*)&v50 + 1) = a1[820];
			LODWORD(v50) = 2;
			v51 = v22;
			v52 = 0;
			(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
				qword_140C65670,
				&v50,
				&unk_140C3FE88,
				&unk_140C3FE88,
				&unk_140C3FE88);
			*(_OWORD*)&v53[1] = 0i64;
			(*(void(__fastcall**)(__int64, __int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 624i64))(
				qword_140C65670,
				1i64,
				&v53[1]);
			v24 = a1[820];
			v49 = 0i64;
			(*(void(__fastcall**)(__int64, __int128*, _QWORD, __m128*))(*(_QWORD*)v24 + 120i64))(v24, &v49, v22, &v57);
			v64[0] = (__m128*)v54;
			v64[1] = &v57;
			sub_1401AFB10(v64, v65);
			v66[0].m128_u64[0] = (unsigned __int64)v65;
			v66[0].m128_u64[1] = (unsigned __int64)v62;
			sub_1401AFB10((__m128**)v66, v63);
			v25 = _mm_unpackhi_ps(v57, v58);
			v26 = _mm_unpackhi_ps(v59, v60);
			v27 = _mm_unpacklo_ps(v57, v58);
			v28 = _mm_unpacklo_ps(v59, v60);
			v29 = _mm_shuffle_ps(v25, v26, 68);
			v30 = _mm_shuffle_ps(v27, v28, 68);
			v31 = _mm_shuffle_ps(v27, v28, 238);
			v32 = _mm_shuffle_ps(v25, v26, 238);
			v33 = sub_1401B20F0(v66, v62);
			v34 = v33 + 6;
			if (v33 < &v33[6])
			{
				v35 = (char*)((char*)v68 - (char*)v33);
				do
				{
					_mm_prefetch(&v33[1].m128_i8[8], 0);
					v36 = *v33++;
					_mm_stream_ps(
						(float*)((char*)v33[-1].m128_f32 + (_QWORD)v35),
						_mm_add_ps(
							_mm_add_ps(
								_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v36, v36, 85), v31), _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v30)),
								_mm_mul_ps(_mm_shuffle_ps(v36, v36, 170), v29)),
							_mm_mul_ps(_mm_shuffle_ps(v36, v36, 255), v32)));
				} while (v33 < v34);
			}
			_mm_sfence();
			v37 = v68;
			v38 = 6i64;
			do
			{
				v39 = *v37++;
				v40 = _mm_mul_ps(v39, v39);
				v40.m128_f32[0] = 1.0
					/ fsqrt(
						(float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
						+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0]);
				v37[-1] = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v39);
				--v38;
			} while (v38);
			v41 = 60;
			if (v22)
				v41 = 188;
			sub_1407CBE00((__int64)a1, (__int64)v63, (__int64)v55, v54, v68, v41);
			if (i)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 456i64))(
					qword_140C65670,
					1i64,
					5i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					a1[721],
					i);
				(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 384i64))(
					qword_140C65670,
					64i64,
					v67);
				v42 = 0;
				v43 = v61;
				do
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						v42++,
						*(_QWORD*)(v23 + *v43++),
						0i64,
						0i64);
				while (v42 < i);
				(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
					qword_140C65670,
					0xFFFFFFFFi64,
					v44,
					0i64,
					0i64,
					0i64);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			++v22;
			v23 += 8i64;
		} while (v22 < 6);
		if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)a1[769] + 40i64))(a1[769])
			|| !(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)a1[770] + 40i64))(a1[770])
			|| !(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)a1[771] + 40i64))(a1[771]))
		{
			v45 = a1[2];
			if (v45)
			{
				v46 = *a1;
				v47 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v45 + 72i64))(v45);
				(*(void(__fastcall**)(_QWORD*, __int64))(v46 + 328))(a1, v47);
			}
			else
			{
				(*(void(__fastcall**)(_QWORD*, void*))(*a1 + 328i64))(a1, &unk_140C54D48);
			}
		}
		if (a1[821])
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
			v48 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[820] + 24i64))(a1[820]);
			if (*(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670))
			{
				if (*(_DWORD*)(v48 + 20) > 1u)
				{
					do
					{
						sub_1407CC9A0((__int64)a1, a1[820], a1[821], v6);
						sub_1407CD3F0((__int64)a1, a1[821], a1[820], v6++);
					} while (v6 < *(_DWORD*)(v48 + 20));
				}
			}
			else if (*(_DWORD*)(v48 + 20) > 1u)
			{
				do
				{
					sub_1407CD220(a1, a1[820], a1[821], v6);
					sub_1407CD3F0((__int64)a1, a1[821], a1[820], v6++);
				} while (v6 < *(_DWORD*)(v48 + 20));
			}
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	}
}
// 1407CDA6E: conditional instruction was optimized away because r15d.4!=0
// 1407CD6B9: variable 'v14' is possibly undefined
// 1407CD6B9: variable 'v15' is possibly undefined
// 1407CDAD0: variable 'v44' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1407CD580: using guessed type __m128 var_2A0[4];
// 1407CD580: using guessed type __int64 var_2C0[4];
// 1407CD580: using guessed type __int128 var_170[4];
// 1407CD580: using guessed type __m128 var_210[4];
// 1407CD580: using guessed type __m128 var_260[4];
// 1407CD580: using guessed type __m128 var_130[6];

