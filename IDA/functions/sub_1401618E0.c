//----- (00000001401618E0) ----------------------------------------------------
__int64 __fastcall sub_1401618E0(__int64 a1)
{
	__int64 v2; // rax
	unsigned int v3; // edi
	signed int v4; // r15d
	unsigned int v5; // esi
	signed int v6; // r12d
	int v7; // eax
	int v8; // ecx
	char v9; // al
	int v10; // eax
	int v11; // eax
	int v12; // ebp
	int v13; // edx
	__int64 i; // r14
	int v15; // eax
	int v16; // eax
	__int64 v17; // rdx
	bool v18; // dl
	char v19; // r8
	unsigned __int64 v20; // r8
	__m128* v21; // r8
	_QWORD* v22; // rcx
	int v23; // xmm0_4
	unsigned __int64 v24; // r8
	unsigned __int64 v25; // r8
	unsigned __int64 v26; // r8
	unsigned __int64 v27; // r8
	int v28; // esi
	__int64 v29; // rdi
	unsigned int v31; // [rsp+30h] [rbp-58h] BYREF
	int v32; // [rsp+34h] [rbp-54h]
	unsigned int v33; // [rsp+38h] [rbp-50h]
	int v34; // [rsp+3Ch] [rbp-4Ch]
	__int128 v35[2]; // [rsp+40h] [rbp-48h] BYREF

	sub_140160A20(a1);
	v2 = *(_QWORD*)(a1 + 472);
	v3 = *(_DWORD*)(a1 + 716);
	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 724);
	v6 = *(_DWORD*)(a1 + 728);
	v31 = v3;
	v32 = v4;
	v33 = v5;
	v34 = v6;
	if (v2)
		v7 = *(_DWORD*)(v2 + 1300);
	else
		v7 = 0;
	v8 = v4 - v7;
	v9 = *(_BYTE*)(a1 + 664) >> 1;
	v32 = v8;
	if ((v9 & 1) != 0)
	{
		v10 = *(_DWORD*)(a1 + 1024);
		v4 += v10;
		v32 = v10 + v8;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	v35[1] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(0))));
	v35[0] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(0))));
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)qword_140C65680 + 104i64))(qword_140C65680, v35);
	v11 = *(_DWORD*)(a1 + 1160);
	v12 = 0;
	if (v11 > 0)
	{
		v13 = v32;
		for (i = 0i64; ; i += 8i64)
		{
			if (v12 >= 0 && v12 < v11 && (*(_BYTE*)(a1 + 664) & 4) != 0)
				v15 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + i) + 12i64);
			else
				v15 = *(_DWORD*)(a1 + 1028);
			v16 = v13 + v15;
			v34 = v16;
			if (v13 > v6)
				return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			if (v16 > v4)
				break;
		LABEL_55:
			v13 = v16;
			v32 = v16;
			v11 = *(_DWORD*)(a1 + 1160);
			if (++v12 >= v11)
				return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
		}
		v17 = *(_QWORD*)(a1 + 664);
		if ((v17 & 8) != 0)
		{
			v18 = (v17 & 0x10) != 0;
			if (v18)
				v19 = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + i) + 9i64);
			else
				v19 = v12 == *(_DWORD*)(a1 + 1032);
			if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + i) + 8i64))
			{
				if (v12 == *(_DWORD*)(a1 + 1040))
				{
					if (v19)
					{
						v24 = *(unsigned int*)(a1 + 2200);
						if (v24 >= *(_QWORD*)(qword_140C63678 + 48))
							v21 = *(__m128**)(qword_140C63678 + 40);
						else
							v21 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v24);
						v22 = *(_QWORD**)(a1 + 1768);
						if (v22)
						{
							*(float*)&v23 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1776)) * *(float*)(a1 + 1780);
							goto LABEL_50;
						}
					}
					else
					{
						v25 = *(unsigned int*)(a1 + 2192);
						if (v25 >= *(_QWORD*)(qword_140C63678 + 48))
							v21 = *(__m128**)(qword_140C63678 + 40);
						else
							v21 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v25);
						v22 = *(_QWORD**)(a1 + 1720);
						if (v22)
						{
							*(float*)&v23 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1728)) * *(float*)(a1 + 1732);
							goto LABEL_50;
						}
					}
				}
				else if (v19 && v18 || *(_DWORD*)(a1 + 1032) == v12)
				{
					v26 = *(unsigned int*)(a1 + 2196);
					if (v26 >= *(_QWORD*)(qword_140C63678 + 48))
						v21 = *(__m128**)(qword_140C63678 + 40);
					else
						v21 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v26);
					v22 = *(_QWORD**)(a1 + 1672);
					if (v22)
					{
						*(float*)&v23 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1680)) * *(float*)(a1 + 1684);
						goto LABEL_50;
					}
				}
				else
				{
					v27 = *(unsigned int*)(a1 + 2188);
					if (v27 >= *(_QWORD*)(qword_140C63678 + 48))
						v21 = *(__m128**)(qword_140C63678 + 40);
					else
						v21 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v27);
					v22 = *(_QWORD**)(a1 + 1624);
					if (v22)
					{
						*(float*)&v23 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1632)) * *(float*)(a1 + 1636);
						goto LABEL_50;
					}
				}
			}
			else
			{
				v20 = *(unsigned int*)(a1 + 2204);
				if (v20 >= *(_QWORD*)(qword_140C63678 + 48))
					v21 = *(__m128**)(qword_140C63678 + 40);
				else
					v21 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v20);
				v22 = *(_QWORD**)(a1 + 1816);
				if (v22)
				{
					*(float*)&v23 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1824)) * *(float*)(a1 + 1828);
				LABEL_50:
					sub_140103CF0(v22, &v31, v21, 0, v23);
				}
			}
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v28 = 0;
		if (*(int*)(a1 + 1144) > 0)
		{
			v29 = 0i64;
			do
			{
				sub_1401610D0(a1, v12, *(_DWORD*)(*(_QWORD*)(a1 + 1120) + v29));
				++v28;
				v29 += 4i64;
			} while (v28 < *(_DWORD*)(a1 + 1144));
		}
		v16 = v34;
		goto LABEL_55;
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
}
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;

