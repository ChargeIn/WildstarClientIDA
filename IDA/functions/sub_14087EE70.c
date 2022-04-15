//----- (000000014087EE70) ----------------------------------------------------
__int64 __fastcall sub_14087EE70(__int64* a1, __int64 a2, int a3, unsigned int* a4)
{
	unsigned int v4; // r10d
	unsigned int v5; // r14d
	__int64* v6; // rsi
	int v7; // r13d
	unsigned int v8; // r15d
	__int64 v9; // rcx
	unsigned int* v10; // rbx
	int v11; // r9d
	__int64 v12; // r11
	unsigned int v13; // r9d
	unsigned int v14; // ebp
	unsigned int v15; // eax
	unsigned int v16; // r14d
	unsigned int v17; // edi
	unsigned int v18; // r12d
	float* v19; // r8
	__int64 v20; // rdx
	__int64 v21; // rax
	unsigned int v22; // esi
	__int64 v23; // rcx
	__int64 v24; // rbx
	__int64 v25; // r15
	__int64 v26; // rax
	__int64 v27; // r13
	float v28; // xmm2_4
	unsigned int v29; // r9d
	int v30; // r12d
	unsigned int* v31; // r11
	__int64 v32; // rcx
	unsigned int v33; // edx
	int v34; // eax
	float v35; // xmm0_4
	__int64 v36; // r8
	unsigned int v37; // edx
	int v38; // eax
	float v39; // xmm2_4
	float v40; // xmm1_4
	float v41; // xmm0_4
	bool v42; // zf
	unsigned int v43; // r9d
	unsigned int v44; // r12d
	__int64 v45; // r8
	__int64 v46; // rbp
	unsigned int* v47; // rdi
	unsigned int v48; // eax
	__int64 v49; // r15
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rdx
	__int64 v53; // rax
	__int64 v54; // r11
	unsigned int* v56; // [rsp+0h] [rbp-98h]
	int v57; // [rsp+8h] [rbp-90h]
	unsigned int v58; // [rsp+Ch] [rbp-8Ch]
	unsigned int v59; // [rsp+10h] [rbp-88h]
	unsigned int v60; // [rsp+14h] [rbp-84h]
	unsigned int v61; // [rsp+18h] [rbp-80h]
	unsigned int v62; // [rsp+1Ch] [rbp-7Ch]
	int v63; // [rsp+20h] [rbp-78h]
	int v64; // [rsp+24h] [rbp-74h]
	unsigned int v65; // [rsp+28h] [rbp-70h]
	unsigned int* v66; // [rsp+30h] [rbp-68h]
	__int64 v67; // [rsp+38h] [rbp-60h]
	__int64 v68; // [rsp+40h] [rbp-58h]
	__int64 v69; // [rsp+48h] [rbp-50h]
	unsigned int v72; // [rsp+B0h] [rbp+18h]

	v4 = a4[8];
	v5 = a4[9];
	v6 = a1;
	v7 = 0;
	v8 = *((unsigned __int16*)a1 + 9);
	v9 = a4[7];
	v10 = a4;
	v11 = *((_DWORD*)v6 + 2);
	v12 = (unsigned int)(a3 - v9);
	v58 = v8;
	v57 = 0;
	v63 = a3 - v9;
	if (v11)
	{
		do
		{
			++v7;
			v11 &= v11 - 1;
		} while (v11);
		v57 = v7;
	}
	v13 = v10[11];
	v14 = v10[12];
	v15 = v10[10] - v5;
	v16 = v5 << 10;
	v61 = v13;
	v17 = v13;
	v65 = v4;
	v59 = v16;
	v60 = v15;
	if (v7)
	{
		v64 = (unsigned __int16)v4;
		v18 = HIWORD(v4);
		v72 = v8 - 1;
		v19 = (float*)v10;
		v66 = v10;
		v62 = HIWORD(v4);
		v69 = 4i64 * *((unsigned __int16*)v6 + 8);
		v68 = 4i64 * *(unsigned __int16*)(a2 + 16);
		v20 = *(_QWORD*)a2 + 4 * v9;
		v21 = *v6;
		v22 = v60;
		v23 = v10[6] - 1i64;
		v24 = v20;
		v25 = v21 + 4 * v23;
		v26 = (unsigned int)v7;
		v27 = v20 + 4 * v12;
		v67 = v26;
		do
		{
			v4 = v65;
			v28 = *v19;
			v17 = v13;
			v29 = v18;
			v30 = v64;
			v31 = (unsigned int*)v24;
			v32 = (v27 - v24) >> 2;
			v56 = (unsigned int*)v24;
			if ((unsigned int)v32 >= (1024 - v17) / v14)
				LODWORD(v32) = (1024 - v17) / v14;
			if (!v29)
			{
				v33 = v16 + v17 * v22;
				do
				{
					v34 = v32;
					LODWORD(v32) = v32 - 1;
					if (!v34)
						break;
					v35 = (float)v30;
					v33 += v14 * v22;
					++v31;
					v17 += v14;
					v4 += v33 >> 10;
					v30 = (unsigned __int16)v4;
					v29 = HIWORD(v4);
					*((float*)v31 - 1) = (float)((float)(*(float*)(v25 + 4) - v28) * (float)(v35 * 0.000015258789)) + v28;
				} while (!HIWORD(v4));
			}
			v36 = (v27 - (__int64)v31) >> 2;
			if ((unsigned int)v36 >= (1024 - v17) / v14)
				LODWORD(v36) = (1024 - v17) / v14;
			if (v29 <= v72)
			{
				v37 = v59 + v17 * v22;
				do
				{
					v38 = v36;
					LODWORD(v36) = v36 - 1;
					if (!v38)
						break;
					v37 += v14 * v22;
					++v31;
					v17 += v14;
					v39 = *(float*)(v25 + 4i64 * v29);
					v40 = *(float*)(v25 + 4i64 * (v29 + 1));
					v41 = (float)v30;
					v4 += v37 >> 10;
					v30 = (unsigned __int16)v4;
					v29 = HIWORD(v4);
					*((float*)v31 - 1) = (float)((float)(v40 - v39) * (float)(v41 * 0.000015258789)) + v39;
				} while (HIWORD(v4) <= v72);
				v22 = v60;
				v16 = v59;
			}
			v24 += v68;
			v27 += v68;
			v25 += v69;
			v13 = v61;
			v18 = v62;
			v19 = (float*)(v66 + 1);
			v42 = v67-- == 1;
			++v66;
		} while (!v42);
		v10 = a4;
		v6 = a1;
		v7 = v57;
		v8 = v58;
	}
	else
	{
		v31 = a4;
		v56 = a4;
	}
	v43 = v8;
	v10[11] = v17;
	if (HIWORD(v4) < v8)
		v43 = HIWORD(v4);
	if (v43)
	{
		v44 = 0;
		v45 = 0i64;
		if (v7 >= 4)
		{
			v46 = 2i64;
			v47 = v10 + 2;
			v48 = ((unsigned int)(v7 - 4) >> 2) + 1;
			v49 = v48;
			v44 = 4 * v48;
			do
			{
				v47 += 4;
				v50 = v43 + v45 * *((unsigned __int16*)v6 + 8);
				v45 += 4i64;
				*(v47 - 6) = *(_DWORD*)(*v6 + 4 * (v50 + v10[6]) - 4);
				*(v47 - 5) = *(_DWORD*)(*v6 + 4 * (v43 + (v46 - 1) * *((unsigned __int16*)v6 + 8) + v10[6]) - 4);
				*(v47 - 4) = *(_DWORD*)(*v6 + 4 * (v43 + v46 * *((unsigned __int16*)v6 + 8) + v10[6]) - 4);
				v51 = v46 + 1;
				v46 += 4i64;
				*(v47 - 3) = *(_DWORD*)(*v6 + 4 * (v43 + v51 * *((unsigned __int16*)v6 + 8) + v10[6]) - 4);
				--v49;
			} while (v49);
			v8 = v58;
		}
		if (v44 < v7)
		{
			v52 = v7 - v44;
			do
			{
				v53 = v45 * *((unsigned __int16*)v6 + 8);
				v10[v45++] = *(_DWORD*)(*v6 + 4 * (v43 + v53 + v10[6]) - 4);
				--v52;
			} while (v52);
		}
	}
	v54 = v31 - v56;
	v10[8] = v4 - (v43 << 16);
	*((_WORD*)v6 + 9) -= v43;
	*(_WORD*)(a2 + 18) = *((_WORD*)v10 + 14) + v54;
	if (v43 == v8)
		v10[6] = 0;
	else
		v10[6] += v43;
	if ((_DWORD)v54 == v63)
		return 45i64;
	v10[7] += v54;
	return 43i64;
}

