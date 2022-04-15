//----- (00000001402F80C0) ----------------------------------------------------
void __fastcall sub_1402F80C0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rbx
	int* v7; // rax
	int v8; // r13d
	unsigned __int64 v9; // rax
	int* v10; // rax
	unsigned int* v11; // r15
	__int64 v12; // rsi
	__int64* v13; // r12
	bool v14; // zf
	int* v15; // rax
	int* v16; // rbx
	unsigned int v17; // eax
	__int64 v18; // rdx
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rax
	int v22; // r11d
	int v23; // r9d
	int v24; // r10d
	__int64 v25; // rcx
	float v26; // xmm0_4
	float v27; // xmm2_4
	float v28; // xmm0_4
	bool v29; // cc
	float v30; // xmm1_4
	int v31; // eax
	float v32; // xmm1_4
	int v33; // eax
	__int64 v34; // r9
	int v35; // edx
	unsigned int v36; // r10d
	__int64 v37; // r11
	unsigned int v38; // r8d
	unsigned int v39; // edi
	unsigned int v40; // edx
	__int64 v41; // rcx
	__int64 v42; // rax
	void(__fastcall * v43)(__int64, _QWORD, __int64, __int64, _DWORD, _QWORD); // r10
	_QWORD* i; // rax
	_QWORD* v45; // rdi
	_QWORD* v46; // rcx
	__int64 v47; // rcx
	unsigned __int64 v48; // rdi
	__int64 v49; // rcx
	float v50; // xmm2_4
	float v51; // xmm3_4
	__int64 v52; // rcx
	int v53; // r10d
	int v54; // r9d
	float v55; // xmm1_4
	unsigned int v56; // r10d
	__int64 v57; // rax
	unsigned int v58; // r8d
	unsigned int v59; // edx
	__int64 v60; // r11
	__int64 v61; // rcx
	__int64 v62; // rdx
	int v63; // edx
	_QWORD* v64; // rdx
	__int64 v65; // rdx
	__int64 v66; // rdx
	int v67[4]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v68; // [rsp+90h] [rbp+8h] BYREF

	v3 = *(_QWORD*)a1;
	v4 = a2;
	v67[0] = 0;
	if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(v3 + 16))(a1, v67, 0i64))
	{
		v7 = sub_14018B280(72i64, 0);
		if (v7)
			sub_1402EF410((__int64)v7, a1, v4, (_DWORD*)a3);
		return;
	}
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 440i64))(a1);
	if (v4 >= *(_QWORD*)(a1 + 896))
	{
		v68 = -1i64;
		sub_14019F340((__int64*)(a1 + 888), (unsigned int)(v4 + 1), &v68);
	}
	v9 = *(_QWORD*)(*(_QWORD*)(a1 + 888) + 8 * v4);
	if (v9 > *(_QWORD*)(a1 + 880))
	{
		v10 = sub_14018B280(32i64, 0);
		if (v10)
		{
			*((_QWORD*)v10 + 1) = 0i64;
			*((_QWORD*)v10 + 2) = 0i64;
			*((_QWORD*)v10 + 3) = 0i64;
			*v10 = v4;
			v68 = (__int64)v10;
		}
		else
		{
			v68 = 0i64;
		}
		v9 = sub_140033260((__int64*)(a1 + 872), &v68);
		*(_QWORD*)(*(_QWORD*)(a1 + 888) + 8 * v4) = v9;
	}
	v11 = *(unsigned int**)(*(_QWORD*)(a1 + 872) + 8 * v9);
	v12 = *((_QWORD*)v11 + 1);
	v13 = (__int64*)(v11 + 2);
	if (v12)
	{
		if (*(_DWORD*)a3 != *(_DWORD*)v12
			|| *(_DWORD*)(a3 + 16) != *(_DWORD*)(v12 + 16)
			|| *(_DWORD*)(a3 + 24) != *(_DWORD*)(v12 + 24))
		{
			goto LABEL_21;
		}
		if (*(_DWORD*)a3)
		{
			if (*(_DWORD*)(v12 + 44))
				goto LABEL_21;
			v14 = (*(_BYTE*)(a3 + 20) & 2) == 0;
		}
		else
		{
			v14 = (*(_BYTE*)(a3 + 20) & 1) == 0;
		}
	}
	else
	{
		v14 = *(_DWORD*)a3 == 0;
	}
	if (v14)
		return;
