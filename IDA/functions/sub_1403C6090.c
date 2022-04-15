//----- (00000001403C6090) ----------------------------------------------------
__int64 __fastcall sub_1403C6090(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, int a5, int a6)
{
	int* v9; // rax
	__int64 v10; // rdi
	int* v11; // rax
	__int64 v12; // rbx
	int* v13; // rax
	int* v15; // rax
	__int64 v16; // r12
	int v17; // eax
	__int64 v18; // r8
	int* v19; // rdx
	int v20; // esi
	int v21; // edi
	__m128i v22; // xmm0
	int v23; // ebx
	__int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rcx
	int v27; // [rsp+20h] [rbp-99h]
	int v28; // [rsp+30h] [rbp-89h] BYREF
	__int64 v29; // [rsp+38h] [rbp-81h] BYREF
	__int128 v30; // [rsp+40h] [rbp-79h]
	__int64 v31; // [rsp+50h] [rbp-69h]
	int v32; // [rsp+58h] [rbp-61h]
	unsigned __int32 v33; // [rsp+5Ch] [rbp-5Dh]
	int v34; // [rsp+60h] [rbp-59h]
	__int64 v35; // [rsp+68h] [rbp-51h]
	__int64 v36; // [rsp+70h] [rbp-49h]
	int v37; // [rsp+78h] [rbp-41h]
	int v38; // [rsp+7Ch] [rbp-3Dh]
	int v39; // [rsp+80h] [rbp-39h]
	int v40; // [rsp+84h] [rbp-35h]
	int v41; // [rsp+88h] [rbp-31h]
	__m128 v42; // [rsp+90h] [rbp-29h]
	int v43; // [rsp+A0h] [rbp-19h] BYREF
	__int64 v44; // [rsp+A8h] [rbp-11h]
	void(__fastcall * v45)(__int64, __int64); // [rsp+B0h] [rbp-9h]
	__int64 v46; // [rsp+B8h] [rbp-1h]
	int v49; // [rsp+130h] [rbp+77h]

	if (a5 <= 0)
	{
		v15 = sub_14018B280(736i64, 8u);
		if (v15)
			v16 = sub_1403C48E0((__int64)v15, (__int64)a4);
		else
			v16 = 0i64;
		v17 = -1;
		v49 = -1;
		if (a4[53])
			v17 = a4[54];
		v27 = v17;
		if (a4[50])
			v49 = a4[51];
		v18 = *(_QWORD*)(a3 + 16);
		v19 = *(int**)(a3 + 8);
		v20 = a4[56];
		v21 = a4[57];
		v22 = _mm_shuffle_epi32(
			_mm_unpacklo_epi16(
				_mm_unpacklo_epi8(_mm_shuffle_epi32(_mm_cvtsi32_si128(a4[55]), 0), (__m128i)0i64),
				(__m128i)0i64),
			198);
		v23 = a4[52];
		v28 = dword_140C636A8;
		v30 = 0i64;
		v31 = 0i64;
		sub_14001C1B0(&v29, v19, v18);
		v42 = _mm_mul_ps(_mm_cvtepi32_ps(v22), (__m128)xmmword_140B7AB70);
		v32 = 0;
		v34 = 0;
		v37 = v49;
		v35 = 0i64;
		v38 = v23;
		v33 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85).m128_u32[0];
		v39 = v21;
		v40 = v27;
		v41 = v20;
		v36 = v16;
		if (v16)
			(**(void(__fastcall***)(__int64))v16)(v16);
		if (a4[19] == 4)
			v24 = sub_1403F8CE0(a1, (__int64)&v28, a6);
		else
			v24 = sub_140475370(a2, a4[20], (__int64)&v28, a6);
		v25 = v24;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
		if (qword_140C65898)
		{
			v26 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v26)
				sub_1400EA3E0(v26, "MessageFinished", byte_1409EB834, &v28);
		}
		if (v35)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
			v35 = 0i64;
		}
		if (v36)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
			v36 = 0i64;
		}
		if ((_QWORD)v30)
			sub_14018B900(v30, 0);
		return v25;
	}
	else
	{
		v9 = sub_14018B280(72i64, 0);
		v10 = (__int64)v9;
		if (v9)
		{
			*((_QWORD*)v9 + 2) = 0i64;
			*((_QWORD*)v9 + 3) = 0i64;
			*((_QWORD*)v9 + 5) = 0i64;
			*((_QWORD*)v9 + 6) = 0i64;
			*v9 = 1414420037;
			v9[17] = 0;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = sub_14018B280(320i64, 0);
		v12 = (__int64)v11;
		if (v11)
		{
			*((_QWORD*)v11 + 2) = 0i64;
			*((_QWORD*)v11 + 3) = 0i64;
			*((_QWORD*)v11 + 4) = 0i64;
			v13 = sub_14018B280(16i64, 0);
			*(_QWORD*)(v12 + 16) = v13;
			*(_QWORD*)(v12 + 24) = v13;
			*(_QWORD*)(v12 + 32) = v13 + 4;
			if (v13)
				*(_WORD*)v13 = 0;
			*(_QWORD*)(v12 + 192) = 0i64;
			*(_QWORD*)(v12 + 200) = 0i64;
			*(_QWORD*)(v12 + 208) = 0i64;
		}
		else
		{
			v12 = 0i64;
		}
		*(_DWORD*)v12 = *(_DWORD*)(a2 + 8);
		if (a3 != v12 + 8)
			sub_14001C480(v12 + 8, *(int**)(a3 + 8), *(int**)(a3 + 16));
		sub_1403C63C0((_DWORD*)(v12 + 40), a4);
		*(_QWORD*)(v12 + 312) = v10;
		v43 = 1;
		v44 = sub_14001C280(a1);
		v46 = v12;
		v45 = sub_1403C65B0;
		sub_140195960(v10, a5, (__int64)&v43, 4);
		return 0i64;
	}
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

