#include "../winhttp.h"

//----- (00000001407CE760) ----------------------------------------------------
__int64 __fastcall sub_1407CE760(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v3; // rbx
	unsigned int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // ebx
	__m128 v8; // xmm5
	__m128 v9; // xmm4
	__m128 v10; // xmm3
	__m128 v11; // xmm1
	int v12; // r14d
	__int64* v13; // rdi
	__int64 v14; // r8
	__int64 v15; // [rsp+20h] [rbp-E0h]
	__int64 v16; // [rsp+28h] [rbp-D8h]
	__int128 v18; // [rsp+40h] [rbp-C0h] BYREF
	int v19; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v20; // [rsp+58h] [rbp-A8h]
	int v21; // [rsp+60h] [rbp-A0h]
	int v22; // [rsp+64h] [rbp-9Ch]
	int v23; // [rsp+68h] [rbp-98h] BYREF
	__int64 v24; // [rsp+70h] [rbp-90h]
	int v25; // [rsp+78h] [rbp-88h]
	int v26; // [rsp+7Ch] [rbp-84h]
	int v27; // [rsp+80h] [rbp-80h] BYREF
	__int64 v28; // [rsp+88h] [rbp-78h]
	int v29; // [rsp+90h] [rbp-70h]
	int v30; // [rsp+94h] [rbp-6Ch]
	int v31; // [rsp+98h] [rbp-68h] BYREF
	__int64 v32; // [rsp+A0h] [rbp-60h]
	int v33; // [rsp+A8h] [rbp-58h]
	int v34; // [rsp+ACh] [rbp-54h]
	__int128 v35[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v36[4]; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v37; // [rsp+110h] [rbp+10h] BYREF
	__int128 i; // [rsp+120h] [rbp+20h]
	__m128 v39; // [rsp+130h] [rbp+30h]

	v1 = a1;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 608i64))(qword_140C65670)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 600i64))(qword_140C65670))
	{
		if (!*(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670))
			return sub_1407CDD20((__int64)v1);
		(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 504i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
			qword_140C65670,
			&unk_140C3FE88,
			1i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 400i64))(qword_140C65670, 7i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
		v3 = v1[166];
		v37 = xmmword_140B7A330;
		v4 = 0;
		for (i = 0i64; v3; v3 = *(_QWORD*)(v3 + 136))
		{
			if (v4 >= 4)
				break;
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 448i64))(v3))
			{
				v5 = *(_QWORD*)v3;
				LODWORD(v18) = 0;
				if ((*(unsigned int(__fastcall**)(__int64, __int128*))(v5 + 24))(v3, &v18))
				{
					v6 = v4++;
					*((_DWORD*)&i + v6) = *(_DWORD*)(v3 + 272);
					v36[v6] = v3;
					*(float*)&v37 = *(float*)&v37 - *(float*)(v3 + 272);
				}
			}
		}
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
			qword_140C65670,
			v1[717],
			0i64);
		v7 = 0;
		v8 = _mm_unpackhi_ps(*(__m128*)ymmword_140C78390.m256_f32, *(__m128*) & ymmword_140C78390.m256_f32[4]);
		v9 = _mm_unpackhi_ps((__m128)xmmword_140C783B0, (__m128)xmmword_140C783C0);
		v10 = _mm_unpacklo_ps(*(__m128*)ymmword_140C78390.m256_f32, *(__m128*) & ymmword_140C78390.m256_f32[4]);
		v11 = _mm_unpacklo_ps((__m128)xmmword_140C783B0, (__m128)xmmword_140C783C0);
		v35[0] = (__int128)_mm_shuffle_ps(v10, v11, 68);
		v35[1] = (__int128)_mm_shuffle_ps(v10, v11, 238);
		v35[2] = (__int128)_mm_shuffle_ps(v8, v9, 68);
		v35[3] = (__int128)_mm_shuffle_ps(v8, v9, 238);
		(*(void(__fastcall**)(__int64, __int64, __int128*, _QWORD, _DWORD, _DWORD))(*(_QWORD*)qword_140C65670 + 328i64))(
			qword_140C65670,
			64i64,
			v35,
			0i64,
			0,
			0);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
			qword_140C65670,
			v1[724],
			v4);
		v12 = 2;
		do
		{
			v32 = v1[823];
			v28 = v32;
			v20 = v32;
			v24 = v32;
			v31 = 3;
			v34 = 0;
			v27 = 3;
			v29 = v12;
			v30 = 0;
			v19 = 3;
			v22 = 0;
			v23 = 3;
			v26 = 0;
			v33 = v12 + 1;
			v21 = v12 - 1;
			v25 = v12 - 2;
			(*(void(__fastcall**)(__int64, int*, int*, int*, int*))(*(_QWORD*)qword_140C65670 + 520i64))(
				qword_140C65670,
				&v23,
				&v19,
				&v27,
				&v31);
			v18 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
				qword_140C65670,
				1i64,
				&v18);
			if (v4)
			{
				v13 = v36;
				do
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						v7++,
						*(_QWORD*)(*v13++ + 488),
						0i64,
						0i64);
				while (v7 < v4);
				v1 = a1;
			}
			v7 = 0;
			LODWORD(v16) = 0;
			LODWORD(v15) = 0;
			v39.m128_f32[0] = (float)(v12 - 2);
			v39.m128_f32[1] = (float)(v12 - 1);
			v39.m128_f32[2] = (float)v12;
			v39.m128_f32[3] = (float)(v12 + 1);
			v39 = _mm_div_ps(v39, (__m128)xmmword_140B7B3E0);
			(*(void(__fastcall**)(__int64, __int64, __int128*, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670
				+ 384i64))(
					qword_140C65670,
					48i64,
					&v37,
					0i64,
					v15,
					v16);
			(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
				qword_140C65670,
				0xFFFFFFFFi64,
				v14,
				0i64,
				0i64,
				0i64);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			v12 += 4;
		} while ((unsigned int)(v12 - 2) < 0x10);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
	}
	return 0i64;
}
// 1407CEB41: variable 'v15' is possibly undefined
// 1407CEB41: variable 'v16' is possibly undefined
// 1407CEB64: variable 'v14' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7B3E0: using guessed type __int128 xmmword_140B7B3E0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 1407CE760: using guessed type __int64 var_B0[4];

