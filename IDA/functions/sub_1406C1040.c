//----- (00000001406C1040) ----------------------------------------------------
__int64 __fastcall sub_1406C1040(_QWORD* a1)
{
	__int64 v2; // r13
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // r15
	_DWORD* v6; // rcx
	unsigned __int64 v7; // rdx
	__int64 v8; // rdx
	int* v9; // rax
	_QWORD* v10; // r12
	__int64 v11; // rax
	int* v12; // rdi
	__int64 v13; // r14
	_WORD* v14; // rax
	int* v15; // rdx
	__int64 v16; // rax
	_DWORD* v17; // rax
	int v18; // ecx
	BOOL v19; // r15d
	__int64 v20; // rax
	int v21; // xmm0_4
	__int64 v22; // r12
	__int64 v23; // rax
	unsigned __int64 i; // rsi
	__int64 v25; // rax
	unsigned int* v26; // rbx
	__int64 v27; // rax
	__m128 v28; // xmm0
	int* v29; // rdi
	__int64 v30; // r14
	int* v31; // rax
	__m128* v32; // r14
	int* v33; // rax
	__int64 v34; // rbx
	int* v35; // r15
	int* v36; // rax
	int* v37; // rdi
	__int64 v38; // rdx
	__int64 v39; // rcx
	int v40; // eax
	__int64 v41; // rcx
	__int64(__fastcall * *v43)(); // [rsp+50h] [rbp-B0h] BYREF
	int v44; // [rsp+58h] [rbp-A8h]
	_QWORD* v45; // [rsp+60h] [rbp-A0h]
	int v46; // [rsp+68h] [rbp-98h] BYREF
	int* v47; // [rsp+70h] [rbp-90h] BYREF
	__int64 v48; // [rsp+78h] [rbp-88h]
	__int64 v49; // [rsp+80h] [rbp-80h]
	__int64 v50; // [rsp+88h] [rbp-78h] BYREF
	unsigned __int64 v51; // [rsp+90h] [rbp-70h]
	__m128 v52; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v53; // [rsp+B0h] [rbp-50h] BYREF
	char v54[8]; // [rsp+B8h] [rbp-48h] BYREF
	_WORD* v55; // [rsp+C0h] [rbp-40h]
	_WORD* v56; // [rsp+C8h] [rbp-38h]
	__int64 v57; // [rsp+170h] [rbp+70h]
	_QWORD v58[30]; // [rsp+190h] [rbp+90h] BYREF
	BOOL v59; // [rsp+2C8h] [rbp+1C8h]
	int v60; // [rsp+2D0h] [rbp+1D0h]
	__int64* v61; // [rsp+2D8h] [rbp+1D8h]

	if (qword_140C65970)
	{
		v2 = sub_1406C01C0(a1);
		if (v2)
		{
			v3 = sub_140056AB0(a1, 2u);
			if (v3)
			{
				v5 = *(_QWORD*)(v3 + 8);
				if (v5)
				{
					if (*(_QWORD*)(v5 + 8))
					{
						v45 = a1;
						v44 = -2;
						v43 = off_140B56A08;
						sub_1400579E0((__int64)a1, v4, -2);
						v6 = dword_140A12138;
						v7 = a1[2];
						if (a1[3] + 16i64 < v7)
							v6 = (_DWORD*)(v45[3] + 16i64);
						*(_QWORD*)v7 = *(_QWORD*)v6;
						*(_DWORD*)(v7 + 8) = v6[2];
						a1[2] += 16i64;
						v44 = sub_1400578C0((__int64)v45);
						v61 = (__int64*)sub_1403D7BC0(qword_140C65970, ***(_DWORD***)(v5 + 8));
						if (v61)
						{
							sub_1404DDE90(&v53);
							v9 = sub_14018B280(96i64, 0);
							if (v9)
								v10 = (_QWORD*)sub_1404DB7E0((__int64)v9, *(_QWORD*)(qword_140C65898 + 120));
							else
								v10 = 0i64;
							v11 = 0i64;
							v12 = 0i64;
							v47 = 0i64;
							v48 = 0i64;
							v49 = 0i64;
							do
								++v11;
							while (word_140B0A7D8[v11]);
							v13 = (2 * v11) >> 1;
							if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							{
								v12 = sub_14018B280(2 * (v13 + 1), 0);
								v47 = v12;
								v48 = (__int64)v12;
								v49 = (__int64)v12 + 2 * v13 + 2;
							}
							sub_1407DB590(v12, (int*)word_140B0A7D8, 2 * v13);
							v14 = (_WORD*)v12 + v13;
							v48 = (__int64)v14;
							if (v14)
								*v14 = 0;
							sub_1400B7480((__int64)&v53, v10);
							(*(void(__fastcall**)(_QWORD*, int*))(*v10 + 72i64))(v10, &v46);
							if (v47)
								sub_14018B900((__int64)v47, 0);
							v15 = (int*)sub_14034BDD0(**(_QWORD**)(v5 + 8), *(_DWORD*)(**(_QWORD**)(v5 + 8) + 28i64));
							if (v15)
							{
								v16 = 0i64;
								if (*(_WORD*)v15)
								{
									do
										++v16;
									while (*((_WORD*)v15 + v16));
								}
								sub_14001C480((__int64)v54, v15, (int*)((char*)v15 + 2 * v16));
							}
							else if (v55 != v56)
							{
								*v55 = 0;
								v56 = v55;
							}
							sub_140770490((__int64)v58);
							sub_140770630((__int64)v58, a1, 3);
							v60 = sub_140121AC0(a1, 4u, (__int64)off_140B38AC8, 7ui64);
							v17 = dword_140A12138;
							if ((unsigned __int64)(a1[3] + 64i64) < a1[2])
								v17 = (_DWORD*)(a1[3] + 64i64);
							v18 = v17[2];
							v19 = v18 && (v18 != 1 || *v17);
							v59 = v19;
							if ((dword_140DC4BC0 & 1) == 0)
							{
								dword_140DC4BC0 |= 1u;
								v20 = sub_140200220(0x40Fu);
								if (v20)
									v21 = *(_DWORD*)(v20 + 24);
								else
									v21 = 1084227584;
								dword_140DC4BC4 = v21;
							}
							v51 = 0i64;
							v22 = 0i64;
							v23 = *v61;
							v50 = 0i64;
							if (!(*(unsigned int(__fastcall**)(__int64*))(v23 + 56))(v61))
							{
								sub_14056C320(v61, (__int64)&v50, 0);
								v22 = v50;
							}
							for (i = 0i64; i < v51; ++i)
							{
								v25 = sub_14024B980(*(_DWORD*)(v22 + 4 * i));
								v26 = (unsigned int*)v25;
								if (v25
									&& *(float*)(v25 + 4) <= *(float*)&dword_140DC4BC4
									&& (unsigned int)sub_14043EDC0(
										qword_140C65898,
										*(_DWORD*)(qword_140C65898 + 29008),
										*(_DWORD*)(v25 + 44)))
								{
									v27 = sub_1400B7660(&v53);
									v28 = (__m128)v26[5];
									v29 = *(int**)(v27 + 8);
									v30 = *(_QWORD*)(*(_QWORD*)(v2 + 696) + 96i64);
									v52 = _mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128)v26[3], v28),
										_mm_unpacklo_ps((__m128)v26[4], (__m128)0i64));
									v31 = sub_14018B280(384i64, 0);
									if (v31)
										v32 = (__m128*)sub_140770B60(
											(__int64)v31,
											2,
											&v52,
											word_1409F719C,
											v30,
											v29,
											(__int64)v58,
											v60,
											(__int64)&v43);
									else
										v32 = 0i64;
									v32[23].m128_i32[2] = v19;
									v46 = 0;
									v33 = sub_14018DB00(0i64, 1ui64, 8i64);
									v48 = 1i64;
									*(_QWORD*)v33 = v32;
									v34 = *(_QWORD*)(v2 + 1080);
									v35 = v33;
									v47 = v33;
									v36 = sub_14018B280(40i64, 0);
									v37 = v36;
									if (v36 != (int*)-16i64)
									{
										v36[4] = 0;
										sub_1403FE910((__int64*)v36 + 3, (__int64)&v47);
									}
									*(_QWORD*)v37 = v34;
									*((_QWORD*)v37 + 1) = *(_QWORD*)(v34 + 8);
									**(_QWORD**)(v34 + 8) = v37;
									*(_QWORD*)(v34 + 8) = v37;
									(*(void(__fastcall**)(int*))(*((_QWORD*)v35 - 2) + 8i64))(v35 - 4);
									v38 = qword_140C65898;
									v39 = *(_QWORD*)(qword_140C65898 + 25744);
									if (v39)
									{
										v40 = *(_DWORD*)(v2 + 2300);
										if (v40 == 2)
										{
											v41 = *(_QWORD*)(qword_140C65898 + 29096);
											if (!v41)
												v41 = *(_QWORD*)(qword_140C65898 + 29088);
											(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
											v38 = qword_140C65898;
										}
										else if (v40 == 1)
										{
											v28.m128_u64[0] = *(unsigned int*)(v39 + 4800);
										}
										else
										{
											v28.m128_u64[0] = 0i64;
										}
										sub_140770FC0(
											v32,
											(__m128*)(*(_QWORD*)(v38 + 25744) + 4576i64),
											*(double*)v28.m128_u64,
											*(float*)(v2 + 1872),
											v2 + 2280);
									}
								}
								v19 = v59;
							}
							if (v22)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
							sub_140532D90(v58);
							if (v57)
								sub_14018B900(v57, 0);
							sub_1400B7390(&v53);
						}
						v43 = off_140B56A08;
						if (v45)
							sub_1400579E0((__int64)v45, v8, v44);
					}
				}
			}
		}
	}
	return 0i64;
}
// 1406C10DB: variable 'v4' is possibly undefined
// 1406C1616: variable 'v8' is possibly undefined
// 1409F719C: using guessed type _WORD word_1409F719C[8];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B38AC8: using guessed type wchar_t *off_140B38AC8[7];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC4BC0: using guessed type int dword_140DC4BC0;
// 140DC4BC4: using guessed type int dword_140DC4BC4;
// 1406C1040: using guessed type char var_1F8[8];
// 1406C1040: using guessed type _QWORD var_120[30];

