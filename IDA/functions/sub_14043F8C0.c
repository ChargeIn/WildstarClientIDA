//----- (000000014043F8C0) ----------------------------------------------------
__int64 sub_14043F8C0(__int64 a1, __int64 a2, unsigned int a3, ...)
{
	__int64 v3; // rax
	__int64 v4; // r14
	__int64 v5; // rcx
	__int64 v7; // rbx
	__int64 v8; // rdi
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // rsi
	int* v12; // rdi
	__int64 v13; // rbx
	_QWORD* v14; // r14
	_QWORD* v15; // rax
	int v16; // r15d
	int v17; // r12d
	int v18; // r13d
	int* v19; // rax
	__int64 v20; // rbx
	int* v21; // rcx
	int v22; // r15d
	int v23; // r12d
	int v24; // r13d
	int* v25; // rax
	__int64 v26; // rbx
	int* v27; // rcx
	int v28; // r15d
	int v29; // r12d
	int v30; // r13d
	int* v31; // rax
	__int64 v32; // rbx
	int* v33; // rcx
	int v34; // r15d
	int v35; // r12d
	int v36; // r13d
	int* v37; // rax
	__int64 v38; // rbx
	int* v39; // rcx
	int v40; // r15d
	int v41; // r12d
	int v42; // r13d
	int* v43; // rax
	__int64 v44; // rbx
	int* v45; // rcx
	int v46; // r15d
	int v47; // r12d
	int v48; // r13d
	int* v49; // rax
	__int64 v50; // rbx
	int* v51; // rcx
	int v52; // r15d
	int v53; // r12d
	int v54; // r13d
	int* v55; // rax
	__int64 v56; // rbx
	int* v57; // rcx
	int v58; // r15d
	int v59; // r12d
	int v60; // r13d
	int* v61; // rax
	__int64 v62; // rbx
	int* v63; // rcx
	int v64; // r15d
	int v65; // edi
	int v66; // r12d
	int* v67; // rax
	__int64 v68; // rbx
	int* v69; // rcx
	char v71[24]; // [rsp+20h] [rbp-40h] BYREF
	__int64 v73; // [rsp+88h] [rbp+28h]
	__int64 v75; // [rsp+98h] [rbp+38h] BYREF
	va_list va; // [rsp+98h] [rbp+38h]
	__int64 v77; // [rsp+A0h] [rbp+40h]
	va_list va1; // [rsp+A8h] [rbp+48h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v75 = va_arg(va1, _QWORD);
	v77 = va_arg(va1, _QWORD);
	v3 = *(_QWORD*)(a1 + 96);
	v4 = a1;
	v5 = a1 + 80;
	if (*(_QWORD*)(v5 + 8) == v3)
	{
		sub_140440180(v5);
		v7 = 0i64;
		v8 = 17i64;
		do
		{
			sub_140440230(v7 + *(_QWORD*)(v4 + 88));
			v7 += 32i64;
			--v8;
		} while (v8);
		v9 = 0;
		for (LODWORD(v77) = 0; v9 < a3; LODWORD(v77) = v9)
		{
			v10 = sub_1401FAD80(v9);
			v11 = v10;
			if (v10)
			{
				v12 = (int*)sub_1401FA8E0(*(_DWORD*)(v10 + 16));
				v13 = *(_QWORD*)(32i64 * *(unsigned int*)(v11 + 4) + *(_QWORD*)(v4 + 88) + 8)
					+ 80i64 * *(unsigned int*)(v11 + 8);
				v73 = v13;
				sub_1400293C0(v13 + 48, (__int64)v71, v12);
				v14 = *(_QWORD**)(v13 + 8);
				v15 = (_QWORD*)*v14;
				if ((_QWORD*)*v14 != v14)
				{
					while (*(_DWORD*)(v11 + 20) >= *((_DWORD*)v15 + 5))
					{
						v15 = (_QWORD*)*v15;
						if (v15 == v14)
							goto LABEL_11;
					}
					v14 = v15;
				}
			LABEL_11:
				v16 = v12[2];
				LODWORD(v75) = *v12;
				if (v16)
				{
					v17 = *(_DWORD*)(v11 + 12);
					v18 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v16 = 2;
					v19 = sub_14018B280(32i64, 0);
					if (v19 != (int*)-16i64)
					{
						v19[4] = v17;
						v19[5] = v18;
						v19[6] = 0;
						v19[7] = v16;
					}
					*(_QWORD*)v19 = v14;
					*((_QWORD*)v19 + 1) = v14[1];
					*(_QWORD*)v14[1] = v19;
					v14[1] = v19;
					v20 = *((_QWORD*)sub_140440A50(v13 + 16, (unsigned int*)va) + 1);
					v21 = sub_14018B280(32i64, 0);
					if (v21 != (int*)-16i64)
					{
						v21[4] = v17;
						v21[5] = v18;
						v21[6] = 0;
						v21[7] = v16;
					}
					*(_QWORD*)v21 = v20;
					*((_QWORD*)v21 + 1) = *(_QWORD*)(v20 + 8);
					**(_QWORD**)(v20 + 8) = v21;
					*(_QWORD*)(v20 + 8) = v21;
					v13 = v73;
				}
				v22 = v12[3];
				LODWORD(v75) = *v12;
				if (v22)
				{
					v23 = *(_DWORD*)(v11 + 12);
					v24 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v22 = 2;
					v25 = sub_14018B280(32i64, 0);
					if (v25 != (int*)-16i64)
					{
						v25[4] = v23;
						v25[5] = v24;
						v25[6] = 1;
						v25[7] = v22;
					}
					*(_QWORD*)v25 = v14;
					*((_QWORD*)v25 + 1) = v14[1];
					*(_QWORD*)v14[1] = v25;
					v14[1] = v25;
					v26 = *((_QWORD*)sub_140440A50(v13 + 16, (unsigned int*)va) + 1);
					v27 = sub_14018B280(32i64, 0);
					if (v27 != (int*)-16i64)
					{
						v27[4] = v23;
						v27[5] = v24;
						v27[6] = 1;
						v27[7] = v22;
					}
					*(_QWORD*)v27 = v26;
					*((_QWORD*)v27 + 1) = *(_QWORD*)(v26 + 8);
					**(_QWORD**)(v26 + 8) = v27;
					*(_QWORD*)(v26 + 8) = v27;
				}
				v28 = v12[4];
				LODWORD(v75) = *v12;
				if (v28)
				{
					v29 = *(_DWORD*)(v11 + 12);
					v30 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v28 = 2;
					v31 = sub_14018B280(32i64, 0);
					if (v31 != (int*)-16i64)
					{
						v31[4] = v29;
						v31[5] = v30;
						v31[6] = 2;
						v31[7] = v28;
					}
					*(_QWORD*)v31 = v14;
					*((_QWORD*)v31 + 1) = v14[1];
					*(_QWORD*)v14[1] = v31;
					v14[1] = v31;
					v32 = *((_QWORD*)sub_140440A50(v73 + 16, (unsigned int*)va) + 1);
					v33 = sub_14018B280(32i64, 0);
					if (v33 != (int*)-16i64)
					{
						v33[4] = v29;
						v33[5] = v30;
						v33[6] = 2;
						v33[7] = v28;
					}
					*(_QWORD*)v33 = v32;
					*((_QWORD*)v33 + 1) = *(_QWORD*)(v32 + 8);
					**(_QWORD**)(v32 + 8) = v33;
					*(_QWORD*)(v32 + 8) = v33;
				}
				v34 = v12[5];
				LODWORD(v75) = *v12;
				if (v34)
				{
					v35 = *(_DWORD*)(v11 + 12);
					v36 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v34 = 2;
					v37 = sub_14018B280(32i64, 0);
					if (v37 != (int*)-16i64)
					{
						v37[4] = v35;
						v37[5] = v36;
						v37[6] = 3;
						v37[7] = v34;
					}
					*(_QWORD*)v37 = v14;
					*((_QWORD*)v37 + 1) = v14[1];
					*(_QWORD*)v14[1] = v37;
					v14[1] = v37;
					v38 = *((_QWORD*)sub_140440A50(v73 + 16, (unsigned int*)va) + 1);
					v39 = sub_14018B280(32i64, 0);
					if (v39 != (int*)-16i64)
					{
						v39[4] = v35;
						v39[5] = v36;
						v39[6] = 3;
						v39[7] = v34;
					}
					*(_QWORD*)v39 = v38;
					*((_QWORD*)v39 + 1) = *(_QWORD*)(v38 + 8);
					**(_QWORD**)(v38 + 8) = v39;
					*(_QWORD*)(v38 + 8) = v39;
				}
				v40 = v12[6];
				LODWORD(v75) = *v12;
				if (v40)
				{
					v41 = *(_DWORD*)(v11 + 12);
					v42 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v40 = 2;
					v43 = sub_14018B280(32i64, 0);
					if (v43 != (int*)-16i64)
					{
						v43[4] = v41;
						v43[5] = v42;
						v43[6] = 4;
						v43[7] = v40;
					}
					*(_QWORD*)v43 = v14;
					*((_QWORD*)v43 + 1) = v14[1];
					*(_QWORD*)v14[1] = v43;
					v14[1] = v43;
					v44 = *((_QWORD*)sub_140440A50(v73 + 16, (unsigned int*)va) + 1);
					v45 = sub_14018B280(32i64, 0);
					if (v45 != (int*)-16i64)
					{
						v45[4] = v41;
						v45[5] = v42;
						v45[6] = 4;
						v45[7] = v40;
					}
					*(_QWORD*)v45 = v44;
					*((_QWORD*)v45 + 1) = *(_QWORD*)(v44 + 8);
					**(_QWORD**)(v44 + 8) = v45;
					*(_QWORD*)(v44 + 8) = v45;
				}
				v46 = v12[7];
				LODWORD(v75) = *v12;
				if (v46)
				{
					v47 = *(_DWORD*)(v11 + 12);
					v48 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v46 = 2;
					v49 = sub_14018B280(32i64, 0);
					if (v49 != (int*)-16i64)
					{
						v49[4] = v47;
						v49[5] = v48;
						v49[6] = 5;
						v49[7] = v46;
					}
					*(_QWORD*)v49 = v14;
					*((_QWORD*)v49 + 1) = v14[1];
					*(_QWORD*)v14[1] = v49;
					v14[1] = v49;
					v50 = *((_QWORD*)sub_140440A50(v73 + 16, (unsigned int*)va) + 1);
					v51 = sub_14018B280(32i64, 0);
					if (v51 != (int*)-16i64)
					{
						v51[4] = v47;
						v51[5] = v48;
						v51[6] = 5;
						v51[7] = v46;
					}
					*(_QWORD*)v51 = v50;
					*((_QWORD*)v51 + 1) = *(_QWORD*)(v50 + 8);
					**(_QWORD**)(v50 + 8) = v51;
					*(_QWORD*)(v50 + 8) = v51;
				}
				v52 = v12[8];
				LODWORD(v75) = *v12;
				if (v52)
				{
					v53 = *(_DWORD*)(v11 + 12);
					v54 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v52 = 2;
					v55 = sub_14018B280(32i64, 0);
					if (v55 != (int*)-16i64)
					{
						v55[4] = v53;
						v55[5] = v54;
						v55[6] = 6;
						v55[7] = v52;
					}
					*(_QWORD*)v55 = v14;
					*((_QWORD*)v55 + 1) = v14[1];
					*(_QWORD*)v14[1] = v55;
					v14[1] = v55;
					v56 = *((_QWORD*)sub_140440A50(v73 + 16, (unsigned int*)va) + 1);
					v57 = sub_14018B280(32i64, 0);
					if (v57 != (int*)-16i64)
					{
						v57[4] = v53;
						v57[5] = v54;
						v57[6] = 6;
						v57[7] = v52;
					}
					*(_QWORD*)v57 = v56;
					*((_QWORD*)v57 + 1) = *(_QWORD*)(v56 + 8);
					**(_QWORD**)(v56 + 8) = v57;
					*(_QWORD*)(v56 + 8) = v57;
				}
				v58 = v12[9];
				LODWORD(v75) = *v12;
				if (v58)
				{
					v59 = *(_DWORD*)(v11 + 12);
					v60 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v58 = 2;
					v61 = sub_14018B280(32i64, 0);
					if (v61 != (int*)-16i64)
					{
						v61[4] = v59;
						v61[5] = v60;
						v61[6] = 7;
						v61[7] = v58;
					}
					*(_QWORD*)v61 = v14;
					*((_QWORD*)v61 + 1) = v14[1];
					*(_QWORD*)v14[1] = v61;
					v14[1] = v61;
					v62 = *((_QWORD*)sub_140440A50(v73 + 16, (unsigned int*)va) + 1);
					v63 = sub_14018B280(32i64, 0);
					if (v63 != (int*)-16i64)
					{
						v63[4] = v59;
						v63[5] = v60;
						v63[6] = 7;
						v63[7] = v58;
					}
					*(_QWORD*)v63 = v62;
					*((_QWORD*)v63 + 1) = *(_QWORD*)(v62 + 8);
					**(_QWORD**)(v62 + 8) = v63;
					*(_QWORD*)(v62 + 8) = v63;
				}
				v64 = v12[10];
				LODWORD(v75) = *v12;
				if (v64)
				{
					v65 = *(_DWORD*)(v11 + 12);
					v66 = *(_DWORD*)(v11 + 20);
					if ((*(_BYTE*)(v11 + 24) & 1) != 0)
						v64 = 2;
					v67 = sub_14018B280(32i64, 0);
					if (v67 != (int*)-16i64)
					{
						v67[4] = v65;
						v67[5] = v66;
						v67[6] = 8;
						v67[7] = v64;
					}
					*(_QWORD*)v67 = v14;
					*((_QWORD*)v67 + 1) = v14[1];
					*(_QWORD*)v14[1] = v67;
					v14[1] = v67;
					v68 = *((_QWORD*)sub_140440A50(v73 + 16, (unsigned int*)va) + 1);
					v69 = sub_14018B280(32i64, 0);
					if (v69 != (int*)-16i64)
					{
						v69[4] = v65;
						v69[5] = v66;
						v69[6] = 8;
						v69[7] = v64;
					}
					*(_QWORD*)v69 = v68;
					*((_QWORD*)v69 + 1) = *(_QWORD*)(v68 + 8);
					**(_QWORD**)(v68 + 8) = v69;
					*(_QWORD*)(v68 + 8) = v69;
				}
				v4 = a1;
			}
			v9 = v77 + 1;
		}
	}
	return 0i64;
}
// 14043F8C0: using guessed type char var_40[24];

