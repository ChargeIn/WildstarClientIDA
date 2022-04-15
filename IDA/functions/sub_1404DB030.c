//----- (00000001404DB030) ----------------------------------------------------
void __fastcall sub_1404DB030(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // r12
	__int64 v4; // r13
	__int64 v5; // rcx
	int v6; // ebx
	int* v7; // rax
	unsigned int v8; // edi
	int* v9; // rsi
	int v10; // r12d
	int* v11; // rbx
	_DWORD* v12; // rax
	int v13; // r14d
	int v14; // r15d
	int v15; // r13d
	int v16; // eax
	int v17; // ebx
	int* v18; // rax
	_DWORD* v19; // rdx
	int* v20; // rcx
	int v21; // eax
	__int64 v22; // rdi
	unsigned __int64 v23; // r14
	_QWORD* v24; // rbx
	int* v25; // r15
	int* v26; // rax
	__int64 v27; // rbx
	unsigned __int64 v28; // r14
	int** v29; // rdi
	int* v30; // rax
	int* v31; // rcx
	__int64 v32; // rcx
	_QWORD** v33; // rax
	_QWORD* v34; // rbx
	int* v35; // rax
	_QWORD* v36; // rdi
	int* v37; // rax
	int v38; // edi
	int v39; // r14d
	int v40; // r13d
	int* v41; // rcx
	int* v42; // rcx
	unsigned int i; // edx
	__int64 v44; // rax
	_QWORD** v45; // rax
	_QWORD* v46; // rbx
	__int64 v47; // rcx
	int* j; // rbx
	int* v49; // rcx
	__int64 v50; // rdi
	int* v51; // r14
	int* v52; // rax
	int* v53; // rbx
	__int64 v54; // rcx
	int v55; // [rsp+20h] [rbp-59h]
	int v56; // [rsp+20h] [rbp-59h]
	int v57; // [rsp+24h] [rbp-55h]
	int v58; // [rsp+24h] [rbp-55h]
	int v59; // [rsp+28h] [rbp-51h]
	int v60; // [rsp+28h] [rbp-51h]
	__int64 v61; // [rsp+30h] [rbp-49h] BYREF
	int* v62; // [rsp+38h] [rbp-41h]
	__int64 v63; // [rsp+40h] [rbp-39h] BYREF
	int v64; // [rsp+48h] [rbp-31h]
	int v65[10]; // [rsp+50h] [rbp-29h] BYREF
	int v66; // [rsp+78h] [rbp-1h]
	int v67; // [rsp+7Ch] [rbp+3h]
	int v68; // [rsp+80h] [rbp+7h]
	int v70; // [rsp+E8h] [rbp+6Fh]
	int v71; // [rsp+E8h] [rbp+6Fh]
	int v72; // [rsp+F0h] [rbp+77h]
	int v73; // [rsp+F0h] [rbp+77h]
	int v74; // [rsp+F8h] [rbp+7Fh]
	int v75; // [rsp+F8h] [rbp+7Fh]

	v2 = 0i64;
	v3 = 0i64;
	v4 = a1;
	v61 = 0i64;
	v62 = 0i64;
	v63 = 0i64;
	if (!a2)
		v2 = *(_QWORD*)(qword_140C635F0 + 5792);
	v5 = *(_QWORD*)(a1 + 30088);
	v63 = v2;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 312i64))(v5);
	v7 = sub_14018B280(72i64, 0);
	v8 = 0;
	*(_QWORD*)v7 = v7;
	*((_QWORD*)v7 + 1) = v7;
	v9 = v7;
	if (v6 > 0)
	{
		v10 = v6;
		do
		{
			v11 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(v4 + 30088) + 328i64))(
				*(_QWORD*)(v4 + 30088),
				v8,
				0i64);
			v12 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(v4 + 30088) + 328i64))(
				*(_QWORD*)(v4 + 30088),
				v8,
				1i64);
			v13 = v11[39];
			if (v13 != v12[39]
				|| v11[41] != v12[41]
				|| v11[40] != v12[40]
				|| v11[46] != v12[46]
				|| v11[48] != v12[48]
				|| v11[47] != v12[47]
				|| v11[53] != v12[53]
				|| v11[55] != v12[55]
				|| v11[54] != v12[54])
			{
				sub_1407E4830(v65, 0i64, 0x34ui64);
				v14 = *v11;
				v15 = v11[41];
				v74 = v11[48];
				v57 = v11[55];
				v70 = v11[46];
				v72 = v11[53];
				v59 = v11[40];
				v16 = v11[47];
				v17 = v11[54];
				v55 = v16;
				v18 = sub_14018B280(72i64, 0);
				v19 = v18 + 4;
				v20 = v18;
				if (v18 != (int*)-16i64)
				{
					*v19 = v14;
					v18[5] = v13;
					v18[6] = v70;
					v18[7] = v72;
					v18[8] = v15;
					v18[9] = v74;
					v18[10] = v57;
					v18[11] = v59;
					v18[12] = v55;
					v21 = v66;
					v19[9] = v17;
					v19[10] = v21;
					v19[11] = v67;
					v19[12] = v68;
				}
				v4 = a1;
				*(_QWORD*)v20 = v9;
				*((_QWORD*)v20 + 1) = *((_QWORD*)v9 + 1);
				**((_QWORD**)v9 + 1) = v20;
				*((_QWORD*)v9 + 1) = v20;
			}
			++v8;
		} while ((int)v8 < v10);
		v3 = 0i64;
	}
	v22 = *(_QWORD*)(v4 + 31008);
	v23 = (*(__int64(__fastcall**)(__int64*))(v22 + 24))(&v63);
	v24 = *(_QWORD**)(*(_QWORD*)(v22 + 16) + 8 * (v23 % *(_QWORD*)(v22 + 8)));
	if (!v24)
		goto LABEL_23;
	while (v23 != *v24 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v22 + 32))(&v63, v24 + 2))
	{
		v24 = (_QWORD*)v24[1];
		if (!v24)
			goto LABEL_23;
	}
	if (v24 == (_QWORD*)-24i64)
	{
	LABEL_23:
		v25 = sub_14018B280(16i64, 0);
		if (v25)
		{
			v26 = sub_14018B280(72i64, 0);
			*((_QWORD*)v25 + 1) = v26;
			*(_QWORD*)v26 = v26;
			*(_QWORD*)(*((_QWORD*)v25 + 1) + 8i64) = *((_QWORD*)v25 + 1);
		}
		else
		{
			v25 = 0i64;
		}
		v27 = *(_QWORD*)(v4 + 31008);
		if (*(_QWORD*)v27 == *(_QWORD*)(v27 + 8))
			sub_1400290D0(*(_QWORD*)(v4 + 31008));
		v28 = (*(__int64(__fastcall**)(__int64*))(v27 + 24))(&v63);
		v29 = (int**)(*(_QWORD*)(v27 + 16) + 8 * (v28 % *(_QWORD*)(v27 + 8)));
		v30 = sub_14018B280(32i64, 0);
		if (v30)
		{
			v31 = *v29;
			*(_QWORD*)v30 = v28;
			*((_QWORD*)v30 + 1) = v31;
			v32 = v63;
			*((_QWORD*)v30 + 3) = v25;
			*((_QWORD*)v30 + 2) = v32;
		}
		else
		{
			v30 = 0i64;
		}
		*v29 = v30;
		++* (_QWORD*)v27;
	}
	else
	{
		v25 = (int*)v24[3];
	}
	v33 = (_QWORD**)*((_QWORD*)v25 + 1);
	v34 = *v33;
	if (*v33 != v33)
	{
		do
		{
			v35 = *(int**)v9;
			v36 = v34;
			v34 = (_QWORD*)*v34;
			if (*(int**)v9 == v9)
			{
			LABEL_38:
				sub_1407E4830(v65, 0i64, 0x34ui64);
				v37 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(v4 + 30088) + 336i64))(
					*(_QWORD*)(v4 + 30088),
					*((unsigned int*)v36 + 4),
					1i64);
				if (v37)
				{
					v38 = *v37;
					v39 = v37[41];
					v40 = v37[48];
					v56 = v37[55];
					v71 = v37[39];
					v73 = v37[46];
					v75 = v37[53];
					v60 = v37[40];
					v58 = v37[47];
					v64 = v37[54];
					v41 = sub_14018B280(72i64, 0);
					if (v41 != (int*)-16i64)
					{
						v41[4] = v38;
						v41[5] = v71;
						v41[6] = v73;
						v41[7] = v75;
						v41[8] = v39;
						v41[9] = v40;
						v41[10] = v56;
						v41[11] = v60;
						v41[12] = v58;
						v41[13] = v64;
						v41[14] = v66;
						v41[15] = v67;
						v41[16] = v68;
					}
					v4 = a1;
					*(_QWORD*)v41 = v9;
					*((_QWORD*)v41 + 1) = *((_QWORD*)v9 + 1);
					**((_QWORD**)v9 + 1) = v41;
					*((_QWORD*)v9 + 1) = v41;
				}
			}
			else
			{
				while (*((_DWORD*)v36 + 4) != v35[4])
				{
					v35 = *(int**)v35;
					if (v35 == v9)
						goto LABEL_38;
				}
			}
		} while (v34 != *((_QWORD**)v25 + 1));
	}
	v42 = *(int**)v9;
	for (i = 0; v42 != v9; ++i)
		v42 = *(int**)v42;
	LODWORD(v61) = i;
	v44 = 52i64 * i;
	if (!is_mul_ok(i, 0x34ui64))
		v44 = -1i64;
	v62 = sub_14018B280(v44, 0);
	v45 = (_QWORD**)*((_QWORD*)v25 + 1);
	v46 = *v45;
	if (*v45 != v45)
	{
		do
		{
			v47 = (__int64)v46;
			v46 = (_QWORD*)*v46;
			sub_14018B900(v47, 0);
		} while (v46 != *((_QWORD**)v25 + 1));
	}
	**((_QWORD**)v25 + 1) = *((_QWORD*)v25 + 1);
	*(_QWORD*)(*((_QWORD*)v25 + 1) + 8i64) = *((_QWORD*)v25 + 1);
	for (j = *(int**)v9; j != v9; j = *(int**)j)
	{
		v49 = &v62[v3];
		*v49 = j[4];
		v49[1] = j[5];
		v49[2] = j[6];
		v49[3] = j[7];
		v49[4] = j[8];
		v49[5] = j[9];
		v49[6] = j[10];
		v49[7] = j[11];
		v49[8] = j[12];
		v49[9] = j[13];
		v49[10] = j[14];
		v49[11] = j[15];
		v49[12] = j[16];
		v50 = *((_QWORD*)v25 + 1);
		v51 = &v62[v3];
		v52 = sub_14018B280(72i64, 0);
		if (v52 != (int*)-16i64)
		{
			v52[4] = *v51;
			v52[5] = v51[1];
			v52[6] = v51[2];
			v52[7] = v51[3];
			v52[8] = v51[4];
			v52[9] = v51[5];
			v52[10] = v51[6];
			v52[11] = v51[7];
			v52[12] = v51[8];
			v52[13] = v51[9];
			v52[14] = v51[10];
			v52[15] = v51[11];
			v52[16] = v51[12];
		}
		*(_QWORD*)v52 = v50;
		v3 += 13i64;
		*((_QWORD*)v52 + 1) = *(_QWORD*)(v50 + 8);
		**(_QWORD**)(v50 + 8) = v52;
		*(_QWORD*)(v50 + 8) = v52;
	}
	sub_1403F4900(v4, 0x56Fu, (__int64)&v61);
	sub_14018B900((__int64)v62, 0);
	v53 = *(int**)v9;
	while (v53 != v9)
	{
		v54 = (__int64)v53;
		v53 = *(int**)v53;
		sub_14018B900(v54, 0);
	}
	*(_QWORD*)v9 = v9;
	*((_QWORD*)v9 + 1) = v9;
	sub_14018B900((__int64)v9, 0);
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 1404DB030: using guessed type int var_80[10];

