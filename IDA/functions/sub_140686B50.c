//----- (0000000140686B50) ----------------------------------------------------
__int64 __fastcall sub_140686B50(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	unsigned int* v9; // rbx
	int* v10; // rax
	__int64 v11; // rcx
	unsigned int* v12; // rax
	double v13; // xmm1_8
	__int64 v14; // rbx
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r8
	__m128 v25; // [rsp+20h] [rbp-19h] BYREF
	char v26[8]; // [rsp+30h] [rbp-9h] BYREF
	int* v27; // [rsp+38h] [rbp-1h]
	__int64 v28; // [rsp+40h] [rbp+7h]
	__int64(__fastcall * *v29)(); // [rsp+50h] [rbp+17h] BYREF
	int v30; // [rsp+58h] [rbp+1Fh]
	_QWORD* v31; // [rsp+60h] [rbp+27h]
	int v32; // [rsp+68h] [rbp+2Fh]
	__int64(__fastcall * *v33)(); // [rsp+70h] [rbp+37h] BYREF
	int v34; // [rsp+78h] [rbp+3Fh]
	__int64 v35; // [rsp+80h] [rbp+47h]

	v1 = (_QWORD*)a1;
	v31 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v29 = off_140B569F0;
	v32 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v30 = v5;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(v1, 1u)) != 0
		&& (v8 = *(_QWORD*)(v6 + 8)) != 0
		&& (v9 = *(unsigned int**)(v8 + 8)) != 0i64
		&& (unsigned int)sub_14048D5A0(v7, *v9))
	{
		v10 = sub_14018B280(40i64, 0);
		v11 = qword_140C65898;
		v27 = v10;
		v28 = 0i64;
		*(_BYTE*)v10 = 0;
		*((_QWORD*)v27 + 1) = 0i64;
		*((_QWORD*)v27 + 2) = v27;
		*((_QWORD*)v27 + 3) = v27;
		if (sub_1403F8270(v11, v9[9], 0))
		{
			v12 = (unsigned int*)sub_14024B980(v9[9]);
			if (v12)
			{
				*(_QWORD*)&v13 = v12[1];
				v25 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v12[3], (__m128)v12[5]),
					_mm_unpacklo_ps((__m128)v12[4], (__m128)0i64));
				sub_140449B10(&v25, v13, (__int64)v26);
			}
		}
		v14 = *((_QWORD*)v27 + 2);
		if ((int*)v14 != v27)
		{
			do
			{
				v25 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 32)), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v14 + 36)), _mm_cvtsi32_si128(0))));
				sub_1400FA180((__int64)&v33, (__int64)v1, v25.m128_f32);
				sub_1400FB1D0((__int64)&v29);
				v33 = off_140B56A08;
				if (v35)
					sub_1400579E0(v35, v15, v34);
				v16 = *(_QWORD*)(v14 + 24);
				if (v16)
				{
					v14 = *(_QWORD*)(v14 + 24);
					for (i = *(_QWORD*)(v16 + 16); i; i = *(_QWORD*)(i + 16))
						v14 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v14 = j;
					if (*(_QWORD*)(v14 + 24) != j)
						v14 = j;
				}
			} while ((int*)v14 != v27);
			v1 = v31;
			v5 = v30;
		}
		v19 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v20 = v1[2];
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		v1[2] += 16i64;
		sub_140008410((__int64)v26);
		sub_14018B900((__int64)v27, 0);
	}
	else
	{
		v22 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v23 = v1[2];
		*(_QWORD*)v23 = *v22;
		v21 = *((unsigned int*)v22 + 2);
		*(_DWORD*)(v23 + 8) = v21;
		v1[2] += 16i64;
	}
	sub_1400579E0((__int64)v1, v21, v5);
	return 1i64;
}
// 140686C13: variable 'v7' is possibly undefined
// 140686D24: variable 'v15' is possibly undefined
// 140686DF9: variable 'v21' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140686B50: using guessed type char var_60[8];

