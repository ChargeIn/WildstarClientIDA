//----- (0000000140420520) ----------------------------------------------------
_QWORD* __fastcall sub_140420520(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v4; // rdi
	unsigned int v5; // r15d
	_QWORD* v6; // rbx
	__int64 v7; // rsi
	_QWORD* result; // rax
	__int64 v9; // rax
	__m128i v10; // xmm0
	__int64 v11; // rcx
	__int64 v12; // rsi
	__int64 v13; // rax
	__m128* v14; // r14
	__int64 v15; // rsi
	__int64 v16; // rax
	__int64 v17; // rax
	unsigned __int16* v18; // rax
	__int64 v19; // rdx
	__int64 v20; // rsi
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rsi
	__int64 v24; // rax
	__m128 v25; // xmm0
	int v26; // r12d
	__int64 v27; // rsi
	__int64 v28; // rax
	__int64 v29; // rax
	__int64* v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rsi
	__int64 v33; // rax
	__int64 v34; // rax
	__int64* v35; // rax
	__int64 v36; // rax

	*a3 += 8i64;
	v4 = *(_QWORD**)(*(_QWORD*)(*a3 - 8i64) + 8i64);
	v5 = 1;
	v6 = (_QWORD*)v4[2];
	if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
		sub_14005E2C0((__int64)a2);
	v7 = a2[2];
	result = (_QWORD*)sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = result;
	a2[2] += 16i64;
	while (v6 != v4)
	{
		v9 = a2[2];
		v10 = _mm_cvtsi32_si128(v5++);
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
		v11 = a2[4];
		a2[2] += 16i64;
		if (*(_QWORD*)(v11 + 120) >= *(_QWORD*)(v11 + 112))
			sub_14005E2C0((__int64)a2);
		v12 = a2[2];
		v13 = sub_14005C1B0((__int64)a2, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		a2[2] += 16i64;
		v14 = (__m128*)v6[4];
		if ((*(__int64(__fastcall**)(__m128*))(v14->m128_u64[0] + 24))(v14))
		{
			if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
				sub_14005E2C0((__int64)a2);
			v15 = a2[2];
			v16 = sub_140062650((__int64)a2, (unsigned __int64*)"unit", 4ui64);
			*(_DWORD*)(v15 + 8) = 4;
			*(_QWORD*)v15 = v16;
			a2[2] += 16i64;
			v17 = (*(__int64(__fastcall**)(__m128*))(v14->m128_u64[0] + 24))(v14);
			sub_140649930(a2, v17);
			sub_14005EA50((__int64)a2, (__int64*)(a2[2] - 48i64), (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
			a2[2] -= 32i64;
		}
		if ((*(__int64(__fastcall**)(__m128*))(v14->m128_u64[0] + 8))(v14))
		{
			v18 = (unsigned __int16*)(*(__int64(__fastcall**)(__m128*))(v14->m128_u64[0] + 8))(v14);
			sub_1400F0090((__int64)a2, v19, (unsigned __int64*)"name", v18);
		}
		if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
			sub_14005E2C0((__int64)a2);
		v20 = a2[2];
		v21 = sub_140062650((__int64)a2, (unsigned __int64*)"ptMap", 5ui64);
		*(_DWORD*)(v20 + 8) = 4;
		*(_QWORD*)v20 = v21;
		v22 = a2[4];
		a2[2] += 16i64;
		if (*(_QWORD*)(v22 + 120) >= *(_QWORD*)(v22 + 112))
			sub_14005E2C0((__int64)a2);
		v23 = a2[2];
		v24 = sub_14005C1B0((__int64)a2, 0, 0);
		*(_DWORD*)(v23 + 8) = 5;
		*(_QWORD*)v23 = v24;
		a2[2] += 16i64;
		v25 = v14[20];
		v26 = (int)_mm_shuffle_ps(v25, v25, 85).m128_f32[0];
		if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
			sub_14005E2C0((__int64)a2);
		v27 = a2[2];
		v28 = sub_140062650((__int64)a2, (unsigned __int64*)"x", 1ui64);
		*(_DWORD*)(v27 + 8) = 4;
		*(_QWORD*)v27 = v28;
		a2[2] += 16i64;
		v29 = a2[2];
		*(_DWORD*)(v29 + 8) = 3;
		*(double*)v29 = (double)(int)v25.m128_f32[0];
		a2[2] += 16i64;
		v30 = (__int64*)sub_1400580E0((__int64)a2, -3);
		sub_14005EA50((__int64)a2, v30, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
		v31 = a2[4];
		a2[2] -= 32i64;
		if (*(_QWORD*)(v31 + 120) >= *(_QWORD*)(v31 + 112))
			sub_14005E2C0((__int64)a2);
		v32 = a2[2];
		v33 = sub_140062650((__int64)a2, (unsigned __int64*)&unk_140B66E7C, 1ui64);
		*(_DWORD*)(v32 + 8) = 4;
		*(_QWORD*)v32 = v33;
		a2[2] += 16i64;
		v34 = a2[2];
		*(_DWORD*)(v34 + 8) = 3;
		*(double*)v34 = (double)v26;
		a2[2] += 16i64;
		v35 = (__int64*)sub_1400580E0((__int64)a2, -3);
		sub_14005EA50((__int64)a2, v35, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
		a2[2] -= 32i64;
		sub_14005EA50((__int64)a2, (__int64*)(a2[2] - 48i64), (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
		a2[2] -= 32i64;
		sub_14005EA50((__int64)a2, (__int64*)(a2[2] - 48i64), (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
		a2[2] -= 32i64;
		v36 = v6[3];
		if (v36)
		{
			v6 = (_QWORD*)v6[3];
			for (result = *(_QWORD**)(v36 + 16); result; result = (_QWORD*)result[2])
				v6 = result;
		}
		else
		{
			for (result = (_QWORD*)v6[1]; v6 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
				v6 = result;
			if ((_QWORD*)v6[3] != result)
				v6 = result;
		}
	}
	return result;
}
// 14042069B: variable 'v19' is possibly undefined

