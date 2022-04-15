#include "../winhttp.h"

//----- (0000000140472F70) ----------------------------------------------------
unsigned int* __fastcall sub_140472F70(__int64 a1)
{
	unsigned int* result; // rax
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rbx
	unsigned int v6; // r9d
	__int64 v7; // r10
	float v8; // xmm10_4
	float v9; // xmm7_4
	__int64 v10; // rbx
	unsigned int v11; // eax
	__int64 v12; // rbp
	unsigned __int64 v13; // rbx
	int v14; // r14d
	__int64 v15; // rsi
	int v16; // r15d
	__int64 v17; // rax
	int v18; // ecx
	__int64 v19; // r8
	__int64 v20; // rcx
	__int64 v21; // rdx
	int v22; // eax
	int v23; // ecx
	unsigned __int64 v24; // r8
	unsigned __int64 v25; // rcx
	_DWORD* v26; // rax
	unsigned __int64 v27; // rdx
	_DWORD* v28; // rax
	__int64 v29; // rbx
	unsigned int v30; // eax
	__int64 v31; // rbx
	unsigned int v32; // eax
	unsigned int v33; // eax
	__int64 v34; // rbx
	unsigned int v35; // eax
	unsigned int v36; // eax
	__m128* v37; // rcx
	__m128 v38; // xmm4
	__int64 v39; // rcx
	__m128 v40; // xmm6
	__m128 v41; // xmm3
	float v42; // xmm1_4
	__m128 v43; // xmm10
	__int64 v44; // rbx
	unsigned int v45; // eax
	unsigned int v46; // eax
	__int64 v47; // rbx
	unsigned int v48; // eax
	unsigned int v49; // eax
	__int64 v50; // rbx
	unsigned int v51; // eax
	__int64 v52; // rbx
	unsigned int v53; // eax
	__int64 v54; // rbx
	unsigned int v55; // eax
	__int64 v56; // rbx
	unsigned int v57; // eax
	unsigned int v58; // eax
	unsigned int v59; // eax
	unsigned int v60; // eax
	unsigned int v61; // ebx
	unsigned int* v62; // rsi
	void* retaddr; // [rsp+98h] [rbp+0h] BYREF

	result = (unsigned int*)&retaddr;
	if (!*(_QWORD*)(a1 + 5512))
		return result;
	v3 = sub_140561C30(qword_140C65B70, *(_DWORD*)(a1 + 5632));
	if (v3
		|| *(_QWORD*)(qword_140C65898 + 120) == a1
		&& (v4 = sub_14039DF50(qword_140C65898)) != 0
		&& (v3 = sub_1404695E0(v4)) != 0)
	{
		v5 = *(_QWORD*)(a1 + 5512);
		sub_1400518A0(qword_140C63628, 38, 2, 0);
		sub_14053DA10(v3);
		(*(void(__fastcall**)(__int64, _QWORD))(v7 + 80))(v5, v6);
	}
	v8 = 1.0;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1))
	{
		v9 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
		fmaxf(0.0, fminf(v9 / (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1), 1.0));
	}
	v10 = *(_QWORD*)(a1 + 5512);
	v11 = sub_1400518A0(qword_140C63628, 117, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 80i64))(v10, v11);
	if (qword_140C65898)
	{
		v12 = *(_QWORD*)(qword_140C65898 + 25744);
		v13 = 0i64;
		if (v12)
			v14 = *(_DWORD*)(v12 + 8);
		else
			v14 = 0;
		v15 = *(_QWORD*)(qword_140C65898 + 120);
		if (v15)
			v16 = *(_DWORD*)(v15 + 8);
		else
			v16 = 0;
		switch (*(_DWORD*)(a1 + 128))
		{
		case 0:
		case 0xD:
		case 0x18:
		case 0x19:
			sub_14062D3F0(qword_140C65898 + 31080, a1);
			v17 = *(_QWORD*)(qword_140C65898 + 25744);
			if (*(_DWORD*)(a1 + 684))
			{
				v18 = *(_DWORD*)(a1 + 264);
				if (v18 == v14 || v18 == v16)
				{
					v19 = *(unsigned int*)(a1 + 60);
					if (!(_DWORD)v19)
						v19 = *(unsigned int*)(a1 + 56);
					v20 = *(_QWORD*)(qword_140C65898 + 120);
					v21 = 0i64;
					if (v20)
					{
						v21 = *(unsigned int*)(v20 + 60);
						if (!(_DWORD)v21)
							v21 = *(unsigned int*)(v20 + 56);
					}
					else if (v17)
					{
						v21 = *(unsigned int*)(v17 + 60);
						if (!(_DWORD)v21)
							v21 = *(unsigned int*)(v17 + 56);
					}
					v22 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65A10 + 16i64))(
						qword_140C65A10,
						v21,
						v19);
					v23 = *(_DWORD*)(qword_140C65898 + 31248);
					if (v23 == 10 || v23 < v22)
						*(_DWORD*)(qword_140C65898 + 31248) = v22;
				}
			}
			break;
		case 3:
		case 7:
		case 9:
		case 0x14:
			if ((unsigned int)sub_14045A950(a1, v14))
				sub_14045A950(a1, v16);
			break;
		default:
			break;
		}
		if (v12)
		{
			v24 = *(_QWORD*)(v12 + 704);
			v25 = 0i64;
			if (v24)
			{
				v26 = *(_DWORD**)(v12 + 696);
				do
				{
					if (*v26 == *(_DWORD*)(a1 + 8))
						break;
					++v25;
					++v26;
				} while (v25 < v24);
			}
		}
		if (v15)
		{
			v27 = *(_QWORD*)(v15 + 704);
			if (v27)
			{
				v28 = *(_DWORD**)(v15 + 696);
				do
				{
					if (*v28 == *(_DWORD*)(a1 + 8))
						break;
					++v13;
					++v28;
				} while (v13 < v27);
			}
		}
		v29 = *(_QWORD*)(a1 + 5512);
		v30 = sub_1400518A0(qword_140C63628, 125, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v29 + 80i64))(v29, v30);
		v31 = *(_QWORD*)(a1 + 5512);
		v32 = sub_1400518A0(qword_140C63628, 116, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v31 + 80i64))(v31, v32);
		if (*(_QWORD*)(a1 + 5864))
		{
			v33 = sub_1400518A0(qword_140C63628, 116, 2, 0);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(*(_QWORD*)(a1 + 5864), v33);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848);
		v34 = *(_QWORD*)(a1 + 5512);
		v35 = sub_1400518A0(qword_140C63628, 120, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v34 + 80i64))(v34, v35);
		if (*(_QWORD*)(a1 + 5864))
		{
			v36 = sub_1400518A0(qword_140C63628, 120, 2, 0);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(*(_QWORD*)(a1 + 5864), v36);
		}
		v37 = *(__m128**)(qword_140C65898 + 29096);
		if (!v37)
			v37 = *(__m128**)(qword_140C65898 + 29088);
		v38 = _mm_sub_ps(*(__m128*)(a1 + 4576), v37[13]);
		v39 = *(_QWORD*)(qword_140C65898 + 29096);
		if (!v39)
			v39 = *(_QWORD*)(qword_140C65898 + 29088);
		if (v39)
		{
			v40 = (__m128)0x40400000u;
			v41 = _mm_mul_ps(v38, v38);
			v41.m128_f32[0] = (float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0])
				+ _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
			v42 = 1.0 / fsqrt(v41.m128_f32[0]);
			v40.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v41.m128_f32[0] * v42) * v42)) * 0.5) * v42, 0.0);
			v43 = _mm_mul_ps(
				_mm_sub_ps(
					(__m128)0i64,
					*(__m128*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848)
						+ 16)),
				_mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v38));
			v8 = (float)(v43.m128_f32[0] + _mm_shuffle_ps(v43, v43, 85).m128_f32[0])
				+ _mm_shuffle_ps(v43, v43, 170).m128_f32[0];
		}
		sub_1407DDB6C(v8);
		v44 = *(_QWORD*)(a1 + 5512);
		v45 = sub_1400518A0(qword_140C63628, 121, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v44 + 80i64))(v44, v45);
		if (*(_QWORD*)(a1 + 5864))
		{
			v46 = sub_1400518A0(qword_140C63628, 121, 2, 0);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(*(_QWORD*)(a1 + 5864), v46);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 104i64))(qword_140C65848);
		v47 = *(_QWORD*)(a1 + 5512);
		v48 = sub_1400518A0(qword_140C63628, 132, 2, 0);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v47 + 80i64))(v47, v48);
		if (!*(_QWORD*)(a1 + 5864))
			goto LABEL_60;
		v49 = sub_1400518A0(qword_140C63628, 132, 2, 0);
		goto LABEL_59;
	}
	v50 = *(_QWORD*)(a1 + 5512);
	v51 = sub_1400518A0(qword_140C63628, 116, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v50 + 80i64))(v50, v51);
	v52 = *(_QWORD*)(a1 + 5512);
	v53 = sub_1400518A0(qword_140C63628, 132, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v52 + 80i64))(v52, v53);
	v54 = *(_QWORD*)(a1 + 5512);
	v55 = sub_1400518A0(qword_140C63628, 120, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v54 + 80i64))(v54, v55);
	v56 = *(_QWORD*)(a1 + 5512);
	v57 = sub_1400518A0(qword_140C63628, 121, 2, 0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v56 + 80i64))(v56, v57);
	if (*(_QWORD*)(a1 + 5864))
	{
		v58 = sub_1400518A0(qword_140C63628, 116, 2, 0);
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(*(_QWORD*)(a1 + 5864), v58);
		v59 = sub_1400518A0(qword_140C63628, 132, 2, 0);
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(*(_QWORD*)(a1 + 5864), v59);
		v60 = sub_1400518A0(qword_140C63628, 120, 2, 0);
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(*(_QWORD*)(a1 + 5864), v60);
		v49 = sub_1400518A0(qword_140C63628, 121, 2, 0);
	LABEL_59:
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 376i64))(*(_QWORD*)(a1 + 5864), v49);
	}
LABEL_60:
	result = *(unsigned int**)(a1 + 24);
	if (result && *(_QWORD*)(a1 + 5864))
	{
		v61 = result[71];
		if (!v61)
		{
			result = *(unsigned int**)(a1 + 208);
			if (result)
				v61 = result[6];
		}
		if (*(_DWORD*)(a1 + 5536) != v61)
		{
			result = (unsigned int*)sub_1402358C0(v61);
			v62 = result;
			if (result)
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5512) + 72i64))(
					*(_QWORD*)(a1 + 5512),
					result[2],
					result[1]);
				result = (unsigned int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5864) + 368i64))(
					*(_QWORD*)(a1 + 5864),
					v62[2],
					v62[1]);
			}
			*(_DWORD*)(a1 + 5536) = v61;
		}
	}
	return result;
}
// 140473019: variable 'v7' is possibly undefined
// 140473010: variable 'v6' is possibly undefined
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A10: using guessed type __int64 qword_140C65A10;
// 140C65B70: using guessed type __int64 qword_140C65B70;

