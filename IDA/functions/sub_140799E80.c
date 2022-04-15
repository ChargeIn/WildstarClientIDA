//----- (0000000140799E80) ----------------------------------------------------
void __fastcall sub_140799E80(unsigned int* a1, __int64 a2)
{
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	int* v5; // rax
	int v6; // r9d
	unsigned int v7; // edx
	int* v8; // r10
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // rax
	int* v12; // r13
	unsigned int j; // r8d
	__int64 v14; // rax
	int* v15; // rcx
	int v16; // eax
	__int64 v17; // rax
	int* v18; // r14
	__int64 v19; // rax
	int* v20; // rbp
	unsigned int k; // ecx
	__int64 v22; // rax
	unsigned int m; // edi
	__int64 v24; // r12
	__int64 v25; // rax
	__int64 v26; // rsi
	__int64 v27; // r15
	int v28; // eax
	__int64* v29; // r10
	__int64 v30; // rsi
	__int64 v31; // rax
	__int64 v32; // rdi
	__int64 v33; // r11
	int v34; // r11d
	__int64 v35; // r10
	int v36; // edx
	int v37; // r8d
	__int64 v38; // rcx
	unsigned int v39; // r15d
	unsigned int v40; // esi
	int* v41; // rax
	__int64 v42; // rax
	__int64 v43; // rax
	int* v44; // rax
	unsigned int v45; // r12d
	unsigned int v46; // edi
	unsigned int v47; // r13d
	int* v48; // r15
	__int64 v49; // rdx
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rdx
	__int64 v53; // rdx
	__int64 v54; // rax
	__int64 v55; // rcx
	__int64 v56; // rdx
	unsigned int v57; // [rsp+30h] [rbp-98h]
	unsigned int v58; // [rsp+34h] [rbp-94h]
	int* v59; // [rsp+38h] [rbp-90h]
	__int64 i; // [rsp+48h] [rbp-80h]
	int* v61; // [rsp+50h] [rbp-78h]
	int* v62; // [rsp+58h] [rbp-70h]
	__int64 v64; // [rsp+68h] [rbp-60h] BYREF
	__int64 v65; // [rsp+70h] [rbp-58h]
	__int64 v66; // [rsp+78h] [rbp-50h]
	__int64 v67; // [rsp+80h] [rbp-48h]

	v3 = *a1;
	v4 = 4 * v3;
	if (!is_mul_ok(v3, 4ui64))
		v4 = -1i64;
	v5 = sub_14018B280(v4, 0);
	v6 = -1;
	v7 = 0;
	v8 = v5;
	for (i = (__int64)v5; v7 < *a1; v8[v10] = v6)
	{
		v9 = *((_QWORD*)a1 + 2);
		v10 = v7;
		if (!*(_DWORD*)(v9 + 72i64 * v7))
			v6 = *(_DWORD*)(v9 + 72i64 * v7 + 8);
		++v7;
	}
	v11 = 4i64 * *a1;
	if (!is_mul_ok(*a1, 4ui64))
		v11 = -1i64;
	v12 = sub_14018B280(v11, 0);
	v62 = v12;
	sub_1407E4830(v12, 255i64, 4i64 * *a1);
	v64 = -1i64;
	v65 = -1i64;
	v66 = -1i64;
	v67 = -1i64;
	for (j = 0; j < *a1; ++j)
	{
		v14 = dword_140B50F70[*(int*)(*((_QWORD*)a1 + 2) + 72i64 * j)];
		if ((int)v14 < 8)
		{
			v15 = (int*)&v64 + v14;
			v16 = *v15;
			*v15 = j;
			v12[j] = v16;
		}
	}
	v17 = 4i64 * *a1;
	if (!is_mul_ok(*a1, 4ui64))
		v17 = -1i64;
	v18 = sub_14018B280(v17, 0);
	v19 = 4i64 * *a1;
	if (!is_mul_ok(*a1, 4ui64))
		v19 = -1i64;
	v20 = sub_14018B280(v19, 0);
	sub_1407E4830(v18, 0i64, 4i64 * *a1);
	sub_1407E4830(v20, 0i64, 4i64 * *a1);
	for (k = a1[2]; k < *a1; v18[v22] = 1)
		v22 = k++;
	for (m = 0; m < *a1; ++m)
	{
		v24 = m;
		v25 = (unsigned int)v12[v24];
		if ((_DWORD)v25 != -1)
		{
			v26 = (unsigned int)v12[v25];
			v27 = (unsigned int)v25;
			if ((_DWORD)v26 != -1)
			{
				LOBYTE(v28) = sub_1407999E0(
					*(_DWORD*)(i + 4 * v26),
					*((_QWORD*)a1 + 2) + 72 * v26,
					*(_DWORD*)(i + 4i64 * (unsigned int)v25),
					(_DWORD*)(*((_QWORD*)a1 + 2) + 72i64 * (unsigned int)v25),
					*(_DWORD*)(v24 * 4 + i),
					*((_QWORD*)a1 + 2) + 72i64 * m);
				if (v28)
				{
					v18[v27] = 0;
					v12[v24] = v26;
				}
			}
		}
	}
	v29 = &v64;
	v30 = 8i64;
	do
	{
		v31 = *(unsigned int*)v29;
		if ((_DWORD)v31 != -1)
		{
			v32 = v31;
			v33 = (unsigned int)v12[v31];
			if ((_DWORD)v33 != -1 && sub_140799880(*((_QWORD*)a1 + 2) + 72 * v33, *((_QWORD*)a1 + 2) + 72 * v31))
			{
				v18[v32] = 0;
				*(_DWORD*)v29 = v34;
			}
		}
		v29 = (__int64*)((char*)v29 + 4);
		--v30;
	} while (v30);
	if ((_DWORD)v64 != -1)
		v20[(unsigned int)v64] = 1;
	if (HIDWORD(v64) != -1)
		v20[HIDWORD(v64)] = 1;
	if ((_DWORD)v65 != -1)
		v20[(unsigned int)v65] = 1;
	if (HIDWORD(v65) != -1)
		v20[HIDWORD(v65)] = 1;
	if ((_DWORD)v66 != -1)
		v20[(unsigned int)v66] = 1;
	if (HIDWORD(v66) != -1)
		v20[HIDWORD(v66)] = 1;
	if ((_DWORD)v67 != -1)
		v20[(unsigned int)v67] = 1;
	if (HIDWORD(v67) != -1)
		v20[HIDWORD(v67)] = 1;
	LODWORD(v35) = *a1;
	v36 = 0;
	v37 = 0;
	if (*a1)
	{
		do
		{
			v35 = (unsigned int)(v35 - 1);
			if (*(_DWORD*)(*((_QWORD*)a1 + 2) + 72 * v35))
			{
				if (v18[v35])
					v36 = 1;
				if (v20[v35])
					v37 = 1;
			}
			else
			{
				v18[v35] = v36;
				v20[v35] = v37;
				v37 = 0;
				v36 = 0;
			}
		} while ((_DWORD)v35);
	}
	v38 = *a1;
	v39 = 0;
	v58 = 0;
	v40 = 0;
	v57 = 0;
	if ((_DWORD)v38)
	{
		v41 = v20;
		do
		{
			if (*(int*)((char*)v41 + (char*)v18 - (char*)v20))
				++v39;
			if (*v41)
				++v40;
			++v41;
			--v38;
		} while (v38);
		v58 = v39;
		v57 = v40;
	}
	v42 = 72i64 * v39;
	if (!is_mul_ok(v39, 0x48ui64))
		v42 = -1i64;
	v61 = sub_14018B280(v42, 8u);
	v43 = 72i64 * v40;
	if (!is_mul_ok(v40, 0x48ui64))
		v43 = -1i64;
	v44 = sub_14018B280(v43, 8u);
	v59 = v44;
	v45 = 0;
	v46 = 0;
	if (*a1)
	{
		v47 = 0;
		v48 = v44;
		do
		{
			if (v18[v46])
			{
				v49 = *((_QWORD*)a1 + 2);
				v50 = v47++;
				v51 = 9 * v50;
				*(_QWORD*)&v61[2 * v51] = *(_QWORD*)(72i64 * v46 + v49);
				*(_QWORD*)&v61[2 * v51 + 2] = *(_QWORD*)(72i64 * v46 + v49 + 8);
				*(_QWORD*)&v61[2 * v51 + 4] = *(_QWORD*)(72i64 * v46 + v49 + 16);
				*(_QWORD*)&v61[2 * v51 + 6] = *(_QWORD*)(72i64 * v46 + v49 + 24);
				*(_QWORD*)&v61[2 * v51 + 8] = *(_QWORD*)(72i64 * v46 + v49 + 32);
				*(_QWORD*)&v61[2 * v51 + 10] = *(_QWORD*)(72i64 * v46 + v49 + 40);
				*(_QWORD*)&v61[2 * v51 + 12] = *(_QWORD*)(72i64 * v46 + v49 + 48);
				*(_QWORD*)&v61[2 * v51 + 14] = *(_QWORD*)(72i64 * v46 + v49 + 56);
				*(_QWORD*)&v61[2 * v51 + 16] = *(_QWORD*)(72i64 * v46 + v49 + 64);
				v52 = 72i64 * v46 + *((_QWORD*)a1 + 2);
				switch (*(_DWORD*)v52)
				{
				case 3:
				case 9:
				case 0xF:
				case 0x17:
				case 0x19:
				case 0x1C:
					*(_QWORD*)(v52 + 24) = 0i64;
					goto LABEL_72;
				case 4:
				LABEL_72:
					*(_QWORD*)(v52 + 16) = 0i64;
					break;
				default:
					break;
				}
			}
			if (v20[v46])
			{
				v53 = *((_QWORD*)a1 + 2);
				v54 = v45++;
				v55 = 9 * v54;
				*(_QWORD*)&v48[2 * v55] = *(_QWORD*)(72i64 * v46 + v53);
				*(_QWORD*)&v48[2 * v55 + 2] = *(_QWORD*)(72i64 * v46 + v53 + 8);
				*(_QWORD*)&v48[2 * v55 + 4] = *(_QWORD*)(72i64 * v46 + v53 + 16);
				*(_QWORD*)&v48[2 * v55 + 6] = *(_QWORD*)(72i64 * v46 + v53 + 24);
				*(_QWORD*)&v48[2 * v55 + 8] = *(_QWORD*)(72i64 * v46 + v53 + 32);
				*(_QWORD*)&v48[2 * v55 + 10] = *(_QWORD*)(72i64 * v46 + v53 + 40);
				*(_QWORD*)&v48[2 * v55 + 12] = *(_QWORD*)(72i64 * v46 + v53 + 48);
				*(_QWORD*)&v48[2 * v55 + 14] = *(_QWORD*)(72i64 * v46 + v53 + 56);
				*(_QWORD*)&v48[2 * v55 + 16] = *(_QWORD*)(72i64 * v46 + v53 + 64);
				v56 = 72i64 * v46 + *((_QWORD*)a1 + 2);
				switch (*(_DWORD*)v56)
				{
				case 3:
				case 9:
				case 0xF:
				case 0x17:
				case 0x19:
				case 0x1C:
					*(_QWORD*)(v56 + 24) = 0i64;
					goto LABEL_76;
				case 4:
				LABEL_76:
					*(_QWORD*)(v56 + 16) = 0i64;
					break;
				default:
					break;
				}
			}
			sub_1407997F0(*((_QWORD*)a1 + 2) + 72i64 * v46++);
		} while (v46 < *a1);
		v40 = v57;
		v39 = v58;
		v12 = v62;
	}
	sub_14079A4F0(a2);
	sub_14018B900(*(_QWORD*)(a2 + 16), 0);
	*(_DWORD*)(a2 + 4) = v39;
	*(_QWORD*)(a2 + 16) = v61;
	*(_DWORD*)a2 = v39;
	sub_14018B900(*((_QWORD*)a1 + 2), 0);
	*((_QWORD*)a1 + 2) = v59;
	a1[2] = v40;
	a1[1] = v40;
	*a1 = v40;
	sub_14018B900(i, 0);
	sub_14018B900((__int64)v12, 0);
	sub_14018B900((__int64)v18, 0);
	sub_14018B900((__int64)v20, 0);
}
// 14079A08A: variable 'v28' is possibly undefined
// 14079A0F0: variable 'v34' is possibly undefined
// 14079A0F0: variable 'v29' is possibly undefined
// 140B50F70: using guessed type int dword_140B50F70[];

