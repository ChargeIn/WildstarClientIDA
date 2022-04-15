#include "../winhttp.h"

//----- (00000001408D1E50) ----------------------------------------------------
void __fastcall sub_1408D1E50(__int64 a1, __int64 a2)
{
	int* v3; // r8
	__int64 v4; // rdx
	__int64 v6; // rax
	__int128 v7; // xmm0
	__int128 v8; // xmm1
	__int128 v9; // xmm0
	__int128 v10; // xmm1
	__int128 v11; // xmm0
	__int128 v12; // xmm1
	__int128 v13; // xmm0
	__int128 v14; // xmm1
	__int128 v15; // xmm1
	int v16; // eax
	_BYTE* v17; // rax
	unsigned __int16 v18; // bp
	int v19; // ecx
	__int64 v20; // r15
	unsigned int i; // ebx
	__int64 v22; // rdi
	__int64 v23; // r13
	float v24; // xmm11_4
	float v25; // xmm9_4
	double v26; // xmm7_8
	float v27; // xmm12_4
	float v28; // xmm10_4
	double v29; // xmm8_8
	__int64 v30; // rax
	double v31; // xmm6_8
	__int64 v32; // r14
	double v33; // xmm1_8
	__m128* v34; // rbx
	unsigned __int64 v35; // r10
	float* v36; // [rsp+40h] [rbp-198h]
	int* v37; // [rsp+48h] [rbp-190h]
	float* v38; // [rsp+50h] [rbp-188h]
	float* v39; // [rsp+58h] [rbp-180h]
	int v40[6]; // [rsp+70h] [rbp-168h] BYREF
	char v41; // [rsp+89h] [rbp-14Fh]
	char v42; // [rsp+9Dh] [rbp-13Bh]
	char v43; // [rsp+B1h] [rbp-127h]
	char v44; // [rsp+CDh] [rbp-10Bh]
	char v45; // [rsp+E5h] [rbp-F3h]
	char v46; // [rsp+F1h] [rbp-E7h]
	char v47; // [rsp+101h] [rbp-D7h]
	unsigned int v48; // [rsp+104h] [rbp-D4h]
	float v49; // [rsp+108h] [rbp-D0h]
	float v50; // [rsp+10Ch] [rbp-CCh]
	float* v51; // [rsp+1E0h] [rbp+8h]
	__int64 v52; // [rsp+1E8h] [rbp+10h]
	float* v53; // [rsp+1F0h] [rbp+18h]
	float* v54; // [rsp+1F8h] [rbp+20h]

	v3 = v40;
	v4 = *(_QWORD*)(a1 + 8) + 8i64;
	if ((((unsigned __int8)v40 | (unsigned __int8)v4) & 0xF) != 0)
	{
		sub_1407DB590(v40, (int*)v4, 0xA4ui64);
	}
	else
	{
		v6 = 1i64;
		do
		{
			v7 = *(_OWORD*)v4;
			v8 = *(_OWORD*)(v4 + 16);
			v3 += 32;
			v4 += 128i64;
			*((_OWORD*)v3 - 8) = v7;
			v9 = *(_OWORD*)(v4 - 96);
			*((_OWORD*)v3 - 7) = v8;
			v10 = *(_OWORD*)(v4 - 80);
			*((_OWORD*)v3 - 6) = v9;
			v11 = *(_OWORD*)(v4 - 64);
			*((_OWORD*)v3 - 5) = v10;
			v12 = *(_OWORD*)(v4 - 48);
			*((_OWORD*)v3 - 4) = v11;
			v13 = *(_OWORD*)(v4 - 32);
			*((_OWORD*)v3 - 3) = v12;
			v14 = *(_OWORD*)(v4 - 16);
			*((_OWORD*)v3 - 2) = v13;
			*((_OWORD*)v3 - 1) = v14;
			--v6;
		} while (v6);
		v15 = *(_OWORD*)(v4 + 16);
		v16 = *(_DWORD*)(v4 + 32);
		*(_OWORD*)v3 = *(_OWORD*)v4;
		*((_OWORD*)v3 + 1) = v15;
		v3[8] = v16;
	}
	sub_1408D2380((_DWORD*)a1, (__int64)v40);
	v17 = *(_BYTE**)(a1 + 8);
	v17[32] = 0;
	v17[52] = 0;
	v17[72] = 0;
	v17[100] = 0;
	v17[124] = 0;
	v17[136] = 0;
	v17[152] = 0;
	v17[168] = 0;
	sub_1408A1640((unsigned int*)(a1 + 48), a2, *(_DWORD*)(a1 + 56));
	v18 = *(_WORD*)(a2 + 18);
	if (v18)
	{
		v19 = *(_DWORD*)(a2 + 8);
		v20 = 0i64;
		for (i = 0; v19; v19 &= v19 - 1)
			++i;
		v22 = 4i64 * *(unsigned __int16*)(a2 + 16);
		v23 = 0i64;
		v37 = (int*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(*(_QWORD*)(a1 + 16), v22);
		if (v37)
		{
			if (!v44
				|| (v23 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
					*(_QWORD*)(a1 + 16),
					v22)) != 0)
			{
				*(_QWORD*)&v26 = *(unsigned int*)(a1 + 44);
				*(float*)&v26 = *(float*)&v26 * 0.0099999998;
				v24 = v50;
				v25 = 1.0 - *(float*)&v26;
				*(float*)&v26 = *(float*)&v26 * *(float*)(a1 + 40);
				*(_QWORD*)&v29 = LODWORD(v50);
				v27 = v49;
				v28 = 1.0 - (float)(v50 * 0.0099999998);
				*(float*)&v29 = (float)(v50 * 0.0099999998) * v49;
				v51 = (float*)sub_1408D3480(a1 + 64, 0i64);
				v52 = sub_1408D3480(a1 + 96, 0i64);
				v53 = (float*)sub_1408D3480(a1 + 128, 0i64);
				v54 = (float*)sub_1408D3480(a1 + 160, 0i64);
				v39 = (float*)sub_1408D3480(a1 + 192, 0i64);
				v38 = (float*)sub_1408D3480(a1 + 224, 0i64);
				v30 = sub_1408D3480(a1 + 256, 0i64);
				*(_QWORD*)&v31 = v48;
				v36 = (float*)v30;
				if (i)
				{
					v32 = i;
					do
					{
						*(_QWORD*)&v33 = *(unsigned int*)(a1 + 36);
						v34 = (__m128*)(*(_QWORD*)a2 + 4 * v20 * *(unsigned __int16*)(a2 + 16));
						if (*(float*)&v31 == *(float*)&v33)
							sub_1408D27A0(v34, v33, v18);
						else
							sub_1408D2650(v34, *(float*)&v33, v31, v18);
						sub_1407DB590(v37, (int*)v34, v35);
						if (v41)
							v51 = (float*)sub_1408D35F0(v51, (__int64)v34, (__int64)v34, v18);
						if (v42)
							v52 = sub_1408D3F80(v52, (__int64)v34, (__int64)v34, v18);
						if (v43)
							v53 = (float*)sub_1408D54C0(v53, (__int64)v34, (__int64)v34, v18);
						if (v44)
						{
							sub_1408D3500((_DWORD*)(a1 + 24), v23, v18);
							v54 = (float*)sub_1408D59C0(v54, (__int64)v34, v23, (__int64)v34, v18);
						}
						if (v46)
							v39 = (float*)sub_1408D6E60(v39, (__int64)v34, (__int64)v34, v18);
						if (v45)
							v38 = (float*)sub_1408D6660(v38, v34->m128_f32, (__int64)v34, v18);
						if (v47)
							v36 = sub_1408D8040(v36, (__int64)v34, (__int64)v34, v18);
						sub_1408D8AC0(v34, (__int64)v37, v26, v29, v25, v28, v18);
						++v20;
						--v32;
					} while (v32);
				}
				*(_DWORD*)(a1 + 36) = LODWORD(v31);
				*(float*)(a1 + 40) = v27;
				*(float*)(a1 + 44) = v24;
				if (v23)
					(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16), v23);
			}
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16), v37);
		}
	}
}
// 1408D217D: variable 'v35' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 1408D1E50: using guessed type int var_168[6];

