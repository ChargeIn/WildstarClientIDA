#include "../winhttp.h"

//----- (0000000140600E10) ----------------------------------------------------
__int64 __fastcall sub_140600E10(__int64 a1, unsigned int* a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	__int64 v6; // rbx
	int v7; // eax
	__int64 v8; // rsi
	unsigned __int64 v9; // rax
	__int64 v10; // rax
	unsigned __int64 v11; // rax
	__int64 v12; // rax
	__m128 v13; // xmm0
	__m128 v14; // xmm2
	__m128 v15; // xmm3
	int v16; // ecx
	int v17; // eax
	__m128 v18; // xmm3
	__m128 v19; // xmm4
	__m128 v20; // xmm2
	__m128 v21; // xmm4
	int v22; // ecx
	__m128 v23; // xmm4
	int v24; // xmm0_4
	int v25; // eax
	__m128 v26; // xmm3
	__m128 v27; // xmm2
	int v28; // eax
	int v29; // eax
	int v30; // eax
	int* v31; // rax
	__int64 v32; // rbx
	int* v33; // rax
	unsigned __int64 v34; // rax
	__int64 v35; // r14
	unsigned __int64 v36; // r12
	unsigned __int64 v37; // rbx
	int* v38; // rax
	__int64 v39; // rcx
	int v41[4]; // [rsp+20h] [rbp-E0h] BYREF
	__int128 v42; // [rsp+30h] [rbp-D0h]
	__int128 v43; // [rsp+40h] [rbp-C0h]
	__int128 v44; // [rsp+50h] [rbp-B0h]
	__m128 v45; // [rsp+60h] [rbp-A0h]
	__m128 v46; // [rsp+70h] [rbp-90h]
	__m128 v47; // [rsp+80h] [rbp-80h]
	__int64 v48; // [rsp+90h] [rbp-70h]
	__int64 v49; // [rsp+C0h] [rbp-40h]
	int v50; // [rsp+D0h] [rbp-30h]
	int v51; // [rsp+D4h] [rbp-2Ch]
	unsigned int v52; // [rsp+D8h] [rbp-28h]
	int v53; // [rsp+DCh] [rbp-24h]
	int v54; // [rsp+FCh] [rbp-4h]
	int v55; // [rsp+100h] [rbp+0h]
	int v56; // [rsp+104h] [rbp+4h]
	int v57; // [rsp+108h] [rbp+8h]
	int v58; // [rsp+10Ch] [rbp+Ch]
	int v59; // [rsp+110h] [rbp+10h]
	unsigned int v60; // [rsp+114h] [rbp+14h]
	int v61; // [rsp+118h] [rbp+18h]
	int v62; // [rsp+11Ch] [rbp+1Ch]
	int v63; // [rsp+120h] [rbp+20h]
	unsigned int v64; // [rsp+128h] [rbp+28h]
	int v65; // [rsp+14Ch] [rbp+4Ch]
	int v66; // [rsp+150h] [rbp+50h]
	int v67; // [rsp+154h] [rbp+54h]
	int v68; // [rsp+15Ch] [rbp+5Ch]
	int v69; // [rsp+160h] [rbp+60h]
	int v70; // [rsp+164h] [rbp+64h]
	int v71; // [rsp+168h] [rbp+68h]
	int v72; // [rsp+16Ch] [rbp+6Ch]
	int v73; // [rsp+170h] [rbp+70h]

	v4 = (*(__int64(__fastcall**)(unsigned int*))(a1 + 40))(a2 + 9);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 32) + 8 * (v4 % *(_QWORD*)(a1 + 24)));
	if (!v5)
		goto LABEL_7;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(a1 + 48))(a2 + 9, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			goto LABEL_7;
	}
	if (v5 == (_QWORD*)-24i64)
	{
	LABEL_7:
		v6 = sub_140237680(*a2);
		if (v6)
		{
			sub_1403D90D0(qword_140C65898, a2[1]);
			sub_1403D90D0(qword_140C65898, a2[5]);
			sub_1407E4830(v41, 0i64, 0x160ui64);
			v41[0] = *(_DWORD*)v6;
			v7 = *(_DWORD*)(v6 + 80) >> 2;
			v8 = 0i64;
			v62 = 1;
			v50 |= v7 & 2;
			v61 = *(_DWORD*)(v6 + 4);
			v9 = *(_QWORD*)(v6 + 40);
			if (v9)
			{
				if (v9 <= qword_140C3FE70)
					v10 = qword_140C3FE68 + v9;
				else
					v10 = 0i64;
			}
			else
			{
				v10 = 0i64;
			}
			v49 = v10;
			v11 = *(_QWORD*)(v6 + 24);
			if (v11)
			{
				if (v11 <= qword_140C3FE70)
					v12 = qword_140C3FE68 + v11;
				else
					v12 = 0i64;
			}
			else
			{
				v12 = 0i64;
			}
			v13 = (__m128)a2[8];
			v14 = (__m128)a2[7];
			v15 = (__m128)a2[6];
			v16 = *(_DWORD*)(v6 + 84);
			v48 = v12;
			v52 = a2[5];
			v17 = a2[1];
			v53 = 0;
			v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, v13), _mm_unpacklo_ps(v14, (__m128)0i64));
			v19 = _mm_unpacklo_ps((__m128)a2[2], (__m128)a2[4]);
			v20 = (__m128)a2[3];
			v46 = v18;
			v51 = v17;
			v42 = xmmword_140C78410;
			v21 = _mm_unpacklo_ps(v19, _mm_unpacklo_ps(v20, (__m128)0i64));
			v44 = xmmword_140C78430;
			v43 = xmmword_140C78420;
			v45 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v21, _mm_shuffle_ps(v21, v21, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v21, v21, 85), (__m128)0x3F800000u));
			if (v16 == -1)
			{
				v59 = -1;
				v60 = 0;
			}
			else
			{
				v22 = v16 - a2[10];
				v60 = a2[10];
				v59 = v22;
			}
			v23 = (__m128)(unsigned int)dword_140C3B438;
			v24 = *(_DWORD*)(v6 + 192);
			v54 = *(_DWORD*)(v6 + 64);
			v25 = *(_DWORD*)(v6 + 68);
			v23.m128_f32[0] = *(float*)&dword_140C3B438 * 0.0055555557;
			v65 = v24;
			v55 = v25;
			v26 = v23;
			v27 = v23;
			v23.m128_f32[0] = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v6 + 204);
			v26.m128_f32[0] = v26.m128_f32[0] * *(float*)(v6 + 196);
			v27.m128_f32[0] = v27.m128_f32[0] * *(float*)(v6 + 200);
			v56 = *(_DWORD*)(v6 + 56);
			v28 = *(_DWORD*)(v6 + 60);
			v66 = *(_DWORD*)(v6 + 208);
			v57 = v28;
			v29 = *(_DWORD*)(v6 + 72);
			v67 = *(_DWORD*)(v6 + 212);
			v58 = v29;
			v63 = *(_DWORD*)(v6 + 92);
			v30 = *(_DWORD*)(v6 + 228);
			v47 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, v23), _mm_unpacklo_ps(v27, (__m128)0i64));
			v68 = v30;
			v69 = *(_DWORD*)(v6 + 232);
			v70 = *(_DWORD*)(v6 + 236);
			v71 = *(_DWORD*)(v6 + 224);
			v72 = *(_DWORD*)(v6 + 240);
			v73 = *(_DWORD*)(v6 + 244);
			v64 = a2[9];
			v31 = sub_14018B280(1648i64, 8u);
			if (v31)
				v8 = sub_140619900((__int64)v31);
			if ((int)sub_14061A840(v8, (__int64)v41) >= 0)
			{
				v32 = *(_QWORD*)(a1 + 8);
				v33 = sub_14018B280(24i64, 0);
				if (v33 != (int*)-16i64)
					*((_QWORD*)v33 + 2) = v8;
				*(_QWORD*)v33 = v32;
				*((_QWORD*)v33 + 1) = *(_QWORD*)(v32 + 8);
				**(_QWORD**)(v32 + 8) = v33;
				*(_QWORD*)(v32 + 8) = v33;
				if (v8)
				{
					if (*(_QWORD*)(a1 + 16) == *(_QWORD*)(a1 + 24))
						sub_1400290D0(a1 + 16);
					v34 = (*(__int64(__fastcall**)(__int64))(a1 + 40))(v8 + 984);
					v35 = *(_QWORD*)(a1 + 32);
					v36 = v34;
					v37 = v34 % *(_QWORD*)(a1 + 24);
					v38 = sub_14018B280(32i64, 0);
					if (v38)
					{
						v39 = *(_QWORD*)(v35 + 8 * v37);
						*(_QWORD*)v38 = v36;
						*((_QWORD*)v38 + 1) = v39;
						LODWORD(v39) = *(_DWORD*)(v8 + 984);
						*((_QWORD*)v38 + 3) = v8;
						v38[4] = v39;
					}
					*(_QWORD*)(v35 + 8 * v37) = v38;
					++* (_QWORD*)(a1 + 16);
				}
			}
			else if (v8)
			{
				sub_140619BB0(v8);
				sub_14018B900(v8, 0);
			}
		}
	}
	return 0i64;
}
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

