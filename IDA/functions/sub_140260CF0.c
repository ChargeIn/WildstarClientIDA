//----- (0000000140260CF0) ----------------------------------------------------
__int64 __fastcall sub_140260CF0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rax
	__m128 v8; // xmm3
	__m128 v9; // xmm4
	int v10; // ecx
	int v11; // eax
	__m128 v12; // xmm5
	__m128 v13; // xmm4
	__m128 v14; // xmm3
	__m128 v15; // xmm1
	__int128 v17; // [rsp+48h] [rbp-C0h] BYREF
	int v18; // [rsp+5Ch] [rbp-ACh]
	_OWORD v19[4]; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v20; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v21; // [rsp+B8h] [rbp-50h]
	__m128 v22; // [rsp+C8h] [rbp-40h]
	__m128 v23; // [rsp+D8h] [rbp-30h]
	__int128 v24; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v25[4]; // [rsp+F8h] [rbp-10h] BYREF
	__m128* v26[10]; // [rsp+138h] [rbp+30h] BYREF

	if (*(_DWORD*)(a1 + 148) != 4)
	{
		*(_DWORD*)(a1 + 148) = 4;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 2136),
			0i64);
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			*(_QWORD*)(a1 + 2128),
			1i64);
		v17 = xmmword_140B7B240;
		(*(void(__fastcall**)(__int64, __int64, __int128*, _QWORD, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 384i64))(
			qword_140C65670,
			16i64,
			&v17,
			0i64,
			0,
			0);
	}
	v4 = *(_QWORD*)(a2 + 48);
	LODWORD(v17) = 1;
	*((_QWORD*)&v17 + 1) = v4;
	v18 = 0;
	(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v17,
		&unk_140C3FE88,
		&unk_140C3FE88,
		&unk_140C3FE88);
	v17 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v17);
	v5 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 240i64))(
		qword_140C65670,
		(unsigned int)(2 * **(_DWORD**)(a2 + 24)),
		0i64);
	if (v5)
	{
		sub_1407DB590(v5, *(int**)(*(_QWORD*)(a2 + 24) + 8i64), 2i64 * **(unsigned int**)(a2 + 24));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 248i64))(qword_140C65670);
		v6 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 224i64))(
			qword_140C65670,
			(unsigned int)(16 * **(_DWORD**)(a2 + 16)),
			1i64);
		if (v6)
		{
			sub_1407DB590(v6, *(int**)(*(_QWORD*)(a2 + 16) + 8i64), 16i64 * **(unsigned int**)(a2 + 16));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
			v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 48) + 24i64))(*(_QWORD*)(a2 + 48));
			if ((dword_140DC0C10 & 1) == 0)
			{
				v8 = (__m128)0xBF800000;
				v9 = (__m128)0x3F800000u;
				dword_140DC0C10 |= 1u;
				v10 = *(_DWORD*)(v7 + 8);
				v11 = *(_DWORD*)(v7 + 4);
				v9.m128_f32[0] = (float)(1.0 / (float)v10) + 1.0;
				xmmword_140DC0C20 = xmmword_140B7A340;
				v8.m128_f32[0] = -1.0 - (float)(1.0 / (float)v11);
				xmmword_140DC0C40 = 0i64;
				xmmword_140DC0C30 = xmmword_140B7A5E0;
				xmmword_140DC0C50 = (__int128)_mm_unpacklo_ps(
					_mm_unpacklo_ps(v8, (__m128)0i64),
					_mm_unpacklo_ps(v9, (__m128)0x3F800000u));
			}
			v17 = *(_OWORD*)a2;
			v24 = v17;
			sub_1401AFB10((__m128**) & v24, v25);
			*(_QWORD*)&v17 = v25;
			v26[0] = v25;
			*((_QWORD*)&v17 + 1) = &xmmword_140DC0C20;
			v26[1] = (__m128*) & xmmword_140DC0C20;
			sub_1401AFB10(v26, &v20);
			v12 = _mm_unpackhi_ps(v20, v21);
			v13 = _mm_unpackhi_ps(v22, v23);
			v14 = _mm_unpacklo_ps(v20, v21);
			v15 = _mm_unpacklo_ps(v22, v23);
			v19[0] = _mm_shuffle_ps(v14, v15, 68);
			v19[1] = _mm_shuffle_ps(v14, v15, 238);
			v19[2] = _mm_shuffle_ps(v12, v13, 68);
			v19[3] = _mm_shuffle_ps(v12, v13, 238);
			(*(void(__fastcall**)(__int64, __int64, _OWORD*))(*(_QWORD*)qword_140C65670 + 328i64))(
				qword_140C65670,
				64i64,
				v19);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, int))(*(_QWORD*)qword_140C65670
				+ 656i64))(
					qword_140C65670,
					3i64,
					0i64,
					**(unsigned int**)(a2 + 24),
					0,
					**(_DWORD**)(a2 + 16),
					0,
					1);
		}
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 140B7A340: using guessed type __int128 xmmword_140B7A340;
// 140B7A5E0: using guessed type __int128 xmmword_140B7A5E0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140DC0C10: using guessed type int dword_140DC0C10;
// 140DC0C20: using guessed type __int128 xmmword_140DC0C20;
// 140DC0C30: using guessed type __int128 xmmword_140DC0C30;
// 140DC0C40: using guessed type __int128 xmmword_140DC0C40;
// 140DC0C50: using guessed type __int128 xmmword_140DC0C50;
// 140260CF0: using guessed type __m128 var_C0[4];

