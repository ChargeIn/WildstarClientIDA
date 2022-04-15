#include "../winhttp.h"

//----- (0000000140140590) ----------------------------------------------------
void __fastcall sub_140140590(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r14
	__int64 v4; // r12
	__int64 v6; // rdx
	__int64 v7; // r15
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 v10; // rsi
	__int64 v11; // rbx
	float* v12; // rax
	__m128 v13; // xmm7
	int v14; // ecx
	char v15; // bl
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // r13
	float v20; // xmm0_4
	unsigned __int64 v21; // rdx
	__int64 v22; // rax
	unsigned __int64 v23; // rbx
	int* v24; // r14
	int* v25; // rsi
	__int64 v26; // rbx
	unsigned __int64 v27; // rbx
	int* v28; // r10
	unsigned __int64 v29; // rcx
	_OWORD* v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rdx
	__int64 v33; // rbx
	int* v34; // rax
	int* v35; // rsi
	int* v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // rax
	unsigned __int64 v39; // rbx
	int* v40; // rsi
	__int64 v41; // rbx
	unsigned __int64 v42; // rbx
	int* v43; // r10
	unsigned __int64 v44; // rcx
	_OWORD* v45; // rcx
	__int64 v46; // rax
	__int64 v47; // rdx
	__int64 v48; // rbx
	int* v49; // rax
	int* v50; // rsi
	int* v51; // rdx
	__int64 v52; // rcx
	__int64 v53; // rax
	int* v54; // r15
	__int64 v55; // rbx
	unsigned __int64 v56; // rbx
	int* v57; // r10
	unsigned __int64 v58; // rcx
	_OWORD* v59; // rcx
	__int64 v60; // rax
	__int64 v61; // rdx
	__int64 v62; // r15
	__int64 v63; // rbx
	int* v64; // rax
	int* v65; // rsi
	int* v66; // rdx
	__int64 v67; // rcx
	int v68; // [rsp+38h] [rbp-D0h]
	char v69; // [rsp+58h] [rbp-B0h]
	__int64* v70; // [rsp+60h] [rbp-A8h] BYREF
	float v71; // [rsp+68h] [rbp-A0h] BYREF
	float v72; // [rsp+6Ch] [rbp-9Ch] BYREF
	unsigned __int64 v73; // [rsp+70h] [rbp-98h] BYREF
	unsigned __int64 v74; // [rsp+78h] [rbp-90h]
	float v75; // [rsp+80h] [rbp-88h] BYREF
	__int64 v76; // [rsp+88h] [rbp-80h] BYREF
	unsigned __int64 v77; // [rsp+90h] [rbp-78h] BYREF
	float v78[4]; // [rsp+98h] [rbp-70h] BYREF
	__int128 v79; // [rsp+A8h] [rbp-60h] BYREF
	float v80; // [rsp+B8h] [rbp-50h]
	float v81; // [rsp+BCh] [rbp-4Ch]
	unsigned __int64 v82; // [rsp+C8h] [rbp-40h]
	__int64 v84; // [rsp+148h] [rbp+40h] BYREF
	float v85; // [rsp+150h] [rbp+48h] BYREF

	if (a3)
	{
		v84 = a3;
		v3 = a3;
		v4 = a2;
		if (*(float*)(a1 + 672) > 0.0)
		{
			v6 = *(_QWORD*)(a1 + 744);
			if (!v6)
			{
				v84 = 0x141D1DEA8i64;
				sub_1401A3130(13, 2, &v84, a3);
				return;
			}
			v7 = 0i64;
			v70 = 0i64;
			if ((*(int(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64**))(*(_QWORD*)qword_140C65680 + 40i64))(
				qword_140C65680,
				*(_QWORD*)(v6 + 96),
				a3,
				-1i64,
				&v70) >= 0)
			{
				v8 = 0i64;
				if ((*(int(__fastcall**)(__int64*, _QWORD, __int64*))(*v70 + 200))(v70, 0i64, &v76) >= 0)
				{
					do
					{
						if (v8 == v76)
							break;
						(*(void(__fastcall**)(__int64*, __int64, float*))(*v70 + 168))(v70, v8, &v72);
						(*(void(__fastcall**)(__int64*, __int64, float*))(*v70 + 168))(v70, v76, &v85);
						if ((float)(v85 - v72) > *(float*)(a1 + 832))
							*(float*)(a1 + 832) = v85 - v72;
						v8 = v76;
					} while ((*(int(__fastcall**)(__int64*, __int64, __int64*))(*v70 + 200))(v70, v76, &v76) >= 0);
				}
				v9 = *(_QWORD*)(a1 + 744);
				v10 = 0i64;
				v71 = 0.0;
				v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 96) + 24i64))(*(_QWORD*)(v9 + 96));
				v12 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 744) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 744) + 96i64));
				v13 = (__m128) * (unsigned int*)(v11 + 12);
				v13.m128_f32[0] = v13.m128_f32[0] + *v12;
				v14 = (int)v13.m128_f32[0];
				if ((int)v13.m128_f32[0] != 0x80000000 && (float)v14 != v13.m128_f32[0])
					v13.m128_f32[0] = (float)(v14 - (_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1));
				v15 = 0;
				v16 = *v70;
				LOBYTE(v85) = 0;
				v69 = 0;
				v82 = (*(__int64(__fastcall**)(__int64*))(v16 + 72))(v70);
				v18 = 0i64;
				v74 = 0i64;
				if (v82)
				{
					while (1)
					{
						if (v15)
						{
							v74 = ++v18;
							v10 = v18;
							LOBYTE(v85) = 0;
							v69 = 0;
						}
						if (*(_WORD*)(v3 + 2 * v18) == 10)
						{
							v69 = 1;
							v19 = v18;
						}
						else
						{
							v74 = ++v18;
							if (v18 != v82)
								goto LABEL_98;
							v19 = v82;
						}
						LOBYTE(v85) = 1;
						if (v10 < v19)
						{
							while (1)
							{
								v73 = 0i64;
								if ((*(int(__fastcall**)(__int64*, __int64, unsigned __int64*))(*v70 + 176))(v70, v17, &v73) < 0
									|| (*(int(__fastcall**)(__int64*, unsigned __int64, float*))(*v70 + 168))(v70, v19, v78) < 0)
								{
									goto LABEL_102;
								}
								if (v73 >= v19 && (float)((float)(v78[0] + *(float*)(a1 + 800)) - v71) <= *(float*)(a1 + 672))
								{
									LODWORD(v79) = *(_DWORD*)(a1 + 800);
									v53 = *v70;
									v80 = (float)(*(float*)&v79 + v78[0]) - v71;
									DWORD1(v79) = *(_DWORD*)(a1 + 692);
									v81 = *((float*)&v79 + 1) + v13.m128_f32[0];
									v24 = 0i64;
									v54 = (int*)((*(__int64 (**)(void))(v53 + 64))() + 2 * v10);
									v55 = (__int64)(2 * (v19 - v10)) >> 1;
									if ((unsigned __int64)(v55 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
										v24 = sub_14018B280(2 * (v55 + 1), 0);
									v56 = 2 * v55;
									sub_1407DB590(v24, v54, v56);
									if ((int*)((char*)v24 + v56))
										*(_WORD*)((char*)v24 + v56) = 0;
									v57 = sub_14018B280(112i64, 0);
									if (v57)
									{
										v58 = *(unsigned int*)(a1 + 704);
										if (v58 >= *(_QWORD*)(qword_140C63678 + 48))
											v59 = *(_OWORD**)(qword_140C63678 + 40);
										else
											v59 = (_OWORD*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v58);
										v60 = *(_QWORD*)(a1 + 16);
										if (v60)
											v61 = *(_QWORD*)(v60 + 16);
										else
											v61 = 0i64;
										v62 = sub_14013DAD0(
											(__int64)v57,
											v61,
											v4,
											(__int64)v24,
											v59,
											*(_DWORD*)(a1 + 752),
											v68,
											*(_QWORD*)(*(_QWORD*)(a1 + 744) + 96i64),
											&v79,
											*(_WORD**)(a1 + 720));
									}
									else
									{
										v62 = 0i64;
									}
									sub_14013FE10(a1 + 776, v62);
									v63 = *(_QWORD*)(a1 + 816);
									v64 = sub_14018DB00(*(_QWORD*)(a1 + 808), v63 + 1, 8i64);
									v65 = v64;
									*(_QWORD*)&v64[2 * v63] = v62;
									v66 = *(int**)(a1 + 808);
									if (v66 != v64)
									{
										sub_1407DB590(v64, v66, 8i64 * *(_QWORD*)(a1 + 816));
										v67 = *(_QWORD*)(a1 + 808);
										if (v67)
											(*(void(__fastcall**)(__int64))(*(_QWORD*)(v67 - 16) + 8i64))(v67 - 16);
										*(_QWORD*)(a1 + 808) = v65;
									}
									*(_QWORD*)(a1 + 816) = v63 + 1;
									if (v69)
										sub_140140390(a1);
									v10 = v19;
									if ((*(int(__fastcall**)(__int64*, unsigned __int64, float*))(*v70 + 168))(v70, v19, &v71) >= 0)
									{
										if (v24)
											sub_14018B900((__int64)v24, 0);
									LABEL_97:
										v18 = v74;
										v3 = v84;
										goto LABEL_98;
									}
								LABEL_100:
									if (v24)
										sub_14018B900((__int64)v24, 0);
									goto LABEL_102;
								}
								v77 = 0i64;
								if ((*(int(__fastcall**)(__int64*, unsigned __int64, unsigned __int64*))(*v70 + 208))(
									v70,
									v73,
									&v77) < 0)
									goto LABEL_102;
								if (v77 > v10)
									goto LABEL_52;
								v20 = *(float*)(a1 + 800);
								if (v20 <= 0.0)
									break;
								sub_140140390(a1);
								if ((*(int(__fastcall**)(__int64*, unsigned __int64, float*))(*v70 + 168))(v70, v10, &v71) < 0)
									goto LABEL_102;
							LABEL_73:
								if (v10 >= v19)
									goto LABEL_97;
							}
							if (v20 == 0.0)
							{
								v21 = v73;
								v75 = 0.0;
								if (v73 < v10 + 1)
									v21 = v10 + 1;
								v73 = v21;
								if ((*(int(__fastcall**)(__int64*, unsigned __int64, float*))(*v70 + 168))(v70, v21, &v75) < 0)
									break;
								v22 = *v70;
								LODWORD(v79) = *(_DWORD*)(a1 + 800);
								v23 = v73 - v10;
								v80 = (float)(*(float*)&v79 + v75) - v71;
								DWORD1(v79) = *(_DWORD*)(a1 + 692);
								v81 = *((float*)&v79 + 1) + v13.m128_f32[0];
								v24 = 0i64;
								v25 = (int*)((*(__int64 (**)(void))(v22 + 64))() + 2 * v10);
								v26 = (__int64)(2 * v23) >> 1;
								if ((unsigned __int64)(v26 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
									v24 = sub_14018B280(2 * (v26 + 1), 0);
								v27 = 2 * v26;
								sub_1407DB590(v24, v25, v27);
								if ((int*)((char*)v24 + v27))
									*(_WORD*)((char*)v24 + v27) = 0;
								v28 = sub_14018B280(112i64, 0);
								if (v28)
								{
									v29 = *(unsigned int*)(a1 + 704);
									if (v29 >= *(_QWORD*)(qword_140C63678 + 48))
										v30 = *(_OWORD**)(qword_140C63678 + 40);
									else
										v30 = (_OWORD*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v29);
									v31 = *(_QWORD*)(a1 + 16);
									if (v31)
										v32 = *(_QWORD*)(v31 + 16);
									else
										v32 = 0i64;
									v7 = sub_14013DAD0(
										(__int64)v28,
										v32,
										v4,
										(__int64)v24,
										v30,
										*(_DWORD*)(a1 + 752),
										v68,
										*(_QWORD*)(*(_QWORD*)(a1 + 744) + 96i64),
										&v79,
										*(_WORD**)(a1 + 720));
								}
								sub_14013FE10(a1 + 776, v7);
								v33 = *(_QWORD*)(a1 + 816);
								v34 = sub_14018DB00(*(_QWORD*)(a1 + 808), v33 + 1, 8i64);
								v35 = v34;
								*(_QWORD*)&v34[2 * v33] = v7;
								v36 = *(int**)(a1 + 808);
								if (v36 != v34)
								{
									sub_1407DB590(v34, v36, 8i64 * *(_QWORD*)(a1 + 816));
									v37 = *(_QWORD*)(a1 + 808);
									if (v37)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
									*(_QWORD*)(a1 + 808) = v35;
								}
								*(_QWORD*)(a1 + 816) = v33 + 1;
								sub_140140390(a1);
								v10 = v73;
							}
							else
							{
							LABEL_52:
								v72 = 0.0;
								(*(void(__fastcall**)(__int64*, unsigned __int64, float*))(*v70 + 168))(v70, v77, &v72);
								v38 = *v70;
								LODWORD(v79) = *(_DWORD*)(a1 + 800);
								v39 = v77 - v10;
								v80 = (float)(*(float*)&v79 + v72) - v71;
								DWORD1(v79) = *(_DWORD*)(a1 + 692);
								v81 = *((float*)&v79 + 1) + v13.m128_f32[0];
								v24 = 0i64;
								v40 = (int*)((*(__int64 (**)(void))(v38 + 64))() + 2 * v10);
								v41 = (__int64)(2 * v39) >> 1;
								if ((unsigned __int64)(v41 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
									v24 = sub_14018B280(2 * (v41 + 1), 0);
								v42 = 2 * v41;
								sub_1407DB590(v24, v40, v42);
								if ((int*)((char*)v24 + v42))
									*(_WORD*)((char*)v24 + v42) = 0;
								v43 = sub_14018B280(112i64, 0);
								if (v43)
								{
									v44 = *(unsigned int*)(a1 + 704);
									if (v44 >= *(_QWORD*)(qword_140C63678 + 48))
										v45 = *(_OWORD**)(qword_140C63678 + 40);
									else
										v45 = (_OWORD*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v44);
									v46 = *(_QWORD*)(a1 + 16);
									if (v46)
										v47 = *(_QWORD*)(v46 + 16);
									else
										v47 = 0i64;
									v7 = sub_14013DAD0(
										(__int64)v43,
										v47,
										v4,
										(__int64)v24,
										v45,
										*(_DWORD*)(a1 + 752),
										v68,
										*(_QWORD*)(*(_QWORD*)(a1 + 744) + 96i64),
										&v79,
										*(_WORD**)(a1 + 720));
								}
								sub_14013FE10(a1 + 776, v7);
								v48 = *(_QWORD*)(a1 + 816);
								v49 = sub_14018DB00(*(_QWORD*)(a1 + 808), v48 + 1, 8i64);
								v50 = v49;
								*(_QWORD*)&v49[2 * v48] = v7;
								v51 = *(int**)(a1 + 808);
								if (v51 != v49)
								{
									sub_1407DB590(v49, v51, 8i64 * *(_QWORD*)(a1 + 816));
									v52 = *(_QWORD*)(a1 + 808);
									if (v52)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
									*(_QWORD*)(a1 + 808) = v50;
								}
								*(_QWORD*)(a1 + 816) = v48 + 1;
								sub_140140390(a1);
								v10 = v77;
							}
							if ((*(int(__fastcall**)(__int64*, unsigned __int64, float*))(*v70 + 168))(v70, v10, &v71) < 0)
								goto LABEL_100;
							if (v24)
								sub_14018B900((__int64)v24, 0);
							v4 = a2;
							v7 = 0i64;
							goto LABEL_73;
						}
					LABEL_98:
						if (v18 >= v82)
							break;
						v4 = a2;
						v15 = LOBYTE(v85);
						v7 = 0i64;
					}
				}
			}
		LABEL_102:
			if (v70)
				(*(void(__fastcall**)(__int64*))(*v70 + 8))(v70);
		}
	}
}
// 1401407E8: variable 'v17' is possibly undefined
// 140140A00: variable 'v68' is possibly undefined
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140140590: using guessed type float var_90[4];

