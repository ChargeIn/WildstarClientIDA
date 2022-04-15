#include "../winhttp.h"

//----- (000000014069FB20) ----------------------------------------------------
__int64 __fastcall sub_14069FB20(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rax
	int v4; // r15d
	__m128* v5; // rcx
	__int32 v6; // eax
	int v7; // r14d
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // esi
	int* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v20; // r9
	_DWORD* v21; // rcx
	__int64 v22; // r8
	__int64 v23; // rdx
	__m128 v25; // [rsp+20h] [rbp-39h] BYREF
	char v26[8]; // [rsp+30h] [rbp-29h] BYREF
	int* v27; // [rsp+38h] [rbp-21h]
	__int64 v28; // [rsp+40h] [rbp-19h]
	__int64(__fastcall * *v29)(); // [rsp+50h] [rbp-9h] BYREF
	int v30; // [rsp+58h] [rbp-1h]
	_QWORD* v31; // [rsp+60h] [rbp+7h]
	int v32; // [rsp+68h] [rbp+Fh]
	__int64(__fastcall * *v33)(); // [rsp+70h] [rbp+17h] BYREF
	int v34; // [rsp+78h] [rbp+1Fh]
	__int64 v35; // [rsp+80h] [rbp+27h]
	double v36; // [rsp+C0h] [rbp+67h] BYREF

	v1 = a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = *(_DWORD*)(v3 + 8);
	else
		v4 = 0;
	v5 = (__m128*)dword_140A12138;
	if ((unsigned __int64)(v1[3] + 16i64) < v1[2])
		v5 = (__m128*)(v1[3] + 16i64);
	v6 = v5->m128_i32[2];
	if (v6 == 3)
		goto LABEL_11;
	if (v6 == 4 && sub_14005AC80((char*)(v5->m128_u64[0] + 32), (unsigned __int64*)&v36))
	{
		v25.m128_i32[2] = 3;
		v5 = &v25;
		*(double*)v25.m128_u64 = v36;
	LABEL_11:
		v7 = (int)*(double*)v5->m128_u64;
		goto LABEL_12;
	}
	v7 = 0;
LABEL_12:
	v8 = v1[4];
	v31 = v1;
	v29 = off_140B569F0;
	v9 = *(_QWORD*)(v8 + 112);
	v32 = 1;
	if (*(_QWORD*)(v8 + 120) >= v9)
		sub_14005E2C0((__int64)v1);
	v10 = v1[2];
	v11 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	v1[2] += 16i64;
	v12 = sub_1400578C0((__int64)v1);
	v30 = v12;
	v13 = sub_14018B280(40i64, 0);
	v28 = 0i64;
	v27 = v13;
	*(_BYTE*)v13 = 0;
	*((_QWORD*)v27 + 1) = 0i64;
	*((_QWORD*)v27 + 2) = v27;
	*((_QWORD*)v27 + 3) = v27;
	sub_140448A80(v14, v7, v4, (__int64)v26);
	v15 = *((_QWORD*)v27 + 2);
	if ((int*)v15 != v27)
	{
		do
		{
			v25 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v15 + 32)), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v15 + 36)), _mm_cvtsi32_si128(0))));
			sub_1400FA180((__int64)&v33, (__int64)v1, v25.m128_f32);
			sub_1400FB1D0((__int64)&v29);
			v33 = off_140B56A08;
			if (v35)
				sub_1400579E0(v35, v16, v34);
			v17 = *(_QWORD*)(v15 + 24);
			if (v17)
			{
				v15 = *(_QWORD*)(v15 + 24);
				for (i = *(_QWORD*)(v17 + 16); i; i = *(_QWORD*)(i + 16))
					v15 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v15 + 8); v15 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v15 = j;
				if (*(_QWORD*)(v15 + 24) != j)
					v15 = j;
			}
		} while ((int*)v15 != v27);
		v1 = v31;
		v12 = v30;
	}
	v20 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v12 - 1) >= *(_DWORD*)(v20 + 56))
	{
		v36 = (double)v12;
		if ((double)v12 == 0.0)
			v21 = *(_DWORD**)(v20 + 32);
		else
			v21 = (_DWORD*)(*(_QWORD*)(v20 + 32)
				+ 40 * ((unsigned int)(LODWORD(v36) + HIDWORD(v36)) % (((1i64 << *(_BYTE*)(v20 + 11)) - 1) | 1)));
		while (v21[6] != 3 || (double)v12 != *((double*)v21 + 2))
		{
			v21 = (_DWORD*)*((_QWORD*)v21 + 4);
			if (!v21)
			{
				v21 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v21 = (_DWORD*)(*(_QWORD*)(v20 + 24) + 16i64 * (v12 - 1));
	}
	v22 = v1[2];
	*(_QWORD*)v22 = *(_QWORD*)v21;
	*(_DWORD*)(v22 + 8) = v21[2];
	v1[2] += 16i64;
	sub_140008410((__int64)v26);
	sub_14018B900((__int64)v27, 0);
	sub_1400579E0((__int64)v1, v23, v12);
	return 1i64;
}
// 14069FC56: variable 'v14' is possibly undefined
// 14069FCD4: variable 'v16' is possibly undefined
// 14069FDEF: variable 'v23' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 14069FB20: using guessed type char var_80[8];