LABEL_21:
	v15 = sub_14018B280(104i64, 0);
	v16 = v15;
	if (v15)
	{
		v15[7] = 0;
		*((_QWORD*)v15 + 11) = 0i64;
		*((_QWORD*)v15 + 12) = 0i64;
	}
	else
	{
		v16 = 0i64;
	}
	*v16 = *(_DWORD*)a3;
	v16[1] = *(_DWORD*)(a3 + 4);
	v16[2] = *(_DWORD*)(a3 + 8);
	v16[3] = *(_DWORD*)(a3 + 12);
	v16[4] = *(_DWORD*)(a3 + 16);
	v16[5] = *(_DWORD*)(a3 + 20);
	v16[6] = *(_DWORD*)(a3 + 24);
	v16[7] = *(_DWORD*)(a3 + 28);
	if (!*v16)
	{
		v16[10] = -1;
		*((_QWORD*)v16 + 4) = 0i64;
		v16[11] = 1;
		*(_DWORD*)(a1 + 336) = 0;
		v22 = 150;
		v23 = 0;
	LABEL_31:
		v16[5] &= ~4u;
		goto LABEL_32;
	}
	v17 = sub_1402F6C40((__int64*)a1, *v16, v16[1]);
	v18 = v17;
	v16[10] = v17;
	v19 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64);
	v20 = 112 * v18;
	v16[11] = 0;
	v21 = v20 + v19;
	*((_QWORD*)v16 + 4) = v21;
	v22 = *(_DWORD*)(a3 + 28);
	if (!v22)
		v22 = *(unsigned __int16*)(v21 + 10);
	v23 = *(_DWORD*)(*((_QWORD*)v16 + 4) + 16i64) - *(_DWORD*)(*((_QWORD*)v16 + 4) + 12i64);
	if (!v23 || *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) + v20 + 20) == 0.0)
		goto LABEL_31;
LABEL_32:
	v24 = v16[5];
	if ((v24 & 1) != 0)
		v22 = 0;
	if (v23)
	{
		if ((v24 & 8) == 0)
		{
			if ((v24 & 0x20) != 0)
				v16[3] = *(_DWORD*)(a3 + 4) % (unsigned int)v23;
			goto LABEL_45;
		}
		v25 = *v13;
		if ((v24 & 4) != 0)
		{
			if (!v25)
			{
			LABEL_45:
				if (!v16[3] && *((float*)v16 + 2) < 0.0)
					v16[3] = v23;
				goto LABEL_48;
			}
			while ((*(_BYTE*)(v25 + 20) & 4) == 0)
			{
				v25 = *(_QWORD*)(v25 + 96);
				if (!v25)
					goto LABEL_45;
			}
		}
		if (v25)
		{
			v26 = sub_1402F19B0(v25, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64));
			v16[3] = (int)(float)(v26 * (float)v23);
		}
		goto LABEL_45;
	}
LABEL_48:
	v27 = *((float*)v16 + 2);
	v28 = *(float*)&dword_140C41F64;
	v29 = v27 <= *(float*)&dword_140C41F64;
	v16[12] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	if (!v29)
	{
		v30 = 1.0;
		v31 = v23 - v16[3];
	LABEL_52:
		v32 = v30 / v27;
		v16[13] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) + (int)(float)((float)v31 * v32);
		if (v32 > 1.0)
			v32 = 1.0;
		v16[14] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v16[15] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) + (int)(float)((float)v22 * v32);
		goto LABEL_56;
	}
	if (v27 < (float)-v28)
	{
		v30 = -1.0;
		v31 = v16[3];
		goto LABEL_52;
	}
	v16[13] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	v16[14] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	v33 = v22 + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
	v16[5] = v24 | 0x10;
	v16[15] = v33;
