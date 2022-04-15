//----- (00000001400DCF90) ----------------------------------------------------
__int64 __fastcall sub_1400DCF90(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64* v4; // rcx
	unsigned __int16* v5; // rbx
	int v6; // eax
	__int64 v7; // rdx
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // r13
	__int64 v12; // rdx
	__int64 v13; // rax
	unsigned __int16* v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // r14
	int v19; // esi
	float* v20; // rbx
	_QWORD* v21; // rbp
	__int64 v22; // r15
	__int64 v23; // rax
	__int64 v24; // rax
	float v25; // xmm0_4
	__int64 v26; // rbx
	__int64 v27; // rax
	unsigned int* v28; // rsi
	int v29; // ebx
	__int64 v30; // rax
	__m128i v31; // xmm0
	__int64 v32; // rax
	__int64 v33; // [rsp+20h] [rbp-38h] BYREF
	int v34; // [rsp+28h] [rbp-30h]
	__int64 v35; // [rsp+68h] [rbp+10h] BYREF

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (!result)
		return result;
	if (!*(_QWORD*)(result + 344))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v5 = 0i64;
	v6 = *((_DWORD*)v4 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v35))
		{
			v7 = 0i64;
			goto LABEL_11;
		}
		v34 = 3;
		v4 = &v33;
		v33 = v35;
	}
	v7 = (unsigned int)(int)*(double*)v4;
LABEL_11:
	v8 = *(_QWORD*)(*(_QWORD*)(v3 + 344) + 8i64);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < (unsigned int)v7)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v35 = v9, (unsigned int)v7 < *(_DWORD*)(v9 + 32)))
		v35 = v8;
	if (v35 == v8)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v11 = *(_QWORD*)(v35 + 40);
		sub_140058900((__int64)a1, v7, 0);
		v13 = *(_QWORD*)(v11 + 136);
		if (v13)
		{
			v14 = *(unsigned __int16**)(v13 + 32);
			v5 = (unsigned __int16*)&word_140B7B704;
			if (v14)
				v5 = v14;
		}
		sub_1400F0090((__int64)a1, v12, (unsigned __int64*)"strSprite", v5);
		sub_140058710((__int64)a1, qword_1409D3394, 2ui64);
		sub_1401430E0(a1, (unsigned int*)(v11 + 12));
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		sub_1400EFFF0((__int64)a1, v15, (unsigned __int64*)"fRotation", *(float*)(v11 + 128));
		sub_140058710((__int64)a1, qword_1409D33DC, 3ui64);
		sub_140058900((__int64)a1, v16, 0);
		sub_140058710((__int64)a1, (unsigned __int64*)"fPoints", 7ui64);
		sub_140058900((__int64)a1, v17, 0);
		v18 = 4i64;
		v19 = 1;
		v20 = (float*)(v11 + 80);
		v21 = (_QWORD*)(v11 + 48);
		v22 = 4i64;
		do
		{
			v23 = a1[2];
			*(_DWORD*)(v23 + 8) = 3;
			*(double*)v23 = (double)v19;
			a1[2] += 16i64;
			v24 = a1[2];
			if (*v21)
				v25 = 0.0;
			else
				v25 = *v20;
			*(_DWORD*)(v24 + 8) = 3;
			*(double*)v24 = v25;
			a1[2] += 16i64;
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			++v19;
			++v21;
			++v20;
			--v22;
		} while (v22);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		sub_140058710((__int64)a1, (unsigned __int64*)"nOffsets", 8ui64);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v26 = a1[2];
		v27 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v26 + 8) = 5;
		v28 = (unsigned int*)(v11 + 96);
		*(_QWORD*)v26 = v27;
		a1[2] += 16i64;
		v29 = 1;
		do
		{
			v30 = a1[2];
			*(_DWORD*)(v30 + 8) = 3;
			*(double*)v30 = (double)v29;
			a1[2] += 16i64;
			v31 = _mm_cvtsi32_si128(*v28);
			v32 = a1[2];
			*(_DWORD*)(v32 + 8) = 3;
			*(_QWORD*)v32 = *(_OWORD*)&_mm_cvtepi32_pd(v31);
			a1[2] += 16i64;
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			++v29;
			++v28;
			--v18;
		} while (v18);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		return 1i64;
	}
}
// 1400DD0F7: variable 'v12' is possibly undefined
// 1400DD14D: variable 'v15' is possibly undefined
// 1400DD16D: variable 'v16' is possibly undefined
// 1400DD18D: variable 'v17' is possibly undefined
// 1409D3394: using guessed type unsigned __int64 qword_1409D3394[9];
// 1409D33DC: using guessed type unsigned __int64 qword_1409D33DC[9];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B704: using guessed type __int16 word_140B7B704;

