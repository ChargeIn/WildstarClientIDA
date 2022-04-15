//----- (000000014035E960) ----------------------------------------------------
__int64 __fastcall sub_14035E960(_QWORD* a1, __m128* a2, __int32* a3, __m128* a4)
{
	__int64 v6; // rdx
	unsigned __int64 v7; // rbx
	unsigned int v8; // r13d
	__m128** v9; // rcx
	unsigned int v10; // edi
	unsigned int v11; // r15d
	__int64 v12; // rsi
	__m128* v13; // rcx
	__int64 v14; // rdx
	unsigned int v15; // r13d
	__m128** v16; // rcx
	unsigned int v17; // edi
	unsigned int v18; // r12d
	__int64 v19; // rsi
	__m128* v20; // rcx
	unsigned __int64 v22; // [rsp+50h] [rbp-58h]
	unsigned __int64 v23; // [rsp+50h] [rbp-58h]
	unsigned __int64 v24; // [rsp+50h] [rbp-58h]
	unsigned __int64 v25; // [rsp+50h] [rbp-58h]
	unsigned __int64 v26; // [rsp+60h] [rbp-48h]
	unsigned __int64 v27; // [rsp+60h] [rbp-48h]
	unsigned __int64 v28; // [rsp+60h] [rbp-48h]
	unsigned __int64 v29; // [rsp+60h] [rbp-48h]

	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1[2] + 464i64),
		0i64);
	v6 = a1[607];
	v7 = 0i64;
	v8 = 0;
	if (v6)
	{
		v9 = (__m128**)a1[606];
		do
		{
			v22 = _mm_max_ps((*v9)[5], *a2).m128_u64[0];
			v26 = _mm_min_ps((*v9)[6], a2[1]).m128_u64[0];
			if (*(float*)&v22 < *(float*)&v26 && *((float*)&v22 + 1) < *((float*)&v26 + 1))
				++v8;
			++v9;
			--v6;
		} while (v6);
	}
	v10 = 0;
	while (v8)
	{
		v11 = v8;
		if (v8 > 0x3E8)
			v11 = 1000;
		v8 -= v11;
		v12 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			144 * v11,
			19i64);
		if (v12)
		{
			do
			{
				if ((unsigned __int64)v10 >= a1[607])
					break;
				v13 = *(__m128**)(a1[606] + 8i64 * v10);
				v23 = _mm_max_ps(v13[5], *a2).m128_u64[0];
				v27 = _mm_min_ps(v13[6], a2[1]).m128_u64[0];
				if (*(float*)&v23 < *(float*)&v27 && *((float*)&v23 + 1) < *((float*)&v27 + 1))
				{
					sub_140391F40(v13, v12, a2, a3, a4);
					v12 += 144i64;
					++v7;
				}
				++v10;
			} while (v7 < v11);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
				qword_140C65670,
				*(_QWORD*)(a1[2] + 456i64));
			v7 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, unsigned int, _DWORD, int))(*(_QWORD*)qword_140C65670
				+ 656i64))(
					qword_140C65670,
					3i64,
					0i64,
					6 * v11,
					0,
					4 * v11,
					0,
					1);
		}
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1[2] + 472i64),
		0i64);
	v14 = a1[609];
	v15 = 0;
	if (v14)
	{
		v16 = (__m128**)a1[608];
		do
		{
			v24 = _mm_max_ps((*v16)[5], *a2).m128_u64[0];
			v28 = _mm_min_ps((*v16)[6], a2[1]).m128_u64[0];
			if (*(float*)&v24 < *(float*)&v28 && *((float*)&v24 + 1) < *((float*)&v28 + 1))
				++v15;
			++v16;
			--v14;
		} while (v14);
	}
	v17 = 0;
	while (v15)
	{
		v18 = v15;
		if (v15 > 0x3E8)
			v18 = 1000;
		v15 -= v18;
		v19 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			v18 << 7,
			20i64);
		if (v19)
		{
			do
			{
				if ((unsigned __int64)v17 >= a1[609])
					break;
				v20 = *(__m128**)(a1[608] + 8i64 * v17);
				v25 = _mm_max_ps(v20[5], *a2).m128_u64[0];
				v29 = _mm_min_ps(v20[6], a2[1]).m128_u64[0];
				if (*(float*)&v25 < *(float*)&v29 && *((float*)&v25 + 1) < *((float*)&v29 + 1))
				{
					sub_140391F40(v20, v19, a2, a3, a4);
					v19 += 128i64;
					++v7;
				}
				++v17;
			} while (v7 < v18);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(
				qword_140C65670,
				*(_QWORD*)(a1[2] + 456i64));
			v7 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, unsigned int, _DWORD, int))(*(_QWORD*)qword_140C65670
				+ 656i64))(
					qword_140C65670,
					3i64,
					0i64,
					6 * v18,
					0,
					4 * v18,
					0,
					1);
		}
	}
	return 0i64;
}
// 14035EA6A: conditional instruction was optimized away because r15d.4!=0
// 14035EC49: conditional instruction was optimized away because r12d.4!=0
// 140C65670: using guessed type __int64 qword_140C65670;