LABEL_56:
	if (v16[12] == v16[13] && (v16[5] & 0x10) == 0)
		v16[13] = v16[15];
	v34 = *((_QWORD*)v16 + 4);
	v35 = v16[3];
	v16[16] = v35;
	if (v34)
		v16[16] = v35 + *(_DWORD*)(v34 + 12);
	v16[17] = 0;
	v16[19] = -1;
	if (v34)
	{
		if (v27 <= 0.0)
		{
			if (v27 < 0.0)
			{
				v56 = (v16[5] & 0x40) != 0 ? *(_DWORD*)(v34 + 16) : v35 + *(_DWORD*)(v34 + 12);
				v57 = *(_QWORD*)(a1 + 64);
				v58 = 0;
				v59 = *(_DWORD*)(v57 + 656);
				if (v59)
				{
					v60 = *(_QWORD*)(v57 + 664);
					do
					{
						v61 = (v59 + v58) >> 1;
						if (*(_DWORD*)(v60 + 4 * v61) > v56)
							v59 = (v59 + v58) >> 1;
						else
							v58 = v61 + 1;
					} while (v58 < v59);
					if (v59)
					{
						v62 = v59 - 1;
						if (*(_DWORD*)(v60 + 4 * v62) >= *(_DWORD*)(v34 + 12))
							v16[19] = v62;
					}
				}
			}
		}
		else
		{
			v36 = *(_DWORD*)(v34 + 12);
			if ((v16[5] & 0x40) == 0)
				v36 += v35;
			v37 = *(_QWORD*)(a1 + 64);
			v38 = 0;
			v39 = *(_DWORD*)(v37 + 656);
			v40 = v39;
			if (v39)
			{
				do
				{
					v41 = (v40 + v38) >> 1;
					if (*(_DWORD*)(*(_QWORD*)(v37 + 664) + 4 * v41) >= v36)
						v40 = (v40 + v38) >> 1;
					else
						v38 = v41 + 1;
				} while (v38 < v40);
			}
			if (v40 < v39 && *(_DWORD*)(*(_QWORD*)(v37 + 664) + 4i64 * v40) < *(_DWORD*)(v34 + 16))
				v16[19] = v40;
		}
	}
	if (v16[19] != -1)
		v16[5] &= ~0x10u;
	if (!*((_QWORD*)v16 + 11))
	{
		*((_QWORD*)v16 + 11) = v13;
		*((_QWORD*)v16 + 12) = *v13;
		*v13 = (__int64)v16;
		v42 = *((_QWORD*)v16 + 12);
		if (v42)
			*(_QWORD*)(v42 + 88) = v16 + 24;
	}
	if (!v16[11] && (v16[5] & 0x10) == 0)
		sub_140306300(a1, v16[13]);
	v43 = *(void(__fastcall**)(__int64, _QWORD, __int64, __int64, _DWORD, _QWORD))(a1 + 944);
	if (v43 && v12 && !*(_DWORD*)(v12 + 44) && (*(_BYTE*)(v12 + 20) & 0x10) == 0 && !*(_DWORD*)(a1 + 332))
		v43(a1, *v11, v12, 1i64, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 212i64), *(_QWORD*)(a1 + 952));
	for (i = (_QWORD*)*((_QWORD*)v11 + 3); i; i = (_QWORD*)*((_QWORD*)v11 + 3))
	{
		if (v12 && !*(_DWORD*)(v12 + 44) && (*(_BYTE*)(v12 + 20) & 0x10) == 0)
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(*(_QWORD*)*i + 72i64))(*i, 200i64, 2i64);
		v45 = (_QWORD*)*((_QWORD*)v11 + 3);
		if (v45)
		{
			v46 = (_QWORD*)v45[1];
			if (v46)
				*v46 = v45[2];
			v47 = v45[2];
			if (v47)
				*(_QWORD*)(v47 + 8) = v45[1];
			v45[1] = 0i64;
			v45[2] = 0i64;
			if (*v45)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v45 + 8i64))(*v45);
			sub_14018B900((__int64)v45, 0);
		}
	}
	v48 = 0i64;
	do
	{
		++v48;
		if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) - v16[15] >= 0)
		{
			v49 = *((_QWORD*)v16 + 12);
			if (v49)
				sub_1402F1720(v49);
		}
		v16 = (int*)*((_QWORD*)v16 + 12);
	} while (v16);
	if (v48 > 4)
	{
		v50 = 1.0;
		v51 = 1.0;
		v52 = 0i64;
		if (v12)
		{
			v53 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
			do
			{
				v54 = *(_DWORD*)(v12 + 56);
				if (v53 - v54 >= 0)
				{
					v63 = *(_DWORD*)(v12 + 60);
					if (v53 - v63 < 0)
						v55 = (float)(v53 - v54) / (float)(v63 - v54);
					else
						v55 = 1.0;
				}
				else
				{
					v55 = 0.0;
				}
				if (v51 >= (float)(v55 * v50))
				{
					v51 = v55 * v50;
					v52 = v12;
				}
				v12 = *(_QWORD*)(v12 + 96);
				v50 = v50 * (float)(1.0 - v55);
			} while (v12);
			if (v52)
			{
				v64 = *(_QWORD**)(v52 + 88);
				if (v64)
					*v64 = *(_QWORD*)(v52 + 96);
				v65 = *(_QWORD*)(v52 + 96);
				if (v65)
					*(_QWORD*)(v65 + 88) = *(_QWORD*)(v52 + 88);
				*(_QWORD*)(v52 + 88) = 0i64;
				*(_QWORD*)(v52 + 96) = 0i64;
				v66 = *(_QWORD*)(v52 + 96);
				if (v66)
					*(_QWORD*)(v66 + 88) = *(_QWORD*)(v52 + 88);
				*(_QWORD*)(v52 + 88) = 0i64;
				*(_QWORD*)(v52 + 96) = 0i64;
				sub_14018B900(v52, 0);
			}
		}
	}
	*(_DWORD*)(a1 + 1536) = 0;
	*(_DWORD*)(a1 + 1584) = 0;
	if (!v8)
		*(_DWORD*)(a1 + 1404) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
}
// 1402F868B: conditional instruction was optimized away because r9.8!=0
// 1402F834B: variable 'v23' is possibly undefined
// 1402F8405: variable 'v22' is possibly undefined
// 1402F8449: variable 'v24' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C41F64: using guessed type int dword_140C41F64;
// 1402F80C0: using guessed type int var_58[4];

