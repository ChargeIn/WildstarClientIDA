#include "../winhttp.h"

//----- (00000001405450F0) ----------------------------------------------------
__int64 __fastcall sub_1405450F0(__int64 a1, __int64 a2)
{
	int v2; // r14d
	__int64 result; // rax
	__int64 v5; // r12
	__int64 v6; // r13
	unsigned __int64 v7; // rbx
	_BOOL8 v8; // rsi
	unsigned int v9; // ebx
	__int64 v10; // rax
	int* v11; // rbx
	int v12; // ecx
	int v13; // edx
	int v14; // eax
	int v15; // esi
	__int64 v16; // r8
	int v17; // eax
	BOOL v18; // ecx
	int v19; // ebp
	unsigned int v20; // r15d
	__m128 v21; // xmm0
	__m128 v22; // xmm2
	__m128 v23; // xmm3
	float v24; // xmm7_4
	__int64 v25; // rax
	float v26; // xmm6_4
	int* v27; // rcx
	int* v28; // rdx
	__int64 v29; // rax
	__int128 v30; // xmm0
	__int128 v31; // xmm1
	__int128 v32; // xmm0
	__int128 v33; // xmm1
	__int128 v34; // xmm0
	__int128 v35; // xmm1
	__int128 v36; // xmm0
	__int128 v37; // xmm1
	__int128 v38; // xmm1
	__int64 v39; // rax
	__int128 v40; // xmm0
	__int128 v41; // xmm1
	__int128 v42; // xmm0
	__int128 v43; // xmm1
	__int128 v44; // xmm0
	int v45; // ebx
	__int64 v46; // rcx
	__int64 v47; // r8
	__int64 v48; // rdx
	__int64 v49; // rbx
	bool v50; // al
	__int64 v51; // rcx
	int* v52; // rcx
	__int64 v53; // rax
	__int64 v54; // rax
	__int64 i; // rax
	__int64 v56; // rax
	bool v57; // cf
	__int64 v58; // [rsp+80h] [rbp-198h]
	__int64 v59; // [rsp+88h] [rbp-190h]
	__m128 v60; // [rsp+90h] [rbp-188h] BYREF
	__m128 v61; // [rsp+A0h] [rbp-178h] BYREF
	int v62[19]; // [rsp+B0h] [rbp-168h] BYREF
	unsigned int v63; // [rsp+FCh] [rbp-11Ch]
	int v64; // [rsp+100h] [rbp-118h]
	float v65; // [rsp+148h] [rbp-D0h]
	_BOOL8 v67; // [rsp+230h] [rbp+18h]
	unsigned __int64 v68; // [rsp+238h] [rbp+20h]

	v2 = 0;
	result = a2;
	v59 = 0i64;
	if (*(_BYTE*)(a2 + 64))
	{
		v5 = 0i64;
		do
		{
			v6 = *(_QWORD*)(result + 72);
			v7 = 56i64;
			v58 = 56i64;
			v8 = *(_DWORD*)(v5 + v6 + 16) == *(_DWORD*)(a1 + 344);
			v67 = v8;
			do
			{
				v9 = *(_DWORD*)(v7 + *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64));
				if (qword_140C63840)
				{
					v10 = qword_140C63840(off_140A6D188, v9, qword_140C63858);
				}
				else
				{
					if (dword_140C64F14 || (int)sub_140237420() < 0)
						goto LABEL_79;
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A28 + 24i64))(qword_140C64A28, v9);
				}
				v11 = (int*)v10;
				if (v10)
				{
					v12 = *(_DWORD*)(v10 + 216);
					if (v12 == -1 || _bittest(&v12, *(_DWORD*)(a1 + 432)))
					{
						v13 = 0;
						if (v8)
						{
							if ((*(_BYTE*)(v10 + 16) & 2) != 0)
								v13 = 1;
						}
						else if ((*(_BYTE*)(v10 + 16) & 4) != 0)
						{
							v13 = 1;
						}
						v14 = *(_DWORD*)(v10 + 4);
						v15 = 0;
						if (*(_DWORD*)(v5 + v6 + 32))
							v13 = 1;
						LOBYTE(v15) = v14 == 1;
						LOBYTE(v2) = v14 == 3;
						if (v15 || v14 == 2)
							v13 = 0;
						if (((v11[20] & 0x800) == 0
							|| (v16 = *(_QWORD*)(qword_140C65898 + 120)) != 0
							&& ((v17 = *(_DWORD*)(v16 + 8), v18 = *(_DWORD*)(a1 + 340) == v17)
								|| (LOBYTE(v18) = *(_DWORD*)(v5 + v6 + 16) == v17, v18)))
							&& v13)
						{
							if (v11[3])
							{
								v19 = *(_DWORD*)(v5 + v6 + 16);
								v20 = *(_DWORD*)(a1 + 340);
								v21 = (__m128) * (unsigned int*)(v5 + v6 + 8);
								v22 = (__m128) * (unsigned int*)(v5 + v6 + 4);
								v61 = _mm_unpacklo_ps(
									_mm_unpacklo_ps(
										(__m128) * (unsigned int*)(v5 + v6 + 20),
										(__m128) * (unsigned int*)(v5 + v6 + 28)),
									_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + v6 + 24), (__m128)0i64));
								v23 = (__m128) * (unsigned int*)(v5 + v6);
							}
							else
							{
								v19 = *(_DWORD*)(a1 + 340);
								v20 = *(_DWORD*)(v5 + v6 + 16);
								v21 = (__m128) * (unsigned int*)(v5 + v6 + 28);
								v22 = (__m128) * (unsigned int*)(v5 + v6 + 24);
								v61 = _mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + v6), (__m128) * (unsigned int*)(v5 + v6 + 8)),
									_mm_unpacklo_ps((__m128) * (unsigned int*)(v5 + v6 + 4), (__m128)0i64));
								v23 = (__m128) * (unsigned int*)(v5 + v6 + 20);
							}
							v24 = 1.0;
							v60 = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, v21), _mm_unpacklo_ps(v22, (__m128)0i64));
							v25 = sub_1403D90D0(qword_140C65898, v19);
							if (v25)
							{
								v26 = *(float*)(v25 + 3724);
								v24 = sub_14047A940((_QWORD*)v25) * v26;
							}
							v27 = v62;
							v28 = v11;
							if ((((unsigned __int8)v62 | (unsigned __int8)v11) & 0xF) != 0)
							{
								sub_1407DB590(v62, v11, 0xF8ui64);
							}
							else
							{
								v29 = 1i64;
								do
								{
									v30 = *(_OWORD*)v28;
									v31 = *((_OWORD*)v28 + 1);
									v27 += 32;
									v28 += 32;
									*((_OWORD*)v27 - 8) = v30;
									v32 = *((_OWORD*)v28 - 6);
									*((_OWORD*)v27 - 7) = v31;
									v33 = *((_OWORD*)v28 - 5);
									*((_OWORD*)v27 - 6) = v32;
									v34 = *((_OWORD*)v28 - 4);
									*((_OWORD*)v27 - 5) = v33;
									v35 = *((_OWORD*)v28 - 3);
									*((_OWORD*)v27 - 4) = v34;
									v36 = *((_OWORD*)v28 - 2);
									*((_OWORD*)v27 - 3) = v35;
									v37 = *((_OWORD*)v28 - 1);
									*((_OWORD*)v27 - 2) = v36;
									*((_OWORD*)v27 - 1) = v37;
									--v29;
								} while (v29);
								v38 = *((_OWORD*)v28 + 1);
								v39 = *((_QWORD*)v28 + 14);
								*(_OWORD*)v27 = *(_OWORD*)v28;
								v40 = *((_OWORD*)v28 + 2);
								*((_OWORD*)v27 + 1) = v38;
								v41 = *((_OWORD*)v28 + 3);
								*((_OWORD*)v27 + 2) = v40;
								v42 = *((_OWORD*)v28 + 4);
								*((_OWORD*)v27 + 3) = v41;
								v43 = *((_OWORD*)v28 + 5);
								*((_OWORD*)v27 + 4) = v42;
								v44 = *((_OWORD*)v28 + 6);
								*((_OWORD*)v27 + 5) = v43;
								*((_OWORD*)v27 + 6) = v44;
								*((_QWORD*)v27 + 14) = v39;
							}
							if (v15 || v2)
								v64 |= 8u;
							v45 = *(_DWORD*)(v5 + v6 + 12) + v11[18];
							v65 = (float)*(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 164i64);
							v2 = 0;
							if (v63)
								v46 = (unsigned int)sub_140542E70(a1, 0, v63, 0);
							else
								v46 = 0i64;
							sub_1406008C0(
								v46,
								(__int64)v62,
								v45,
								*(_DWORD*)(a1 + 80),
								v46,
								v19,
								(unsigned int*)&v61,
								(__int64)&ymmword_140C78390,
								v20,
								(__int128*)&v60,
								v24,
								0i64,
								0i64,
								(_QWORD*)(a1 + 456),
								0i64,
								0);
							v47 = *(_QWORD*)(a1 + 504);
							v48 = *(_QWORD*)(v47 + 8);
							v68 = __PAIR64__(v45, v20);
							v49 = v47;
							v50 = 1;
							while (v48)
							{
								v49 = v48;
								v50 = v20 < *(_DWORD*)(v48 + 32);
								if (v20 >= *(_DWORD*)(v48 + 32))
									v48 = *(_QWORD*)(v48 + 24);
								else
									v48 = *(_QWORD*)(v48 + 16);
							}
							v51 = v49;
							if (v50)
							{
								if (v49 == *(_QWORD*)(v47 + 16))
								{
									if (v49 != v47 && v20 >= *(_DWORD*)(v49 + 32))
										goto LABEL_52;
								LABEL_56:
									v52 = sub_14018B280(40i64, 0);
									if (v52 != (int*)-32i64)
										*((_QWORD*)v52 + 4) = v68;
									*(_QWORD*)(v49 + 16) = v52;
									v54 = *(_QWORD*)(a1 + 504);
									if (v49 == v54)
									{
										*(_QWORD*)(v54 + 8) = v52;
										*(_QWORD*)(*(_QWORD*)(a1 + 504) + 24i64) = v52;
									}
									else if (v49 == *(_QWORD*)(v54 + 16))
									{
										*(_QWORD*)(v54 + 16) = v52;
									}
									goto LABEL_62;
								}
								if (*(_BYTE*)v49 || *(_QWORD*)(*(_QWORD*)(v49 + 8) + 8i64) != v49)
								{
									v51 = *(_QWORD*)(v49 + 16);
									if (v51)
									{
										for (i = *(_QWORD*)(v51 + 24); i; i = *(_QWORD*)(i + 24))
											v51 = i;
									}
									else
									{
										v51 = *(_QWORD*)(v49 + 8);
										if (v49 == *(_QWORD*)(v51 + 16))
										{
											do
											{
												v56 = v51;
												v51 = *(_QWORD*)(v51 + 8);
											} while (v56 == *(_QWORD*)(v51 + 16));
										}
									}
								}
								else
								{
									v51 = *(_QWORD*)(v49 + 24);
								}
							}
							if (*(_DWORD*)(v51 + 32) < v20)
							{
								if (v49 == v47 || v20 < *(_DWORD*)(v49 + 32))
									goto LABEL_56;
							LABEL_52:
								v52 = sub_14018B280(40i64, 0);
								if (v52 != (int*)-32i64)
									*((_QWORD*)v52 + 4) = v68;
								*(_QWORD*)(v49 + 24) = v52;
								v53 = *(_QWORD*)(a1 + 504);
								if (v49 == *(_QWORD*)(v53 + 24))
									*(_QWORD*)(v53 + 24) = v52;
							LABEL_62:
								*((_QWORD*)v52 + 1) = v49;
								*((_QWORD*)v52 + 2) = 0i64;
								*((_QWORD*)v52 + 3) = 0i64;
								sub_1400081C0((__int64)v52, (_QWORD*)(*(_QWORD*)(a1 + 504) + 8i64));
								++* (_QWORD*)(a1 + 512);
							}
						}
						else
						{
							v2 = 0;
						}
						v8 = v67;
					}
				}
			LABEL_79:
				v7 = v58 + 4;
				v58 = v7;
			} while (v7 < 0x50);
			v5 += 36i64;
			v57 = v59 + 1 < (unsigned __int64)*(unsigned __int8*)(a2 + 64);
			result = a2;
			++v59;
		} while (v57);
	}
	return result;
}
// 140545271: conditional instruction was optimized away because r8.8!=0
// 14054556A: conditional instruction was optimized away because rdx.8==0
// 14054568F: conditional instruction was optimized away because rdx.8==0
// 140A6D188: using guessed type wchar_t *off_140A6D188[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A28: using guessed type __int64 qword_140C64A28;
// 140C64F14: using guessed type int dword_140C64F14;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 1405450F0: using guessed type int var_168[19];

