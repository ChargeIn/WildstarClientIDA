//----- (00000001405286F0) ----------------------------------------------------
__int64 __fastcall sub_1405286F0(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	int v5; // esi
	int v6; // r14d
	void(__fastcall * **v7)(_QWORD); // rbx
	int* v8; // rax
	__m128i si128; // xmm6
	unsigned __int64 v10; // rbx
	unsigned int v11; // eax
	int v12; // r8d
	int v13; // r9d
	__int64 v14; // r10
	unsigned int v15; // edi
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // r11d
	__int64 v19; // rdx
	int v20; // r11d
	char* v21; // rdx
	__int64 v22; // rcx
	int v23; // eax
	char* v24; // rdx
	__int64 v25; // rcx
	int v26; // eax
	__int64(__fastcall * **v27)(); // r15
	__m128 v28; // xmm5
	__int64 v29; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v30)(); // [rsp+50h] [rbp-B0h] BYREF
	int v31; // [rsp+58h] [rbp-A8h]
	__int128 v32; // [rsp+60h] [rbp-A0h]
	int* v33; // [rsp+78h] [rbp-88h]
	int* v34; // [rsp+80h] [rbp-80h]
	int* v35; // [rsp+88h] [rbp-78h]
	char v36; // [rsp+90h] [rbp-70h]
	char v37; // [rsp+92h] [rbp-6Eh]
	__m128 v38; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v39; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v40; // [rsp+C0h] [rbp-40h] BYREF
	__m128 v41[2]; // [rsp+D0h] [rbp-30h] BYREF
	__int64(__fastcall * **v42)(); // [rsp+F0h] [rbp-10h] BYREF
	int v43; // [rsp+F8h] [rbp-8h]
	int v44; // [rsp+FCh] [rbp-4h]
	int v45; // [rsp+100h] [rbp+0h]
	int v46; // [rsp+104h] [rbp+4h]
	int v47; // [rsp+108h] [rbp+8h]
	int v48; // [rsp+10Ch] [rbp+Ch]
	int v49; // [rsp+110h] [rbp+10h]
	int v50; // [rsp+114h] [rbp+14h]
	int v51; // [rsp+118h] [rbp+18h]
	int v52; // [rsp+11Ch] [rbp+1Ch]
	int v53; // [rsp+120h] [rbp+20h]
	int v54; // [rsp+124h] [rbp+24h]
	__int16 v55; // [rsp+128h] [rbp+28h]
	char v56; // [rsp+12Ah] [rbp+2Ah]
	int v57; // [rsp+12Ch] [rbp+2Ch]
	int v58; // [rsp+130h] [rbp+30h]
	int v59; // [rsp+134h] [rbp+34h]
	__int64 v60; // [rsp+138h] [rbp+38h]
	__int64 v61; // [rsp+140h] [rbp+40h]
	unsigned int v62; // [rsp+148h] [rbp+48h]
	unsigned int v63; // [rsp+14Ch] [rbp+4Ch]
	char v64; // [rsp+150h] [rbp+50h]
	char v65[64]; // [rsp+170h] [rbp+70h] BYREF
	int v66; // [rsp+1B0h] [rbp+B0h]
	char v67[64]; // [rsp+1D0h] [rbp+D0h] BYREF
	int v68; // [rsp+210h] [rbp+110h]

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 48i64))(*(_QWORD*)(a1 + 56));
	if ((_DWORD)result)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 16i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 184i64))(qword_140C65680);
		v5 = *(_DWORD*)(a1 + 64);
		v6 = *(_DWORD*)(a1 + 68);
		v7 = *(void(__fastcall****)(_QWORD))(a1 + 56);
		v29 = qword_140C77760;
		v31 = 1;
		v32 = 0i64;
		v30 = off_140B56C80;
		v8 = sub_14018B280(16i64, 0);
		v33 = v8;
		v34 = v8;
		v35 = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		v37 = 0;
		if (v7)
		{
			*(_QWORD*)&v32 = v7;
			(**v7)(v7);
		}
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7B6F0);
		v36 = 1;
		v39 = _mm_mul_ps(
			_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
			(__m128)xmmword_140B7AB70);
		v10 = (unsigned int)sub_140141F10(qword_140C63678, &v39);
		v38 = _mm_mul_ps(
			_mm_cvtepi32_ps(_mm_shuffle_epi32(_mm_unpacklo_epi16(_mm_unpacklo_epi8(si128, (__m128i)0i64), (__m128i)0i64), 198)),
			(__m128)xmmword_140B7AB70);
		v11 = sub_140141F10(qword_140C63678, &v38);
		v12 = v29;
		v13 = HIDWORD(v29);
		v14 = qword_140C63678;
		v57 = 1065353216;
		v15 = v11;
		v42 = &v30;
		v60 = qword_140C77760;
		v55 = 1;
		v56 = 0;
		v61 = 0i64;
		v62 = v11;
		if ((unsigned __int64)v11 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v16 = *(_QWORD*)(qword_140C63678 + 40);
			v17 = 32i64 * v11;
			v18 = *(_DWORD*)(v17 + v16 + 16);
			if ((unsigned int)(v18 - 1) <= 0xFFFFFFFD)
			{
				*(_DWORD*)(v17 + v16 + 16) = v18 + 1;
				v13 = HIDWORD(v29);
				v12 = v29;
			}
		}
		v63 = v10;
		if (v10 < *(_QWORD*)(v14 + 48))
		{
			v19 = *(_QWORD*)(v14 + 40);
			v20 = *(_DWORD*)(32 * v10 + v19 + 16);
			if ((unsigned int)(v20 - 1) <= 0xFFFFFFFD)
			{
				*(_DWORD*)(32 * v10 + v19 + 16) = v20 + 1;
				v13 = HIDWORD(v29);
				v12 = v29;
			}
		}
		v64 = 0;
		v66 = 0;
		v21 = v65;
		v22 = 0i64;
		do
		{
			v23 = *(_DWORD*)((char*)&unk_140A1B148 + v22);
			*(_DWORD*)&v65[v22 + 48] = 0;
			v22 += 4i64;
			*(_DWORD*)&v65[v22 + 28] = v23;
			*(_QWORD*)v21 = 0i64;
			v21 += 8;
		} while (v22 < 16);
		v68 = 0;
		v24 = v67;
		v25 = 0i64;
		do
		{
			v26 = *(_DWORD*)((char*)&unk_140A1B148 + v25);
			*(_DWORD*)&v67[v25 + 48] = 0;
			v25 += 4i64;
			*(_DWORD*)&v67[v25 + 28] = v26;
			*(_QWORD*)v24 = 0i64;
			v24 += 8;
		} while (v25 < 16);
		v27 = v42;
		if (v42)
		{
			((void(__fastcall*)(__int64(__fastcall***)(), char*)) * *v42)(v42, v24);
			v13 = HIDWORD(v29);
			v12 = v29;
			v14 = qword_140C63678;
		}
		v48 = v5;
		v47 = v5;
		v46 = v5;
		v45 = v5;
		v54 = v6;
		v53 = v6;
		v52 = v6;
		v51 = v6;
		v58 = v5 - v12;
		v44 = v12;
		v43 = v12;
		v59 = v6 - v13;
		v50 = v13;
		v49 = v13;
		sub_1401429A0(v14, v15);
		sub_1401429A0(qword_140C63678, v10);
		v40 = xmmword_140B7B240;
		if (v27)
		{
			v28 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[2]), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[3]), _mm_cvtsi32_si128(0))));
			v41[0] = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[1]), _mm_cvtsi32_si128(0))));
			v41[1] = v28;
			sub_140100010((__int64)&v42, v41, (__m128*) & v40, 0.0, 0);
			if (v42)
				((void(__fastcall*)(__int64(__fastcall***)()))(*v42)[1])(v42);
		}
		sub_1401429A0(qword_140C63678, v63);
		sub_1401429A0(qword_140C63678, v62);
		v30 = off_140B56C80;
		if ((_QWORD)v32)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v32 + 8i64))(v32);
			*(_QWORD*)&v32 = 0i64;
		}
		if (*((_QWORD*)&v32 + 1))
		{
			(*(void(__fastcall**)(_QWORD))(**((_QWORD**)&v32 + 1) + 8i64))(*((_QWORD*)&v32 + 1));
			*((_QWORD*)&v32 + 1) = 0i64;
		}
		if (v33)
			sub_14018B900((__int64)v33, 0);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	}
	return result;
}
// 140B56C80: using guessed type __int64 (__fastcall *off_140B56C80[3])();
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;

