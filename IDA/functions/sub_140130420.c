#include "../winhttp.h"

//----- (0000000140130420) ----------------------------------------------------
void __fastcall sub_140130420(__int64 a1)
{
	unsigned __int64 v1; // rdx
	__int64 v2; // r8
	unsigned int v3; // ebp
	unsigned int v4; // r14d
	unsigned int v5; // r15d
	unsigned int v6; // r12d
	__int64 v8; // r10
	__int64 v9; // r9
	int v10; // r11d
	__int128* v11; // rcx
	float v12; // xmm6_4
	float v13; // xmm0_4
	char v14; // al
	__int64 v15; // rcx
	__int64 v16; // rcx
	char v17; // r9
	__int128* v18; // rdx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // rcx
	__int64 v24; // r8
	unsigned __int64 v25; // rax
	__m128* v26; // rax
	__int64 v27; // rax
	__m128i v28; // xmm2
	__m128i v29; // xmm1
	__m128i v30; // xmm3
	__int64 v31; // rcx
	__int64 v32; // rcx
	char v33; // al
	int v34; // eax
	unsigned int v35; // ebx
	__int64 v36; // rcx
	int v37; // r9d
	__int64 v38; // rcx
	int v39; // r9d
	__int64 v40; // rcx
	int v41; // r9d
	float(__fastcall * **v42)(_QWORD, __int64); // rcx
	double v43; // xmm0_8
	unsigned __int64 v44; // r9
	__int64 v45; // r9
	unsigned int v46[4]; // [rsp+40h] [rbp-A8h] BYREF
	__int128 v47; // [rsp+50h] [rbp-98h] BYREF
	__int128 v48; // [rsp+60h] [rbp-88h] BYREF
	__int128 v49[2]; // [rsp+70h] [rbp-78h] BYREF
	__int128 v50[2]; // [rsp+90h] [rbp-58h] BYREF
	unsigned int v51; // [rsp+F0h] [rbp+8h] BYREF

	v1 = *(unsigned int*)(a1 + 712);
	v2 = qword_140C63678;
	v3 = *(_DWORD*)(a1 + 716);
	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 724);
	v6 = *(_DWORD*)(a1 + 728);
	if (v1 >= *(_QWORD*)(qword_140C63678 + 48))
		goto LABEL_6;
	v8 = *(_QWORD*)(qword_140C63678 + 40);
	v9 = 32i64 * (unsigned int)v1;
	v10 = *(_DWORD*)(v9 + v8 + 16);
	if ((unsigned int)(v10 - 1) <= 0xFFFFFFFD)
		*(_DWORD*)(v9 + v8 + 16) = v10 + 1;
	if (v1 >= *(_QWORD*)(v2 + 48))
		LABEL_6:
	v11 = *(__int128**)(v2 + 40);
	else
		v11 = (__int128*)(*(_QWORD*)(v2 + 40) + 32i64 * (unsigned int)v1);
	v47 = *v11;
	sub_1401429A0(v2, v1);
	v12 = sub_1400C9D10((_QWORD*)a1).m128_f32[0];
	v13 = sub_1400C9C30(a1);
	v14 = *(_BYTE*)(a1 + 664) >> 3;
	*((float*)&v47 + 3) = *((float*)&v47 + 3) * (float)(v12 * v13);
	if ((v14 & 1) != 0 || (*(_BYTE*)(a1 + 656) & 0x10) != 0)
	{
		v19 = *(_QWORD*)(a1 + 32);
		v48 = xmmword_140B7B240;
		v20 = *(_QWORD*)(v19 + 2896);
		v17 = 1;
		if (v20 != a1
			&& (*(char*)(a1 + 28) >= 0 || !v20 || (v21 = *(_QWORD*)(v20 + 16)) == 0 || v21 != a1 && !sub_1400D1A90(v21, a1)))
		{
			v17 = 0;
		}
		v18 = &v48;
	}
	else
	{
		v15 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2896i64);
		if (v15 == a1
			|| *(char*)(a1 + 28) < 0 && v15 && (v16 = *(_QWORD*)(v15 + 16)) != 0 && (v16 == a1 || sub_1400D1A90(v16, a1)))
		{
			v17 = 1;
			v18 = &v47;
		}
		else
		{
			v17 = 0;
			v18 = &v47;
		}
	}
	sub_1400C3CB0(a1 + 1024, (__m128*)v18, (*(_BYTE*)(a1 + 28) & 8) != 0, v17);
	if ((*(_BYTE*)(a1 + 664) & 8) != 0 || (*(_BYTE*)(a1 + 656) & 0x10) != 0)
	{
		v46[0] = *(_DWORD*)(a1 + 1392);
		v46[1] = *(_DWORD*)(a1 + 1396);
		v46[2] = *(_DWORD*)(a1 + 1400);
		v46[3] = *(_DWORD*)(a1 + 1404);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v23 = *(_QWORD*)(a1 + 792);
		if (v23)
		{
			v24 = qword_140C63678;
			v25 = *(unsigned int*)(a1 + 712);
			if (v25 >= *(_QWORD*)(qword_140C63678 + 48))
				v26 = *(__m128**)(qword_140C63678 + 40);
			else
				v26 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v25);
			if (!*(_QWORD*)v23)
				goto LABEL_35;
			sub_140103CF0(
				*(_QWORD**)v23,
				v46,
				v26,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v23 + 8)) * *(float*)(v23 + 12)));
		}
	}
	v24 = qword_140C63678;
