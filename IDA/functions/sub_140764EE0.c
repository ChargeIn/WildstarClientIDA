#include "../winhttp.h"

//----- (0000000140764EE0) ----------------------------------------------------
_QWORD* __fastcall sub_140764EE0(unsigned __int64* a1, __int64* a2)
{
	unsigned __int64* v2; // r14
	__int64 v3; // rax
	int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // r13d
	__int64 v8; // rcx
	__int64 v9; // r12
	__int64 v10; // rcx
	_QWORD* result; // rax
	_QWORD* v12; // rsi
	_QWORD* v13; // rbx
	__int64 v14; // rax
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rdi
	__int64 v18; // rax
	__int64 v19; // r15
	__int64 v20; // r10
	unsigned __int64 v21; // r8
	unsigned __int64 v22; // rdx
	__int64 v23; // rbp
	unsigned __int64 v24; // rbx
	__int64 v25; // rcx
	__int64 v26; // rax
	float v27; // xmm6_4
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // r14
	unsigned int v33; // eax
	unsigned int v34; // ebp
	__int64 v35; // rax
	unsigned int v36; // ebp
	unsigned int* v37; // rax
	__m128 v38; // xmm3
	__m128 v39; // xmm1
	__m128 v40; // xmm2
	float v41; // xmm2_4
	unsigned int v42; // eax
	__int64 v43; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v46; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v49; // rax
	_QWORD* v50; // [rsp+20h] [rbp-B8h]
	__m128 v51; // [rsp+30h] [rbp-A8h] BYREF
	__int64 v52; // [rsp+40h] [rbp-98h]
	__int64 v53; // [rsp+48h] [rbp-90h]
	__int64 v54; // [rsp+50h] [rbp-88h]
	__int64 v55; // [rsp+58h] [rbp-80h]
	__int64 v56; // [rsp+60h] [rbp-78h]
	__int64 v57; // [rsp+68h] [rbp-70h]
	_QWORD* v60; // [rsp+F0h] [rbp+18h]
	__int64 v61; // [rsp+F8h] [rbp+20h]

	v2 = a1;
	if ((dword_140DC4D88 & 1) == 0)
	{
		dword_140DC4D88 |= 1u;
		v3 = sub_140200220(0x4CCu);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 2;
		dword_140DC4D8C = v4;
	}
	v5 = qword_140C65898;
	v6 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v6)
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
		v5 = qword_140C65898;
	}
	else
	{
		v7 = 0;
	}
	v8 = *(_QWORD*)(v5 + 120);
	if (v8)
		v9 = *(_QWORD*)(v8 + 280);
	else
		v9 = 0i64;
	v10 = qword_140C65930;
	v61 = qword_140C65930;
	result = *(_QWORD**)(qword_140C65930 + 16);
	v12 = (_QWORD*)result[2];
	v60 = v12;
	if (v12 != result)
	{
		do
		{
			v13 = (_QWORD*)v12[5];
			v50 = v13;
			v14 = *v13;
			if (!*(_DWORD*)(*v13 + 20i64) || !*(_DWORD*)(v14 + 24))
			{
				v15 = *(unsigned int*)(v14 + 12);
				if (v13[7] + v13[11] < v15)
				{
					v16 = v13[2];
					v17 = *(_QWORD*)(v16 + 16);
					if (v17 != v16)
					{
						while (1)
						{
							v18 = sub_1405A8A40(v15, *(_DWORD*)(v17 + 32));
							v19 = v18;
							if (v18)
							{
								v20 = *(_QWORD*)(v18 + 8);
								v21 = v2[1];
								v22 = 0i64;
								if (v21)
								{
									v15 = *v2;
									while (*(_DWORD*)v15 != *(_DWORD*)(v20 + 440))
									{
										++v22;
										v15 += 4i64;
										if (v22 >= v21)
											goto LABEL_60;
									}
									v15 = *(_QWORD*)(qword_140C65898 + 120);
									if (v15)
									{
										v15 = (unsigned int)(dword_140DC4D8C + *(_DWORD*)(v15 + 56));
										if ((unsigned int)v15 >= *(_DWORD*)(v20 + 24) && !(unsigned int)sub_140552550(v18, -8708))
											break;
									}
								}
							}
						LABEL_60:
							v46 = *(_QWORD*)(v17 + 24);
							if (v46)
							{
								v17 = *(_QWORD*)(v17 + 24);
								for (i = *(_QWORD*)(v46 + 16); i; i = *(_QWORD*)(i + 16))
									v17 = i;
							}
							else
							{
								for (j = *(_QWORD*)(v17 + 8); v17 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
									v17 = j;
								if (*(_QWORD*)(v17 + 24) != j)
									v17 = j;
							}
							if (v17 == v13[2])
							{
								v12 = v60;
								goto LABEL_70;
							}
						}
						v53 = 0i64;
						v51 = 0ui64;
						v52 = 0i64;
						v54 = 0i64;
						v55 = 0i64;
						v56 = 0i64;
						v57 = 0i64;
						LODWORD(v53) = *(_DWORD*)(v17 + 32);
						if (v9)
						{
							v23 = 0i64;
							v24 = 404i64;
							while (1)
							{
								v25 = *(_QWORD*)(v19 + 8);
								if (*(_DWORD*)(v25 + v24))
								{
									if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 48i64))(
										v9,
										*(unsigned int*)(v24 + v25)))
									{
										break;
									}
								}
								v24 += 4i64;
								++v23;
								if (v24 >= 0x19C)
									goto LABEL_33;
							}
							HIDWORD(v56) = *(_DWORD*)(*(_QWORD*)(v19 + 8) + 4 * v23 + 404);
						}
					LABEL_33:
						v26 = *(_QWORD*)(v19 + 8);
						v27 = 3.4028235e38;
						HIDWORD(v52) = 2139095039;
						v28 = *(unsigned int*)(v26 + 444);
						v29 = *(_QWORD*)(v19 + 96);
						v30 = *(_QWORD*)(v29 + 16);
						HIDWORD(v55) = v28;
						if (v30 == v29)
							goto LABEL_59;
						while (2)
						{
							v31 = sub_1407242B0(v28, *(_DWORD*)(v30 + 32));
							v32 = v31;
							if (v31)
							{
								v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v31 + 128i64))(v31, v7);
								v34 = v33;
								if (qword_140C63840)
								{
									v35 = qword_140C63840(off_140A6C820, v33, qword_140C63858);
									goto LABEL_40;
								}
								if (!dword_140C649E4 && (int)sub_14022BD60() >= 0)
								{
									v35 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65188 + 24i64))(
										qword_140C65188,
										v34);
								LABEL_40:
									if (v35)
									{
										v36 = *(_DWORD*)(v35 + 4);
										if (qword_140C63840)
										{
											v37 = (unsigned int*)qword_140C63840(off_140A6E228, v36, qword_140C63858);
											goto LABEL_46;
										}
										if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
										{
											v37 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388
												+ 24i64))(
													qword_140C65388,
													v36);
										LABEL_46:
											if (v37)
											{
												v28 = *(_QWORD*)(qword_140C65898 + 25744);
												v38 = _mm_unpacklo_ps(
													_mm_unpacklo_ps((__m128)v37[3], (__m128)v37[5]),
													_mm_unpacklo_ps((__m128)v37[4], (__m128)0i64));
												v39 = _mm_sub_ps(*(__m128*)(v28 + 4576), v38);
												v40 = _mm_mul_ps(v39, v39);
												v41 = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
													+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
												if (v41 < v27)
												{
													v42 = v37[10];
													v51 = v38;
													v27 = v41;
													LODWORD(v52) = v42;
													v54 = v32;
												}
											}
										}
									}
								}
							}
							v43 = *(_QWORD*)(v30 + 24);
							if (v43)
							{
								v30 = *(_QWORD*)(v30 + 24);
								for (k = *(_QWORD*)(v43 + 16); k; k = *(_QWORD*)(k + 16))
									v30 = k;
							}
							else
							{
								for (m = *(_QWORD*)(v30 + 8); v30 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
									v30 = m;
								if (*(_QWORD*)(v30 + 24) != m)
									v30 = m;
							}
							if (v30 == *(_QWORD*)(v19 + 96))
							{
								v2 = a1;
								*((float*)&v52 + 1) = v27;
							LABEL_59:
								sub_140765F30(a2, (__int64)&v51);
								v13 = v50;
								goto LABEL_60;
							}
							continue;
						}
					}
				}
			LABEL_70:
				v10 = v61;
			}
			v49 = (_QWORD*)v12[3];
			if (v49)
			{
				v12 = (_QWORD*)v12[3];
				v60 = v49;
				for (result = (_QWORD*)v49[2]; result; result = (_QWORD*)result[2])
				{
					v12 = result;
					v60 = result;
				}
			}
			else
			{
				for (result = (_QWORD*)v12[1]; v12 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v12 = result;
				if ((_QWORD*)v12[3] != result)
					v12 = result;
				v60 = v12;
			}
		} while (v12 != *(_QWORD**)(v10 + 16));
	}
	return result;
}
// 140765033: variable 'v15' is possibly undefined
// 140765157: variable 'v28' is possibly undefined
// 140A6C820: using guessed type wchar_t *off_140A6C820[2];
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C649E4: using guessed type int dword_140C649E4;
// 140C65188: using guessed type __int64 qword_140C65188;
// 140C65388: using guessed type __int64 qword_140C65388;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65930: using guessed type __int64 qword_140C65930;
// 140DC4D88: using guessed type int dword_140DC4D88;
// 140DC4D8C: using guessed type int dword_140DC4D8C;

