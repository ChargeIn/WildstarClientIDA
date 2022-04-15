#include "../winhttp.h"

//----- (00000001403F8CE0) ----------------------------------------------------
__int64 __fastcall sub_1403F8CE0(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // r14
	unsigned int* v7; // rax
	unsigned __int64 v8; // r10
	__m128 v9; // xmm0
	__m128 v10; // xmm5
	__m128 v11; // xmm4
	__int64 v12; // r11
	unsigned __int64 v13; // r8
	__m128 v14; // xmm0
	__int64 v15; // r11
	__int64 v16; // rdx
	_QWORD* v17; // rcx
	_QWORD* v18; // rax
	_DWORD* v19; // rax
	__int64 v20; // rbx
	int* v21; // rdi
	__int64 v22; // rcx
	__int64 v23; // rbx
	__int64 v24; // rcx
	__m128 v26[2]; // [rsp+20h] [rbp-79h] BYREF
	__m128 v27; // [rsp+40h] [rbp-59h] BYREF
	__m128 v28; // [rsp+50h] [rbp-49h]
	char v29[16]; // [rsp+60h] [rbp-39h] BYREF
	__int64 v30; // [rsp+70h] [rbp-29h]
	__int64 v31; // [rsp+98h] [rbp-1h]
	__int64 v32; // [rsp+A0h] [rbp+7h]
	int v33; // [rsp+100h] [rbp+67h] BYREF
	int v34; // [rsp+104h] [rbp+6Bh]
	char v35; // [rsp+118h] [rbp+7Fh] BYREF

	sub_140474E10((__int64)v29, a2);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 48i64))(v32);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 96i64))(v32);
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	if (a3 && (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 64) + 16i64))(*(_QWORD*)(a2 + 64)))
	{
		v7 = (unsigned int*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v32 + 24i64))(v32, &v35);
		v8 = 0i64;
		v9 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v7), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7[1]), _mm_cvtsi32_si128(0))));
		v10 = _mm_add_ps(v28, v9);
		v11 = _mm_add_ps(v27, v9);
		v12 = *(_QWORD*)(qword_140C65898 + 29504);
		v13 = *(_QWORD*)(v12 + 3208);
		v14 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v6 + 8) >> 1), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v6 + 12) >> 1), _mm_cvtsi32_si128(0))));
		v27 = _mm_add_ps(v11, v14);
		v28 = _mm_add_ps(v10, v14);
		v26[0] = v27;
		v26[1] = v28;
		if (v13)
		{
			v15 = *(_QWORD*)(v12 + 3200);
			v16 = v15;
			while (1)
			{
				v17 = *(_QWORD**)(*(_QWORD*)v16 + 56i64);
				v18 = (_QWORD*)*v17;
				if ((_QWORD*)*v17 != v17)
					break;
			LABEL_8:
				++v8;
				v16 += 8i64;
				if (v8 >= v13)
					goto LABEL_9;
			}
			while (v18[2])
			{
				v18 = (_QWORD*)*v18;
				if (v18 == v17)
					goto LABEL_8;
			}
			sub_140157910(*(_QWORD*)(v15 + 8 * v8), v26, (__int64)&v27, 0i64);
		}
		else
		{
		LABEL_9:
			v26[0] = 0i64;
		}
		v33 = (int)v26[0].m128_f32[0];
		v34 = (int)v26[0].m128_f32[1];
		v19 = (_DWORD*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v32 + 24i64))(v32, &v35);
		v33 += *v19;
		v34 += v19[1];
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v32 + 32i64))(v32, &v33);
	}
	v20 = *(_QWORD*)(a1 + 32160);
	v21 = sub_14018B280(128i64, 0);
	if (v21 != (int*)-16i64)
		sub_140474E10((__int64)(v21 + 4), (__int64)v29);
	*(_QWORD*)v21 = v20;
	*((_QWORD*)v21 + 1) = *(_QWORD*)(v20 + 8);
	**(_QWORD**)(v20 + 8) = v21;
	v22 = qword_140C65898;
	*(_QWORD*)(v20 + 8) = v21;
	v23 = *(_QWORD*)(*(_QWORD*)(a1 + 32160) + 8i64);
	if (v22)
	{
		v24 = *(_QWORD*)(v22 + 29504);
		if (v24)
			sub_1400EA3E0(v24, "MessageFinished", byte_1409EB834, v29);
	}
	if (v31)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
		v31 = 0i64;
	}
	if (v32)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		v32 = 0i64;
	}
	if (v30)
		sub_14018B900(v30, 0);
	return v23 + 16;
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;