LABEL_35:
	v27 = *(_QWORD*)(a1 + 32);
	v28 = _mm_cvtsi32_si128(0);
	v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 1396));
	v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1392)), v28);
	v49[1] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1400)), v28),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(a1 + 1404)), v28)));
	v49[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(v30, _mm_unpacklo_epi32(v29, v28)));
	v31 = *(_QWORD*)(v27 + 2896);
	LOBYTE(v22) = v31 == a1 || v31 && (v32 = *(_QWORD*)(v31 + 16)) != 0 && (v32 == a1 || sub_1400D1A90(v32, a1));
	v33 = *(_BYTE*)(a1 + 1436);
	if ((v33 & 0x10) == 0)
	{
		v34 = 4;
		goto LABEL_54;
	}
	if (v33 >= 0)
		goto LABEL_48;
	if ((v33 & 0x40) != 0)
	{
		if ((_BYTE)v22)
		{
			v34 = 3;
			goto LABEL_54;
		}
	LABEL_48:
		if ((v33 & 0x40) != 0)
		{
			v34 = 1;
			goto LABEL_54;
		}
	}
	if (v33 < 0 && (_BYTE)v22)
		v34 = 2;
	else
		v34 = (*(_BYTE*)(a1 + 1438) & 1) != 0 ? 5 : 0;
LABEL_54:
	v51 = *(_DWORD*)(a1 + 4i64 * v34 + 1536);
	v35 = v51;
	if ((unsigned __int64)v51 < *(_QWORD*)(v24 + 48))
	{
		v22 = *(_QWORD*)(v24 + 40);
		v36 = 32i64 * v51;
		v37 = *(_DWORD*)(v36 + v22 + 16);
		if ((unsigned int)(v37 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v36 + v22 + 16) = v37 + 1;
	}
	if ((*(_DWORD*)(a1 + 664) & 0x100) != 0 && &v51 != (unsigned int*)(a1 + 708))
	{
		sub_1401429A0(v24, v35);
		v24 = qword_140C63678;
		v51 = *(_DWORD*)(a1 + 708);
		v35 = v51;
		if ((unsigned __int64)v51 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v22 = *(_QWORD*)(qword_140C63678 + 40);
			v38 = 32i64 * v51;
			v39 = *(_DWORD*)(v38 + v22 + 16);
			if ((unsigned int)(v39 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v38 + v22 + 16) = v39 + 1;
		}
	}
	if ((*(_BYTE*)(a1 + 664) & 1) != 0 && (*(_BYTE*)(a1 + 28) & 8) != 0 && &v51 != (unsigned int*)(a1 + 708))
	{
		sub_1401429A0(v24, v35);
		v24 = qword_140C63678;
		v51 = *(_DWORD*)(a1 + 708);
		v35 = v51;
		if ((unsigned __int64)v51 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v22 = *(_QWORD*)(qword_140C63678 + 40);
			v40 = 32i64 * v51;
			v41 = *(_DWORD*)(v40 + v22 + 16);
			if ((unsigned int)(v41 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v40 + v22 + 16) = v41 + 1;
		}
	}
	if (*(_QWORD*)(a1 + 688))
	{
		sub_1400CE790(a1, (float*)v49, &v51);
		v24 = qword_140C63678;
	}
	v42 = *(float(__fastcall****)(_QWORD, __int64))(a1 + 944);
	if (v42)
	{
		if ((**v42)(v42, v22) > 0.0 && (***(float(__fastcall****)(_QWORD))(a1 + 944))(*(_QWORD*)(a1 + 944)) < 1.0)
		{
			v43 = (***(double(__fastcall****)(_QWORD))(a1 + 944))(*(_QWORD*)(a1 + 944));
			sub_1400CE4E0((__int64*)a1, v43);
		}
		v24 = qword_140C63678;
	}
	if ((*(_BYTE*)(a1 + 664) & 4) != 0 && (__int64)(*(_QWORD*)(a1 + 1520) - *(_QWORD*)(a1 + 1512)) >> 1)
	{
		v44 = *(unsigned int*)(a1 + 708);
		v50[1] = (__int128)_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(0))));
		v50[0] = (__int128)_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(0))));
		if (v44 >= *(_QWORD*)(v24 + 48))
			v45 = *(_QWORD*)(v24 + 40);
		else
			v45 = *(_QWORD*)(v24 + 40) + 32 * v44;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int128*, int, __int64, int))(*(_QWORD*)qword_140C65680
			+ 264i64))(
				qword_140C65680,
				*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
				*(_QWORD*)(a1 + 1512),
				-1i64,
				v50,
				2,
				v45,
				1);
		v24 = qword_140C63678;
	}
	sub_1401429A0(v24, v35);
}
// 14013077B: variable 'v24' is possibly undefined
// 1401308A8: variable 'v22' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

