#include "../winhttp.h"

//----- (00000001400C88F0) ----------------------------------------------------
void __fastcall sub_1400C88F0(__int64 a1, double a2)
{
	__int64 v4; // rcx
	__m128* v5; // rax
	float(__fastcall * **v6)(__int64); // rdi
	float v7; // xmm0_4
	float v8; // xmm1_4
	float(__fastcall * *v9)(__int64); // rax
	__int64 v10; // rcx
	double v11; // xmm3_8
	double v12; // xmm3_8
	float v13; // xmm0_4
	char** v14; // rdx
	_QWORD* v15; // rax
	_QWORD** v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rdi
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rcx
	int* v23; // rax
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // r8
	int v27; // eax
	float v28; // xmm1_4
	__int64 v29; // rcx
	int v30; // xmm2_4
	__int64 v31; // rcx
	float v32; // xmm3_4
	int* v33; // rax
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // r8
	int v37; // eax
	float v38; // xmm1_4
	__int64 v39; // rcx
	int v40; // xmm2_4
	__int64 v41; // rcx
	float v42; // xmm3_4
	int* v43; // rax
	__int64 v44; // rax
	__int64 v45; // rcx
	int v46; // eax
	float v47; // xmm1_4
	__int64 v48; // rcx
	int v49; // xmm2_4
	float v50; // xmm3_4
	__int64 v51; // rax
	int* v52; // rax
	__int64 v53; // rax
	unsigned __int32 v54; // xmm0_4
	__int64 v55; // rcx
	int v56; // eax
	unsigned __int32 v57; // xmm0_4
	__int64 v58; // rcx
	int v59; // eax
	float v60; // xmm0_4
	__int64 v61; // rcx
	int v62; // eax
	__int64 v63; // rcx
	__int64 v64; // rcx
	__int64 v65; // rcx
	__int64 v66; // rcx
	__int64 v67; // rcx
	__int64 v68; // rdi
	int v69; // edx
	_QWORD* v70; // rcx
	int v71; // edx
	_QWORD* v72; // rcx
	__int64* v73; // rdx
	__int64 v74; // rcx
	int v75; // eax
	__int64 v76; // rax
	void(__fastcall * **v77)(_QWORD); // rcx
	__int128 v78; // xmm0
	int v79; // esi
	__m128* v80; // rax
	__m128 v81; // xmm2
	__m128 v82; // xmm3
	__m128 v83; // xmm2
	__m128 v84; // xmm3
	void(__fastcall * **v85)(_QWORD); // rcx
	__m128* v86; // rax
	bool v87; // zf
	__m128 v88; // xmm8
	unsigned __int32 v89; // xmm9_4
	__m128 v90; // xmm2
	__m128 v91; // xmm3
	__m128 v92; // xmm2
	__m128 v93; // xmm3
	void(__fastcall * **v94)(_QWORD); // rcx
	__m128 v95; // xmm2
	__int64 v96; // rax
	__int64 v97; // rax
	unsigned __int32 v98; // xmm1_4
	__int64 v99; // rax
	unsigned int* v100; // rax
	__int64 v101; // r8
	__m128i v102; // xmm3
	__m128i v103; // xmm1
	unsigned int* v104; // rax
	void(__fastcall * **v105)(_QWORD); // rcx
	__m128i v106; // xmm3
	__m128i v107; // xmm1
	__m128 v108; // xmm6
	__int64 v109; // rax
	__int128 v110; // xmm0
	int v111; // r8d
	BOOL v112; // [rsp+20h] [rbp-E0h]
	int v113; // [rsp+20h] [rbp-E0h]
	int v114; // [rsp+24h] [rbp-DCh]
	int v115; // [rsp+28h] [rbp-D8h]
	_DWORD v116[4]; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v117; // [rsp+40h] [rbp-C0h] BYREF
	__m128 v118; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v119; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v120; // [rsp+70h] [rbp-90h] BYREF
	__m128 v121; // [rsp+80h] [rbp-80h] BYREF
	__m128 v122; // [rsp+90h] [rbp-70h] BYREF
	__m128 v123; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v124; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v125; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v126[2]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v127[3]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v128; // [rsp+108h] [rbp+8h]
	int v129; // [rsp+110h] [rbp+10h]
	unsigned __int32 v130; // [rsp+114h] [rbp+14h]
	int v131; // [rsp+118h] [rbp+18h]
	unsigned __int32 v132; // [rsp+11Ch] [rbp+1Ch]
	int v133[4]; // [rsp+120h] [rbp+20h]
	int v134; // [rsp+130h] [rbp+30h]

	if ((*(_BYTE*)(a1 + 28) & 1) != 0)
	{
		if ((*(_BYTE*)(a1 + 29) & 2) == 0
			&& (*(_DWORD*)(a1 + 656) & 0x20000i64) != 0
			&& *(int*)(*(_QWORD*)(a1 + 32) + 48i64) < 2)
		{
			sub_1400D42F0(a1, 0, 1, 4.0);
		}
		*(_BYTE*)(a1 + 28) &= ~2u;
		sub_1400CB960((char*)a1);
		v4 = *(_QWORD*)(a1 + 448);
		if (v4)
		{
			sub_140151FE0(v4, *(float*)&a2);
			if ((*(_BYTE*)(a1 + 28) & 1) == 0)
				return;
			v5 = *(__m128**)(a1 + 448);
			if (v5 && (v5[4].m128_i8[8] & 4) != 0)
				v117 = v5[7];
		}
		sub_1400C7AB0((_QWORD*)a1);
		v6 = (float(__fastcall***)(__int64))(a1 + 624);
		v7 = *(float*)(a1 + 648);
		v8 = *(float*)(a1 + 640);
		if (v7 != v8 || *(_BYTE*)(a1 + 644))
		{
			v9 = *v6;
			v10 = a1 + 624;
			if (v7 <= v8)
			{
				if (v7 >= v8)
				{
					v13 = (*v9)(v10);
					v14 = off_140A149C0;
					if (v13 != 1.0)
						v14 = &off_140A149B0;
					sub_1400C85F0((_QWORD*)a1, (__int64)v14, a1);
				}
				else
				{
					v12 = (*v9)(v10);
					sub_1400C85F0((_QWORD*)a1, (__int64)&off_140A14950, a1, v12);
				}
			}
			else
			{
				v11 = (*v9)(v10);
				sub_1400C85F0((_QWORD*)a1, (__int64)&off_140A14960, a1, v11);
			}
		}
		if ((*(_BYTE*)(a1 + 29) & 1) != 0)
		{
			v112 = (**v6)(a1 + 624) > 0.0 || *(_BYTE*)(a1 + 644);
			v15 = *(_QWORD**)(a1 + 560);
			*(_BYTE*)(a1 + 29) &= ~1u;
			if (v15 != (_QWORD*)*v15)
			{
				do
				{
					v16 = (_QWORD**)(v15 + 1);
					v17 = v15[1];
					v18 = *(_QWORD*)(v17 + 16);
					if ((*(_BYTE*)(v18 + 28) & 1) != 0)
					{
						if ((**(float(__fastcall***)(__int64))(v18 + 624))(v18 + 624) > 0.0 || *(_BYTE*)(v18 + 644))
						{
							*(_BYTE*)(a1 + 29) |= 1u;
							if (v112 || (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v18 + 32i64))(v18))
								sub_1400C88F0(v18);
						}
						else if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v18 + 32i64))(v18))
						{
							*(_BYTE*)(a1 + 29) |= 1u;
							sub_1400C88F0(v18);
						}
					}
					else
					{
						sub_1400C7A40(a1, *(_QWORD*)(v17 + 16));
						v19 = *(_QWORD*)(a1 + 16);
						*(_BYTE*)(a1 + 28) |= 2u;
						if (v19)
						{
							if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v19 + 32i64))(v19))
								sub_1400C88A0(*(_QWORD*)(a1 + 16));
							v20 = *(_QWORD*)(a1 + 16);
							v21 = *(_QWORD*)(v20 + 16);
							*(_BYTE*)(v20 + 29) |= 1u;
							if (v21)
								sub_1400C8870(v21);
						}
					}
					v15 = *v16;
				} while (*v16 != **(_QWORD***)(a1 + 560));
			}
		}
		if (*(float*)(a1 + 648) > 0.0)
		{
			v22 = *(_QWORD*)(a1 + 16);
			if (!v22 || sub_1400D1A60(v22))
			{
				if ((*(_DWORD*)(a1 + 656) & 0x200i64) != 0)
				{
					if (!*(_QWORD*)(a1 + 608))
					{
						v23 = sub_14018B280(112i64, 0);
						if (v23)
							v24 = sub_1400C5690((__int64)v23);
						else
							v24 = 0i64;
						*(_QWORD*)(a1 + 608) = v24;
					}
					if (*(char*)(a1 + 28) >= 0
						|| (v25 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2488i64)) != 0
						&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v25 + 184i64))(v25))
					{
						v31 = *(_QWORD*)(a1 + 608);
						v32 = *(float*)(v31 + 40);
						if (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 2825i64))
							v32 = fmaxf(v32, 0.5);
						v29 = v31 + 80;
						v30 = 1077936128;
						v28 = v32;
					}
					else
					{
						v26 = *(_QWORD*)(a1 + 608);
						v27 = dword_140C3C1E0;
						v28 = *(float*)(v26 + 44);
						if (*(_DWORD*)qword_140C63750 < dword_140C3C1E0)
							v27 = *(_DWORD*)qword_140C63750;
						v29 = v26 + 80;
						v30 = dword_140C3C1F0[v27];
					}
					sub_1400F9C30(v29, v28, *(float*)&v30);
				}
				if ((*(_DWORD*)(a1 + 656) & 0x400i64) != 0)
				{
					if (!*(_QWORD*)(a1 + 608))
					{
						v33 = sub_14018B280(112i64, 0);
						if (v33)
							v34 = sub_1400C5690((__int64)v33);
						else
							v34 = 0i64;
						*(_QWORD*)(a1 + 608) = v34;
					}
					if (*(char*)(a1 + 28) >= 0
						|| (v35 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2488i64)) != 0
						&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v35 + 184i64))(v35))
					{
						v41 = *(_QWORD*)(a1 + 608);
						v42 = *(float*)(v41 + 40);
						if (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 2825i64))
							v42 = fmaxf(v42, 0.5);
						v39 = v41 + 48;
						v40 = 1077936128;
						v38 = v42;
					}
					else
					{
						v36 = *(_QWORD*)(a1 + 608);
						v37 = dword_140C3C1E0;
						v38 = *(float*)(v36 + 44);
						if (*(_DWORD*)qword_140C63750 < dword_140C3C1E0)
							v37 = *(_DWORD*)qword_140C63750;
						v39 = v36 + 48;
						v40 = dword_140C3C1F0[v37];
					}
					sub_1400F9C30(v39, v38, *(float*)&v40);
				}
				if ((*(_DWORD*)(a1 + 656) & 0x800i64) != 0)
				{
					if (!*(_QWORD*)(a1 + 608))
					{
						v43 = sub_14018B280(112i64, 0);
						if (v43)
							v44 = sub_1400C5690((__int64)v43);
						else
							v44 = 0i64;
						*(_QWORD*)(a1 + 608) = v44;
					}
					if (*(char*)(a1 + 28) >= 0
						|| (v45 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2488i64)) != 0
						&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v45 + 184i64))(v45))
					{
						v48 = *(_QWORD*)(a1 + 608);
						v50 = *(float*)(v48 + 36);
						if (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 2825i64))
							v50 = fmaxf(v50, 0.5);
						v49 = 1077936128;
						v47 = v50;
					}
					else
					{
						v46 = dword_140C3C1E0;
						v47 = *(float*)(*(_QWORD*)(a1 + 608) + 32i64);
						if (*(_DWORD*)qword_140C63750 < dword_140C3C1E0)
							v46 = *(_DWORD*)qword_140C63750;
						v48 = *(_QWORD*)(a1 + 608);
						v49 = dword_140C3C1F0[v46];
					}
					sub_1400F9C30(v48, v47, *(float*)&v49);
				}
				if ((*(_DWORD*)(a1 + 656) & 0x1000i64) != 0)
				{
					v51 = *(_QWORD*)(a1 + 16);
					if (v51)
					{
						if (*(_QWORD*)(v51 + 608))
						{
							if (!*(_QWORD*)(a1 + 608))
							{
								v52 = sub_14018B280(112i64, 0);
								if (v52)
									v53 = sub_1400C5690((__int64)v52);
								else
									v53 = 0i64;
								*(_QWORD*)(a1 + 608) = v53;
							}
							v54 = sub_1400C9D10((_QWORD*)*(_QWORD*)(a1 + 16)).m128_u32[0];
							v55 = *(_QWORD*)(a1 + 608);
							v56 = dword_140C636A8;
							*(_DWORD*)(v55 + 16) = v54;
							*(_DWORD*)(v55 + 24) = v54;
							*(_DWORD*)(v55 + 8) = v56;
							*(_BYTE*)(v55 + 20) = 0;
							*(_DWORD*)(v55 + 28) = 0;
							v57 = sub_1400C9E40((_QWORD*)*(_QWORD*)(a1 + 16)).m128_u32[0];
							v58 = *(_QWORD*)(a1 + 608);
							v59 = dword_140C636A8;
							*(_DWORD*)(v58 + 64) = v57;
							*(_DWORD*)(v58 + 72) = v57;
							*(_DWORD*)(v58 + 56) = v59;
							*(_BYTE*)(v58 + 68) = 0;
							*(_DWORD*)(v58 + 76) = 0;
							v60 = sub_1400C9C30(*(_QWORD*)(a1 + 16));
							v61 = *(_QWORD*)(a1 + 608);
							v62 = dword_140C636A8;
							*(float*)(v61 + 96) = v60;
							*(float*)(v61 + 104) = v60;
							*(_DWORD*)(v61 + 88) = v62;
							*(_BYTE*)(v61 + 100) = 0;
							*(_DWORD*)(v61 + 108) = 0;
						}
					}
				}
			}
		}
		if ((*(_BYTE*)(a1 + 656) & 2) != 0)
		{
			v63 = *(_QWORD*)(a1 + 472);
			if (v63)
			{
				if (sub_1400C5090(v63, a2))
					sub_1400CAC90((_QWORD*)a1);
			}
		}
		if ((*(_BYTE*)(a1 + 656) & 4) != 0)
		{
			v64 = *(_QWORD*)(a1 + 464);
			if (v64)
			{
				if (sub_1400C5090(v64, a2))
					sub_1400CAE90((_QWORD*)a1);
			}
		}
		v65 = *(_QWORD*)(a1 + 440);
		if (v65)
		{
			if (*(_DWORD*)v65)
			{
				if ((**(float(__fastcall***)(__int64))(v65 + 208))(v65 + 208) == 1.0)
				{
					v66 = *(_QWORD*)(a1 + 440);
					*(_OWORD*)(a1 + 64) = *(_OWORD*)(v66 + 112);
					*(_QWORD*)(a1 + 80) = *(_QWORD*)(v66 + 128);
					*(_QWORD*)(a1 + 88) = *(_QWORD*)(v66 + 136);
					*(_QWORD*)(a1 + 96) = *(_QWORD*)(v66 + 144);
					*(_QWORD*)(a1 + 104) = *(_QWORD*)(v66 + 152);
					*(_DWORD*)(a1 + 112) = *(_DWORD*)(v66 + 160);
					*(_DWORD*)(a1 + 116) = *(_DWORD*)(v66 + 164);
					*(_DWORD*)(a1 + 120) = *(_DWORD*)(v66 + 168);
					*(_DWORD*)(a1 + 124) = *(_DWORD*)(v66 + 172);
					*(_DWORD*)(a1 + 128) = *(_DWORD*)(v66 + 176);
					*(_DWORD*)(a1 + 132) = *(_DWORD*)(v66 + 180);
					*(_DWORD*)(a1 + 136) = *(_DWORD*)(v66 + 184);
					*(_DWORD*)(a1 + 140) = *(_DWORD*)(v66 + 188);
					*(_DWORD*)(a1 + 144) = *(_DWORD*)(v66 + 192);
					sub_1400CB690(a1);
					sub_1400CB960((char*)a1);
					**(_DWORD**)(a1 + 440) = 0;
					v67 = *(_QWORD*)(a1 + 440);
					if (v67)
						sub_14018B900(v67, 0);
					*(_QWORD*)(a1 + 440) = 0i64;
					sub_1400D4070(a1, 0x11u, (char*)a1, &unk_1409D0247, v112);
				}
				else
				{
					v68 = *(_QWORD*)(a1 + 440);
					if (*(_QWORD*)(v68 + 240))
					{
						v69 = 0;
						v70 = (_QWORD*)(v68 + 32);
						while (!*v70)
						{
							++v69;
							++v70;
							if ((unsigned __int64)v69 >= 4)
							{
								v71 = 0;
								v72 = (_QWORD*)(v68 + 128);
								while (!*v72)
								{
									++v71;
									++v72;
									if ((unsigned __int64)v71 >= 4)
									{
										v134 = 0;
										v73 = v127;
										v74 = 0i64;
										do
										{
											v75 = *(_DWORD*)((char*)&unk_140A14E90 + v74 * 4);
											v133[v74++] = 0;
											*(_DWORD*)((char*)&v128 + v74 * 4 + 4) = v75;
											*v73++ = 0i64;
										} while (v74 < 4);
										v122 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 80)), (__m128)0i64),
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 84)), (__m128)0i64));
										v125 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 176)), (__m128)0i64),
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 180)), (__m128)0i64));
										(**(void(__fastcall***)(__int64, __int64*, unsigned __int64))(v68 + 208))(
											v68 + 208,
											v73,
											0x140000000ui64);
										v76 = (*(__int64(__fastcall**)(_DWORD*, __m128*, __m128*))(*(_QWORD*)(a1 + 440) + 240i64))(
											v116,
											&v122,
											&v125);
										v77 = (void(__fastcall***)(_QWORD))(*(_QWORD*)(a1 + 440) + 208i64);
										v78 = *(_OWORD*)v76;
										LODWORD(v76) = (int)*(float*)(v76 + 4);
										v121 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 88)), (__m128)0i64),
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 92)), (__m128)0i64));
										v79 = (int)*(float*)&v78;
										v113 = v76;
										v123 = _mm_unpacklo_ps(
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 184)), (__m128)0i64),
											_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(int*)(v68 + 188)), (__m128)0i64));
										(**v77)(v77);
										v80 = (__m128*)(*(__int64(__fastcall**)(_DWORD*, __m128*, __m128*))(*(_QWORD*)(a1 + 440)
											+ 240i64))(
												v116,
												&v121,
												&v123);
										v115 = (int)COERCE_FLOAT(*v80);
										v114 = (int)_mm_shuffle_ps(*v80, *v80, 85).m128_f32[0];
										if (*(_QWORD*)(v68 + 40))
											v81 = 0i64;
										else
											v81 = (__m128) * (unsigned int*)(v68 + 68);
										if (*(_QWORD*)(v68 + 32))
											v82 = 0i64;
										else
											v82 = (__m128) * (unsigned int*)(v68 + 64);
										v124 = _mm_unpacklo_ps(_mm_unpacklo_ps(v82, (__m128)0i64), _mm_unpacklo_ps(v81, (__m128)0i64));
										if (*(_QWORD*)(v68 + 136))
											v83 = 0i64;
										else
											v83 = (__m128) * (unsigned int*)(v68 + 164);
										if (*(_QWORD*)(v68 + 128))
											v84 = 0i64;
										else
											v84 = (__m128) * (unsigned int*)(v68 + 160);
										v85 = (void(__fastcall***)(_QWORD))(*(_QWORD*)(a1 + 440) + 208i64);
										v126[0] = (__int128)_mm_unpacklo_ps(
											_mm_unpacklo_ps(v84, (__m128)0i64),
											_mm_unpacklo_ps(v83, (__m128)0i64));
										(**v85)(v85);
										v86 = (__m128*)(*(__int64(__fastcall**)(_DWORD*, __m128*, __int128*))(*(_QWORD*)(a1 + 440)
											+ 240i64))(
												v116,
												&v124,
												v126);
										v87 = *(_QWORD*)(v68 + 56) == 0i64;
										v88 = *v86;
										v129 = (int)*v86;
										v89 = _mm_shuffle_ps(v88, v88, 85).m128_u32[0];
										v130 = v89;
										if (v87)
											v90 = (__m128) * (unsigned int*)(v68 + 76);
										else
											v90 = 0i64;
										if (*(_QWORD*)(v68 + 48))
											v91 = 0i64;
										else
											v91 = (__m128) * (unsigned int*)(v68 + 72);
										v117 = _mm_unpacklo_ps(_mm_unpacklo_ps(v91, (__m128)0i64), _mm_unpacklo_ps(v90, (__m128)0i64));
										if (*(_QWORD*)(v68 + 152))
											v92 = 0i64;
										else
											v92 = (__m128) * (unsigned int*)(v68 + 172);
										if (*(_QWORD*)(v68 + 144))
											v93 = 0i64;
										else
											v93 = (__m128) * (unsigned int*)(v68 + 168);
										v94 = (void(__fastcall***)(_QWORD))(*(_QWORD*)(a1 + 440) + 208i64);
										v119 = _mm_unpacklo_ps(_mm_unpacklo_ps(v93, (__m128)0i64), _mm_unpacklo_ps(v92, (__m128)0i64));
										(**v94)(v94);
										v95 = *(__m128*)(*(__int64(__fastcall**)(_DWORD*, __m128*, __m128*))(*(_QWORD*)(a1 + 440)
											+ 240i64))(
												v116,
												&v117,
												&v119);
										v96 = v127[0];
										*(_OWORD*)(a1 + 64) = v126[1];
										*(_QWORD*)(a1 + 80) = v96;
										v97 = v127[1];
										*(_DWORD*)(a1 + 112) = v88.m128_i32[0];
										*(_DWORD*)(a1 + 116) = v89;
										*(_DWORD*)(a1 + 120) = v95.m128_i32[0];
										v131 = v95.m128_i32[0];
										*(_QWORD*)(a1 + 88) = v97;
										v98 = _mm_shuffle_ps(v95, v95, 85).m128_u32[0];
										*(_QWORD*)(a1 + 96) = v127[2];
										v99 = v128;
										*(_DWORD*)(a1 + 124) = v98;
										v132 = v98;
										*(_QWORD*)(a1 + 104) = v99;
										*(_DWORD*)(a1 + 128) = v79;
										*(_DWORD*)(a1 + 132) = v113;
										*(_DWORD*)(a1 + 136) = v115;
										*(_DWORD*)(a1 + 140) = v114;
										*(_DWORD*)(a1 + 144) = v134 | 0x300;
										goto LABEL_150;
									}
								}
								break;
							}
						}
						v100 = sub_1400CB0E0(a1, v116, v68 + 16);
						v101 = *(_QWORD*)(a1 + 440) + 112i64;
						v102 = _mm_cvtsi32_si128(*v100);
						v103 = _mm_cvtsi32_si128(v100[1]);
						v120 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v100[2]), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v100[3]), _mm_cvtsi32_si128(0))));
						v119 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(v102, _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(v103, _mm_cvtsi32_si128(0))));
						v104 = sub_1400CB0E0(a1, v116, v101);
						v105 = (void(__fastcall***)(_QWORD))(*(_QWORD*)(a1 + 440) + 208i64);
						v106 = _mm_cvtsi32_si128(*v104);
						v107 = _mm_cvtsi32_si128(v104[1]);
						v118 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v104[2]), _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(_mm_cvtsi32_si128(v104[3]), _mm_cvtsi32_si128(0))));
						v117 = _mm_cvtepi32_ps(
							_mm_unpacklo_epi32(
								_mm_unpacklo_epi32(v106, _mm_cvtsi32_si128(0)),
								_mm_unpacklo_epi32(v107, _mm_cvtsi32_si128(0))));
						(**v105)(v105);
						v108 = *(__m128*)(*(__int64(__fastcall**)(_DWORD*, __m128*, __m128*))(*(_QWORD*)(a1 + 440) + 240i64))(
							v116,
							&v119,
							&v117);
						(**(void(__fastcall***)(__int64))(*(_QWORD*)(a1 + 440) + 208i64))(*(_QWORD*)(a1 + 440) + 208i64);
						v109 = (*(__int64(__fastcall**)(_DWORD*, __m128*, __m128*))(*(_QWORD*)(a1 + 440) + 240i64))(
							v116,
							&v120,
							&v118);
						v110 = *(_OWORD*)v109;
						v111 = (int)*(float*)(v109 + 4);
						*(_DWORD*)(a1 + 144) |= 0x300u;
						*(_QWORD*)(a1 + 112) = 0i64;
						*(_QWORD*)(a1 + 120) = 0i64;
						*(_DWORD*)(a1 + 128) = (int)v108.m128_f32[0];
						*(_DWORD*)(a1 + 132) = (int)_mm_shuffle_ps(v108, v108, 85).m128_f32[0];
						*(_DWORD*)(a1 + 140) = v111;
						*(_DWORD*)(a1 + 136) = (int)*(float*)&v110;
					LABEL_150:
						sub_1400CB690(a1);
						sub_1400CB960((char*)a1);
					}
				}
			}
			else
			{
				sub_14018B900(v65, 0);
				*(_QWORD*)(a1 + 440) = 0i64;
			}
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 224i64))(a1);
	}
}
// 1400C904A: variable 'v112' is possibly undefined
// 140A14950: using guessed type char *off_140A14950;
// 140A14960: using guessed type char *off_140A14960;
// 140A149B0: using guessed type char *off_140A149B0;
// 140A149C0: using guessed type char *off_140A149C0[3];
// 140C3C1E0: using guessed type int dword_140C3C1E0;
// 140C3C1F0: using guessed type int dword_140C3C1F0[22];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 1400C88F0: using guessed type _DWORD var_170[4];

