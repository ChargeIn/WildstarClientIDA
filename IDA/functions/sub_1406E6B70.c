#include "../winhttp.h"

//----- (00000001406E6B70) ----------------------------------------------------
void __fastcall sub_1406E6B70(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rdi
	unsigned __int8* v4; // rdx
	char v5; // al
	unsigned __int8* v6; // rcx
	BOOL v7; // eax
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r8
	__m128i* v11; // r8
	__int64 v12; // r8
	bool v13; // cf
	unsigned __int64 i; // rdi
	unsigned __int64 v15; // rcx
	__int64 v16; // r8
	__int64 v17; // rdx
	int v18; // eax
	unsigned __int64 j; // rcx
	__int64 v20; // rdx
	int v21; // eax
	__int64** v22; // rdi
	__int64 v23; // rcx
	int v24; // eax
	int v25; // eax
	__int64 v26; // rcx
	__int64 v27; // [rsp+30h] [rbp-19h] BYREF
	_DWORD v28[6]; // [rsp+38h] [rbp-11h]
	__int64 v29; // [rsp+50h] [rbp+7h] BYREF
	char v30; // [rsp+58h] [rbp+Fh]
	__int64 v31; // [rsp+60h] [rbp+17h]
	__int64 v32; // [rsp+68h] [rbp+1Fh]
	__int64 v33; // [rsp+70h] [rbp+27h]
	__int64 v34; // [rsp+78h] [rbp+2Fh]
	__int64 v35; // [rsp+80h] [rbp+37h]
	__int64 v36; // [rsp+88h] [rbp+3Fh]
	__int64 v37; // [rsp+90h] [rbp+47h]

	v2 = 0i64;
	if (*(_QWORD*)(a1 + 2464))
	{
		while (1)
		{
			v3 = *(_QWORD*)(*(_QWORD*)(a1 + 2456) + 8 * v2);
			v4 = *(unsigned __int8**)v3;
			v5 = *(_BYTE*)(*(_QWORD*)v3 + 64i64);
			*(_BYTE*)(v3 + 68) = v5;
			if (v5)
				break;
			if ((*(_BYTE*)(*(_QWORD*)v4 + 16i64) & 1) == 0)
			{
				v6 = v4 + 8;
				v7 = 0;
				v8 = 6i64;
				do
				{
					v7 = v7 || *(_QWORD*)v6 && *(_BYTE*)(*(_QWORD*)v6 + 64i64);
					v6 += 8;
					--v8;
				} while (v8);
				v9 = *(int*)(v3 + 488);
				v29 = 0i64;
				v30 = 0;
				v10 = 32 * v9;
				v31 = 0i64;
				v32 = 0i64;
				v33 = 0i64;
				v34 = 0i64;
				v35 = 0i64;
				v36 = 0i64;
				v37 = 0i64;
				if (v7)
				{
					*(_DWORD*)(v3 + 64) = 1;
					v11 = *(__m128i**)(v10 + a1 + 1976);
				}
				else
				{
					*(_DWORD*)(v3 + 64) = 0;
					v11 = *(__m128i**)(v10 + a1 + 1968);
				}
				goto LABEL_18;
			}
			sub_1406E4720(a1, v3, 1);
		LABEL_19:
			if ((unsigned __int64)++v2 >= *(_QWORD*)(a1 + 2464))
				goto LABEL_20;
		}
		v12 = *(int*)(v3 + 488);
		v13 = (unsigned int)v4[64] < *(_DWORD*)(*(_QWORD*)v4 + 20i64);
		v29 = 0i64;
		v30 = 0;
		v31 = 0i64;
		v32 = 0i64;
		v33 = 0i64;
		v34 = 0i64;
		v35 = 0i64;
		v36 = 0i64;
		v37 = 0i64;
		if (v13)
		{
			*(_DWORD*)(v3 + 64) = 2;
			v11 = *(__m128i**)(32 * (v12 + 62) + a1);
		}
		else
		{
			*(_DWORD*)(v3 + 64) = 3;
			v11 = *(__m128i**)(32 * v12 + a1 + 1992);
		}
	LABEL_18:
		sub_14010B330(&v29, *(_QWORD*)(a1 + 32), v11, L"PrimalMatrixNode");
		sub_1400C3730(v3 + 72, (__int64)&v29);
		goto LABEL_19;
	}
LABEL_20:
	for (i = 0i64; i < *(_QWORD*)(a1 + 2560); ++i)
	{
		v15 = 0i64;
		v16 = *(_QWORD*)(*(_QWORD*)(a1 + 2552) + 8 * i);
		if (*(_QWORD*)(v16 + 80))
		{
			do
			{
				v17 = *(_QWORD*)(*(_QWORD*)(v16 + 72) + 8 * v15);
				if (*(_DWORD*)(*(_QWORD*)v17 + 64i64) <= 1u || (v18 = 1, *(_DWORD*)(*(_QWORD*)(v17 + 8) + 64i64) <= 1u))
					v18 = 0;
				++v15;
				*(_DWORD*)(v17 + 24) = v18;
			} while (v15 < *(_QWORD*)(v16 + 80));
		}
		sub_1406E51A0(a1, (_DWORD*)v16);
	}
	for (j = 0i64; j < *(_QWORD*)(a1 + 2576); *(_DWORD*)(v20 + 24) = v21)
	{
		v20 = *(_QWORD*)(*(_QWORD*)(a1 + 2568) + 8 * j);
		if (*(_DWORD*)(*(_QWORD*)v20 + 64i64) <= 1u || (v21 = 1, *(_DWORD*)(*(_QWORD*)(v20 + 8) + 64i64) <= 1u))
			v21 = 0;
		++j;
	}
	v22 = *(__int64***)(a1 + 2640);
	*(_QWORD*)(a1 + 2704) = 0i64;
	*(_QWORD*)(a1 + 2712) = 0i64;
	if (v22)
	{
		*(_QWORD*)v28 = 0i64;
		v27 = 0i64;
		sub_1406E5430(a1, &v27);
		sub_1406E5500(a1, v22, &v27, a1 + 2648, 0i64);
		v23 = v27;
		if (!*(_QWORD*)(a1 + 2656))
			v22 = 0i64;
		*(_QWORD*)(a1 + 2640) = v22;
		if (v23)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	}
	if (*(_QWORD*)(a1 + 3800))
	{
		if (!*(_DWORD*)(a1 + 3824))
		{
			v24 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 3832) + 64i64))(
				*(_QWORD*)(a1 + 3832),
				0i64,
				3i64);
			HIDWORD(v27) = 0;
			*(_QWORD*)&v28[1] = 0i64;
			v28[0] = 1065353216;
			*(_QWORD*)&v28[3] = 2i64;
			v25 = dword_140B3FC00[v24];
			v26 = *(_QWORD*)(a1 + 3800);
			v28[5] = 0;
			*(_DWORD*)(a1 + 3824) = 1;
			LODWORD(v27) = v25;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v26 + 584i64))(v26, 0i64, &v27);
		}
	}
}
// 140B3ED00: using guessed type wchar_t aPrimalmatrixno_1[17];
// 140B3FC00: using guessed type int dword_140B3FC00[4];

