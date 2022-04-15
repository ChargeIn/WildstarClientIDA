#include "../winhttp.h"

//----- (0000000140575DD0) ----------------------------------------------------
void sub_140575DD0()
{
	const void*** v0; // r15
	__int64 v1; // rax
	const void** i; // rdi
	_QWORD* v3; // rcx
	_QWORD* v4; // rdx
	const void** v5; // rcx
	int v6; // eax
	__int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rax
	const void** v10; // rbx
	int** v11; // r14
	__int32 v12; // r12d
	__int64(__fastcall * *v13)(const void**); // rax
	__int32 v14; // eax
	__int64(__fastcall * *v15)(const void**); // rdx
	__int32 v16; // r13d
	__int64 v17; // rax
	__int64(__fastcall * *v18)(const void**); // rdx
	__int64 v19; // rax
	__int64(__fastcall * *v20)(const void**); // rdx
	_DWORD* v21; // rax
	__int32 v22; // xmm6_4
	__int32 v23; // xmm7_4
	int v24; // xmm8_4
	int* v25; // rsi
	__int64 v26; // rbx
	int v27; // ecx
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // rax
	int** v31; // rdx
	__int64 v32; // rax
	const void** v33; // rbx
	unsigned int v34; // edi
	const void** v35; // rsi
	__int64 v36; // rax
	__int64 v37; // r15
	__int64 v38; // rax
	int v39; // edx
	__int64 v40; // r14
	__int64 v41; // r13
	__int64 v42; // r8
	__int64 v43; // r9
	unsigned int v44; // edi
	const void** v45; // r12
	__int64 v46; // rax
	__int64 v47; // rcx
	unsigned int* v48; // rax
	__int64* v49; // rdi
	unsigned int v50; // r8d
	int v51; // eax
	__int64 v52; // r14
	__int64 v53; // rdi
	void(__fastcall * *v54)(const void**, __int64); // rax
	const void** v55; // rcx
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // rax
	__int64 j; // rax
	__int64 k; // rax
	__m256i v61; // [rsp+68h] [rbp-A0h] BYREF
	__int128 v62; // [rsp+88h] [rbp-80h]
	__int128 v63; // [rsp+98h] [rbp-70h]
	char v64[8]; // [rsp+A8h] [rbp-60h] BYREF
	int* v65; // [rsp+B0h] [rbp-58h]
	__int64 v66; // [rsp+B8h] [rbp-50h]
	__m128 v67; // [rsp+C8h] [rbp-40h] BYREF
	char v68[8]; // [rsp+D8h] [rbp-30h] BYREF
	__int32 v69; // [rsp+168h] [rbp+60h]
	__int64 v70; // [rsp+168h] [rbp+60h]
	__int32 v71; // [rsp+170h] [rbp+68h]
	__int32 v72; // [rsp+178h] [rbp+70h]
	const void** v73; // [rsp+180h] [rbp+78h] BYREF

	v0 = (const void***)qword_140C65B78;
	v1 = *(_QWORD*)qword_140C65B78;
	*(_QWORD*)qword_140C65B78 = 0i64;
	v73 = (const void**)v1;
	if (v1)
		*(_QWORD*)(v1 + 24) = &v73;
	v66 = 0i64;
	v65 = sub_14018B280(40i64, 0);
	*(_BYTE*)v65 = 0;
	*((_QWORD*)v65 + 1) = 0i64;
	*((_QWORD*)v65 + 2) = v65;
	*((_QWORD*)v65 + 3) = v65;
	for (i = v73; v73; i = v73)
	{
		v3 = i[3];
		if (v3)
			*v3 = i[4];
		v4 = i[4];
		v5 = i + 4;
		if (v4)
			v4[3] = i[3];
		*v5 = 0i64;
		i[3] = v0;
		*v5 = *v0;
		*v0 = i;
		if (*v5)
			*((_QWORD*)*v5 + 3) = v5;
		v6 = (*((__int64(__fastcall**)(const void**)) * i + 7))(i);
		v7 = sub_1403D90D0(qword_140C65898, v6);
		if (*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 40))
		{
			if (*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 36))
			{
				v8 = *(_QWORD*)qword_140C659A0;
				v9 = (*((__int64(__fastcall**)(const void**)) * i + 2))(i);
				if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD))(v8 + 24))(
					qword_140C659A0,
					v7,
					*(unsigned int*)(v9 + 36),
					0i64,
					0i64,
					0))
				{
					if ((*((unsigned int(__fastcall**)(const void**)) * i + 9))(i))
					{
						v10 = v0[1];
						v11 = (int**)(v0 + 1);
						if (v10)
						{
							while (*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 32) != *((_DWORD*)v10 + 10)
								|| *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 40) != *((_DWORD*)v10 + 12)
								|| (*((unsigned int(__fastcall**)(const void**)) * i + 7))(i) != *((_DWORD*)v10 + 11)
								|| *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 136) != *((_DWORD*)v10 + 19))
							{
								v10 = (const void**)v10[4];
								if (!v10)
									goto LABEL_20;
							}
						}
						else
						{
						LABEL_20:
							v67.m128_u64[0] = 0i64;
							memset(&v61, 0, sizeof(v61));
							LODWORD(v62) = 0;
							v12 = *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 32);
							v13 = (__int64(__fastcall**)(const void**)) * i;
							v61.m256i_i32[0] = v12;
							v14 = v13[7](i);
							v15 = (__int64(__fastcall**)(const void**)) * i;
							v16 = v14;
							v61.m256i_i32[1] = v14;
							v17 = v15[2](i);
							v18 = (__int64(__fastcall**)(const void**)) * i;
							v72 = *(_DWORD*)(v17 + 8);
							v61.m256i_i32[5] = v72;
							v19 = v18[2](i);
							v20 = (__int64(__fastcall**)(const void**)) * i;
							v69 = *(_DWORD*)(v19 + 40);
							v61.m256i_i32[2] = v69;
							v71 = *(_DWORD*)(v20[2](i) + 44);
							v61.m256i_i32[3] = v71;
							if ((*((__int64(__fastcall**)(const void**)) * i + 8))(i))
							{
								v21 = (_DWORD*)(*((__int64(__fastcall**)(const void**)) * i + 8))(i);
								v22 = v21[12];
								v23 = v21[13];
								v24 = v21[14];
								v61.m256i_i64[3] = __PAIR64__(v23, v22);
								LODWORD(v62) = v24;
							}
							else
							{
								v24 = v62;
								v23 = v61.m256i_i32[7];
								v22 = v61.m256i_i32[6];
							}
							v25 = sub_14018B280(88i64, 0);
							if (v25)
							{
								v26 = *(_QWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 144);
								v27 = *(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 136);
								*(_QWORD*)v25 = off_140B6CC98;
								*((_QWORD*)v25 + 1) = 0i64;
								*((_QWORD*)v25 + 2) = 0i64;
								*((_QWORD*)v25 + 3) = 0i64;
								*((_QWORD*)v25 + 4) = 0i64;
								v25[10] = v12;
								v25[12] = v69;
								v25[11] = v16;
								v25[13] = v71;
								v25[14] = v67.m128_i32[0];
								v25[15] = v72;
								v25[16] = v22;
								v25[17] = v23;
								v25[18] = v24;
								v25[19] = v27;
								*((_QWORD*)v25 + 10) = v26;
							}
							else
							{
								v25 = 0i64;
							}
							if (!*((_QWORD*)v25 + 3))
							{
								*((_QWORD*)v25 + 3) = v11;
								*((_QWORD*)v25 + 4) = *v11;
								*v11 = v25;
								v28 = *((_QWORD*)v25 + 4);
								if (v28)
									*(_QWORD*)(v28 + 24) = v25 + 8;
							}
							if (*(_DWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 136))
							{
								if (*(_QWORD*)((*((__int64(__fastcall**)(const void**)) * i + 2))(i) + 144))
								{
									v29 = (*((__int64(__fastcall**)(const void**)) * i + 2))(i);
									v30 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v29 + 136));
									if (v30)
									{
										v31 = (int**)(v30 + 568);
										if (!*((_QWORD*)v25 + 1))
										{
											*((_QWORD*)v25 + 1) = v31;
											*((_QWORD*)v25 + 2) = *v31;
											*v31 = v25;
											v32 = *((_QWORD*)v25 + 2);
											if (v32)
												*(_QWORD*)(v32 + 8) = v25 + 4;
										}
									}
								}
							}
							sub_1400293C0((__int64)v64, (__int64)v68, &v61.m256i_i32[1]);
						}
					}
					(*((void(__fastcall**)(const void**, _QWORD, __int64)) * i + 5))(i, 0i64, 1i64);
				}
			}
		}
	}
	v33 = v0[1];
	while (v33)
	{
		v34 = *((_DWORD*)v33 + 12);
		v35 = v33 + 5;
		if (qword_140C63840)
		{
			v36 = qword_140C63840(off_140A6DFF8, v34, qword_140C63858);
		}
		else
		{
			if (dword_140C64C04)
			{
				v37 = 0i64;
				goto LABEL_47;
			}
			if ((int)sub_140248CA0() < 0)
			{
				v37 = 0i64;
				goto LABEL_47;
			}
			v36 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v34);
		}
		v37 = v36;
	LABEL_47:
		v38 = sub_1403D90D0(qword_140C65898, *((_DWORD*)v33 + 11));
		v39 = *((_DWORD*)v33 + 19);
		v40 = v38;
		if (v39)
			v41 = sub_140561C30(qword_140C65B70, v39);
		else
			v41 = 0i64;
		if (!v37 || *((_DWORD*)v33 + 11) && (!v40 || !*(_QWORD*)(v40 + 5864)) || *((_DWORD*)v33 + 19) && !v41)
		{
			v55 = v33;
			v33 = (const void**)v33[4];
			v54 = (void(__fastcall**)(const void**, __int64)) * v55;
		LABEL_88:
			(*v54)(v55, 1i64);
			continue;
		}
		v42 = *(unsigned int*)(v37 + 148);
		if (!(_DWORD)v42
			|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					v40,
					v42,
					0i64,
					0i64,
					0))
		{
			sub_1400293C0((__int64)v64, (__int64)v68, (int*)v33 + 11);
			v44 = *((_DWORD*)v33 + 13);
			v45 = v33;
			v33 = (const void**)v33[4];
			if (qword_140C63840)
			{
				v46 = qword_140C63840(off_140A6DFF8, v44, qword_140C63858);
				goto LABEL_66;
			}
			if (dword_140C64C04)
			{
				v70 = 0i64;
			}
			else if ((int)sub_140248CA0() >= 0)
			{
				v46 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v44);
			LABEL_66:
				v70 = v46;
			}
			else
			{
				v70 = 0i64;
			}
			v47 = *((unsigned int*)v35 + 4);
			v67 = 0i64;
			if ((_DWORD)v47)
			{
				v48 = (unsigned int*)sub_14023D400(v47);
				if (v48)
					v67 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v48[27], (__m128)v48[29]),
						_mm_unpacklo_ps((__m128)v48[28], (__m128)0i64));
			}
			v61 = (__m256i)ymmword_140C78390;
			v62 = xmmword_140C783B0;
			v63 = xmmword_140C783C0;
			if (v41)
				v49 = (__int64*)v45[10];
			else
				v49 = 0i64;
			v50 = *((_DWORD*)v35 + 1);
			if (v50)
			{
				if (!v49)
					v49 = (__int64*)(v40 + 1416);
				*(_QWORD*)&v63 = *(_QWORD*)(v40 + 4576);
				v51 = *(_DWORD*)(v40 + 4584);
			}
			else
			{
				*(_QWORD*)&v63 = v35[3];
				v51 = *((_DWORD*)v35 + 8);
			}
			v52 = 0i64;
			DWORD2(v63) = v51;
			if (v49)
				v52 = *v49;
			sub_1405787D0(
				v47,
				*(_DWORD*)v35,
				v50,
				v43,
				v37,
				v70,
				(__int128*)v61.m256i_i8,
				*((_DWORD*)v45 + 19),
				v49,
				(__int128*)&v67,
				0);
			if (v41)
			{
				if (v45[10])
				{
					v53 = *v49;
					if (v53)
					{
						if (v53 != v52
							&& (unsigned int)(*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v53 + 16i64))(v53) + 48) - 5) <= 1)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v53 + 88i64))(v53);
						}
					}
				}
			}
			v54 = (void(__fastcall**)(const void**, __int64)) * v45;
			v55 = v45;
			goto LABEL_88;
		}
		v33 = (const void**)v33[4];
	}
	v56 = *((_QWORD*)v65 + 2);
	while ((int*)v56 != v65)
	{
		v57 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v56 + 32));
		if (v57)
			sub_140469EB0(v57);
		v58 = *(_QWORD*)(v56 + 24);
		if (v58)
		{
			v56 = *(_QWORD*)(v56 + 24);
			for (j = *(_QWORD*)(v58 + 16); j; j = *(_QWORD*)(j + 16))
				v56 = j;
		}
		else
		{
			for (k = *(_QWORD*)(v56 + 8); v56 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
				v56 = k;
			if (*(_QWORD*)(v56 + 24) != k)
				v56 = k;
		}
	}
	sub_140008410((__int64)v64);
	sub_14018B900((__int64)v65, 0);
	if (v73)
		sub_1401A4A00(&v73);
}
// 1405763DC: conditional instruction was optimized away because r8d.4!=0
// 1405764A9: conditional instruction was optimized away because rcx.8!=0
// 140576451: variable 'v47' is possibly undefined
// 140576451: variable 'v43' is possibly undefined
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140B6CC98: using guessed type __int64 (__fastcall *off_140B6CC98[4])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140575DD0: using guessed type char var_80[8];
// 140575DD0: using guessed type char var_B0[8];

