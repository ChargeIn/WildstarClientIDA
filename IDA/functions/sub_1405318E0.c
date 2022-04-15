#include "../winhttp.h"

//----- (00000001405318E0) ----------------------------------------------------
__int64 __fastcall sub_1405318E0(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 result; // rax
	__int64 v3; // r13
	__m128* v4; // rbx
	__m128* v5; // rcx
	__int32 v6; // eax
	int v7; // esi
	__int32 v8; // eax
	int v9; // r14d
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // r15d
	int* v15; // rax
	int* v16; // rcx
	__int64 v17; // rbx
	__int64 v18; // rdx
	__int64 v19; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v22; // rax
	__int64 v23; // r8
	__int64 v24; // rdx
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
	unsigned __int64 v36; // [rsp+C8h] [rbp+6Fh] BYREF

	v1 = a1;
	result = sub_14052E9B0(a1);
	v3 = result;
	if (!result)
		return result;
	v4 = (__m128*)dword_140A12138;
	v5 = (__m128*)dword_140A12138;
	if ((unsigned __int64)(v1[3] + 16i64) < v1[2])
		v5 = (__m128*)(v1[3] + 16i64);
	v6 = v5->m128_i32[2];
	if (v6 == 3)
		goto LABEL_8;
	if (v6 == 4 && sub_14005AC80((char*)(v5->m128_u64[0] + 32), &v36))
	{
		v25.m128_i32[2] = 3;
		v5 = &v25;
		v25.m128_u64[0] = v36;
	LABEL_8:
		v7 = (int)*(double*)v5->m128_u64;
		goto LABEL_9;
	}
	v7 = 0;
LABEL_9:
	if ((unsigned __int64)(v1[3] + 32i64) < v1[2])
		v4 = (__m128*)(v1[3] + 32i64);
	v8 = v4->m128_i32[2];
	if (v8 != 3)
	{
		if (v8 != 4 || !sub_14005AC80((char*)(v4->m128_u64[0] + 32), &v36))
		{
			v9 = 0;
			goto LABEL_16;
		}
		v25.m128_i32[2] = 3;
		v4 = &v25;
		v25.m128_u64[0] = v36;
	}
	v9 = (int)*(double*)v4->m128_u64;
LABEL_16:
	v10 = v1[4];
	v31 = v1;
	v29 = off_140B569F0;
	v11 = *(_QWORD*)(v10 + 112);
	v32 = 1;
	if (*(_QWORD*)(v10 + 120) >= v11)
		sub_14005E2C0((__int64)v1);
	v12 = v1[2];
	v13 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	v1[2] += 16i64;
	v14 = sub_1400578C0((__int64)v1);
	v30 = v14;
	v15 = sub_14018B280(40i64, 0);
	v28 = 0i64;
	v27 = v15;
	*(_BYTE*)v15 = 0;
	*((_QWORD*)v27 + 1) = 0i64;
	*((_QWORD*)v27 + 2) = v27;
	v16 = v27;
	*((_QWORD*)v27 + 3) = v27;
	if (!v7)
		v7 = (***(__int64(__fastcall****)(_QWORD))(v3 + 1152))(*(_QWORD*)(v3 + 1152));
	sub_140448A80((__int64)v16, v7, v9, (__int64)v26);
	v17 = *((_QWORD*)v27 + 2);
	if ((int*)v17 != v27)
	{
		do
		{
			v25 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v17 + 32)), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v17 + 36)), _mm_cvtsi32_si128(0))));
			sub_1400FA180((__int64)&v33, (__int64)v1, v25.m128_f32);
			sub_1400FB1D0((__int64)&v29);
			v33 = off_140B56A08;
			if (v35)
				sub_1400579E0(v35, v18, v34);
			v19 = *(_QWORD*)(v17 + 24);
			if (v19)
			{
				v17 = *(_QWORD*)(v17 + 24);
				for (i = *(_QWORD*)(v19 + 16); i; i = *(_QWORD*)(i + 16))
					v17 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v17 + 8); v17 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v17 = j;
				if (*(_QWORD*)(v17 + 24) != j)
					v17 = j;
			}
		} while ((int*)v17 != v27);
		v1 = v31;
		v14 = v30;
	}
	v22 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v14);
	v23 = v1[2];
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	v1[2] += 16i64;
	sub_140008410((__int64)v26);
	sub_14018B900((__int64)v27, 0);
	sub_1400579E0((__int64)v1, v24, v14);
	return 1i64;
}
// 140531A89: variable 'v16' is possibly undefined
// 140531B04: variable 'v18' is possibly undefined
// 140531BBA: variable 'v24' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 1405318E0: using guessed type char var_80[8];

