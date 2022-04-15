//----- (0000000140680AD0) ----------------------------------------------------
__int64 __fastcall sub_140680AD0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // r15d
	_QWORD** v6; // rax
	_QWORD** v7; // rbx
	__int64 v8; // rsi
	_QWORD* v9; // rax
	__int64 v10; // rdx
	unsigned int v11; // ebx
	__int64 v12; // rdx
	__int64 v13; // r14
	unsigned int* v14; // rbx
	unsigned int v15; // esi
	unsigned int* v16; // rax
	double v17; // xmm1_8
	__int64 v18; // rbx
	__int64 v19; // rdx
	__int64 v20; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v23; // rax
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // r8
	__m128 v28; // [rsp+20h] [rbp-39h] BYREF
	__int64 v29; // [rsp+30h] [rbp-29h]
	char v30[8]; // [rsp+40h] [rbp-19h] BYREF
	int* v31; // [rsp+48h] [rbp-11h]
	__int64 v32; // [rsp+50h] [rbp-9h]
	__int64(__fastcall * *v33)(); // [rsp+60h] [rbp+7h] BYREF
	int v34; // [rsp+68h] [rbp+Fh]
	_QWORD* v35; // [rsp+70h] [rbp+17h]
	int v36; // [rsp+78h] [rbp+1Fh]
	__int64(__fastcall * *v37)(); // [rsp+80h] [rbp+27h] BYREF
	int v38; // [rsp+88h] [rbp+2Fh]
	__int64 v39; // [rsp+90h] [rbp+37h]

	v1 = (_QWORD*)a1;
	v35 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v33 = off_140B569F0;
	v36 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v34 = v5;
	v6 = (_QWORD**)sub_14067B760(v1);
	v7 = v6;
	if (!v6 || *(_DWORD*)(*v6[6] + 12i64) != 19 || ((int(__fastcall*)(_QWORD**))(*v6)[26])(v6) < 2)
	{
		v25 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v26 = v1[2];
		*(_QWORD*)v26 = *v25;
		v10 = *((unsigned int*)v25 + 2);
		*(_DWORD*)(v26 + 8) = v10;
		goto LABEL_29;
	}
	v8 = sub_140432960(qword_140C65960, *(_DWORD*)(*v7[6] + 20i64));
	if (!v8 || (v11 = sub_1400584E0((__int64)v1, 2) - 1, v11 > 2))
	{
		v9 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v10 = v1[2];
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
	LABEL_29:
		v1[2] += 16i64;
		goto LABEL_30;
	}
	v12 = *(_QWORD*)(v8 + 8);
	v28.m128_u64[0] = v12 + 64;
	v28.m128_u64[1] = v12 + 80;
	v29 = v12 + 96;
	v31 = sub_14018B280(40i64, 0);
	v32 = 0i64;
	*(_BYTE*)v31 = 0;
	v13 = 4i64;
	*((_QWORD*)v31 + 1) = 0i64;
	*((_QWORD*)v31 + 2) = v31;
	*((_QWORD*)v31 + 3) = v31;
	v14 = (unsigned int*)v28.m128_u64[v11];
	do
	{
		v15 = *v14;
		if (sub_1403F8270(qword_140C65898, *v14, 0))
		{
			v16 = (unsigned int*)sub_14024B980(v15);
			if (v16)
			{
				*(_QWORD*)&v17 = v16[1];
				v28 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v16[3], (__m128)v16[5]),
					_mm_unpacklo_ps((__m128)v16[4], (__m128)0i64));
				sub_140449B10(&v28, v17, (__int64)v30);
			}
		}
		++v14;
		--v13;
	} while (v13);
	v18 = *((_QWORD*)v31 + 2);
	if ((int*)v18 != v31)
	{
		do
		{
			v28 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v18 + 32)), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v18 + 36)), _mm_cvtsi32_si128(0))));
			sub_1400FA180((__int64)&v37, (__int64)v1, v28.m128_f32);
			sub_1400FB1D0((__int64)&v33);
			v37 = off_140B56A08;
			if (v39)
				sub_1400579E0(v39, v19, v38);
			v20 = *(_QWORD*)(v18 + 24);
			if (v20)
			{
				v18 = *(_QWORD*)(v18 + 24);
				for (i = *(_QWORD*)(v20 + 16); i; i = *(_QWORD*)(i + 16))
					v18 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v18 + 8); v18 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v18 = j;
				if (*(_QWORD*)(v18 + 24) != j)
					v18 = j;
			}
		} while ((int*)v18 != v31);
		v1 = v35;
		v5 = v34;
	}
	v23 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
	v24 = v1[2];
	*(_QWORD*)v24 = *v23;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
	v1[2] += 16i64;
	sub_140008410((__int64)v30);
	sub_14018B900((__int64)v31, 0);
LABEL_30:
	sub_1400579E0((__int64)v1, v10, v5);
	return 1i64;
}
// 140680D24: variable 'v19' is possibly undefined
// 140680DFC: variable 'v10' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65960: using guessed type __int64 qword_140C65960;
// 140680AD0: using guessed type char var_70[8];

