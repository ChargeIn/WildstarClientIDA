#include "../winhttp.h"

//----- (000000014039FFF0) ----------------------------------------------------
void __fastcall sub_14039FFF0(
	__int64 a1,
	__int128* a2,
	unsigned int a3,
	unsigned int a4,
	unsigned int a5,
	float* a6,
	int a7,
	float a8,
	int a9)
{
	__int64 v9; // rax
	__int64 v14; // rdi
	_QWORD* v15; // rsi
	__int64 v16; // rax
	__int128 v17; // xmm0
	__int64 v18; // rax
	__m128* v19; // rax
	int* v20; // r15
	__m128* v21; // rsi
	__m128 v22; // xmm1
	int v23; // ecx
	float v24; // xmm9_4
	int v25; // eax
	float v26; // xmm8_4
	int v27; // ecx
	float v28; // xmm0_4
	__int64 v29; // rcx
	bool v30; // zf
	int v31; // eax
	__int64 v32; // rcx
	__int64 v33; // rax
	int* v34; // rax
	unsigned int v35; // edx
	__int64 v36; // rax
	int* v37; // rax
	__int64 v38; // r8
	__int64 v39; // rcx
	unsigned int v40; // edx
	__int64 v41; // rax
	int* v42; // rax
	__int64 v43; // r8
	__int64 v44; // rcx
	unsigned int v45; // edx
	__int64 v46; // rax
	int* v47; // rax
	__int64 v48; // r8
	__int64 v49; // rcx
	int v50; // eax
	unsigned int v51; // r9d
	__int64 v52; // rax
	int* v53; // rax
	__int64 v54; // rdx
	__int64 v55; // rcx
	int v56; // eax
	__int64 v57; // rax
	unsigned int v58; // r8d
	_DWORD* v59; // rdi
	unsigned int v60; // ecx
	int* v61; // rax
	__int64 v62; // rdx
	__int64 v63; // rcx
	__int16 v64; // ax
	_DWORD* v65; // rax
	unsigned int v66; // edx
	__int64 v67; // rax
	int* v68; // rax
	__int64 v69; // r8
	__int64 v70; // rcx
	__m128i v71; // [rsp+38h] [rbp-91h] BYREF
	__int128 v72; // [rsp+48h] [rbp-81h] BYREF
	unsigned int v73; // [rsp+58h] [rbp-71h] BYREF
	__int64 v74; // [rsp+5Ch] [rbp-6Dh]
	int* v75; // [rsp+68h] [rbp-61h]
	int v76; // [rsp+108h] [rbp+3Fh] BYREF
	__int16 v77; // [rsp+10Ch] [rbp+43h]

	v9 = *(_QWORD*)(a1 + 25744);
	if (*(_DWORD*)(v9 + 3408) && *(_QWORD*)(v9 + 5864))
	{
		v14 = (*(__int64 (**)(void))(**(_QWORD**)(a1 + 28608) + 24i64))();
		if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 25744) + 32i64))(*(_QWORD*)(a1 + 25744))
			|| (v15 = *(_QWORD**)(a1 + 25744), (*(unsigned int(__fastcall**)(_QWORD*))(*v15 + 32i64))(v15))
			&& v15[23]
			&& *(_DWORD*)(v15[23] + 4i64) == 4)
		{
			v18 = qword_140C65898;
			*(_OWORD*)v14 = *(_OWORD*)(qword_140C65898 + 28656);
			v17 = *(_OWORD*)(v18 + 28672);
		}
		else
		{
			v16 = qword_140C65898;
			*(_OWORD*)v14 = *(_OWORD*)(qword_140C65898 + 28688);
			v17 = *(_OWORD*)(v16 + 28704);
		}
		*(_OWORD*)(v14 + 16) = v17;
		*(_OWORD*)(v14 + 32) = *(_OWORD*)(*(_QWORD*)(a1 + 25744) + 4576i64);
		*(_OWORD*)(v14 + 64) = 0i64;
		*(_OWORD*)(v14 + 80) = 0i64;
		*(_OWORD*)(v14 + 96) = 0i64;
		*(_OWORD*)(v14 + 112) = 0i64;
		*(_DWORD*)(v14 + 160) = 0;
		*(_DWORD*)(v14 + 176) = 0;
		v19 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 28608) + 32i64))(*(_QWORD*)(a1 + 28608));
		v20 = (int*)qword_140C63750;
		v21 = v19;
		if (a3)
		{
			v22 = (__m128)a5;
		}
		else
		{
			v23 = dword_140C44AC0;
			if (*(_DWORD*)qword_140C63750 < dword_140C44AC0)
				v23 = *(_DWORD*)qword_140C63750;
			v22 = (__m128)(unsigned int)dword_140C44AD0[v23];
		}
		v24 = *(float*)&dword_140C3B438 * 0.0055555557;
		v19[1] = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(_mm_xor_ps(v22, (__m128)xmmword_140B7B530), (__m128)0i64));
		v25 = dword_140C44750;
		if (*v20 < dword_140C44750)
			v25 = *v20;
		v26 = sub_1408FD8A4(v24 * dword_140C44760[v25]);
		v21[3].m128_f32[0] = v26;
		v27 = dword_140C447B0;
		if (*v20 < dword_140C447B0)
			v27 = *v20;
		v28 = sub_1408FD8A4(v24 * dword_140C447C0[v27]);
		v21[3].m128_u64[1] = 0i64;
		v21[4].m128_u64[0] = 0i64;
		v21[3].m128_f32[1] = fminf(v28, v26);
		v29 = *(_QWORD*)(a1 + 120);
		if (!v29 || (v30 = !sub_14047BF60(v29), v31 = 1, v30))
			v31 = 0;
		v21[5].m128_i32[0] = v31;
		v32 = *(_QWORD*)(a1 + 28608);
		v72 = *a2;
		if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v32 + 56i64))(v32, a2))
		{
			v33 = *(_QWORD*)(a1 + 25744);
			v72 = *(_OWORD*)(v14 + 32);
			*(_OWORD*)(v14 + 32) = *(_OWORD*)(v33 + 4576);
			v74 = 8i64;
			v34 = sub_14018C320(0i64, 0x240ui64, 8u);
			v75 = v34;
			v73 = 1;
			*v34 = 1;
			v34[2] = 0;
			(*(void(__fastcall**)(_QWORD, __int128*, _QWORD, _QWORD, unsigned int*, int))(**(_QWORD**)(a1 + 28608) + 64i64))(
				*(_QWORD*)(a1 + 28608),
				&v72,
				a3,
				a4,
				&v73,
				dword_140C636A8);
			if (a9)
			{
				v35 = v73;
				if (v73 == (_DWORD)v74)
				{
					if ((_DWORD)v74)
						v36 = (unsigned int)(2 * v74);
					else
						v36 = 8i64;
					LODWORD(v74) = v36;
					v37 = sub_14018C320((__int64)v75, 72 * v36, 8u);
					v35 = v73;
					v38 = (__int64)v37;
					v75 = v37;
				}
				else
				{
					v38 = (__int64)v75;
				}
				v39 = 9i64 * v35;
				v73 = v35 + 1;
				*(_DWORD*)(v38 + 8 * v39) = 10;
				*(_DWORD*)(v38 + 8 * v39 + 8) = 0;
				v40 = v73;
				if (v73 == (_DWORD)v74)
				{
					if ((_DWORD)v74)
						v41 = (unsigned int)(2 * v74);
					else
						v41 = 8i64;
					LODWORD(v74) = v41;
					v42 = sub_14018C320((__int64)v75, 72 * v41, 8u);
					v40 = v73;
					v43 = (__int64)v42;
					v75 = v42;
				}
				else
				{
					v43 = (__int64)v75;
				}
				v44 = 9i64 * v40;
				v73 = v40 + 1;
				*(_DWORD*)(v43 + 8 * v44) = 13;
				*(_DWORD*)(v43 + 8 * v44 + 8) = 0;
			}
			else
			{
				v71 = 0i64;
				sub_1401C9800(&v76, &v71);
				v45 = v73;
				if (v73 == (_DWORD)v74)
				{
					if ((_DWORD)v74)
						v46 = (unsigned int)(2 * v74);
					else
						v46 = 8i64;
					LODWORD(v74) = v46;
					v47 = sub_14018C320((__int64)v75, 72 * v46, 8u);
					v45 = v73;
					v48 = (__int64)v47;
					v75 = v47;
				}
				else
				{
					v48 = (__int64)v75;
				}
				v71 = 0i64;
				v49 = 9i64 * v45;
				v50 = v76;
				v73 = v45 + 1;
				*(_DWORD*)(v48 + 8 * v49) = 8;
				*(_DWORD*)(v48 + 8 * v49 + 8) = v50;
				*(_WORD*)(v48 + 8 * v49 + 12) = v77;
				*(_DWORD*)(v48 + 8 * v49 + 16) = 0;
				sub_1401C9800(&v76, &v71);
				v51 = v73;
				if (v73 == (_DWORD)v74)
				{
					if ((_DWORD)v74)
						v52 = (unsigned int)(2 * v74);
					else
						v52 = 8i64;
					LODWORD(v74) = v52;
					v53 = sub_14018C320((__int64)v75, 72 * v52, 8u);
					v51 = v73;
					v54 = (__int64)v53;
					v75 = v53;
				}
				else
				{
					v54 = (__int64)v75;
				}
				v55 = 9i64 * v51;
				v56 = v76;
				v73 = v51 + 1;
				*(_DWORD*)(v54 + 8 * v55) = 11;
				*(_DWORD*)(v54 + 8 * v55 + 8) = v56;
				*(_WORD*)(v54 + 8 * v55 + 12) = v77;
				*(_DWORD*)(v54 + 8 * v55 + 16) = 0;
			}
			if (!*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 5664i64))
			{
				if (a8 == 0.0)
				{
					v65 = (_DWORD*)sub_1401B3170((__int64)&v71, a6);
					sub_14079A780(&v73, v65, 0);
				}
				else
				{
					sub_1401C96D0(&v76, a8);
					v57 = sub_1401B3170((__int64)&v71, a6);
					v58 = v73;
					v59 = (_DWORD*)v57;
					if (v73 == (_DWORD)v74)
					{
						if ((_DWORD)v74)
							v60 = 2 * v74;
						else
							v60 = 8;
						LODWORD(v74) = v60;
						v61 = sub_14018C320((__int64)v75, 72i64 * v60, 8u);
						v58 = v73;
						v62 = (__int64)v61;
						v75 = v61;
					}
					else
					{
						v62 = (__int64)v75;
					}
					v63 = 9i64 * v58;
					v73 = v58 + 1;
					*(_DWORD*)(v62 + 8 * v63) = 20;
					*(_DWORD*)(v62 + 8 * v63 + 8) = *v59;
					*(_DWORD*)(v62 + 8 * v63 + 12) = v59[1];
					*(_DWORD*)(v62 + 8 * v63 + 16) = v59[2];
					v64 = v76;
					*(_DWORD*)(v62 + 8 * v63 + 20) = a4;
					*(_WORD*)(v62 + 8 * v63 + 24) = v64;
					*(_QWORD*)(v62 + 8 * v63 + 28) = 0i64;
				}
			}
			v66 = v73;
			if (v73 == (_DWORD)v74)
			{
				if ((_DWORD)v74)
					v67 = (unsigned int)(2 * v74);
				else
					v67 = 8i64;
				LODWORD(v74) = v67;
				v68 = sub_14018C320((__int64)v75, 72 * v67, 8u);
				v66 = v73;
				v69 = (__int64)v68;
				v75 = v68;
			}
			else
			{
				v69 = (__int64)v75;
			}
			v70 = 9i64 * v66;
			v73 = v66 + 1;
			*(_DWORD*)(v69 + 8 * v70) = 27;
			*(_DWORD*)(v69 + 8 * v70 + 8) = 0;
			sub_1405B3B80(*(_QWORD*)(a1 + 25744), (__int64)&v73, dword_140C636A8, 0, *(_QWORD*)(a1 + 25744) + 3568i64);
			sub_14057A190(a1, &v73);
			sub_14079A4F0((__int64)&v73);
			sub_14018B900((__int64)v75, 0);
		}
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C44750: using guessed type int dword_140C44750;
// 140C44760: using guessed type float dword_140C44760[14];
// 140C447B0: using guessed type int dword_140C447B0;
// 140C447C0: using guessed type float dword_140C447C0[14];
// 140C44AC0: using guessed type int dword_140C44AC0;
// 140C44AD0: using guessed type int dword_140C44AD0[16];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

